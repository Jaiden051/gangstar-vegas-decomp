// Decompiled from classes.dex (SourceFile: SlidingPaneLayout.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.graphics.PorterDuff;
import android.os.Build;
import android.support.v4.view.MotionEventCompat;
import android.support.v4.view.ViewCompat;
import android.util.Log;
import android.view.View;
import android.view.ViewConfiguration;
public class SlidingPaneLayout extends android.view.ViewGroup {
    // Fields
    private static int DEFAULT_FADE_COLOR;
    private static int DEFAULT_OVERHANG_SIZE;
    static final android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImpl IMPL;
    private static int MIN_FLING_VELOCITY;
    private static java.lang.String TAG;
    private boolean mCanSlide;
    private int mCoveredFadeColor;
    private final android.support.v4.widget.ViewDragHelper mDragHelper;
    private boolean mFirstLayout;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private boolean mIsUnableToDrag;
    private final int mOverhangSize;
    private android.support.v4.widget.SlidingPaneLayout$PanelSlideListener mPanelSlideListener;
    private int mParallaxBy;
    private float mParallaxOffset;
    private final java.util.ArrayList mPostedRunnables;
    private boolean mPreservedOpenState;
    private android.graphics.drawable.Drawable mShadowDrawable;
    private float mSlideOffset;
    private int mSlideRange;
    private android.view.View mSlideableView;
    private int mSliderFadeColor;
    private final android.graphics.Rect mTmpRect;

    // Methods
    static
    {
      int v0;
      v0 = Build.VERSION.SDK_INT;
      if ( v0 < 17 )
      {
        if ( v0 < 16 )
          IMPL = (android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImpl)new android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImplBase();
        else
          IMPL = (android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImpl)new android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImplJB();
      }
      else
      {
        IMPL = (android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImpl)new android.support.v4.widget.SlidingPaneLayout$SlidingPanelLayoutImplJBMR1();
      }
    }

    public SlidingPaneLayout(android.content.Context p0)
    {
      this(p0, null);
    }

    public SlidingPaneLayout(android.content.Context p0, android.util.AttributeSet p1)
    {
      this(p0, p1, 0);
    }

    public SlidingPaneLayout(android.content.Context p0, android.util.AttributeSet p1, int p2)
    {
      super(p0, p1, p2);
      float density;
      this.mSliderFadeColor = -858993460;
      this.mFirstLayout = true;
      this.mTmpRect = new android.graphics.Rect();
      this.mPostedRunnables = new java.util.ArrayList();
      density = p0.getResources().getDisplayMetrics().density;
      this.mOverhangSize = (int)(32.0f * density + 0.5f);
      ViewConfiguration.get(p0);
      this.setWillNotDraw(false);
      ViewCompat.setAccessibilityDelegate(this, new android.support.v4.widget.SlidingPaneLayout$AccessibilityDelegate(this));
      ViewCompat.setImportantForAccessibility(this, 1);
      this.mDragHelper = ViewDragHelper.create(
                           this,
                           0.5f,
                           new android.support.v4.widget.SlidingPaneLayout$DragHelperCallback(this, null));
      this.mDragHelper.setEdgeTrackingEnabled(1);
      this.mDragHelper.setMinVelocity(density * 400.0f);
    
    }

    /* synthetic */ static boolean access$100(android.support.v4.widget.SlidingPaneLayout p0)
    {
      return p0.mIsUnableToDrag;
    }

    /* synthetic */ static java.util.ArrayList access$1000(
            android.support.v4.widget.SlidingPaneLayout p0)
    {
      return p0.mPostedRunnables;
    }

    /* synthetic */ static android.support.v4.widget.ViewDragHelper access$200(
            android.support.v4.widget.SlidingPaneLayout p0)
    {
      return p0.mDragHelper;
    }

    /* synthetic */ static float access$300(android.support.v4.widget.SlidingPaneLayout p0)
    {
      return p0.mSlideOffset;
    }

    /* synthetic */ static android.view.View access$400(android.support.v4.widget.SlidingPaneLayout p0)
    {
      return p0.mSlideableView;
    }

    /* synthetic */ static boolean access$502(android.support.v4.widget.SlidingPaneLayout p0, boolean p1)
    {
      p0.mPreservedOpenState = p1;
      return p1;
    }

    /* synthetic */ static void access$600(android.support.v4.widget.SlidingPaneLayout p0, int p1)
    {
      p0.onPanelDragged(p1);
    }

    /* synthetic */ static int access$700(android.support.v4.widget.SlidingPaneLayout p0)
    {
      return p0.mSlideRange;
    }

