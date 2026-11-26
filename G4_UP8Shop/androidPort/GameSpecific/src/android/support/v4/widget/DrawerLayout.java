// Decompiled from classes.dex (SourceFile: DrawerLayout.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.os.SystemClock;
import android.support.v4.view.GravityCompat;
import android.support.v4.view.KeyEventCompat;
import android.support.v4.view.MotionEventCompat;
import android.support.v4.view.ViewCompat;
import android.support.v4.view.ViewGroupCompat;
import android.view.Gravity;
import android.view.MotionEvent;
import android.view.View;
public class DrawerLayout extends android.view.ViewGroup {
    // Fields
    private static boolean ALLOW_EDGE_LOCK;
    private static boolean CHILDREN_DISALLOW_INTERCEPT;
    private static int DEFAULT_SCRIM_COLOR;
    private static final int[] LAYOUT_ATTRS;
    public static int LOCK_MODE_LOCKED_CLOSED;
    public static int LOCK_MODE_LOCKED_OPEN;
    public static int LOCK_MODE_UNLOCKED;
    private static int MIN_DRAWER_MARGIN;
    private static int MIN_FLING_VELOCITY;
    private static int PEEK_DELAY;
    public static int STATE_DRAGGING;
    public static int STATE_IDLE;
    public static int STATE_SETTLING;
    private static java.lang.String TAG;
    private static float TOUCH_SLOP_SENSITIVITY;
    private boolean mChildrenCanceledTouch;
    private boolean mDisallowInterceptRequested;
    private int mDrawerState;
    private boolean mFirstLayout;
    private boolean mInLayout;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private final android.support.v4.widget.DrawerLayout$ViewDragCallback mLeftCallback;
    private final android.support.v4.widget.ViewDragHelper mLeftDragger;
    private android.support.v4.widget.DrawerLayout$DrawerListener mListener;
    private int mLockModeLeft;
    private int mLockModeRight;
    private int mMinDrawerMargin;
    private final android.support.v4.widget.DrawerLayout$ViewDragCallback mRightCallback;
    private final android.support.v4.widget.ViewDragHelper mRightDragger;
    private int mScrimColor;
    private float mScrimOpacity;
    private android.graphics.Paint mScrimPaint;
    private android.graphics.drawable.Drawable mShadowLeft;
    private android.graphics.drawable.Drawable mShadowRight;

    // Methods
    static
    {
      int[] v0;
      v0 = new int[1];
      v0[0] = 16842931;
      LAYOUT_ATTRS = (int[])v0;
    }

    public DrawerLayout(android.content.Context p0)
    {
      this(p0, null);
    }

    public DrawerLayout(android.content.Context p0, android.util.AttributeSet p1)
    {
      this(p0, p1, 0);
    }

    public DrawerLayout(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      float density;
      float v5;
      this.mScrimColor = -1728053248;
      this.mScrimPaint = new android.graphics.Paint();
      this.mFirstLayout = true;
      density = this.getResources().getDisplayMetrics().density;
      this.mMinDrawerMargin = (int)(64.0f * density + 0.5f);
      v5 = density * 400.0f;
      this.mLeftCallback = new android.support.v4.widget.DrawerLayout$ViewDragCallback(this, 3);
      this.mRightCallback = new android.support.v4.widget.DrawerLayout$ViewDragCallback(this, 5);
      this.mLeftDragger = ViewDragHelper.create(this, 1.0f, this.mLeftCallback);
      this.mLeftDragger.setEdgeTrackingEnabled(1);
      this.mLeftDragger.setMinVelocity(v5);
      this.mLeftCallback.setDragger(this.mLeftDragger);
      this.mRightDragger = ViewDragHelper.create(this, 1.0f, this.mRightCallback);
      this.mRightDragger.setEdgeTrackingEnabled(2);
      this.mRightDragger.setMinVelocity(v5);
      this.mRightCallback.setDragger(this.mRightDragger);
      this.setFocusableInTouchMode(true);
      ViewCompat.setAccessibilityDelegate(this, new android.support.v4.widget.DrawerLayout$AccessibilityDelegate(this));
      ViewGroupCompat.setMotionEventSplittingEnabled(this, false);
    
    }

    /* synthetic */ static int[] access$100()
    {
      return LAYOUT_ATTRS;
    }

