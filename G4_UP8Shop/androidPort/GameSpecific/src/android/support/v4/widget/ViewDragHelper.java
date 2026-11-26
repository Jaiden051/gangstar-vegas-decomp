// Decompiled from classes.dex (SourceFile: ViewDragHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.support.v4.view.MotionEventCompat;
import android.support.v4.view.VelocityTrackerCompat;
import android.support.v4.view.ViewCompat;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;
import java.util.Arrays;
public class ViewDragHelper {
    // Fields
    private static int BASE_SETTLE_DURATION;
    public static int DIRECTION_ALL;
    public static int DIRECTION_HORIZONTAL;
    public static int DIRECTION_VERTICAL;
    public static int EDGE_ALL;
    public static int EDGE_BOTTOM;
    public static int EDGE_LEFT;
    public static int EDGE_RIGHT;
    private static int EDGE_SIZE;
    public static int EDGE_TOP;
    public static int INVALID_POINTER;
    private static int MAX_SETTLE_DURATION;
    public static int STATE_DRAGGING;
    public static int STATE_IDLE;
    public static int STATE_SETTLING;
    private static java.lang.String TAG;
    private static final android.view.animation.Interpolator sInterpolator;
    private int mActivePointerId;
    private final android.support.v4.widget.ViewDragHelper$Callback mCallback;
    private android.view.View mCapturedView;
    private int mDragState;
    private int[] mEdgeDragsInProgress;
    private int[] mEdgeDragsLocked;
    private int mEdgeSize;
    private int[] mInitialEdgesTouched;
    private float[] mInitialMotionX;
    private float[] mInitialMotionY;
    private float[] mLastMotionX;
    private float[] mLastMotionY;
    private float mMaxVelocity;
    private float mMinVelocity;
    private final android.view.ViewGroup mParentView;
    private int mPointersDown;
    private boolean mReleaseInProgress;
    private android.support.v4.widget.ScrollerCompat mScroller;
    private final java.lang.Runnable mSetIdleRunnable;
    private int mTouchSlop;
    private int mTrackingEdges;
    private android.view.VelocityTracker mVelocityTracker;

    // Methods
    static
    {
      sInterpolator = (android.view.animation.Interpolator)new android.support.v4.widget.ViewDragHelper$1();
    }

    private ViewDragHelper(
            android.content.Context p0,
            android.view.ViewGroup p1,
            android.support.v4.widget.ViewDragHelper$Callback p2)
    {
      super();
      android.view.ViewConfiguration v4;
      this.mActivePointerId = -1;
      this.mSetIdleRunnable = (Runnable)new android.support.v4.widget.ViewDragHelper$2(this);
      if ( p1 == null )
        throw new IllegalArgumentException("Parent view may not be null");
      if ( p2 == null )
        throw new IllegalArgumentException("Callback may not be null");
      this.mParentView = p1;
      this.mCallback = p2;
      v4 = ViewConfiguration.get(p0);
      this.mEdgeSize = (int)(p0.getResources().getDisplayMetrics().density * 20.0f + 0.5f);
      this.mTouchSlop = v4.getScaledTouchSlop();
      this.mMaxVelocity = (float)v4.getScaledMaximumFlingVelocity();
      this.mMinVelocity = (float)v4.getScaledMinimumFlingVelocity();
      this.mScroller = ScrollerCompat.create(p0, sInterpolator);
    
    }

    private boolean checkNewEdgeDrag(float p0, float p1, int p2, int p3)
    {
      boolean v5;
      float v6;
      float v7; // RETVAL
      int[] mEdgeDragsLocked;
      v5 = false;
      v6 = Math.abs(p0);
      v7 = Math.abs(p1);
      if ( (this.mInitialEdgesTouched[p2] & p3) == p3
        && (this.mTrackingEdges & p3) != 0
        && (this.mEdgeDragsLocked[p2] & p3) != p3
        && (this.mEdgeDragsInProgress[p2] & p3) != p3
        && (v6 > (float)this.mTouchSlop || v7 > (float)this.mTouchSlop) )
      {
        if ( v6 < v7 * 0.5f && this.mCallback.onEdgeLock(p3) )
        {
          mEdgeDragsLocked = this.mEdgeDragsLocked;
          mEdgeDragsLocked[p2] |= p3;
        }
        else if ( (this.mEdgeDragsInProgress[p2] & p3) == 0 && v6 > (float)this.mTouchSlop )
        {
          return true;
        }
      }
      return v5;
    }

