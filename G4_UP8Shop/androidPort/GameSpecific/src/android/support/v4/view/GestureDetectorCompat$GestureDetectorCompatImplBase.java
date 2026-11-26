// Decompiled from classes.dex (SourceFile: GestureDetectorCompat$GestureDetectorCompatImplBase.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.view.MotionEvent;
import android.view.VelocityTracker;
import android.view.ViewConfiguration;
class GestureDetectorCompat$GestureDetectorCompatImplBase implements android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImpl {
    // Fields
    private static final int DOUBLE_TAP_TIMEOUT;
    private static final int LONGPRESS_TIMEOUT;
    private static int LONG_PRESS;
    private static int SHOW_PRESS;
    private static int TAP;
    private static final int TAP_TIMEOUT;
    private boolean mAlwaysInBiggerTapRegion;
    private boolean mAlwaysInTapRegion;
    private android.view.MotionEvent mCurrentDownEvent;
    private boolean mDeferConfirmSingleTap;
    private android.view.GestureDetector.OnDoubleTapListener mDoubleTapListener;
    private int mDoubleTapSlopSquare;
    private float mDownFocusX;
    private float mDownFocusY;
    private final android.os.Handler mHandler;
    private boolean mInLongPress;
    private boolean mIsDoubleTapping;
    private boolean mIsLongpressEnabled;
    private float mLastFocusX;
    private float mLastFocusY;
    private final android.view.GestureDetector.OnGestureListener mListener;
    private int mMaximumFlingVelocity;
    private int mMinimumFlingVelocity;
    private android.view.MotionEvent mPreviousUpEvent;
    private boolean mStillDown;
    private int mTouchSlopSquare;
    private android.view.VelocityTracker mVelocityTracker;

    // Methods
    static
    {
      LONGPRESS_TIMEOUT = ViewConfiguration.getLongPressTimeout();
      TAP_TIMEOUT = ViewConfiguration.getTapTimeout();
      DOUBLE_TAP_TIMEOUT = ViewConfiguration.getDoubleTapTimeout();
    }

    public GestureDetectorCompat$GestureDetectorCompatImplBase(
            android.content.Context p0,
            android.view.GestureDetector.OnGestureListener p1,
            android.os.Handler p2)
    {
      super();
      if ( p2 != null )
        this.mHandler = new android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase$GestureHandler(this, p2);
      else
        this.mHandler = new android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase$GestureHandler(this);
      this.mListener = p1;
      if ( p1 instanceof android.view.GestureDetector.OnDoubleTapListener )
        this.setOnDoubleTapListener((android.view.GestureDetector.OnDoubleTapListener)p1);
      this.init(p0);
    }

    /* synthetic */ static android.view.MotionEvent access$000(
            android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase p0)
    {
      return p0.mCurrentDownEvent;
    }

    /* synthetic */ static android.view.GestureDetector.OnGestureListener access$100(
            android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase p0)
    {
      return p0.mListener;
    }

    /* synthetic */ static void access$200(
            android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase p0)
    {
      p0.dispatchLongPress();
    }

    /* synthetic */ static android.view.GestureDetector.OnDoubleTapListener access$300(
            android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase p0)
    {
      return p0.mDoubleTapListener;
    }

    /* synthetic */ static boolean access$400(
            android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase p0)
    {
      return p0.mStillDown;
    }

    /* synthetic */ static boolean access$502(
            android.support.v4.view.GestureDetectorCompat$GestureDetectorCompatImplBase p0,
            boolean p1)
    {
      p0.mDeferConfirmSingleTap = p1;
      return p1;
    }

    private void cancel()
    {
      this.mHandler.removeMessages(1);
      this.mHandler.removeMessages(2);
      this.mHandler.removeMessages(3);
      this.mVelocityTracker.recycle();
      this.mVelocityTracker = null;
      this.mIsDoubleTapping = false;
      this.mStillDown = false;
      this.mAlwaysInTapRegion = false;
      this.mAlwaysInBiggerTapRegion = false;
      this.mDeferConfirmSingleTap = false;
      if ( this.mInLongPress )
        this.mInLongPress = false;
    }