    /* synthetic */ static void access$900(
            android.support.v4.widget.SlidingPaneLayout p0,
            android.view.View p1)
    {
      p0.invalidateChildRegion(p1);
    }

    private boolean closePane(android.view.View p0, int p1)
    {
      boolean v3;
      v3 = false;
      if ( this.mFirstLayout || this.smoothSlideTo(0.0f, p1) )
      {
        this.mPreservedOpenState = false;
        return true;
      }
      return v3;
    }

    private void dimChildView(android.view.View p0, float p1, int p2)
    {
      android.support.v4.widget.SlidingPaneLayout$LayoutParams v4;
      android.support.v4.widget.SlidingPaneLayout$DisableLayerRunnable v5;
      v4 = (android.support.v4.widget.SlidingPaneLayout$LayoutParams)p0.getLayoutParams();
      if ( p1 > 0.0f && p2 != 0 )
      {
        if ( v4.dimPaint == null )
          v4.dimPaint = new android.graphics.Paint();
        v4.dimPaint.setColorFilter(new android.graphics.PorterDuffColorFilter(((int)((float)((p2 & 0xFF000000) >>> 24) * p1) << 24)
                                                                            | p2 & 0xFFFFFF, PorterDuff.Mode.SRC_OVER));
        if ( ViewCompat.getLayerType(p0) != 2 )
          ViewCompat.setLayerType(p0, 2, v4.dimPaint);
        this.invalidateChildRegion(p0);
      }
      else if ( ViewCompat.getLayerType(p0) != 0 )
      {
        if ( v4.dimPaint != null )
          v4.dimPaint.setColorFilter(null);
        v5 = new android.support.v4.widget.SlidingPaneLayout$DisableLayerRunnable(this, p0);
        this.mPostedRunnables.add(v5);
        ViewCompat.postOnAnimation(this, (Runnable)v5);
      }
    }

    private void invalidateChildRegion(android.view.View p0)
    {
      IMPL.invalidateChildRegion(this, p0);
    }

    private void onPanelDragged(int p0)
    {
      android.support.v4.widget.SlidingPaneLayout$LayoutParams v2;
      v2 = (android.support.v4.widget.SlidingPaneLayout$LayoutParams)this.mSlideableView.getLayoutParams();
      this.mSlideOffset = (float)(p0 - (this.getPaddingLeft() + v2.leftMargin)) / (float)this.mSlideRange;
      if ( this.mParallaxBy != 0 )
        this.parallaxOtherViews(this.mSlideOffset);
      if ( v2.dimWhenOffset )
        this.dimChildView(this.mSlideableView, this.mSlideOffset, this.mSliderFadeColor);
      this.dispatchOnPanelSlide(this.mSlideableView);
    }

    private boolean openPane(android.view.View p0, int p1)
    {
      boolean v3;
      v3 = true;
      if ( !this.mFirstLayout && !this.smoothSlideTo(1.0f, p1) )
        return false;
      this.mPreservedOpenState = true;
      return v3;
    }

    private void parallaxOtherViews(float p0)
    {
      int v2;
      android.support.v4.widget.SlidingPaneLayout$LayoutParams v3;
      boolean v4;
      int ChildCount;
      android.view.View ChildAt; // RETVAL
    
      v2 = 0;
      v3 = (android.support.v4.widget.SlidingPaneLayout$LayoutParams)this.mSlideableView.getLayoutParams();
      v4 = v3.dimWhenOffset && v3.leftMargin <= 0;
      ChildCount = this.getChildCount();
      while ( v2 < ChildCount )
      {
        ChildAt = this.getChildAt(v2);
        if ( ChildAt != this.mSlideableView )
        {
          this.mParallaxOffset = p0;
          ChildAt.offsetLeftAndRight((int)((1.0f - this.mParallaxOffset) * (float)this.mParallaxBy)
                                   - (int)((1.0f - p0) * (float)this.mParallaxBy));
          if ( v4 )
            this.dimChildView(ChildAt, 1.0f - this.mParallaxOffset, this.mCoveredFadeColor);
        }
        ++v2;
      }
    }

    private static boolean viewIsOpaque(android.view.View p0)
    {
      boolean v1;
      android.graphics.drawable.Drawable Background; // RETVAL
    
      v1 = true;
      if ( !ViewCompat.isOpaque(p0) )
      {
        if ( Build.VERSION.SDK_INT < 18 )
        {
          Background = p0.getBackground();
          return Background != null && Background.getOpacity() == -1;
        }
        else
        {
          return false;
        }
      }
      return v1;
    }