    private boolean checkTouchSlop(android.view.View p0, float p1, float p2)
    {
      boolean v4;
      boolean v6;
      boolean v7;
      v4 = false;
      if ( p0 != null )
      {
        v6 = this.mCallback.getViewHorizontalDragRange(p0) > 0;
        v7 = this.mCallback.getViewVerticalDragRange(p0) > 0;
        if ( v6 && v7 )
        {
          return p1 * p1 + p2 * p2 > (float)(this.mTouchSlop * this.mTouchSlop);
        }
        else if ( v6 )
        {
          if ( Math.abs(p1) > (float)this.mTouchSlop )
            return true;
        }
        else if ( v7 && Math.abs(p2) > (float)this.mTouchSlop )
        {
          return true;
        }
      }
      return v4;
    }

    private float clampMag(float p0, float p1, float p2)
    {
      float v4; // RETVAL
    
      v4 = Math.abs(p0);
      if ( v4 < p1 )
        return 0.0f;
      if ( v4 <= p2 )
        return p0;
      if ( p0 <= 0.0f )
        return -p2;
      return p2;
    }

    private int clampMag(int p0, int p1, int p2)
    {
      int v4; // RETVAL
    
      v4 = Math.abs(p0);
      if ( v4 < p1 )
        return 0;
      if ( v4 <= p2 )
        return p0;
      if ( p0 <= 0 )
        return -p2;
      return p2;
    }

    private void clearMotionHistory()
    {
      if ( this.mInitialMotionX != null )
      {
        Arrays.fill(this.mInitialMotionX, 0.0f);
        Arrays.fill(this.mInitialMotionY, 0.0f);
        Arrays.fill(this.mLastMotionX, 0.0f);
        Arrays.fill(this.mLastMotionY, 0.0f);
        Arrays.fill(this.mInitialEdgesTouched, 0);
        Arrays.fill(this.mEdgeDragsInProgress, 0);
        Arrays.fill(this.mEdgeDragsLocked, 0);
        this.mPointersDown = 0;
      }
    }

    private void clearMotionHistory(int p0)
    {
      if ( this.mInitialMotionX != null )
      {
        this.mInitialMotionX[p0] = 0.0f;
        this.mInitialMotionY[p0] = 0.0f;
        this.mLastMotionX[p0] = 0.0f;
        this.mLastMotionY[p0] = 0.0f;
        this.mInitialEdgesTouched[p0] = 0;
        this.mEdgeDragsInProgress[p0] = 0;
        this.mEdgeDragsLocked[p0] = 0;
        this.mPointersDown &= ~(1 << p0);
      }
    }

    private int computeAxisDuration(int p0, int p1, int p2)
    {
      int Width;
      float v7;
      int v8; // RETVAL
      int v9;
      if ( p0 == 0 )
        return 0;
      Width = this.mParentView.getWidth();
      v7 = this.distanceInfluenceForSnapDuration(Math.min(1.0f, (float)Math.abs(p0) / (float)Width)) * (float)(Width / 2)
         + (float)(Width / 2);
      v8 = Math.abs(p1);
      if ( v8 <= 0 )
        v9 = (int)(((float)Math.abs(p0) / (float)p2 + 1.0f) * 256.0f);
      else
        v9 = 4 * Math.round(Math.abs(v7 / (float)v8) * 1000.0f);
      return Math.min(v9, 600);
    }

    private int computeSettleDuration(android.view.View p0, int p1, int p2, int p3, int p4)
    {
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11; // RETVAL
      int v12;
      int v13;
      float v14;
      float v15;
      v6 = this.clampMag(p3, (int)this.mMinVelocity, (int)this.mMaxVelocity);
      v7 = this.clampMag(p4, (int)this.mMinVelocity, (int)this.mMaxVelocity);
      v8 = Math.abs(p1);
      v9 = Math.abs(p2);
      v10 = Math.abs(v6);
      v11 = Math.abs(v7);
      v12 = v10 + v11;
      v13 = v8 + v9;
      if ( v6 != 0 )
        v14 = (float)v10 / (float)v12;
      else
        v14 = (float)v8 / (float)v13;
      if ( v7 != 0 )
        v15 = (float)v11 / (float)v12;
      else
        v15 = (float)v9 / (float)v13;
      return (int)(v15 * (float)this.computeAxisDuration(p2, v7, this.mCallback.getViewVerticalDragRange(p0))
                 + v14 * (float)this.computeAxisDuration(p1, v6, this.mCallback.getViewHorizontalDragRange(p0)));
    }