    private void cancelTaps()
    {
      this.mHandler.removeMessages(1);
      this.mHandler.removeMessages(2);
      this.mHandler.removeMessages(3);
      this.mIsDoubleTapping = false;
      this.mAlwaysInTapRegion = false;
      this.mAlwaysInBiggerTapRegion = false;
      this.mDeferConfirmSingleTap = false;
      if ( this.mInLongPress )
        this.mInLongPress = false;
    }

    private void dispatchLongPress()
    {
      this.mHandler.removeMessages(3);
      this.mDeferConfirmSingleTap = false;
      this.mInLongPress = true;
      this.mListener.onLongPress(this.mCurrentDownEvent);
    }

    private void init(android.content.Context p0)
    {
      android.view.ViewConfiguration v2;
      int ScaledTouchSlop;
      int ScaledDoubleTapSlop;
      if ( p0 == null )
        throw new IllegalArgumentException("Context must not be null");
      if ( this.mListener == null )
        throw new IllegalArgumentException("OnGestureListener must not be null");
      this.mIsLongpressEnabled = true;
      v2 = ViewConfiguration.get(p0);
      ScaledTouchSlop = v2.getScaledTouchSlop();
      ScaledDoubleTapSlop = v2.getScaledDoubleTapSlop();
      this.mMinimumFlingVelocity = v2.getScaledMinimumFlingVelocity();
      this.mMaximumFlingVelocity = v2.getScaledMaximumFlingVelocity();
      this.mTouchSlopSquare = ScaledTouchSlop * ScaledTouchSlop;
      this.mDoubleTapSlopSquare = ScaledDoubleTapSlop * ScaledDoubleTapSlop;
    }

    private boolean isConsideredDoubleTap(
            android.view.MotionEvent p0,
            android.view.MotionEvent p1,
            android.view.MotionEvent p2)
    {
      boolean v4;
      int v6;
      int v7;
      float v8; // RETVAL
    
      v4 = false;
      if ( this.mAlwaysInBiggerTapRegion && p2.getEventTime() - p1.getEventTime() <= DOUBLE_TAP_TIMEOUT )
      {
        v6 = (int)p0.getX() - (int)p2.getX();
        v7 = (int)p0.getY();
        v8 = p2.getY();
        return v6 * v6 + (v7 - (int)v8) * (v7 - (int)v8) < this.mDoubleTapSlopSquare;
      }
      return v4;
    }