    protected boolean canScroll(android.view.View p0, boolean p1, int p2, int p3, int p4)
    {
      boolean v6;
      android.view.ViewGroup v7;
      int ScrollX;
      int ScrollY;
      int i;
      android.view.View ChildAt;
      v6 = true;
      if ( p0 instanceof android.view.ViewGroup )
      {
        v7 = (android.view.ViewGroup)p0;
        ScrollX = p0.getScrollX();
        ScrollY = p0.getScrollY();
        for ( i = v7.getChildCount() - 1; i >= 0; --i )
        {
          ChildAt = v7.getChildAt(i);
          if ( p3 + ScrollX >= ChildAt.getLeft()
            && p3 + ScrollX < ChildAt.getRight()
            && p4 + ScrollY >= ChildAt.getTop()
            && p4 + ScrollY < ChildAt.getBottom()
            && this.canScroll(ChildAt, true, p2, p3 + ScrollX - ChildAt.getLeft(), p4 + ScrollY - ChildAt.getTop()) )
          {
            return v6;
          }
        }
      }
      if ( !p1 || !ViewCompat.canScrollHorizontally(p0, -p2) )
        return false;
      return v6;
    }

    public boolean canSlide()
    {
      return this.mCanSlide;
    }

    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams p0)
    {
      return p0 instanceof android.support.v4.widget.SlidingPaneLayout$LayoutParams && super.checkLayoutParams(p0);
    }

    public boolean closePane()
    {
      return this.closePane(this.mSlideableView, 0);
    }

    public void computeScroll()
    {
      if ( this.mDragHelper.continueSettling(true) )
      {
        if ( this.mCanSlide )
          ViewCompat.postInvalidateOnAnimation(this);
        else
          this.mDragHelper.abort();
      }
    }

    void dispatchOnPanelClosed(android.view.View p0)
    {
      if ( this.mPanelSlideListener != null )
        this.mPanelSlideListener.onPanelClosed(p0);
      this.sendAccessibilityEvent(32);
    }

    void dispatchOnPanelOpened(android.view.View p0)
    {
      if ( this.mPanelSlideListener != null )
        this.mPanelSlideListener.onPanelOpened(p0);
      this.sendAccessibilityEvent(32);
    }

    void dispatchOnPanelSlide(android.view.View p0)
    {
      if ( this.mPanelSlideListener != null )
        this.mPanelSlideListener.onPanelSlide(p0, this.mSlideOffset);
    }

    public void draw(android.graphics.Canvas p0)
    {
      android.view.View ChildAt;
      int IntrinsicWidth;
      int Left;
      super.draw(p0);
      if ( this.getChildCount() <= 1 )
        ChildAt = null;
      else
        ChildAt = this.getChildAt(1);
      if ( ChildAt != null && this.mShadowDrawable != null )
      {
        IntrinsicWidth = this.mShadowDrawable.getIntrinsicWidth();
        Left = ChildAt.getLeft();
        this.mShadowDrawable.setBounds(Left - IntrinsicWidth, ChildAt.getTop(), Left, ChildAt.getBottom());
        this.mShadowDrawable.draw(p0);
      }
    }

    protected boolean drawChild(android.graphics.Canvas p0, android.view.View p1, long p2)
    {
      android.support.v4.widget.SlidingPaneLayout$LayoutParams v4 = null;
      int v5 = 0;
      android.graphics.Bitmap DrawingCache = null;
      boolean v7 = false;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v4 = (android.support.v4.widget.SlidingPaneLayout$LayoutParams)p1.getLayoutParams();
            v5 = p0.save();
            if ( this.mCanSlide && !v4.slideable && this.mSlideableView != null )
            {
            p0.getClipBounds(this.mTmpRect);
            this.mTmpRect.right = Math.min(this.mTmpRect.right, this.mSlideableView.getLeft());
            p0.clipRect(this.mTmpRect);
            }
            if ( Build.VERSION.SDK_INT >= 11 )
            { _pc = 1; continue _sm; }
            if ( !(!v4.dimWhenOffset || this.mSlideOffset <= 0.0f) ) { _pc = 2; continue _sm; }
            if ( p1.isDrawingCacheEnabled() )
            p1.setDrawingCacheEnabled(false);
            _pc = 1;
            continue _sm;
          case 1:
            v7 = super.drawChild(p0, p1, p2);
            _pc = 3;
            continue _sm;
          case 2:
            if ( !p1.isDrawingCacheEnabled() )
            p1.setDrawingCacheEnabled(true);
            DrawingCache = p1.getDrawingCache();
            if ( DrawingCache != null )
            {
            p0.drawBitmap(DrawingCache, (float)p1.getLeft(), (float)p1.getTop(), v4.dimPaint);
            v7 = false;
            }
            else
            {
            Log.e("SlidingPaneLayout", "drawChild: child view " + p1 + " returned null drawing cache");
            v7 = super.drawChild(p0, p1, p2);
            }
            _pc = 3;
            continue _sm;
          case 3:
            p0.restoreToCount(v5);
            return v7;
        }
      }
}

    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams()
    {
      return new android.support.v4.widget.SlidingPaneLayout$LayoutParams();
    }

    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet p0)
    {
      return new android.support.v4.widget.SlidingPaneLayout$LayoutParams(this.getContext(), p0);
    }

    protected android.view.ViewGroup.LayoutParams generateLayoutParams(
            android.view.ViewGroup.LayoutParams p0)
    {
      if ( p0 instanceof android.view.ViewGroup.MarginLayoutParams )
        return new android.support.v4.widget.SlidingPaneLayout$LayoutParams((android.view.ViewGroup.MarginLayoutParams)p0);
      else
        return new android.support.v4.widget.SlidingPaneLayout$LayoutParams(p0);
    }

    public int getCoveredFadeColor()
    {
      return this.mCoveredFadeColor;
    }

    public int getParallaxDistance()
    {
      return this.mParallaxBy;
    }

    public int getSliderFadeColor()
    {
      return this.mSliderFadeColor;
    }

    boolean isDimmed(android.view.View p0)
    {
      android.support.v4.widget.SlidingPaneLayout$LayoutParams v4;
      if ( p0 == null )
        return false;
      v4 = (android.support.v4.widget.SlidingPaneLayout$LayoutParams)p0.getLayoutParams();
      return this.mCanSlide && v4.dimWhenOffset && this.mSlideOffset > 0.0f;
    }

    public boolean isOpen()
    {
      return !this.mCanSlide || this.mSlideOffset == 1.0f;
    }

    public boolean isSlideable()
    {
      return this.mCanSlide;
    }

    protected void onAttachedToWindow()
    {
      super.onAttachedToWindow();
      this.mFirstLayout = true;
    }

    protected void onDetachedFromWindow()
    {
      int v1;
      int i;
      super.onDetachedFromWindow();
      this.mFirstLayout = true;
      v1 = this.mPostedRunnables.size();
      for ( i = 0; i < v1; ++i )
        ((android.support.v4.widget.SlidingPaneLayout$DisableLayerRunnable)this.mPostedRunnables.get(i)).run();
      this.mPostedRunnables.clear();
    }

    public boolean onInterceptTouchEvent(android.view.MotionEvent p0)
    {
      boolean v2 = false;
      int ActionMasked = 0; // RETVAL
      int v4 = 0;
      android.view.View ChildAt = null;
      int v7 = 0;
      float v8 = 0.0f;
      float v9 = 0.0f; // RETVAL
      float v10 = 0.0f;
      float v11 = 0.0f;
      float v12 = 0.0f;
      float v13 = 0.0f;
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
            v4 = ActionMasked;
            if ( !this.mCanSlide && ActionMasked == 0 && this.getChildCount() > 1 )
            {
            ChildAt = this.getChildAt(1);
            if ( ChildAt != null )
            this.mPreservedOpenState = !this.mDragHelper.isViewUnder(ChildAt, (int)p0.getX(), (int)p0.getY());
            }
            if ( !(!this.mCanSlide || this.mIsUnableToDrag && v4 != 0) ) { _pc = 1; continue _sm; }
            {
            this.mDragHelper.cancel();
            return super.onInterceptTouchEvent(p0);
            }
          case 1:
            _sw_1 = (v4);
            if ( (_sw_1 == (0)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (1)) || (_sw_1 == (3)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 4; continue _sm; }
            _pc = 5;
            continue _sm;
          case 2:
            this.mIsUnableToDrag = false;
            v8 = p0.getX();
            v9 = p0.getY();
            this.mInitialMotionX = v8;
            this.mInitialMotionY = v9;
            if ( !this.mDragHelper.isViewUnder(this.mSlideableView, (int)v8, (int)v9) || !this.isDimmed(this.mSlideableView) )
            { _pc = 5; continue _sm; }
            v7 = 1;
            _pc = 6;
            continue _sm;
          case 3:
            this.mDragHelper.cancel();
            _pc = 7;
            continue _sm;
          case 4:
            v10 = p0.getX();
            v11 = p0.getY();
            v12 = Math.abs(v10 - this.mInitialMotionX);
            v13 = Math.abs(v11 - this.mInitialMotionY);
            if ( v12 <= (float)this.mDragHelper.getTouchSlop() || v13 <= v12 )
            { _pc = 5; continue _sm; }
            this.mDragHelper.cancel();
            this.mIsUnableToDrag = true;
            _pc = 7;
            continue _sm;
          case 5:
            v7 = 0;
            _pc = 6;
            continue _sm;
          case 6:
            if ( this.mDragHelper.shouldInterceptTouchEvent(p0) || v7 != 0 )
            v2 = true;
            _pc = 7;
            continue _sm;
          case 7:
            return v2;
        }
      }
}

    protected void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      int v6;
      int PaddingLeft;
      int PaddingRight;
      int PaddingTop;
      int ChildCount;
      float v11;
      int v12;
      int v13;
      android.view.View ChildAt;
      android.support.v4.widget.SlidingPaneLayout$LayoutParams v15;
      int MeasuredWidth;
      int v17;
      int v18;
      int v19; // RETVAL
      int v20;
      int v21;
      int v22;
      int i;
      v6 = p3 - p1;
      PaddingLeft = this.getPaddingLeft();
      PaddingRight = this.getPaddingRight();
      PaddingTop = this.getPaddingTop();
      ChildCount = this.getChildCount();
      if ( this.mFirstLayout )
      {
        if ( this.mCanSlide && this.mPreservedOpenState )
          v11 = 1.0f;
        else
          v11 = 0.0f;
        this.mSlideOffset = v11;
      }
      v12 = 0;
      v13 = PaddingLeft;
      while ( v12 < ChildCount )
      {
        ChildAt = this.getChildAt(v12);
        if ( ChildAt.getVisibility() == 8 )
        {
          v21 = PaddingLeft;
        }
        else
        {
          v15 = (android.support.v4.widget.SlidingPaneLayout$LayoutParams)ChildAt.getLayoutParams();
          MeasuredWidth = ChildAt.getMeasuredWidth();
          v17 = 0;
          if ( v15.slideable )
          {
            v18 = v15.leftMargin + v15.rightMargin;
            v19 = Math.min(v13, v6 - PaddingRight - this.mOverhangSize);
            v20 = v19 - PaddingLeft - v18;
            this.mSlideRange = v20;
            v15.dimWhenOffset = v15.leftMargin + v19 - v18 + MeasuredWidth / 2 > v6 - PaddingRight;
            v21 = v15.leftMargin + (int)((float)v20 * this.mSlideOffset) + PaddingLeft;
          }
          else
          {
            if ( this.mCanSlide && this.mParallaxBy != 0 )
              v22 = (int)((1.0f - this.mSlideOffset) * (float)this.mParallaxBy);
            else
              v22 = 0;
            v17 = v22;
            v21 = v13;
          }
          ChildAt.layout(v21 - v17, PaddingTop, v21 - v17 + MeasuredWidth, ChildAt.getMeasuredHeight() + PaddingTop);
          v13 += ChildAt.getWidth();
        }
        ++v12;
        PaddingLeft = v21;
      }
      if ( this.mFirstLayout )
      {
        if ( this.mCanSlide )
        {
          if ( this.mParallaxBy != 0 )
            this.parallaxOtherViews(this.mSlideOffset);
          if ( ((android.support.v4.widget.SlidingPaneLayout$LayoutParams)this.mSlideableView.getLayoutParams()).dimWhenOffset )
            this.dimChildView(this.mSlideableView, this.mSlideOffset, this.mSliderFadeColor);
        }
        else
        {
          for ( i = 0; i < ChildCount; ++i )
            this.dimChildView(this.getChildAt(i), 0.0f, this.mSliderFadeColor);
        }
        this.updateObscuredViewsVisibility(this.mSlideableView);
      }
      this.mFirstLayout = false;
    }

    protected void onMeasure(int p0, int p1)
    {
      int Mode = 0;
      int Size = 0;
      int v5 = 0;
      int v6 = 0;
      int v7 = 0;
      int v8 = 0;
      int v9 = 0;
      int v10 = 0;
      int v11 = 0;
      boolean v12 = false;
      int v13 = 0;
      int ChildCount = 0;
      int v15 = 0;
      int v16 = 0;
      float v17 = 0.0f;
      android.view.View ChildAt = null;
      android.support.v4.widget.SlidingPaneLayout$LayoutParams v19 = null;
      int v20 = 0;
      int v21 = 0;
      float v22 = 0.0f;
      int v23 = 0;
      int v24 = 0;
      int MeasureSpec = 0;
      int v26 = 0;
      int MeasuredWidth = 0;
      int MeasuredHeight = 0; // RETVAL
      int v29 = 0;
      boolean v30 = false;
      int v31 = 0;
      int v32 = 0;
      int i = 0;
      android.view.View v34 = null;
      android.support.v4.widget.SlidingPaneLayout$LayoutParams v35 = null;
      boolean v36 = false;
      int v37 = 0;
      int v38 = 0;
      int v39 = 0;
      int v40 = 0;
      int v41 = 0; // RETVAL
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            Mode = View.MeasureSpec.getMode(p0);
            Size = View.MeasureSpec.getSize(p0);
            v5 = View.MeasureSpec.getMode(p1);
            v6 = View.MeasureSpec.getSize(p1);
            if ( Mode != 0x40000000 )
            {
            if ( !this.isInEditMode() )
            throw new IllegalStateException("Width must have an exact value or MATCH_PARENT");
            if ( Mode == 0 )
            {
            v7 = v5;
            v8 = 300;
            v9 = v6;
            { _pc = 3; continue _sm; }
            }
            { _pc = 1; continue _sm; }
            }
            if ( !(v5 != 0) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            v7 = v5;
            v8 = Size;
            v9 = v6;
            _pc = 3;
            continue _sm;
          case 2:
            if ( !this.isInEditMode() )
            throw new IllegalStateException("Height must not be UNSPECIFIED");
            v7 = 0x80000000;
            v8 = Size;
            v9 = 300;
            _pc = 3;
            continue _sm;
          case 3:
            switch ( v7 )
            {
            case 0x80000000:
            v10 = 0;
            v11 = v9 - this.getPaddingTop() - this.getPaddingBottom();
            break;
            case 0x40000000:
            v10 = v9 - this.getPaddingTop() - this.getPaddingBottom();
            v11 = v10;
            break;
            default:
            v10 = 0;
            v11 = -1;
            break;
            }
            v12 = false;
            v13 = v8 - this.getPaddingLeft() - this.getPaddingRight();
            ChildCount = this.getChildCount();
            if ( ChildCount > 2 )
            Log.e("SlidingPaneLayout", "onMeasure: More than two child views are not supported.");
            this.mSlideableView = null;
            v15 = 0;
            v16 = v10;
            v17 = 0.0f;
            while ( v15 < ChildCount )
            {
            ChildAt = this.getChildAt(v15);
            v19 = (android.support.v4.widget.SlidingPaneLayout$LayoutParams)ChildAt.getLayoutParams();
            if ( ChildAt.getVisibility() == 8 )
            {
            v19.dimWhenOffset = false;
            v20 = v13;
            v21 = v16;
            v22 = v17;
            v23 = v12 ? 1 : 0;
            }
            else if ( v19.weight <= 0.0f || (com.gameloft.android.DecompRT.comma((v17 = v17 + v19.weight), (v19.width != 0))) )
            {
            v24 = v19.leftMargin + v19.rightMargin;
            if ( v19.width == -2 )
            {
            MeasureSpec = View.MeasureSpec.makeMeasureSpec(v8 - v24, 0x80000000);
            }
            else if ( v19.width == -1 )
            {
            MeasureSpec = View.MeasureSpec.makeMeasureSpec(v8 - v24, 0x40000000);
            }
            else
            {
            MeasureSpec = View.MeasureSpec.makeMeasureSpec(v19.width, 0x40000000);
            }
            if ( v19.height == -2 )
            {
            v26 = View.MeasureSpec.makeMeasureSpec(v11, 0x80000000);
            }
            else if ( v19.height == -1 )
            {
            v26 = View.MeasureSpec.makeMeasureSpec(v11, 0x40000000);
            }
            else
            {
            v26 = View.MeasureSpec.makeMeasureSpec(v19.height, 0x40000000);
            }
            ChildAt.measure(MeasureSpec, v26);
            MeasuredWidth = ChildAt.getMeasuredWidth();
            MeasuredHeight = ChildAt.getMeasuredHeight();
            if ( v7 == 0x80000000 && MeasuredHeight > v16 )
            v16 = Math.min(MeasuredHeight, v11);
            v29 = v13 - MeasuredWidth;
            v30 = v13 - MeasuredWidth < 0;
            v19.slideable = v30;
            v31 = v30 || v12 ? 1 : 0;
            if ( v19.slideable )
            this.mSlideableView = ChildAt;
            v20 = v29;
            v22 = v17;
            v23 = v31;
            v21 = v16;
            }
            else
            {
            v20 = v13;
            v21 = v16;
            v22 = v17;
            v23 = v12 ? 1 : 0;
            }
            ++v15;
            v12 = v23 != 0;
            v16 = v21;
            v13 = v20;
            v17 = v22;
            }
            if ( v12 || v17 > 0.0f )
            {
            v32 = v8 - this.mOverhangSize;
            for ( i = 0; i < ChildCount; ++i )
            {
            v34 = this.getChildAt(i);
            if ( v34.getVisibility() != 8 )
            {
            v35 = (android.support.v4.widget.SlidingPaneLayout$LayoutParams)v34.getLayoutParams();
            if ( v34.getVisibility() != 8 )
            {
            v36 = v35.width == 0 && v35.weight > 0.0f;
            if ( v36 )
            v37 = 0;
            else
            v37 = v34.getMeasuredWidth();
            if ( !v12 || v34 == this.mSlideableView )
            {
            if ( v35.weight > 0.0f )
            {
            if ( v35.width != 0 )
            {
            v39 = View.MeasureSpec.makeMeasureSpec(v34.getMeasuredHeight(), 0x40000000);
            }
            else if ( v35.height == -2 )
            {
            v39 = View.MeasureSpec.makeMeasureSpec(v11, 0x80000000);
            }
            else if ( v35.height == -1 )
            {
            v39 = View.MeasureSpec.makeMeasureSpec(v11, 0x40000000);
            }
            else
            {
            v39 = View.MeasureSpec.makeMeasureSpec(v35.height, 0x40000000);
            }
            if ( v12 )
            {
            v40 = v8 - (v35.rightMargin + v35.leftMargin);
            v41 = View.MeasureSpec.makeMeasureSpec(v40, 0x40000000);
            if ( v37 != v40 )
            v34.measure(v41, v39);
            }
            else
            {
            v34.measure(View.MeasureSpec.makeMeasureSpec(
            (int)(v35.weight * (float)Math.max(0, v13) / v17) + v37,
            0x40000000), v39);
            }
            }
            }
            else if ( v35.width < 0 && (v37 > v32 || v35.weight > 0.0f) )
            {
            if ( v36 )
            {
            if ( v35.height == -2 )
            {
            v38 = View.MeasureSpec.makeMeasureSpec(v11, 0x80000000);
            }
            else if ( v35.height == -1 )
            {
            v38 = View.MeasureSpec.makeMeasureSpec(v11, 0x40000000);
            }
            else
            {
            v38 = View.MeasureSpec.makeMeasureSpec(v35.height, 0x40000000);
            }
            }
            else
            {
            v38 = View.MeasureSpec.makeMeasureSpec(v34.getMeasuredHeight(), 0x40000000);
            }
            v34.measure(View.MeasureSpec.makeMeasureSpec(v32, 0x40000000), v38);
            }
            }
            }
            }
            }
            this.setMeasuredDimension(v8, v16);
            this.mCanSlide = v12;
            if ( this.mDragHelper.getViewDragState() != 0 && !v12 )
            this.mDragHelper.abort();
            return;
        }
      }
}

    protected void onRestoreInstanceState(android.os.Parcelable p0)
    {
      android.support.v4.widget.SlidingPaneLayout$SavedState v2;
      v2 = (android.support.v4.widget.SlidingPaneLayout$SavedState)p0;
      super.onRestoreInstanceState(v2.getSuperState());
      if ( v2.isOpen )
        this.openPane();
      else
        this.closePane();
      this.mPreservedOpenState = v2.isOpen;
    }

    protected android.os.Parcelable onSaveInstanceState()
    {
      android.support.v4.widget.SlidingPaneLayout$SavedState v1;
      boolean mPreservedOpenState;
      v1 = new android.support.v4.widget.SlidingPaneLayout$SavedState(super.onSaveInstanceState());
      if ( this.isSlideable() )
        mPreservedOpenState = this.isOpen();
      else
        mPreservedOpenState = this.mPreservedOpenState;
      v1.isOpen = mPreservedOpenState;
      return v1;
    }

    protected void onSizeChanged(int p0, int p1, int p2, int p3)
    {
      super.onSizeChanged(p0, p1, p2, p3);
      if ( p0 != p2 )
        this.mFirstLayout = true;
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      float v4;
      float v5;
      float mInitialMotionX;
      float v7;
      int TouchSlop; // RETVAL
    
      if ( !this.mCanSlide )
        return super.onTouchEvent(p0);
      this.mDragHelper.processTouchEvent(p0);
      switch ( p0.getAction() & 0xFF )
      {
        case 0:
          this.mInitialMotionX = p0.getX();
          this.mInitialMotionY = p0.getY();
          break;
        case 1:
          if ( this.isDimmed(this.mSlideableView) )
          {
            v4 = p0.getX();
            v5 = p0.getY();
            mInitialMotionX = this.mInitialMotionX;
            v7 = v5 - this.mInitialMotionY;
            TouchSlop = this.mDragHelper.getTouchSlop();
            if ( (v4 - mInitialMotionX) * (v4 - mInitialMotionX) + v7 * v7 < (float)(TouchSlop * TouchSlop)
              && this.mDragHelper.isViewUnder(this.mSlideableView, (int)v4, (int)v5) )
            {
              this.closePane(this.mSlideableView, 0);
            }
          }
          break;
        default:
          return true;
      }
      return true;
    }

    public boolean openPane()
    {
      return this.openPane(this.mSlideableView, 0);
    }

    public void requestChildFocus(android.view.View p0, android.view.View p1)
    {
      super.requestChildFocus(p0, p1);
      if ( !this.isInTouchMode() && !this.mCanSlide )
        this.mPreservedOpenState = p0 == this.mSlideableView;
    }

    void setAllChildrenVisible()
    {
      int ChildCount;
      int i;
      android.view.View ChildAt;
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( ChildAt.getVisibility() == 4 )
          ChildAt.setVisibility(0);
      }
    }

    public void setCoveredFadeColor(int p0)
    {
      this.mCoveredFadeColor = p0;
    }

    public void setPanelSlideListener(android.support.v4.widget.SlidingPaneLayout$PanelSlideListener p0)
    {
      this.mPanelSlideListener = p0;
    }

    public void setParallaxDistance(int p0)
    {
      this.mParallaxBy = p0;
      this.requestLayout();
    }

    public void setShadowDrawable(android.graphics.drawable.Drawable p0)
    {
      this.mShadowDrawable = p0;
    }

    public void setShadowResource(int p0)
    {
      this.setShadowDrawable(this.getResources().getDrawable(p0));
    }

    public void setSliderFadeColor(int p0)
    {
      this.mSliderFadeColor = p0;
    }

    public void smoothSlideClosed()
    {
      this.closePane();
    }

    public void smoothSlideOpen()
    {
      this.openPane();
    }

    boolean smoothSlideTo(float p0, int p1)
    {
      if ( !this.mCanSlide )
        return false;
      if ( !this.mDragHelper.smoothSlideViewTo(this.mSlideableView, (int)((float)(((android.support.v4.widget.SlidingPaneLayout$LayoutParams)this.mSlideableView.getLayoutParams()).leftMargin
                                                                                + this.getPaddingLeft())
                                                                        + (float)this.mSlideRange * p0), this.mSlideableView.getTop()) )
        return false;
      this.setAllChildrenVisible();
      ViewCompat.postInvalidateOnAnimation(this);
      return true;
    }

    void updateObscuredViewsVisibility(android.view.View p0)
    {
      int PaddingLeft;
      int v3;
      int PaddingTop;
      int v5;
      int Left;
      int Right;
      int Top;
      int Bottom;
      int ChildCount;
      int i;
      android.view.View ChildAt; // RETVAL
      android.view.View v13;
      int v14;
      int v15;
      int v16;
      int v17; // RETVAL
      int v18;
      PaddingLeft = this.getPaddingLeft();
      v3 = this.getWidth() - this.getPaddingRight();
      PaddingTop = this.getPaddingTop();
      v5 = this.getHeight() - this.getPaddingBottom();
      if ( p0 != null && viewIsOpaque(p0) )
      {
        Left = p0.getLeft();
        Right = p0.getRight();
        Top = p0.getTop();
        Bottom = p0.getBottom();
      }
      else
      {
        Bottom = 0;
        Top = 0;
        Right = 0;
        Left = 0;
      }
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        v13 = ChildAt;
        if ( ChildAt == p0 )
          break;
        v14 = Math.max(PaddingLeft, ChildAt.getLeft());
        v15 = Math.max(PaddingTop, v13.getTop());
        v16 = Math.min(v3, v13.getRight());
        v17 = Math.min(v5, v13.getBottom());
        if ( v14 < Left || v15 < Top || v16 > Right || v17 > Bottom )
          v18 = 0;
        else
          v18 = 4;
        v13.setVisibility((int)v18);
      }
    }

}