    public static android.support.v4.widget.ViewDragHelper create(
            android.view.ViewGroup p0,
            float p1,
            android.support.v4.widget.ViewDragHelper$Callback p2)
    {
      android.support.v4.widget.ViewDragHelper result; // RETVAL
    
      result = create(p0, p2);
      result.mTouchSlop = (int)((float)result.mTouchSlop * (1.0f / p1));
      return result;
    }

    public static android.support.v4.widget.ViewDragHelper create(
            android.view.ViewGroup p0,
            android.support.v4.widget.ViewDragHelper$Callback p1)
    {
      return new android.support.v4.widget.ViewDragHelper(p0.getContext(), p0, p1);
    }

    private void dispatchViewReleased(float p0, float p1)
    {
      this.mReleaseInProgress = true;
      this.mCallback.onViewReleased(this.mCapturedView, p0, p1);
      this.mReleaseInProgress = false;
      if ( this.mDragState == 1 )
        this.setDragState(0);
    }

    private float distanceInfluenceForSnapDuration(float p0)
    {
      float v2;
      v2 = (float)((p0 - 0.5f) * 0.4712389167638204);
      return (float)Math.sin(v2);
    }

    private void dragTo(int p0, int p1, int p2, int p3)
    {
      int Left;
      int Top;
      int v7;
      int v8;
      Left = this.mCapturedView.getLeft();
      Top = this.mCapturedView.getTop();
      if ( p2 != 0 )
      {
        v7 = this.mCallback.clampViewPositionHorizontal(this.mCapturedView, p0, p2);
        this.mCapturedView.offsetLeftAndRight(v7 - Left);
      }
      else
      {
        v7 = p0;
      }
      if ( p3 != 0 )
      {
        v8 = this.mCallback.clampViewPositionVertical(this.mCapturedView, p1, p3);
        this.mCapturedView.offsetTopAndBottom(v8 - Top);
      }
      else
      {
        v8 = p1;
      }
      if ( p2 != 0 || p3 != 0 )
        this.mCallback.onViewPositionChanged(this.mCapturedView, v7, v8, v7 - Left, v8 - Top);
    }

    private void ensureMotionHistorySizeForId(int p0)
    {
      float[] v2;
      float[] v3;
      float[] v4;
      float[] v5;
      int[] v6;
      int[] v7;
      int[] v8;
      if ( this.mInitialMotionX == null || this.mInitialMotionX.length <= p0 )
      {
        v2 = new float[(p0 + 1)];
        v3 = new float[(p0 + 1)];
        v4 = new float[(p0 + 1)];
        v5 = new float[(p0 + 1)];
        v6 = new int[(p0 + 1)];
        v7 = new int[(p0 + 1)];
        v8 = new int[(p0 + 1)];
        if ( this.mInitialMotionX != null )
        {
          System.arraycopy(this.mInitialMotionX, 0, v2, 0, this.mInitialMotionX.length);
          System.arraycopy(this.mInitialMotionY, 0, v3, 0, this.mInitialMotionY.length);
          System.arraycopy(this.mLastMotionX, 0, v4, 0, this.mLastMotionX.length);
          System.arraycopy(this.mLastMotionY, 0, v5, 0, this.mLastMotionY.length);
          System.arraycopy(this.mInitialEdgesTouched, 0, v6, 0, this.mInitialEdgesTouched.length);
          System.arraycopy(this.mEdgeDragsInProgress, 0, v7, 0, this.mEdgeDragsInProgress.length);
          System.arraycopy(this.mEdgeDragsLocked, 0, v8, 0, this.mEdgeDragsLocked.length);
        }
        this.mInitialMotionX = (float[])v2;
        this.mInitialMotionY = (float[])v3;
        this.mLastMotionX = (float[])v4;
        this.mLastMotionY = (float[])v5;
        this.mInitialEdgesTouched = v6;
        this.mEdgeDragsInProgress = v7;
        this.mEdgeDragsLocked = v8;
      }
    }

    private boolean forceSettleCapturedViewAt(int p0, int p1, int p2, int p3)
    {
      boolean v5;
      int Left;
      int Top;
      int v8;
      v5 = false;
      Left = this.mCapturedView.getLeft();
      Top = this.mCapturedView.getTop();
      v8 = p1 - Top;
      if ( p0 != Left || v8 != 0 )
      {
        this.mScroller.startScroll(Left, Top, p0 - Left, v8, this.computeSettleDuration(this.mCapturedView, p0 - Left, v8, p2, p3));
        this.setDragState(2);
        return true;
      }
      else
      {
        this.mScroller.abortAnimation();
        this.setDragState(0);
      }
      return v5;
    }