    private android.view.View findVisibleDrawer()
    {
      int ChildCount;
      int i;
      android.view.View ChildAt;
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( this.isDrawerView(ChildAt) && this.isDrawerVisible(ChildAt) )
          return ChildAt;
      }
      return null;
    }

    static String gravityToString(int p0)
    {
      if ( (p0 & 3) == 3 )
        return "LEFT";
      if ( (p0 & 5) == 5 )
        return "RIGHT";
      return Integer.toHexString((int)p0);
    }

    private static boolean hasOpaqueBackground(android.view.View p0)
    {
      boolean v1;
      android.graphics.drawable.Drawable Background; // RETVAL
    
      v1 = false;
      Background = p0.getBackground();
      if ( Background != null )
        return Background.getOpacity() == -1;
      return v1;
    }

    private boolean hasPeekingDrawer()
    {
      int ChildCount;
      int i;
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        if ( ((android.support.v4.widget.DrawerLayout$LayoutParams)this.getChildAt(i).getLayoutParams()).isPeeking )
          return true;
      }
      return false;
    }

    private boolean hasVisibleDrawer()
    {
      return this.findVisibleDrawer() != null;
    }

    void cancelChildViewTouch()
    {
      int v1;
      long v2; // RETVAL
      android.view.MotionEvent v3;
      int ChildCount;
      v1 = 0;
      if ( !this.mChildrenCanceledTouch )
      {
        v2 = SystemClock.uptimeMillis();
        v3 = MotionEvent.obtain(v2, v2, 3, 0.0f, 0.0f, 0);
        ChildCount = this.getChildCount();
        while ( v1 < ChildCount )
          this.getChildAt(v1++).dispatchTouchEvent(v3);
        v3.recycle();
        this.mChildrenCanceledTouch = true;
      }
    }

    boolean checkDrawerViewAbsoluteGravity(android.view.View p0, int p1)
    {
      return (this.getDrawerViewAbsoluteGravity(p0) & p1) == p1;
    }

    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams p0)
    {
      return p0 instanceof android.support.v4.widget.DrawerLayout$LayoutParams && super.checkLayoutParams(p0);
    }

    public void closeDrawer(int p0)
    {
      android.view.View DrawerWithGravity; // RETVAL
    
      DrawerWithGravity = this.findDrawerWithGravity(p0);
      if ( DrawerWithGravity == null )
        throw new IllegalArgumentException("No drawer view found with gravity " + gravityToString(p0));
      this.closeDrawer(DrawerWithGravity);
    }

    public void closeDrawer(android.view.View p0)
    {
      android.support.v4.widget.DrawerLayout$LayoutParams v2;
      if ( !this.isDrawerView(p0) )
        throw new IllegalArgumentException("View " + p0 + " is not a sliding drawer");
      if ( this.mFirstLayout )
      {
        v2 = (android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams();
        v2.onScreen = 0.0f;
        v2.knownOpen = false;
      }
      else if ( this.checkDrawerViewAbsoluteGravity(p0, 3) )
      {
        this.mLeftDragger.smoothSlideViewTo(p0, -p0.getWidth(), p0.getTop());
      }
      else
      {
        this.mRightDragger.smoothSlideViewTo(p0, this.getWidth(), p0.getTop());
      }
      this.invalidate();
    }

    public void closeDrawers()
    {
      this.closeDrawers(false);
    }

    void closeDrawers(boolean p0)
    {
      int ChildCount;
      int v3 = 0;
      int v4;
      android.view.View ChildAt;
      android.support.v4.widget.DrawerLayout$LayoutParams v6;
      int Width;
      ChildCount = this.getChildCount();
      v3 = 0;
      v4 = 0;
      while ( v3 < ChildCount )
      {
        ChildAt = this.getChildAt(v3);
        v6 = (android.support.v4.widget.DrawerLayout$LayoutParams)ChildAt.getLayoutParams();
        if ( this.isDrawerView(ChildAt) && (!p0 || v6.isPeeking) )
        {
          Width = ChildAt.getWidth();
          if ( this.checkDrawerViewAbsoluteGravity(ChildAt, 3) )
            v4 |= this.mLeftDragger.smoothSlideViewTo(ChildAt, -Width, ChildAt.getTop()) ? 1 : 0;
          else
            v4 |= this.mRightDragger.smoothSlideViewTo(ChildAt, this.getWidth(), ChildAt.getTop()) ? 1 : 0;
          v6.isPeeking = false;
        }
        ++v3;
      }
      this.mLeftCallback.removeCallbacks();
      this.mRightCallback.removeCallbacks();
      if ( v4 != 0 )
        this.invalidate();
    }

    public void computeScroll()
    {
      int ChildCount;
      float v2;
      int i;
      ChildCount = this.getChildCount();
      v2 = 0.0f;
      for ( i = 0; i < ChildCount; ++i )
        v2 = Math.max(
               v2,
               ((android.support.v4.widget.DrawerLayout$LayoutParams)this.getChildAt(i).getLayoutParams()).onScreen);
      this.mScrimOpacity = v2;
      if ( (com.gameloft.android.DecompRT.b2i(this.mLeftDragger.continueSettling(true)) | com.gameloft.android.DecompRT.b2i(this.mRightDragger.continueSettling(true))) != 0 )
        ViewCompat.postInvalidateOnAnimation(this);
    }

    void dispatchOnDrawerClosed(android.view.View p0)
    {
      android.support.v4.widget.DrawerLayout$LayoutParams v2;
      v2 = (android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams();
      if ( v2.knownOpen )
      {
        v2.knownOpen = false;
        if ( this.mListener != null )
          this.mListener.onDrawerClosed(p0);
        this.sendAccessibilityEvent(32);
      }
    }

    void dispatchOnDrawerOpened(android.view.View p0)
    {
      android.support.v4.widget.DrawerLayout$LayoutParams v2;
      v2 = (android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams();
      if ( !v2.knownOpen )
      {
        v2.knownOpen = true;
        if ( this.mListener != null )
          this.mListener.onDrawerOpened(p0);
        p0.sendAccessibilityEvent(32);
      }
    }

    void dispatchOnDrawerSlide(android.view.View p0, float p1)
    {
      if ( this.mListener != null )
        this.mListener.onDrawerSlide(p0, p1);
    }

    protected boolean drawChild(android.graphics.Canvas p0, android.view.View p1, long p2)
    {
      int Height = 0;
      boolean v5 = false;
      int v6 = 0;
      int Width = 0;
      int v8 = 0;
      int ChildCount = 0;
      int i = 0;
      android.view.View ChildAt = null; // RETVAL
      android.view.View v12 = null;
      int Right = 0;
      int Left = 0;
      boolean v15 = false;
      int IntrinsicWidth = 0;
      int v18 = 0;
      float v19 = 0.0f;
      int v20 = 0;
      int v21 = 0;
      float v22 = 0.0f;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            Height = this.getHeight();
            v5 = this.isContentView(p1);
            v6 = 0;
            Width = this.getWidth();
            v8 = p0.save();
            if ( !(v5) ) { _pc = 7; continue _sm; }
            ChildCount = this.getChildCount();
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( i >= ChildCount )
            {
            p0.clipRect(v6, 0, Width, this.getHeight());
            { _pc = 7; continue _sm; }
            }
            ChildAt = this.getChildAt(i);
            v12 = ChildAt;
            if ( ChildAt == p1
            || ChildAt.getVisibility() != 0
            || !hasOpaqueBackground(v12)
            || !this.isDrawerView(v12)
            || v12.getHeight() < Height )
            {
            { _pc = 6; continue _sm; }
            }
            if ( !(!this.checkDrawerViewAbsoluteGravity(v12, 3)) ) { _pc = 2; continue _sm; }
            _pc = 5;
            continue _sm;
          case 2:
            Right = v12.getRight();
            if ( Right <= v6 )
            Right = v6;
            v6 = Right;
            Left = Width;
            _pc = 3;
            continue _sm;
          case 3:
            Width = Left;
            _pc = 4;
            continue _sm;
          case 4:
            ++i;
            _pc = 1;
            continue _sm;
          case 5:
            Left = v12.getLeft();
            if ( Left < Width )
            { _pc = 3; continue _sm; }
            _pc = 6;
            continue _sm;
          case 6:
            Left = Width;
            _pc = 3;
            continue _sm;
          case 7:
            v15 = super.drawChild(p0, p1, p2);
            p0.restoreToCount(v8);
            if ( this.mScrimOpacity > 0.0f && v5 )
            {
            this.mScrimPaint.setColor(((int)((float)((this.mScrimColor & 0xFF000000) >>> 24) * this.mScrimOpacity) << 24)
            | this.mScrimColor & 0xFFFFFF);
            p0.drawRect((float)v6, 0.0f, (float)Width, (float)this.getHeight(), this.mScrimPaint);
            }
            else if ( this.mShadowLeft != null && this.checkDrawerViewAbsoluteGravity(p1, 3) )
            {
            IntrinsicWidth = this.mShadowLeft.getIntrinsicWidth();
            v18 = p1.getRight();
            v19 = Math.max(0.0f, Math.min((float)v18 / (float)this.mLeftDragger.getEdgeSize(), 1.0f));
            this.mShadowLeft.setBounds(v18, p1.getTop(), IntrinsicWidth + v18, p1.getBottom());
            this.mShadowLeft.setAlpha((int)(255.0f * v19));
            this.mShadowLeft.draw(p0);
            }
            else if ( this.mShadowRight != null && this.checkDrawerViewAbsoluteGravity(p1, 5) )
            {
            v20 = this.mShadowRight.getIntrinsicWidth();
            v21 = p1.getLeft();
            v22 = Math.max(0.0f, Math.min((float)(this.getWidth() - v21) / (float)this.mRightDragger.getEdgeSize(), 1.0f));
            this.mShadowRight.setBounds(v21 - v20, p1.getTop(), v21, p1.getBottom());
            this.mShadowRight.setAlpha((int)(255.0f * v22));
            this.mShadowRight.draw(p0);
            }
            return v15;
        }
      }
}

    android.view.View findDrawerWithGravity(int p0)
    {
      int v2;
      int ChildCount;
      int i;
      android.view.View ChildAt;
      v2 = GravityCompat.getAbsoluteGravity(p0, ViewCompat.getLayoutDirection(this)) & 7;
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( (this.getDrawerViewAbsoluteGravity(ChildAt) & 7) == v2 )
          return ChildAt;
      }
      return null;
    }

    android.view.View findOpenDrawer()
    {
      int ChildCount;
      int i;
      android.view.View ChildAt;
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( ((android.support.v4.widget.DrawerLayout$LayoutParams)ChildAt.getLayoutParams()).knownOpen )
          return ChildAt;
      }
      return null;
    }

    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams()
    {
      return new android.support.v4.widget.DrawerLayout$LayoutParams(-1, -1);
    }

    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet p0)
    {
      return new android.support.v4.widget.DrawerLayout$LayoutParams(this.getContext(), p0);
    }

    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams p0)
    {
      if ( p0 instanceof android.support.v4.widget.DrawerLayout$LayoutParams )
        return new android.support.v4.widget.DrawerLayout$LayoutParams((android.support.v4.widget.DrawerLayout$LayoutParams)p0);
      if ( p0 instanceof android.view.ViewGroup.MarginLayoutParams )
        return new android.support.v4.widget.DrawerLayout$LayoutParams((android.view.ViewGroup.MarginLayoutParams)p0);
      return new android.support.v4.widget.DrawerLayout$LayoutParams(p0);
    }

    public int getDrawerLockMode(int p0)
    {
      int AbsoluteGravity; // RETVAL
    
      AbsoluteGravity = GravityCompat.getAbsoluteGravity(p0, ViewCompat.getLayoutDirection(this));
      if ( AbsoluteGravity == 3 )
        return this.mLockModeLeft;
      if ( AbsoluteGravity == 5 )
        return this.mLockModeRight;
      return 0;
    }

    public int getDrawerLockMode(android.view.View p0)
    {
      int DrawerViewAbsoluteGravity; // RETVAL
    
      DrawerViewAbsoluteGravity = this.getDrawerViewAbsoluteGravity(p0);
      if ( DrawerViewAbsoluteGravity == 3 )
        return this.mLockModeLeft;
      if ( DrawerViewAbsoluteGravity == 5 )
        return this.mLockModeRight;
      return 0;
    }

    int getDrawerViewAbsoluteGravity(android.view.View p0)
    {
      return GravityCompat.getAbsoluteGravity(
               ((android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams()).gravity,
               ViewCompat.getLayoutDirection(this));
    }

    float getDrawerViewOffset(android.view.View p0)
    {
      return ((android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams()).onScreen;
    }

    boolean isContentView(android.view.View p0)
    {
      return ((android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams()).gravity == 0;
    }

    public boolean isDrawerOpen(int p0)
    {
      android.view.View DrawerWithGravity; // RETVAL
    
      DrawerWithGravity = this.findDrawerWithGravity(p0);
      return DrawerWithGravity != null && this.isDrawerOpen(DrawerWithGravity);
    }

    public boolean isDrawerOpen(android.view.View p0)
    {
      if ( !this.isDrawerView(p0) )
        throw new IllegalArgumentException("View " + p0 + " is not a drawer");
      return ((android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams()).knownOpen;
    }

    boolean isDrawerView(android.view.View p0)
    {
      return (GravityCompat.getAbsoluteGravity(
                ((android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams()).gravity,
                ViewCompat.getLayoutDirection(p0))
            & 7) != 0;
    }

    public boolean isDrawerVisible(int p0)
    {
      android.view.View DrawerWithGravity; // RETVAL
    
      DrawerWithGravity = this.findDrawerWithGravity(p0);
      return DrawerWithGravity != null && this.isDrawerVisible(DrawerWithGravity);
    }

    public boolean isDrawerVisible(android.view.View p0)
    {
      if ( !this.isDrawerView(p0) )
        throw new IllegalArgumentException("View " + p0 + " is not a drawer");
      return ((android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams()).onScreen > 0.0f;
    }

    void moveDrawerToOffset(android.view.View p0, float p1)
    {
      float DrawerViewOffset;
      int Width; // RETVAL
      int v5;
      DrawerViewOffset = this.getDrawerViewOffset(p0);
      Width = p0.getWidth();
      v5 = (int)((float)Width * p1) - (int)(DrawerViewOffset * (float)Width);
      if ( !this.checkDrawerViewAbsoluteGravity(p0, 3) )
        v5 = -v5;
      p0.offsetLeftAndRight(v5);
      this.setDrawerViewOffset(p0, p1);
    }

    protected void onAttachedToWindow()
    {
      super.onAttachedToWindow();
      this.mFirstLayout = true;
    }

    protected void onDetachedFromWindow()
    {
      super.onDetachedFromWindow();
      this.mFirstLayout = true;
    }

    public boolean onInterceptTouchEvent(android.view.MotionEvent p0)
    {
      boolean v2 = false;
      int ActionMasked = 0;
      int v4 = 0;
      boolean v5 = false;
      float v7 = 0.0f;
      float v8 = 0.0f; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = false;
            ActionMasked = MotionEventCompat.getActionMasked(p0);
            v4 = com.gameloft.android.DecompRT.b2i(this.mLeftDragger.shouldInterceptTouchEvent(p0)) | com.gameloft.android.DecompRT.b2i(this.mRightDragger.shouldInterceptTouchEvent(p0));
            _sw_1 = (ActionMasked);
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (1)) || (_sw_1 == (3)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
            _pc = 4;
            continue _sm;
          case 1:
            v7 = p0.getX();
            v8 = p0.getY();
            this.mInitialMotionX = v7;
            this.mInitialMotionY = v8;
            v5 = this.mScrimOpacity > 0.0f && this.isContentView(this.mLeftDragger.findTopChildUnder((int)v7, (int)v8));
            this.mDisallowInterceptRequested = false;
            this.mChildrenCanceledTouch = false;
            _pc = 5;
            continue _sm;
          case 2:
            this.closeDrawers(true);
            this.mDisallowInterceptRequested = false;
            this.mChildrenCanceledTouch = false;
            _pc = 4;
            continue _sm;
          case 3:
            if ( !this.mLeftDragger.checkTouchSlop(3) )
            { _pc = 4; continue _sm; }
            this.mLeftCallback.removeCallbacks();
            this.mRightCallback.removeCallbacks();
            v5 = false;
            _pc = 5;
            continue _sm;
          case 4:
            v5 = false;
            _pc = 5;
            continue _sm;
          case 5:
            if ( v4 != 0 || v5 || this.hasPeekingDrawer() || this.mChildrenCanceledTouch )
            return true;
            return v2;
        }
      }
}

    public boolean onKeyDown(int p0, android.view.KeyEvent p1)
    {
      if ( p0 != 4 || !this.hasVisibleDrawer() )
        return super.onKeyDown(p0, p1);
      KeyEventCompat.startTracking(p1);
      return true;
    }

    public boolean onKeyUp(int p0, android.view.KeyEvent p1)
    {
      android.view.View VisibleDrawer; // RETVAL
      android.view.View v4;
      if ( p0 != 4 )
        return super.onKeyUp(p0, p1);
      VisibleDrawer = this.findVisibleDrawer();
      v4 = VisibleDrawer;
      if ( VisibleDrawer != null && this.getDrawerLockMode(VisibleDrawer) == 0 )
        this.closeDrawers();
      return v4 != null;
    }

    protected void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      int v6;
      int ChildCount;
      int i;
      android.view.View ChildAt;
      android.support.v4.widget.DrawerLayout$LayoutParams v10;
      int MeasuredWidth;
      int MeasuredHeight;
      float onScreen;
      int v14;
      float v15;
      boolean v16;
      int v17;
      int v18;
      int v19;
      this.mInLayout = true;
      v6 = p3 - p1;
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( ChildAt.getVisibility() != 8 )
        {
          v10 = (android.support.v4.widget.DrawerLayout$LayoutParams)ChildAt.getLayoutParams();
          if ( this.isContentView(ChildAt) )
          {
            ChildAt.layout(v10.leftMargin, v10.topMargin, v10.leftMargin + ChildAt.getMeasuredWidth(), v10.topMargin + ChildAt.getMeasuredHeight());
          }
          else
          {
            MeasuredWidth = ChildAt.getMeasuredWidth();
            MeasuredHeight = ChildAt.getMeasuredHeight();
            if ( this.checkDrawerViewAbsoluteGravity(ChildAt, 3) )
            {
              onScreen = v10.onScreen;
              v14 = (int)((float)MeasuredWidth * onScreen) - MeasuredWidth;
              v15 = (float)(int)((float)MeasuredWidth * onScreen) / (float)MeasuredWidth;
            }
            else
            {
              v14 = v6 - (int)((float)MeasuredWidth * v10.onScreen);
              v15 = (float)(v6 - v14) / (float)MeasuredWidth;
            }
            v16 = v15 != v10.onScreen;
            switch ( v10.gravity & 0x70 )
            {
              case 0x10:
                v18 = p4 - p2;
                v19 = (p4 - p2 - MeasuredHeight) / 2;
                if ( v19 >= v10.topMargin )
                {
                  if ( v19 + MeasuredHeight > v18 - v10.bottomMargin )
                    v19 = v18 - v10.bottomMargin - MeasuredHeight;
                }
                else
                {
                  v19 = v10.topMargin;
                }
                ChildAt.layout(v14, v19, MeasuredWidth + v14, MeasuredHeight + v19);
                break;
              case 0x50:
                ChildAt.layout(v14, p4 - p2 - v10.bottomMargin - ChildAt.getMeasuredHeight(), MeasuredWidth + v14, p4 - p2 - v10.bottomMargin);
                break;
              default:
                ChildAt.layout(v14, v10.topMargin, MeasuredWidth + v14, MeasuredHeight
                                                                                      + v10.topMargin);
                break;
            }
            if ( v16 )
              this.setDrawerViewOffset(ChildAt, v15);
            if ( v10.onScreen <= 0.0f )
              v17 = 4;
            else
              v17 = 0;
            if ( ChildAt.getVisibility() != v17 )
              ChildAt.setVisibility((int)v17);
          }
        }
      }
      this.mInLayout = false;
      this.mFirstLayout = false;
    }

    protected void onMeasure(int p0, int p1)
    {
      int v3 = 0;
      int Mode;
      int v5;
      int Size = 0;
      int v7 = 0;
      int ChildCount;
      int i;
      android.view.View ChildAt;
      android.support.v4.widget.DrawerLayout$LayoutParams v11;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v3 = 300;
            Mode = View.MeasureSpec.getMode(p0);
            v5 = View.MeasureSpec.getMode(p1);
            Size = View.MeasureSpec.getSize(p0);
            v7 = View.MeasureSpec.getSize(p1);
            if ( Mode == 0x40000000 && v5 == 0x40000000 )
            { _pc = 2; continue _sm; }
            if ( !this.isInEditMode() )
            throw new IllegalArgumentException("DrawerLayout must be measured with MeasureSpec.EXACTLY.");
            if ( Mode == 0 )
            Size = 300;
            if ( v5 != 0 ) { _pc = 1; continue _sm; } else { _pc = 3; continue _sm; }
          }
          case 1: {
            _pc = 2;
            continue _sm;
          }
          case 2: {
            v3 = v7;
            _pc = 3;
            continue _sm;
          }
          case 3: {
            this.setMeasuredDimension(Size, v3);
            ChildCount = this.getChildCount();
            for ( i = 0; i < ChildCount; ++i )
            {
            ChildAt = this.getChildAt(i);
            if ( ChildAt.getVisibility() != 8 )
            {
            v11 = (android.support.v4.widget.DrawerLayout$LayoutParams)ChildAt.getLayoutParams();
            if ( this.isContentView(ChildAt) )
            {
            ChildAt.measure(View.MeasureSpec.makeMeasureSpec(Size - v11.leftMargin - v11.rightMargin, 0x40000000), View.MeasureSpec.makeMeasureSpec(v3 - v11.topMargin - v11.bottomMargin, 0x40000000));
            }
            else
            {
            if ( !this.isDrawerView(ChildAt) )
            throw new IllegalStateException("Child "
            + ChildAt
            + " at index "
            + i
            + " does not have a valid layout_gravity - must be Gravity.LEFT, Gravity.RIGHT or" +
            " Gravity.NO_GRAVITY");
            this.getDrawerViewAbsoluteGravity(ChildAt);
            ChildAt.measure(getChildMeasureSpec(
            p0,
            this.mMinDrawerMargin + v11.leftMargin + v11.rightMargin,
            v11.width), getChildMeasureSpec(
            p1,
            v11.topMargin + v11.bottomMargin,
            v11.height));
            }
            }
            }
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    protected void onRestoreInstanceState(android.os.Parcelable p0)
    {
      android.support.v4.widget.DrawerLayout$SavedState v2;
      android.view.View DrawerWithGravity; // RETVAL
    
      v2 = (android.support.v4.widget.DrawerLayout$SavedState)p0;
      super.onRestoreInstanceState(v2.getSuperState());
      if ( v2.openDrawerGravity != 0 )
      {
        DrawerWithGravity = this.findDrawerWithGravity(v2.openDrawerGravity);
        if ( DrawerWithGravity != null )
          this.openDrawer(DrawerWithGravity);
      }
      this.setDrawerLockMode(v2.lockModeLeft, 3);
      this.setDrawerLockMode(v2.lockModeRight, 5);
    }

    protected android.os.Parcelable onSaveInstanceState()
    {
      android.support.v4.widget.DrawerLayout$SavedState v1;
      int ChildCount;
      int i;
      android.view.View ChildAt;
      android.support.v4.widget.DrawerLayout$LayoutParams v5;
      v1 = new android.support.v4.widget.DrawerLayout$SavedState(super.onSaveInstanceState());
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( this.isDrawerView(ChildAt) )
        {
          v5 = (android.support.v4.widget.DrawerLayout$LayoutParams)ChildAt.getLayoutParams();
          if ( v5.knownOpen )
          {
            v1.openDrawerGravity = v5.gravity;
            break;
          }
        }
      }
      v1.lockModeLeft = this.mLockModeLeft;
      v1.lockModeRight = this.mLockModeRight;
      return v1;
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      float v3;
      float v4;
      android.view.View TopChildUnder; // RETVAL
      float v6;
      float v7;
      int TouchSlop; // RETVAL
      android.view.View OpenDrawer; // RETVAL
      boolean v10;
      this.mLeftDragger.processTouchEvent(p0);
      this.mRightDragger.processTouchEvent(p0);
      switch ( p0.getAction() & 0xFF )
      {
        case 0:
          this.mInitialMotionX = p0.getX();
          this.mInitialMotionY = p0.getY();
          this.mDisallowInterceptRequested = false;
          this.mChildrenCanceledTouch = false;
          break;
        case 1:
          v3 = p0.getX();
          v4 = p0.getY();
          TopChildUnder = this.mLeftDragger.findTopChildUnder((int)v3, (int)v4);
          v10 = TopChildUnder == null
             || !this.isContentView(TopChildUnder)
             || (com.gameloft.android.DecompRT.comma((v6 = v3 - this.mInitialMotionX), com.gameloft.android.DecompRT.comma((v7 = v4 - this.mInitialMotionY), com.gameloft.android.DecompRT.comma((TouchSlop = this.mLeftDragger.getTouchSlop()), (v6 * v6 + v7 * v7 >= (float)(TouchSlop * TouchSlop))))))
             || (OpenDrawer = this.findOpenDrawer()) == null
             || this.getDrawerLockMode(OpenDrawer) == 2;
          this.closeDrawers(v10);
          this.mDisallowInterceptRequested = false;
          break;
        case 3:
          this.closeDrawers(true);
          this.mDisallowInterceptRequested = false;
          this.mChildrenCanceledTouch = false;
          break;
        default:
          return true;
      }
      return true;
    }

    public void openDrawer(int p0)
    {
      android.view.View DrawerWithGravity; // RETVAL
    
      DrawerWithGravity = this.findDrawerWithGravity(p0);
      if ( DrawerWithGravity == null )
        throw new IllegalArgumentException("No drawer view found with gravity " + gravityToString(p0));
      this.openDrawer(DrawerWithGravity);
    }

    public void openDrawer(android.view.View p0)
    {
      android.support.v4.widget.DrawerLayout$LayoutParams v2;
      if ( !this.isDrawerView(p0) )
        throw new IllegalArgumentException("View " + p0 + " is not a sliding drawer");
      if ( this.mFirstLayout )
      {
        v2 = (android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams();
        v2.onScreen = 1.0f;
        v2.knownOpen = true;
      }
      else if ( this.checkDrawerViewAbsoluteGravity(p0, 3) )
      {
        this.mLeftDragger.smoothSlideViewTo(p0, 0, p0.getTop());
      }
      else
      {
        this.mRightDragger.smoothSlideViewTo(p0, this.getWidth() - p0.getWidth(), p0.getTop());
      }
      this.invalidate();
    }

    public void requestDisallowInterceptTouchEvent(boolean p0)
    {
      super.requestDisallowInterceptTouchEvent(p0);
      this.mDisallowInterceptRequested = p0;
      if ( p0 )
        this.closeDrawers(true);
    }

    public void requestLayout()
    {
      if ( !this.mInLayout )
        super.requestLayout();
    }

    public void setDrawerListener(android.support.v4.widget.DrawerLayout$DrawerListener p0)
    {
      this.mListener = p0;
    }

    public void setDrawerLockMode(int p0)
    {
      this.setDrawerLockMode(p0, 3);
      this.setDrawerLockMode(p0, 5);
    }

    public void setDrawerLockMode(int p0, int p1)
    {
      int AbsoluteGravity; // RETVAL
      android.support.v4.widget.ViewDragHelper mLeftDragger;
      android.view.View v5; // RETVAL
      android.view.View DrawerWithGravity; // RETVAL
    
      AbsoluteGravity = GravityCompat.getAbsoluteGravity(p1, ViewCompat.getLayoutDirection(this));
      if ( AbsoluteGravity == 3 )
      {
        this.mLockModeLeft = p0;
      }
      else if ( AbsoluteGravity == 5 )
      {
        this.mLockModeRight = p0;
      }
      if ( p0 != 0 )
      {
        if ( AbsoluteGravity == 3 )
          mLeftDragger = this.mLeftDragger;
        else
          mLeftDragger = this.mRightDragger;
        mLeftDragger.cancel();
      }
      switch ( p0 )
      {
        case 1:
          DrawerWithGravity = this.findDrawerWithGravity(AbsoluteGravity);
          if ( DrawerWithGravity != null )
            this.closeDrawer(DrawerWithGravity);
          break;
        case 2:
          v5 = this.findDrawerWithGravity(AbsoluteGravity);
          if ( v5 != null )
            this.openDrawer(v5);
          break;
        default:
          return;
      }
    }

    public void setDrawerLockMode(int p0, android.view.View p1)
    {
      if ( !this.isDrawerView(p1) )
        throw new IllegalArgumentException("View " + p1 + " is not a drawer with appropriate layout_gravity");
      this.setDrawerLockMode(p0, ((android.support.v4.widget.DrawerLayout$LayoutParams)p1.getLayoutParams()).gravity);
    }

    public void setDrawerShadow(int p0, int p1)
    {
      this.setDrawerShadow(this.getResources().getDrawable(p0), p1);
    }

    public void setDrawerShadow(android.graphics.drawable.Drawable p0, int p1)
    {
      int AbsoluteGravity; // RETVAL
    
      AbsoluteGravity = GravityCompat.getAbsoluteGravity(p1, ViewCompat.getLayoutDirection(this));
      if ( (AbsoluteGravity & 3) == 3 )
      {
        this.mShadowLeft = p0;
        this.invalidate();
      }
      if ( (AbsoluteGravity & 5) == 5 )
      {
        this.mShadowRight = p0;
        this.invalidate();
      }
    }

    void setDrawerViewOffset(android.view.View p0, float p1)
    {
      android.support.v4.widget.DrawerLayout$LayoutParams v3;
      v3 = (android.support.v4.widget.DrawerLayout$LayoutParams)p0.getLayoutParams();
      if ( p1 != v3.onScreen )
      {
        v3.onScreen = p1;
        this.dispatchOnDrawerSlide(p0, p1);
      }
    }

    public void setScrimColor(int p0)
    {
      this.mScrimColor = p0;
      this.invalidate();
    }

    void updateDrawerState(int p0, int p1, android.view.View p2)
    {
      int v4;
      int ViewDragState;
      int v6; // RETVAL
      android.support.v4.widget.DrawerLayout$LayoutParams v7;
      v4 = 1;
      ViewDragState = this.mLeftDragger.getViewDragState();
      v6 = this.mRightDragger.getViewDragState();
      if ( ViewDragState != 1 && v6 != 1 )
      {
        if ( ViewDragState == 2 || v6 == 2 )
          v4 = 2;
        else
          v4 = 0;
      }
      if ( p2 != null && p1 == 0 )
      {
        v7 = (android.support.v4.widget.DrawerLayout$LayoutParams)p2.getLayoutParams();
        if ( v7.onScreen == 0.0f )
        {
          this.dispatchOnDrawerClosed(p2);
        }
        else if ( v7.onScreen == 1.0f )
        {
          this.dispatchOnDrawerOpened(p2);
        }
      }
      if ( v4 != this.mDrawerState )
      {
        this.mDrawerState = v4;
        if ( this.mListener != null )
          this.mListener.onDrawerStateChanged(v4);
      }
    }

}