    public boolean isLongpressEnabled()
    {
      return this.mIsLongpressEnabled;
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      boolean v2 = false;
      int Action = 0;
      int ActionIndex = 0;
      int PointerCount = 0;
      int v6 = 0;
      float v7 = 0.0f;
      float v8 = 0.0f;
      int v9 = 0;
      float v10 = 0.0f;
      float v11 = 0.0f;
      int v13 = 0;
      int v14 = 0;
      float v15 = 0.0f;
      float v16 = 0.0f;
      int i = 0;
      int v18 = 0;
      boolean hasMessages = false; // RETVAL
      int v20 = 0;
      float v21 = 0.0f;
      float v22 = 0.0f;
      float mDownFocusX = 0.0f;
      float mDownFocusY = 0.0f;
      int v25 = 0;
      boolean v26 = false;
      android.view.MotionEvent v27 = null;
      boolean v28 = false;
      android.view.VelocityTracker mVelocityTracker = null;
      int PointerId = 0;
      float YVelocity = 0.0f;
      float XVelocity = 0.0f;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = false;
            Action = (int)p0.getAction();
            if ( this.mVelocityTracker == null )
            this.mVelocityTracker = VelocityTracker.obtain();
            this.mVelocityTracker.addMovement(p0);
            if ( (Action & 0xFF) == 6 )
            ActionIndex = MotionEventCompat.getActionIndex(p0);
            else
            ActionIndex = -1;
            PointerCount = MotionEventCompat.getPointerCount(p0);
            v6 = 0;
            v7 = 0.0f;
            v8 = 0.0f;
            while ( v6 < PointerCount )
            {
            if ( ActionIndex != v6 )
            {
            v8 = v8 + MotionEventCompat.getX(p0, v6);
            v7 = v7 + MotionEventCompat.getY(p0, v6);
            }
            ++v6;
            }
            if ( (Action & 0xFF) == 6 )
            v9 = PointerCount - 1;
            else
            v9 = PointerCount;
            v10 = v8 / (float)v9;
            v11 = v7 / (float)v9;
            _sw_1 = (Action & 0xFF);
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (1)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 9; continue _sm; }
            _pc = 10;
            continue _sm;
          case 1:
            if ( this.mDoubleTapListener == null )
            { _pc = 3; continue _sm; }
            hasMessages = this.mHandler.hasMessages(3);
            if ( hasMessages )
            this.mHandler.removeMessages(3);
            if ( !(this.mCurrentDownEvent != null
            && this.mPreviousUpEvent != null
            && hasMessages
            && this.isConsideredDoubleTap(this.mCurrentDownEvent, this.mPreviousUpEvent, p0)) ) { _pc = 2; continue _sm; }
            {
            this.mIsDoubleTapping = true;
            v20 = (com.gameloft.android.DecompRT.b2i(this.mDoubleTapListener.onDoubleTap(this.mCurrentDownEvent)) | com.gameloft.android.DecompRT.b2i(this.mDoubleTapListener.onDoubleTapEvent(p0)));
            }
            _pc = 4;
            continue _sm;
          case 2:
            this.mHandler.sendEmptyMessageDelayed(3, DOUBLE_TAP_TIMEOUT);
            _pc = 3;
            continue _sm;
          case 3:
            v20 = 0;
            _pc = 4;
            continue _sm;
          case 4:
            this.mLastFocusX = v10;
            this.mDownFocusX = v10;
            this.mLastFocusY = v11;
            this.mDownFocusY = v11;
            if ( this.mCurrentDownEvent != null )
            this.mCurrentDownEvent.recycle();
            this.mCurrentDownEvent = MotionEvent.obtain(p0);
            this.mAlwaysInTapRegion = true;
            this.mAlwaysInBiggerTapRegion = true;
            this.mStillDown = true;
            this.mInLongPress = false;
            this.mDeferConfirmSingleTap = false;
            if ( this.mIsLongpressEnabled )
            {
            this.mHandler.removeMessages(2);
            this.mHandler.sendEmptyMessageAtTime(2, this.mCurrentDownEvent.getDownTime() + TAP_TIMEOUT + LONGPRESS_TIMEOUT);
            }
            this.mHandler.sendEmptyMessageAtTime(1, this.mCurrentDownEvent.getDownTime() + TAP_TIMEOUT);
            return (v20 | com.gameloft.android.DecompRT.b2i(this.mListener.onDown(p0))) != 0;
          case 5:
            this.mStillDown = false;
            v27 = MotionEvent.obtain(p0);
            if ( this.mIsDoubleTapping )
            {
            v28 = this.mDoubleTapListener.onDoubleTapEvent(p0);
            }
            else if ( this.mInLongPress )
            {
            this.mHandler.removeMessages(3);
            this.mInLongPress = false;
            v28 = false;
            }
            else if ( this.mAlwaysInTapRegion )
            {
            v28 = this.mListener.onSingleTapUp(p0);
            if ( this.mDeferConfirmSingleTap && this.mDoubleTapListener != null )
            this.mDoubleTapListener.onSingleTapConfirmed(p0);
            }
            else
            {
            mVelocityTracker = this.mVelocityTracker;
            PointerId = MotionEventCompat.getPointerId(p0, 0);
            mVelocityTracker.computeCurrentVelocity(1000, (float)this.mMaximumFlingVelocity);
            YVelocity = VelocityTrackerCompat.getYVelocity(mVelocityTracker, PointerId);
            XVelocity = VelocityTrackerCompat.getXVelocity(mVelocityTracker, PointerId);
            v28 = (Math.abs(YVelocity) > (float)this.mMinimumFlingVelocity
            || Math.abs(XVelocity) > (float)this.mMinimumFlingVelocity)
            && this.mListener.onFling(this.mCurrentDownEvent, p0, XVelocity, YVelocity);
            }
            if ( this.mPreviousUpEvent != null )
            this.mPreviousUpEvent.recycle();
            this.mPreviousUpEvent = v27;
            if ( this.mVelocityTracker != null )
            {
            this.mVelocityTracker.recycle();
            this.mVelocityTracker = null;
            }
            this.mIsDoubleTapping = false;
            this.mDeferConfirmSingleTap = false;
            this.mHandler.removeMessages(1);
            this.mHandler.removeMessages(2);
            return v28;
          case 6:
            if ( !this.mInLongPress )
            {
            v21 = this.mLastFocusX - v10;
            v22 = this.mLastFocusY - v11;
            if ( this.mIsDoubleTapping )
            {
            return this.mDoubleTapListener.onDoubleTapEvent(p0);
            }
            else if ( this.mAlwaysInTapRegion )
            {
            mDownFocusX = this.mDownFocusX;
            mDownFocusY = this.mDownFocusY;
            v25 = (int)(v10 - mDownFocusX) * (int)(v10 - mDownFocusX)
            + (int)(v11 - mDownFocusY) * (int)(v11 - mDownFocusY);
            if ( v25 <= this.mTouchSlopSquare )
            {
            v26 = false;
            }
            else
            {
            v26 = this.mListener.onScroll(this.mCurrentDownEvent, p0, v21, v22);
            this.mLastFocusX = v10;
            this.mLastFocusY = v11;
            this.mAlwaysInTapRegion = false;
            this.mHandler.removeMessages(3);
            this.mHandler.removeMessages(1);
            this.mHandler.removeMessages(2);
            }
            if ( v25 > this.mTouchSlopSquare )
            this.mAlwaysInBiggerTapRegion = false;
            return v26;
            }
            else if ( Math.abs(v21) >= 1.0f || Math.abs(v22) >= 1.0f )
            {
            v2 = this.mListener.onScroll(this.mCurrentDownEvent, p0, v21, v22);
            this.mLastFocusX = v10;
            this.mLastFocusY = v11;
            }
            }
            return v2;
          case 7:
            this.cancel();
            return v2;
          case 8:
            this.mLastFocusX = v10;
            this.mDownFocusX = v10;
            this.mLastFocusY = v11;
            this.mDownFocusY = v11;
            this.cancelTaps();
            return v2;
          case 9:
            this.mLastFocusX = v10;
            this.mDownFocusX = v10;
            this.mLastFocusY = v11;
            this.mDownFocusY = v11;
            this.mVelocityTracker.computeCurrentVelocity(1000, (float)this.mMaximumFlingVelocity);
            v13 = MotionEventCompat.getActionIndex(p0);
            v14 = MotionEventCompat.getPointerId(p0, v13);
            v15 = VelocityTrackerCompat.getXVelocity(this.mVelocityTracker, v14);
            v16 = VelocityTrackerCompat.getYVelocity(this.mVelocityTracker, v14);
            for ( i = 0; i < PointerCount; ++i )
            {
            if ( i != v13 )
            {
            v18 = MotionEventCompat.getPointerId(p0, i);
            if ( VelocityTrackerCompat.getYVelocity(this.mVelocityTracker, v18) * v16
            + VelocityTrackerCompat.getXVelocity(this.mVelocityTracker, v18) * v15 < 0.0f )
            {
            this.mVelocityTracker.clear();
            return v2;
            }
            }
            }
            return v2;
          case 10:
            return v2;
        }
      }
}

    public void setIsLongpressEnabled(boolean p0)
    {
      this.mIsLongpressEnabled = p0;
    }

    public void setOnDoubleTapListener(
            android.view.GestureDetector.OnDoubleTapListener p0)
    {
      this.mDoubleTapListener = p0;
    }

}