    private int getEdgesTouched(int p0, int p1)
    {
      int v3;
      v3 = p0 < this.mParentView.getLeft() + this.mEdgeSize ? 1 : 0;
      if ( p1 < this.mParentView.getTop() + this.mEdgeSize )
        v3 |= 4;
      if ( p0 > this.mParentView.getRight() - this.mEdgeSize )
        v3 |= 2;
      if ( p1 > this.mParentView.getBottom() - this.mEdgeSize )
        return v3 | 8;
      return v3;
    }

    private void releaseViewForPointerUp()
    {
      this.mVelocityTracker.computeCurrentVelocity(1000, this.mMaxVelocity);
      this.dispatchViewReleased(this.clampMag(VelocityTrackerCompat.getXVelocity(
                                                this.mVelocityTracker,
                                                this.mActivePointerId), this.mMinVelocity, this.mMaxVelocity), this.clampMag(VelocityTrackerCompat.getYVelocity(this.mVelocityTracker, this.mActivePointerId), this.mMinVelocity, this.mMaxVelocity));
    }

    private void reportNewEdgeDrags(float p0, float p1, int p2)
    {
      int[] mEdgeDragsInProgress;
      int v5;
      v5 = this.checkNewEdgeDrag(p0, p1, p2, 1) ? 1 : 0;
      if ( this.checkNewEdgeDrag(p1, p0, p2, 4) )
        v5 |= 4;
      if ( this.checkNewEdgeDrag(p0, p1, p2, 2) )
        v5 |= 2;
      if ( this.checkNewEdgeDrag(p1, p0, p2, 8) )
        v5 |= 8;
      if ( v5 != 0 )
      {
        mEdgeDragsInProgress = this.mEdgeDragsInProgress;
        mEdgeDragsInProgress[p2] |= v5;
        this.mCallback.onEdgeDragStarted(v5, p2);
      }
    }

    private void saveInitialMotion(float p0, float p1, int p2)
    {
      this.ensureMotionHistorySizeForId(p2);
      this.mLastMotionX[p2] = (p0);
      this.mInitialMotionX[p2] = (p0);
      this.mLastMotionY[p2] = (p1);
      this.mInitialMotionY[p2] = (p1);
      this.mInitialEdgesTouched[p2] = this.getEdgesTouched((int)p0, (int)p1);
      this.mPointersDown |= 1 << p2;
    }

    private void saveLastMotion(android.view.MotionEvent p0)
    {
      int PointerCount;
      int i;
      int PointerId;
      PointerCount = MotionEventCompat.getPointerCount(p0);
      for ( i = 0; i < PointerCount; ++i )
      {
        PointerId = MotionEventCompat.getPointerId(p0, i);
        this.mLastMotionX[PointerId] = Float.intBitsToFloat(Float.floatToRawIntBits(MotionEventCompat.getX(p0, i)));
        this.mLastMotionY[PointerId] = Float.intBitsToFloat(Float.floatToRawIntBits(MotionEventCompat.getY(p0, i)));
      }
    }

    public void abort()
    {
      int CurrX;
      int CurrY;
      int v3;
      int v4; // RETVAL
    
      this.cancel();
      if ( this.mDragState == 2 )
      {
        CurrX = this.mScroller.getCurrX();
        CurrY = this.mScroller.getCurrY();
        this.mScroller.abortAnimation();
        v3 = this.mScroller.getCurrX();
        v4 = this.mScroller.getCurrY();
        this.mCallback.onViewPositionChanged(this.mCapturedView, v3, v4, v3 - CurrX, v4 - CurrY);
      }
      this.setDragState(0);
    }

    protected boolean canScroll(android.view.View p0, boolean p1, int p2, int p3, int p4, int p5)
    {
      android.view.ViewGroup v7;
      int ScrollX;
      int ScrollY;
      int i;
      android.view.View ChildAt;
      if ( p0 instanceof android.view.ViewGroup )
      {
        v7 = (android.view.ViewGroup)p0;
        ScrollX = p0.getScrollX();
        ScrollY = p0.getScrollY();
        for ( i = v7.getChildCount() - 1; i >= 0; --i )
        {
          ChildAt = v7.getChildAt(i);
          if ( p4 + ScrollX >= ChildAt.getLeft()
            && p4 + ScrollX < ChildAt.getRight()
            && p5 + ScrollY >= ChildAt.getTop()
            && p5 + ScrollY < ChildAt.getBottom()
            && this.canScroll(ChildAt, true, p2, p3, p4 + ScrollX - ChildAt.getLeft(), p5 + ScrollY - ChildAt.getTop()) )
          {
            return true;
          }
        }
      }
      return p1 && (ViewCompat.canScrollHorizontally(p0, -p2) || ViewCompat.canScrollVertically(p0, -p3));
    }

    public void cancel()
    {
      this.mActivePointerId = -1;
      this.clearMotionHistory();
      if ( this.mVelocityTracker != null )
      {
        this.mVelocityTracker.recycle();
        this.mVelocityTracker = null;
      }
    }

    public void captureChildView(android.view.View p0, int p1)
    {
      if ( p0.getParent() != this.mParentView )
        throw new IllegalArgumentException("captureChildView: parameter must be a descendant of the ViewDragHelper's tracked parent view ("
                                         + this.mParentView
                                         + ")");
      this.mCapturedView = p0;
      this.mActivePointerId = p1;
      this.mCallback.onViewCaptured(p0, p1);
      this.setDragState(1);
    }

    public boolean checkTouchSlop(int p0)
    {
      boolean v2;
      int v3;
      int i;
      v2 = false;
      v3 = this.mInitialMotionX.length;
      for ( i = 0; i < v3; ++i )
      {
        if ( this.checkTouchSlop(p0, i) )
          return true;
      }
      return v2;
    }

    public boolean checkTouchSlop(int p0, int p1)
    {
      boolean v3;
      float v5;
      float v6;
      v3 = false;
      if ( this.isPointerDown(p1) )
      {
        v5 = Float.intBitsToFloat(Float.floatToRawIntBits(this.mLastMotionX[p1])) - Float.intBitsToFloat(Float.floatToRawIntBits(this.mInitialMotionX[p1]));
        v6 = Float.intBitsToFloat(Float.floatToRawIntBits(this.mLastMotionY[p1])) - Float.intBitsToFloat(Float.floatToRawIntBits(this.mInitialMotionY[p1]));
        if ( (p0 & 1) == 1 && (p0 & 2) == 2 )
        {
          return v5 * v5 + v6 * v6 > (float)(this.mTouchSlop * this.mTouchSlop);
        }
        else if ( (p0 & 1) == 1 )
        {
          if ( Math.abs(v5) > (float)this.mTouchSlop )
            return true;
        }
        else if ( (p0 & 2) == 2 && Math.abs(v6) > (float)this.mTouchSlop )
        {
          return true;
        }
      }
      return v3;
    }

    public boolean continueSettling(boolean p0)
    {
      boolean v2;
      int CurrX;
      int CurrY;
      int v5;
      int v6;
      boolean isFinished;
      if ( this.mDragState == 2 )
      {
        v2 = this.mScroller.computeScrollOffset();
        CurrX = this.mScroller.getCurrX();
        CurrY = this.mScroller.getCurrY();
        v5 = CurrX - this.mCapturedView.getLeft();
        v6 = CurrY - this.mCapturedView.getTop();
        if ( v5 != 0 )
          this.mCapturedView.offsetLeftAndRight(v5);
        if ( v6 != 0 )
          this.mCapturedView.offsetTopAndBottom(v6);
        if ( v5 != 0 || v6 != 0 )
          this.mCallback.onViewPositionChanged(this.mCapturedView, CurrX, CurrY, v5, v6);
        if ( v2 && CurrX == this.mScroller.getFinalX() && CurrY == this.mScroller.getFinalY() )
        {
          this.mScroller.abortAnimation();
          isFinished = this.mScroller.isFinished();
        }
        else
        {
          isFinished = v2;
        }
        if ( !isFinished )
        {
          if ( p0 )
            this.mParentView.post(this.mSetIdleRunnable);
          else
            this.setDragState(0);
        }
      }
      return this.mDragState == 2;
    }

    public android.view.View findTopChildUnder(int p0, int p1)
    {
      int i;
      android.view.View ChildAt;
      for ( i = this.mParentView.getChildCount() - 1; i >= 0; --i )
      {
        ChildAt = this.mParentView.getChildAt(this.mCallback.getOrderedChildIndex(i));
        if ( p0 >= ChildAt.getLeft() && p0 < ChildAt.getRight() && p1 >= ChildAt.getTop() && p1 < ChildAt.getBottom() )
          return ChildAt;
      }
      return null;
    }

    public void flingCapturedView(int p0, int p1, int p2, int p3)
    {
      if ( !this.mReleaseInProgress )
        throw new IllegalStateException("Cannot flingCapturedView outside of a call to Callback#onViewReleased");
      this.mScroller.fling(this.mCapturedView.getLeft(), this.mCapturedView.getTop(), (int)VelocityTrackerCompat.getXVelocity(
                                                                                             this.mVelocityTracker,
                                                                                             this.mActivePointerId), (int)VelocityTrackerCompat.getYVelocity(this.mVelocityTracker, this.mActivePointerId), p0, p2, p1, p3);
      this.setDragState(2);
    }

    public int getActivePointerId()
    {
      return this.mActivePointerId;
    }

    public android.view.View getCapturedView()
    {
      return this.mCapturedView;
    }

    public int getEdgeSize()
    {
      return this.mEdgeSize;
    }

    public float getMinVelocity()
    {
      return this.mMinVelocity;
    }

    public int getTouchSlop()
    {
      return this.mTouchSlop;
    }

    public int getViewDragState()
    {
      return this.mDragState;
    }

    public boolean isCapturedViewUnder(int p0, int p1)
    {
      return this.isViewUnder(this.mCapturedView, p0, p1);
    }

    public boolean isEdgeTouched(int p0)
    {
      boolean v2;
      int v3;
      int i;
      v2 = false;
      v3 = this.mInitialEdgesTouched.length;
      for ( i = 0; i < v3; ++i )
      {
        if ( this.isEdgeTouched(p0, i) )
          return true;
      }
      return v2;
    }

    public boolean isEdgeTouched(int p0, int p1)
    {
      return this.isPointerDown(p1) && (this.mInitialEdgesTouched[p1] & p0) != 0;
    }

    public boolean isPointerDown(int p0)
    {
      return (this.mPointersDown & (1 << p0)) != 0;
    }

    public boolean isViewUnder(android.view.View p0, int p1, int p2)
    {
      boolean v4;
      v4 = false;
      if ( p0 != null && p1 >= p0.getLeft() && p1 < p0.getRight() && p2 >= p0.getTop() )
        return p2 < p0.getBottom();
      return v4;
    }

    public void processTouchEvent(android.view.MotionEvent p0)
    {
      int v2 = 0;
      int ActionMasked = 0;
      int ActionIndex = 0;
      float v5 = 0.0f;
      float v6 = 0.0f;
      int PointerId = 0;
      android.view.View TopChildUnder = null; // RETVAL
      int v9 = 0;
      float v10 = 0.0f;
      float v11 = 0.0f; // RETVAL
      int PointerIndex = 0;
      int v13 = 0;
      int v14 = 0;
      int PointerCount = 0;
      int v16 = 0;
      float v17 = 0.0f;
      float v18 = 0.0f; // RETVAL
      float v19 = 0.0f;
      float v20 = 0.0f;
      android.view.View v21 = null;
      int v22 = 0; // RETVAL
      int v23 = 0;
      int v24 = 0;
      int v25 = 0;
      int mActivePointerId = 0;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = 0;
            ActionMasked = MotionEventCompat.getActionMasked(p0);
            ActionIndex = MotionEventCompat.getActionIndex(p0);
            if ( ActionMasked == 0 )
            this.cancel();
            if ( this.mVelocityTracker == null )
            this.mVelocityTracker = VelocityTracker.obtain();
            this.mVelocityTracker.addMovement(p0);
            _sw_1 = (ActionMasked);
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (1)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 10; continue _sm; }
            _pc = 11;
            continue _sm;
          case 1:
            v5 = p0.getX();
            v6 = p0.getY();
            PointerId = MotionEventCompat.getPointerId(p0, 0);
            TopChildUnder = this.findTopChildUnder((int)v5, (int)v6);
            this.saveInitialMotion(v5, v6, PointerId);
            this.tryCaptureViewForDrag(TopChildUnder, PointerId);
            v9 = this.mInitialEdgesTouched[PointerId];
            if ( (this.mTrackingEdges & v9) != 0 )
            { _pc = 8; continue _sm; }
            return;
          case 2:
            if ( this.mDragState == 1 )
            this.releaseViewForPointerUp();
            _pc = 5;
            continue _sm;
          case 3:
            if ( this.mDragState == 1 )
            {
            PointerIndex = MotionEventCompat.findPointerIndex(p0, this.mActivePointerId);
            v13 = (int)(MotionEventCompat.getX(p0, PointerIndex)
            - Float.intBitsToFloat(Float.floatToRawIntBits(this.mLastMotionX[this.mActivePointerId])));
            v14 = (int)(MotionEventCompat.getY(p0, PointerIndex)
            - Float.intBitsToFloat(Float.floatToRawIntBits(this.mLastMotionY[this.mActivePointerId])));
            this.dragTo(this.mCapturedView.getLeft() + v13, this.mCapturedView.getTop() + v14, v13, v14);
            this.saveLastMotion(p0);
            }
            else
            {
            PointerCount = MotionEventCompat.getPointerCount(p0);
            while ( v2 < PointerCount )
            {
            v16 = MotionEventCompat.getPointerId(p0, v2);
            v17 = MotionEventCompat.getX(p0, v2);
            v18 = MotionEventCompat.getY(p0, v2);
            v19 = v17 - Float.intBitsToFloat(Float.floatToRawIntBits(this.mInitialMotionX[v16]));
            v20 = v18 - Float.intBitsToFloat(Float.floatToRawIntBits(this.mInitialMotionY[v16]));
            this.reportNewEdgeDrags(v19, v20, v16);
            if ( this.mDragState == 1 )
            break;
            v21 = this.findTopChildUnder((int)v17, (int)v18);
            if ( this.checkTouchSlop(v21, v19, v20) && this.tryCaptureViewForDrag(v21, v16) )
            break;
            ++v2;
            }
            this.saveLastMotion(p0);
            }
            return;
          case 4:
            if ( this.mDragState == 1 )
            this.dispatchViewReleased(0.0f, 0.0f);
            _pc = 5;
            continue _sm;
          case 5:
            this.cancel();
            return;
          case 6:
            PointerId = MotionEventCompat.getPointerId(p0, ActionIndex);
            v10 = MotionEventCompat.getX(p0, ActionIndex);
            v11 = MotionEventCompat.getY(p0, ActionIndex);
            this.saveInitialMotion(v10, v11, PointerId);
            if ( !(this.mDragState != 0) ) { _pc = 7; continue _sm; }
            {
            if ( this.isCapturedViewUnder((int)v10, (int)v11) )
            this.tryCaptureViewForDrag(this.mCapturedView, PointerId);
            }
            _pc = 9;
            continue _sm;
          case 7:
            this.tryCaptureViewForDrag(this.findTopChildUnder((int)v10, (int)v11), PointerId);
            v9 = this.mInitialEdgesTouched[PointerId];
            if ( (this.mTrackingEdges & v9) != 0 ) { _pc = 8; continue _sm; } else { _pc = 9; continue _sm; }
          case 8:
            this.mCallback.onEdgeTouched(v9 & this.mTrackingEdges, PointerId);
            _pc = 9;
            continue _sm;
          case 9:
            return;
          case 10:
            v22 = MotionEventCompat.getPointerId(p0, ActionIndex);
            v23 = v22;
            if ( this.mDragState != 1 || v22 != this.mActivePointerId )
            { _pc = 14; continue _sm; }
            v24 = MotionEventCompat.getPointerCount(p0);
            _pc = 12;
            continue _sm;
          case 11:
            return;
          case 12:
            while ( v2 < v24 )
            {
            v25 = MotionEventCompat.getPointerId(p0, v2);
            if ( v25 != this.mActivePointerId
            && this.findTopChildUnder((int)MotionEventCompat.getX(p0, v2), (int)MotionEventCompat.getY(p0, v2)) == this.mCapturedView
            && this.tryCaptureViewForDrag(this.mCapturedView, v25) )
            {
            mActivePointerId = this.mActivePointerId;
            { _pc = 13; continue _sm; }
            }
            ++v2;
            }
            mActivePointerId = -1;
            _pc = 13;
            continue _sm;
          case 13:
            if ( mActivePointerId == -1 )
            this.releaseViewForPointerUp();
            _pc = 14;
            continue _sm;
          case 14:
            this.clearMotionHistory(v23);
            return;
        }
      }
}

    void setDragState(int p0)
    {
      if ( this.mDragState != p0 )
      {
        this.mDragState = p0;
        this.mCallback.onViewDragStateChanged(p0);
        if ( p0 == 0 )
          this.mCapturedView = null;
      }
    }

    public void setEdgeTrackingEnabled(int p0)
    {
      this.mTrackingEdges = p0;
    }

    public void setMinVelocity(float p0)
    {
      this.mMinVelocity = p0;
    }

    public boolean settleCapturedViewAt(int p0, int p1)
    {
      if ( !this.mReleaseInProgress )
        throw new IllegalStateException("Cannot settleCapturedViewAt outside of a call to Callback#onViewReleased");
      return this.forceSettleCapturedViewAt(p0, p1, (int)VelocityTrackerCompat.getXVelocity(
                                                           this.mVelocityTracker,
                                                           this.mActivePointerId), (int)VelocityTrackerCompat.getYVelocity(
                                                                                          this.mVelocityTracker,
                                                                                          this.mActivePointerId));
    }

    public boolean shouldInterceptTouchEvent(android.view.MotionEvent p0)
    {
      boolean v2;
      int ActionMasked;
      int ActionIndex;
      float v6;
      float v7;
      int PointerId;
      android.view.View TopChildUnder; // RETVAL
      int v10;
      int v11;
      float v12;
      float v13; // RETVAL
      int v14;
      android.view.View v15; // RETVAL
      int PointerCount;
      int i;
      int v18;
      float v19;
      float v20; // RETVAL
      float v21;
      float v22;
      android.view.View v23; // RETVAL
      android.view.View v24;
      v2 = true;
      ActionMasked = MotionEventCompat.getActionMasked(p0);
      ActionIndex = MotionEventCompat.getActionIndex(p0);
      if ( ActionMasked == 0 )
        this.cancel();
      if ( this.mVelocityTracker == null )
        this.mVelocityTracker = VelocityTracker.obtain();
      this.mVelocityTracker.addMovement(p0);
      switch ( ActionMasked )
      {
        case 0:
          v6 = p0.getX();
          v7 = p0.getY();
          PointerId = MotionEventCompat.getPointerId(p0, 0);
          this.saveInitialMotion(v6, v7, PointerId);
          TopChildUnder = this.findTopChildUnder((int)v6, (int)v7);
          if ( TopChildUnder == this.mCapturedView && this.mDragState == 2 )
            this.tryCaptureViewForDrag(TopChildUnder, PointerId);
          v10 = this.mInitialEdgesTouched[PointerId];
          if ( (this.mTrackingEdges & v10) != 0 )
            this.mCallback.onEdgeTouched(v10 & this.mTrackingEdges, PointerId);
          break;
        case 1:
        case 3:
          this.cancel();
          break;
        case 2:
          PointerCount = MotionEventCompat.getPointerCount(p0);
          for ( i = 0; i < PointerCount; ++i )
          {
            v18 = MotionEventCompat.getPointerId(p0, i);
            v19 = MotionEventCompat.getX(p0, i);
            v20 = MotionEventCompat.getY(p0, i);
            v21 = v19 - Float.intBitsToFloat(Float.floatToRawIntBits(this.mInitialMotionX[v18]));
            v22 = v20 - Float.intBitsToFloat(Float.floatToRawIntBits(this.mInitialMotionY[v18]));
            this.reportNewEdgeDrags(v21, v22, v18);
            if ( this.mDragState == 1 )
              break;
            v23 = this.findTopChildUnder((int)v19, (int)v20);
            v24 = v23;
            if ( v23 != null && this.checkTouchSlop(v23, v21, v22) && this.tryCaptureViewForDrag(v24, v18) )
              break;
          }
          this.saveLastMotion(p0);
          break;
        case 5:
          v11 = MotionEventCompat.getPointerId(p0, ActionIndex);
          v12 = MotionEventCompat.getX(p0, ActionIndex);
          v13 = MotionEventCompat.getY(p0, ActionIndex);
          this.saveInitialMotion(v12, v13, v11);
          if ( this.mDragState != 0 )
          {
            if ( this.mDragState == 2 )
            {
              v15 = this.findTopChildUnder((int)v12, (int)v13);
              if ( v15 == this.mCapturedView )
                this.tryCaptureViewForDrag(v15, v11);
            }
          }
          else
          {
            v14 = this.mInitialEdgesTouched[v11];
            if ( (this.mTrackingEdges & v14) != 0 )
              this.mCallback.onEdgeTouched(v14 & this.mTrackingEdges, v11);
          }
          break;
        case 6:
          this.clearMotionHistory(MotionEventCompat.getPointerId(p0, ActionIndex));
          break;
        default:
          break;
      }
      if ( this.mDragState != 1 )
        return false;
      return v2;
    }

    public boolean smoothSlideViewTo(android.view.View p0, int p1, int p2)
    {
      this.mCapturedView = p0;
      this.mActivePointerId = -1;
      return this.forceSettleCapturedViewAt(p1, p2, 0, 0);
    }

    boolean tryCaptureViewForDrag(android.view.View p0, int p1)
    {
      boolean v3;
      v3 = true;
      if ( p0 != this.mCapturedView || this.mActivePointerId != p1 )
      {
        if ( p0 != null && this.mCallback.tryCaptureView(p0, p1) )
        {
          this.mActivePointerId = p1;
          this.captureChildView(p0, p1);
        }
        else
        {
          return false;
        }
      }
      return v3;
    }

}
