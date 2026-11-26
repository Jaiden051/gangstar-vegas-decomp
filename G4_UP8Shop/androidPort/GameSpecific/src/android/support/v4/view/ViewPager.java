// Decompiled from classes.dex (SourceFile: ViewPager.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.os.Build;
import android.os.SystemClock;
import android.util.Log;
import android.view.FocusFinder;
import android.view.MotionEvent;
import android.view.SoundEffectConstants;
import android.view.VelocityTracker;
import android.view.View;
import android.view.ViewConfiguration;
import java.util.Collections;
public class ViewPager extends android.view.ViewGroup {
    // Fields
    private static int CLOSE_ENOUGH;
    private static final java.util.Comparator COMPARATOR;
    private static boolean DEBUG;
    private static int DEFAULT_GUTTER_SIZE;
    private static int DEFAULT_OFFSCREEN_PAGES;
    private static int DRAW_ORDER_DEFAULT;
    private static int DRAW_ORDER_FORWARD;
    private static int DRAW_ORDER_REVERSE;
    private static int INVALID_POINTER;
    private static final int[] LAYOUT_ATTRS;
    private static int MAX_SETTLE_DURATION;
    private static int MIN_DISTANCE_FOR_FLING;
    private static int MIN_FLING_VELOCITY;
    public static int SCROLL_STATE_DRAGGING;
    public static int SCROLL_STATE_IDLE;
    public static int SCROLL_STATE_SETTLING;
    private static java.lang.String TAG;
    private static boolean USE_CACHE;
    private static final android.view.animation.Interpolator sInterpolator;
    private static final android.support.v4.view.ViewPager$ViewPositionComparator sPositionComparator;
    private int mActivePointerId;
    private android.support.v4.view.PagerAdapter mAdapter;
    private android.support.v4.view.ViewPager$OnAdapterChangeListener mAdapterChangeListener;
    private int mBottomPageBounds;
    private boolean mCalledSuper;
    private int mChildHeightMeasureSpec;
    private int mChildWidthMeasureSpec;
    private int mCloseEnough;
    private int mCurItem;
    private int mDecorChildCount;
    private int mDefaultGutterSize;
    private int mDrawingOrder;
    private java.util.ArrayList mDrawingOrderedChildren;
    private final java.lang.Runnable mEndScrollRunnable;
    private int mExpectedAdapterCount;
    private long mFakeDragBeginTime;
    private boolean mFakeDragging;
    private boolean mFirstLayout;
    private float mFirstOffset;
    private int mFlingDistance;
    private int mGutterSize;
    private boolean mIgnoreGutter;
    private boolean mInLayout;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private android.support.v4.view.ViewPager$OnPageChangeListener mInternalPageChangeListener;
    private boolean mIsBeingDragged;
    private boolean mIsUnableToDrag;
    private final java.util.ArrayList mItems;
    private float mLastMotionX;
    private float mLastMotionY;
    private float mLastOffset;
    private android.support.v4.widget.EdgeEffectCompat mLeftEdge;
    private android.graphics.drawable.Drawable mMarginDrawable;
    private int mMaximumVelocity;
    private int mMinimumVelocity;
    private boolean mNeedCalculatePageOffsets;
    private android.support.v4.view.ViewPager$PagerObserver mObserver;
    private int mOffscreenPageLimit;
    private android.support.v4.view.ViewPager$OnPageChangeListener mOnPageChangeListener;
    private int mPageMargin;
    private android.support.v4.view.ViewPager$PageTransformer mPageTransformer;
    private boolean mPopulatePending;
    private android.os.Parcelable mRestoredAdapterState;
    private java.lang.ClassLoader mRestoredClassLoader;
    private int mRestoredCurItem;
    private android.support.v4.widget.EdgeEffectCompat mRightEdge;
    private int mScrollState;
    private android.widget.Scroller mScroller;
    private boolean mScrollingCacheEnabled;
    private java.lang.reflect.Method mSetChildrenDrawingOrderEnabled;
    private final android.support.v4.view.ViewPager$ItemInfo mTempItem;
    private final android.graphics.Rect mTempRect;
    private int mTopPageBounds;
    private int mTouchSlop;
    private android.view.VelocityTracker mVelocityTracker;

    // Methods
    static
    {
      int[] v0;
      v0 = new int[1];
      v0[0] = 16842931;
      LAYOUT_ATTRS = (int[])v0;
      COMPARATOR = (java.util.Comparator)new android.support.v4.view.ViewPager$1();
      sInterpolator = (android.view.animation.Interpolator)new android.support.v4.view.ViewPager$2();
      sPositionComparator = new android.support.v4.view.ViewPager$ViewPositionComparator();
    }

    public ViewPager(android.content.Context p0)
    {
      super(p0);
      this.mItems = new java.util.ArrayList();
      this.mTempItem = new android.support.v4.view.ViewPager$ItemInfo();
      this.mTempRect = new android.graphics.Rect();
      this.mRestoredCurItem = -1;
      this.mRestoredAdapterState = null;
      this.mRestoredClassLoader = null;
      this.mFirstOffset = -3.4028235e38f;
      this.mLastOffset = 3.4028235e38f;
      this.mOffscreenPageLimit = 1;
      this.mActivePointerId = -1;
      this.mFirstLayout = true;
      this.mNeedCalculatePageOffsets = false;
      this.mEndScrollRunnable = (Runnable)new android.support.v4.view.ViewPager$3(this);
      this.mScrollState = 0;
      this.initViewPager();
    }

    public ViewPager(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      this.mItems = new java.util.ArrayList();
      this.mTempItem = new android.support.v4.view.ViewPager$ItemInfo();
      this.mTempRect = new android.graphics.Rect();
      this.mRestoredCurItem = -1;
      this.mRestoredAdapterState = null;
      this.mRestoredClassLoader = null;
      this.mFirstOffset = -3.4028235e38f;
      this.mLastOffset = 3.4028235e38f;
      this.mOffscreenPageLimit = 1;
      this.mActivePointerId = -1;
      this.mFirstLayout = true;
      this.mNeedCalculatePageOffsets = false;
      this.mEndScrollRunnable = (Runnable)new android.support.v4.view.ViewPager$3(this);
      this.mScrollState = 0;
      this.initViewPager();
    }

    /* synthetic */ static void access$000(android.support.v4.view.ViewPager p0, int p1)
    {
      p0.setScrollState(p1);
    }

    /* synthetic */ static android.support.v4.view.PagerAdapter access$200(android.support.v4.view.ViewPager p0)
    {
      return p0.mAdapter;
    }

    /* synthetic */ static int access$300(android.support.v4.view.ViewPager p0)
    {
      return p0.mCurItem;
    }

    /* synthetic */ static int[] access$400()
    {
      return LAYOUT_ATTRS;
    }

    private void calculatePageOffsets(
            android.support.v4.view.ViewPager$ItemInfo p0,
            int p1,
            android.support.v4.view.ViewPager$ItemInfo p2)
    {
      int Count;
      int ClientWidth; // RETVAL
      float v6;
      int position;
      float v8;
      int v9;
      int v10;
      android.support.v4.view.ViewPager$ItemInfo k;
      int v12;
      float offset;
      int i;
      android.support.v4.view.ViewPager$ItemInfo j;
      int v16;
      float v17;
      int v18;
      float v19;
      float v20;
      int m;
      android.support.v4.view.ViewPager$ItemInfo v22;
      float v23;
      float v24;
      int v25;
      int n;
      android.support.v4.view.ViewPager$ItemInfo v27;
      float v28;
      Count = this.mAdapter.getCount();
      ClientWidth = this.getClientWidth();
      if ( ClientWidth <= 0 )
        v6 = 0.0f;
      else
        v6 = (float)this.mPageMargin / (float)ClientWidth;
      if ( p2 != null )
      {
        position = p2.position;
        if ( position >= p0.position )
        {
          if ( position > p0.position )
          {
            v12 = this.mItems.size() - 1;
            offset = p2.offset;
            for ( i = position - 1; i >= p0.position && v12 >= 0; --i )
            {
              for ( j = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v12);
                    i < j.position && v12 > 0;
                    j = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v12) )
              {
                --v12;
              }
              while ( i > j.position )
                offset = offset - (this.mAdapter.getPageWidth(i--) + v6);
              offset = offset - (j.widthFactor + v6);
              j.offset = offset;
            }
          }
        }
        else
        {
          v8 = p2.offset + p2.widthFactor + v6;
          v9 = position + 1;
          v10 = 0;
          while ( v9 <= p0.position && v10 < this.mItems.size() )
          {
            for ( k = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v10);
                  v9 > k.position && v10 < this.mItems.size() - 1;
                  k = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v10) )
            {
              ++v10;
            }
            while ( v9 < k.position )
              v8 = this.mAdapter.getPageWidth(v9++) + v6 + v8;
            k.offset = v8;
            v8 = k.widthFactor + v6 + v8;
            ++v9;
          }
        }
      }
      v16 = this.mItems.size();
      v17 = p0.offset;
      v18 = p0.position - 1;
      if ( p0.position != 0 )
        v19 = -3.4028235e38f;
      else
        v19 = p0.offset;
      this.mFirstOffset = v19;
      if ( p0.position == Count - 1 )
        v20 = p0.offset + p0.widthFactor - 1.0f;
      else
        v20 = 3.4028235e38f;
      this.mLastOffset = v20;
      for ( m = p1 - 1; m >= 0; --m )
      {
        v22 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(m);
        v23 = v17;
        while ( v18 > v22.position )
          v23 = v23 - (this.mAdapter.getPageWidth(v18--) + v6);
        v17 = v23 - (v22.widthFactor + v6);
        v22.offset = v17;
        if ( v22.position == 0 )
          this.mFirstOffset = v17;
        --v18;
      }
      v24 = p0.offset + p0.widthFactor + v6;
      v25 = p0.position + 1;
      for ( n = p1 + 1; n < v16; ++n )
      {
        v27 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(n);
        v28 = v24;
        while ( v25 < v27.position )
          v28 = this.mAdapter.getPageWidth(v25++) + v6 + v28;
        if ( v27.position == Count - 1 )
          this.mLastOffset = v27.widthFactor + v28 - 1.0f;
        v27.offset = v28;
        v24 = v27.widthFactor + v6 + v28;
        ++v25;
      }
      this.mNeedCalculatePageOffsets = false;
    }

    private void completeScroll(boolean p0)
    {
      boolean v2;
      int ScrollX;
      int ScrollY;
      int CurrX;
      int CurrY; // RETVAL
      int v7;
      int v8;
      android.support.v4.view.ViewPager$ItemInfo v9;
      v2 = this.mScrollState == 2;
      if ( v2 )
      {
        this.setScrollingCacheEnabled(false);
        this.mScroller.abortAnimation();
        ScrollX = this.getScrollX();
        ScrollY = this.getScrollY();
        CurrX = this.mScroller.getCurrX();
        CurrY = this.mScroller.getCurrY();
        if ( ScrollX != CurrX || ScrollY != CurrY )
          this.scrollTo(CurrX, CurrY);
      }
      this.mPopulatePending = false;
      v7 = 0;
      v8 = v2 ? 1 : 0;
      while ( v7 < this.mItems.size() )
      {
        v9 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v7);
        if ( v9.scrolling )
        {
          v9.scrolling = false;
          v8 = 1;
        }
        ++v7;
      }
      if ( v8 != 0 )
      {
        if ( p0 )
          ViewCompat.postOnAnimation(this, this.mEndScrollRunnable);
        else
          this.mEndScrollRunnable.run();
      }
    }

    private int determineTargetPage(int p0, float p1, int p2, int p3)
    {
      float v6;
      if ( Math.abs(p3) <= this.mFlingDistance || Math.abs(p2) <= this.mMinimumVelocity )
      {
        if ( p0 < this.mCurItem )
          v6 = 0.6f;
        else
          v6 = 0.4f;
        p0 = (int)((float)p0 + p1 + v6);
      }
      else if ( p2 <= 0 )
      {
        ++p0;
      }
      if ( this.mItems.size() > 0 )
        return Math.max(
                 ((android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(0)).position,
                 Math.min(
                   p0,
                   ((android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(this.mItems.size() - 1)).position));
      return p0;
    }

    private void enableLayers(boolean p0)
    {
      int ChildCount;
      int i;
      int v4;
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        if ( p0 )
          v4 = 2;
        else
          v4 = 0;
        ViewCompat.setLayerType(this.getChildAt(i), v4, null);
      }
    }

    private void endDrag()
    {
      this.mIsBeingDragged = false;
      this.mIsUnableToDrag = false;
      if ( this.mVelocityTracker != null )
      {
        this.mVelocityTracker.recycle();
        this.mVelocityTracker = null;
      }
    }

    private android.graphics.Rect getChildRectInPagerCoordinates(android.graphics.Rect p0, android.view.View p1)
    {
      android.graphics.Rect v3;
      android.view.ViewParent i;
      android.view.ViewGroup v7;
      if ( p0 != null )
        v3 = p0;
      else
        v3 = new android.graphics.Rect();
      if ( p1 != null )
      {
        v3.left = p1.getLeft();
        v3.right = p1.getRight();
        v3.top = p1.getTop();
        v3.bottom = p1.getBottom();
        for ( i = p1.getParent(); i instanceof android.view.ViewGroup && i != this; i = v7.getParent() )
        {
          v7 = (android.view.ViewGroup)i;
          v3.left = v3.left + v7.getLeft();
          v3.right = v3.right + v7.getRight();
          v3.top = v3.top + v7.getTop();
          v3.bottom += v7.getBottom();
        }
        return v3;
      }
      else
      {
        v3.set(0, 0, 0, 0);
        return v3;
      }
    }

    private int getClientWidth()
    {
      return this.getMeasuredWidth() - this.getPaddingLeft() - this.getPaddingRight();
    }

    private android.support.v4.view.ViewPager$ItemInfo infoForCurrentScrollPosition()
    {
      int ClientWidth;
      float v2;
      float v3;
      float widthFactor;
      float v5;
      int position;
      int v7;
      int v8;
      android.support.v4.view.ViewPager$ItemInfo v9;
      android.support.v4.view.ViewPager$ItemInfo v10;
      android.support.v4.view.ViewPager$ItemInfo mTempItem;
      android.support.v4.view.ViewPager$ItemInfo v12;
      int v13;
      android.support.v4.view.ViewPager$ItemInfo v14;
      float offset;
      float v16;
      android.support.v4.view.ViewPager$ItemInfo v18;
      ClientWidth = this.getClientWidth();
      if ( ClientWidth <= 0 )
        v2 = 0.0f;
      else
        v2 = (float)this.getScrollX() / (float)ClientWidth;
      if ( ClientWidth <= 0 )
        v3 = 0.0f;
      else
        v3 = (float)this.mPageMargin / (float)ClientWidth;
      widthFactor = 0.0f;
      v5 = 0.0f;
      position = -1;
      v7 = 0;
      v8 = 1;
      v9 = null;
      while ( v7 < this.mItems.size() )
      {
        v10 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v7);
        if ( v8 != 0 || v10.position == position + 1 )
        {
          v18 = v10;
          v13 = v7;
          v14 = v18;
        }
        else
        {
          mTempItem = this.mTempItem;
          mTempItem.offset = widthFactor + v5 + v3;
          mTempItem.position = position + 1;
          mTempItem.widthFactor = this.mAdapter.getPageWidth(mTempItem.position);
          v12 = mTempItem;
          v13 = v7 - 1;
          v14 = v12;
        }
        offset = v14.offset;
        v16 = v14.widthFactor + offset + v3;
        if ( v8 == 0 && v2 < offset )
          break;
        if ( v2 < v16 || v13 == this.mItems.size() - 1 )
          return v14;
        v5 = offset;
        position = v14.position;
        v8 = 0;
        widthFactor = v14.widthFactor;
        v9 = v14;
        v7 = v13 + 1;
      }
      return v9;
    }

    private boolean isGutterDrag(float p0, float p1)
    {
      return p0 < (float)this.mGutterSize && p1 > 0.0f || p0 > (float)(this.getWidth() - this.mGutterSize) && p1 < 0.0f;
    }

    private void onSecondaryPointerUp(android.view.MotionEvent p0)
    {
      int ActionIndex;
      boolean v3;
      ActionIndex = MotionEventCompat.getActionIndex(p0);
      if ( MotionEventCompat.getPointerId(p0, ActionIndex) == this.mActivePointerId )
      {
        v3 = ActionIndex == 0;
        this.mLastMotionX = MotionEventCompat.getX(p0, v3 ? 1 : 0);
        this.mActivePointerId = MotionEventCompat.getPointerId(p0, v3 ? 1 : 0);
        if ( this.mVelocityTracker != null )
          this.mVelocityTracker.clear();
      }
    }

    private boolean pageScrolled(int p0)
    {
      boolean v2;
      android.support.v4.view.ViewPager$ItemInfo v3;
      int ClientWidth; // RETVAL
      int position;
      float v6;
      v2 = false;
      if ( this.mItems.size() != 0 )
      {
        v3 = this.infoForCurrentScrollPosition();
        ClientWidth = this.getClientWidth();
        position = v3.position;
        v6 = ((float)p0 / (float)ClientWidth - v3.offset) / (v3.widthFactor + (float)this.mPageMargin / (float)ClientWidth);
        this.mCalledSuper = false;
        this.onPageScrolled(position, v6, (int)((float)(this.mPageMargin + ClientWidth) * v6));
        if ( !this.mCalledSuper )
          throw new IllegalStateException("onPageScrolled did not call superclass implementation");
        return true;
      }
      else
      {
        this.mCalledSuper = false;
        this.onPageScrolled(0, 0.0f, 0);
        if ( !this.mCalledSuper )
          throw new IllegalStateException("onPageScrolled did not call superclass implementation");
      }
      return v2;
    }

    private boolean performDrag(float p0)
    {
      int v2;
      boolean v3;
      float v4;
      int ClientWidth;
      float v6;
      float v7;
      android.support.v4.view.ViewPager$ItemInfo v8;
      android.support.v4.view.ViewPager$ItemInfo v9;
      int v10;
      float v11;
      v2 = 1;
      v3 = false;
      this.mLastMotionX = p0;
      v4 = this.mLastMotionX - p0 + (float)this.getScrollX();
      ClientWidth = this.getClientWidth();
      v6 = (float)ClientWidth * this.mFirstOffset;
      v7 = (float)ClientWidth * this.mLastOffset;
      v8 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(0);
      v9 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(this.mItems.size() - 1);
      if ( v8.position != 0 )
      {
        v6 = v8.offset * (float)ClientWidth;
        v10 = 0;
      }
      else
      {
        v10 = 1;
      }
      if ( v9.position == this.mAdapter.getCount() - 1 )
      {
        v11 = v7;
      }
      else
      {
        v11 = v9.offset * (float)ClientWidth;
        v2 = 0;
      }
      if ( v4 >= v6 )
      {
        if ( v4 <= v11 )
        {
          v6 = v4;
        }
        else
        {
          if ( v2 != 0 )
            v3 = this.mRightEdge.onPull(Math.abs(v4 - v11) / (float)ClientWidth);
          v6 = v11;
        }
      }
      else if ( v10 != 0 )
      {
        v3 = this.mLeftEdge.onPull(Math.abs(v6 - v4) / (float)ClientWidth);
      }
      this.mLastMotionX = v6 - (float)(int)v6 + this.mLastMotionX;
      this.scrollTo((int)v6, this.getScrollY());
      this.pageScrolled((int)v6);
      return v3;
    }

    private void recomputeScrollPosition(int p0, int p1, int p2, int p3)
    {
      int v5;
      android.support.v4.view.ViewPager$ItemInfo v6; // RETVAL
      float v7;
      int v8;
      if ( p1 <= 0 || this.mItems.isEmpty() )
      {
        v6 = this.infoForPosition(this.mCurItem);
        if ( v6 != null )
          v7 = Math.min(v6.offset, this.mLastOffset);
        else
          v7 = 0.0f;
        v8 = (int)(v7 * (float)(p0 - this.getPaddingLeft() - this.getPaddingRight()));
        if ( v8 != this.getScrollX() )
        {
          this.completeScroll(false);
          this.scrollTo(v8, this.getScrollY());
        }
      }
      else
      {
        v5 = (int)((float)(p0 - this.getPaddingLeft() - this.getPaddingRight() + p2)
                 * ((float)this.getScrollX()
                  / (float)(p1 - this.getPaddingLeft() - this.getPaddingRight() + p3)));
        this.scrollTo(v5, this.getScrollY());
        if ( !this.mScroller.isFinished() )
          this.mScroller.startScroll(v5, 0, (int)(this.infoForPosition(this.mCurItem).offset * (float)p0), 0, this.mScroller.getDuration() - this.mScroller.timePassed());
      }
    }

    private void removeNonDecorViews()
    {
      int i;
      for ( i = 0; i < this.getChildCount(); ++i )
      {
        if ( !((android.support.v4.view.ViewPager$LayoutParams)this.getChildAt(i).getLayoutParams()).isDecor )
          this.removeViewAt(i--);
      }
    }

    private void requestParentDisallowInterceptTouchEvent(boolean p0)
    {
      android.view.ViewParent Parent; // RETVAL
    
      Parent = this.getParent();
      if ( Parent != null )
        Parent.requestDisallowInterceptTouchEvent(p0);
    }

    private void scrollToItem(int p0, boolean p1, int p2, boolean p3)
    {
      android.support.v4.view.ViewPager$ItemInfo v5;
      int v6;
      v5 = this.infoForPosition(p0);
      if ( v5 != null )
        v6 = (int)(Math.max(this.mFirstOffset, Math.min(v5.offset, this.mLastOffset)) * (float)this.getClientWidth());
      else
        v6 = 0;
      if ( p1 )
      {
        this.smoothScrollTo(v6, 0, p2);
        if ( p3 && this.mOnPageChangeListener != null )
          this.mOnPageChangeListener.onPageSelected(p0);
        if ( p3 && this.mInternalPageChangeListener != null )
          this.mInternalPageChangeListener.onPageSelected(p0);
      }
      else
      {
        if ( p3 && this.mOnPageChangeListener != null )
          this.mOnPageChangeListener.onPageSelected(p0);
        if ( p3 && this.mInternalPageChangeListener != null )
          this.mInternalPageChangeListener.onPageSelected(p0);
        this.completeScroll(false);
        this.scrollTo(v6, 0);
        this.pageScrolled(v6);
      }
    }

    private void setScrollState(int p0)
    {
      if ( this.mScrollState != p0 )
      {
        this.mScrollState = p0;
        if ( this.mPageTransformer != null )
          this.enableLayers(p0 != 0);
        if ( this.mOnPageChangeListener != null )
          this.mOnPageChangeListener.onPageScrollStateChanged(p0);
      }
    }

    private void setScrollingCacheEnabled(boolean p0)
    {
      if ( this.mScrollingCacheEnabled != p0 )
        this.mScrollingCacheEnabled = p0;
    }

    private void sortChildDrawingOrder()
    {
      int ChildCount;
      int i;
      if ( this.mDrawingOrder != 0 )
      {
        if ( this.mDrawingOrderedChildren != null )
          this.mDrawingOrderedChildren.clear();
        else
          this.mDrawingOrderedChildren = new java.util.ArrayList();
        ChildCount = this.getChildCount();
        for ( i = 0; i < ChildCount; ++i )
          this.mDrawingOrderedChildren.add(this.getChildAt(i));
        Collections.sort(this.mDrawingOrderedChildren, (java.util.Comparator)sPositionComparator);
      }
    }

    public void addFocusables(java.util.ArrayList<android.view.View> p0, int p1, int p2)
    {
      int v4;
      int DescendantFocusability;
      int i;
      android.view.View ChildAt;
      android.support.v4.view.ViewPager$ItemInfo v8; // RETVAL
    
      v4 = p0.size();
      DescendantFocusability = this.getDescendantFocusability();
      if ( DescendantFocusability != 393216 )
      {
        for ( i = 0; i < this.getChildCount(); ++i )
        {
          ChildAt = this.getChildAt(i);
          if ( ChildAt.getVisibility() == 0 )
          {
            v8 = this.infoForChild(ChildAt);
            if ( v8 != null && v8.position == this.mCurItem )
              ChildAt.addFocusables(p0, p1, (byte)p2);
          }
        }
      }
      if ( (DescendantFocusability != 0x40000 || v4 == p0.size())
        && this.isFocusable()
        && ((p2 & 1) != 1 || !this.isInTouchMode() || this.isFocusableInTouchMode())
        && p0 != null )
      {
        p0.add(this);
      }
    }

    android.support.v4.view.ViewPager$ItemInfo addNewItem(int p0, int p1)
    {
      android.support.v4.view.ViewPager$ItemInfo v3;
      v3 = new android.support.v4.view.ViewPager$ItemInfo();
      v3.position = p0;
      v3.object = this.mAdapter.instantiateItem(this, p0);
      v3.widthFactor = this.mAdapter.getPageWidth(p0);
      if ( p1 >= 0 && p1 < this.mItems.size() )
        this.mItems.add(p1, v3);
      else
        this.mItems.add(v3);
      return v3;
    }

    public void addTouchables(java.util.ArrayList<android.view.View> p0)
    {
      int i;
      android.view.View ChildAt;
      android.support.v4.view.ViewPager$ItemInfo v4; // RETVAL
    
      for ( i = 0; i < this.getChildCount(); ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( ChildAt.getVisibility() == 0 )
        {
          v4 = this.infoForChild(ChildAt);
          if ( v4 != null && v4.position == this.mCurItem )
            ChildAt.addTouchables(p0);
        }
      }
    }

    public void addView(android.view.View p0, int p1, android.view.ViewGroup.LayoutParams p2)
    {
      android.view.ViewGroup.LayoutParams LayoutParams;
      android.support.v4.view.ViewPager$LayoutParams v5;
      if ( this.checkLayoutParams(p2) )
        LayoutParams = p2;
      else
        LayoutParams = this.generateLayoutParams(p2);
      v5 = (android.support.v4.view.ViewPager$LayoutParams)LayoutParams;
      v5.isDecor |= (p0 instanceof android.support.v4.view.ViewPager$Decor);
      if ( this.mInLayout )
      {
        if ( v5 != null && v5.isDecor )
          throw new IllegalStateException("Cannot add pager decor view during layout");
        v5.needsMeasure = true;
        this.addViewInLayout(p0, p1, LayoutParams);
      }
      else
      {
        super.addView(p0, p1, LayoutParams);
      }
    }

    public boolean arrowScroll(int p0)
    {
      android.view.View Focus = null; // RETVAL
      Object v3 = null;
      android.view.View v4 = null;
      android.view.View NextFocus = null; // RETVAL
      android.view.View v6 = null;
      int v7 = 0;
      int v8 = 0;
      boolean v9 = false;
      android.view.ViewParent i = null;
      int v12 = 0;
      StringBuilder v13 = null;
      android.view.ViewParent j = null;
      int v15 = 0;
      int v16 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            Focus = this.findFocus();
            v3 = Focus;
            if ( !(Focus == this) ) { _pc = 1; continue _sm; }
            {
            v4 = null;
            }
            _pc = 5;
            continue _sm;
          case 1:
            if ( Focus == null )
            { _pc = 3; continue _sm; }
            for ( i = Focus.getParent(); i instanceof android.view.ViewGroup; i = i.getParent() )
            {
            if ( i == this )
            {
            v12 = 1;
            { _pc = 2; continue _sm; }
            }
            }
            v12 = 0;
            _pc = 2;
            continue _sm;
          case 2:
            if ( !(v12 != 0) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            v4 = (android.view.View)v3;
            _pc = 5;
            continue _sm;
          case 4:
            {
            v13 = new StringBuilder();
            v13.append(v3.getClass().getSimpleName());
            for ( j = ((android.view.View)v3).getParent(); j instanceof android.view.ViewGroup; j = j.getParent() )
            v13.append(" => ").append(j.getClass().getSimpleName());
            Log.e("ViewPager", "arrowScroll tried to find focus based on non-child current focused view " + v13.toString());
            v4 = null;
            }
            _pc = 5;
            continue _sm;
          case 5:
            NextFocus = FocusFinder.getInstance().findNextFocus(this, v4, p0);
            v6 = NextFocus;
            if ( !(NextFocus == null || NextFocus == v4) ) { _pc = 8; continue _sm; }
            if ( p0 == 17 || p0 == 1 )
            { _pc = 9; continue _sm; }
            if ( !(p0 == 66 || p0 == 2) ) { _pc = 7; continue _sm; }
            _pc = 6;
            continue _sm;
          case 6:
            v9 = this.pageRight();
            _pc = 15;
            continue _sm;
          case 7:
            _pc = 14;
            continue _sm;
          case 8:
            if ( !(p0 == 17) ) { _pc = 11; continue _sm; }
            v7 = (this.getChildRectInPagerCoordinates(this.mTempRect, NextFocus)).left;
            v8 = (this.getChildRectInPagerCoordinates(this.mTempRect, v4)).left;
            if ( !(v4 != null && v7 >= v8) ) { _pc = 10; continue _sm; }
            _pc = 9;
            continue _sm;
          case 9:
            v9 = this.pageLeft();
            _pc = 15;
            continue _sm;
          case 10:
            _pc = 12;
            continue _sm;
          case 11:
            if ( !(p0 == 66) ) { _pc = 14; continue _sm; }
            v15 = (this.getChildRectInPagerCoordinates(this.mTempRect, NextFocus)).left;
            v16 = (this.getChildRectInPagerCoordinates(this.mTempRect, v4)).left;
            if ( !(v4 == null || v15 > v16) ) { _pc = 13; continue _sm; }
            _pc = 12;
            continue _sm;
          case 12:
            v9 = v6.requestFocus();
            _pc = 15;
            continue _sm;
          case 13:
            _pc = 6;
            continue _sm;
          case 14:
            v9 = false;
            _pc = 15;
            continue _sm;
          case 15:
            if ( v9 )
            this.playSoundEffect(SoundEffectConstants.getContantForFocusDirection(p0));
            return v9;
        }
      }
}

    public boolean beginFakeDrag()
    {
      boolean v1;
      long v3;
      android.view.MotionEvent v4; // RETVAL
    
      v1 = false;
      if ( !this.mIsBeingDragged )
      {
        this.mFakeDragging = true;
        this.setScrollState(1);
        this.mLastMotionX = 0.0f;
        this.mInitialMotionX = 0.0f;
        if ( this.mVelocityTracker != null )
          this.mVelocityTracker.clear();
        else
          this.mVelocityTracker = VelocityTracker.obtain();
        v3 = SystemClock.uptimeMillis();
        v4 = MotionEvent.obtain(v3, v3, 0, 0.0f, 0.0f, 0);
        this.mVelocityTracker.addMovement(v4);
        v4.recycle();
        this.mFakeDragBeginTime = v3;
        return true;
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

    public boolean canScrollHorizontally(int p0)
    {
      boolean v2;
      int ClientWidth;
      int ScrollX; // RETVAL
    
      v2 = false;
      if ( this.mAdapter != null )
      {
        ClientWidth = this.getClientWidth();
        ScrollX = this.getScrollX();
        if ( p0 >= 0 )
        {
          if ( p0 > 0 )
            return ScrollX < (int)((float)ClientWidth * this.mLastOffset);
        }
        else
        {
          return ScrollX > (int)((float)ClientWidth * this.mFirstOffset);
        }
      }
      return v2;
    }

    protected boolean checkLayoutParams(android.view.ViewGroup.LayoutParams p0)
    {
      return p0 instanceof android.support.v4.view.ViewPager$LayoutParams && super.checkLayoutParams(p0);
    }

    public void computeScroll()
    {
      int ScrollX;
      int ScrollY;
      int CurrX;
      int CurrY; // RETVAL
      int v5;
      if ( this.mScroller.isFinished() || !this.mScroller.computeScrollOffset() )
      {
        this.completeScroll(true);
      }
      else
      {
        ScrollX = this.getScrollX();
        ScrollY = this.getScrollY();
        CurrX = this.mScroller.getCurrX();
        CurrY = this.mScroller.getCurrY();
        v5 = CurrY;
        if ( ScrollX != CurrX || ScrollY != CurrY )
        {
          this.scrollTo(CurrX, CurrY);
          if ( !this.pageScrolled(CurrX) )
          {
            this.mScroller.abortAnimation();
            this.scrollTo(0, v5);
          }
        }
        ViewCompat.postInvalidateOnAnimation(this);
      }
    }

    void dataSetChanged()
    {
      int Count = 0;
      boolean v2 = false;
      int v3 = 0;
      int mCurItem = 0;
      int v5 = 0;
      int i = 0;
      android.support.v4.view.ViewPager$ItemInfo v7 = null;
      int ItemPosition = 0; // RETVAL
      int v9 = 0;
      int v10 = 0;
      int v11 = 0;
      int v12 = 0;
      int v13 = 0;
      int ChildCount = 0;
      int j = 0;
      android.support.v4.view.ViewPager$LayoutParams v16 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            Count = this.mAdapter.getCount();
            this.mExpectedAdapterCount = Count;
            v2 = this.mItems.size() < 2 * this.mOffscreenPageLimit + 1 && this.mItems.size() < Count;
            v3 = 0;
            mCurItem = this.mCurItem;
            v5 = v2 ? 1 : 0;
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(i < this.mItems.size()) ) { _pc = 7; continue _sm; }
            v7 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(i);
            ItemPosition = this.mAdapter.getItemPosition(v7.object);
            if ( ItemPosition == -1 )
            { _pc = 3; continue _sm; }
            if ( !(ItemPosition == -2) ) { _pc = 2; continue _sm; }
            {
            this.mItems.remove(i);
            v9 = i - 1;
            if ( v3 == 0 )
            {
            this.mAdapter.startUpdate(this);
            v3 = 1;
            }
            this.mAdapter.destroyItem(this, v7.position, v7.object);
            if ( this.mCurItem == v7.position )
            {
            v10 = v9;
            v11 = v3;
            v12 = Math.max(0, Math.min(this.mCurItem, Count - 1));
            }
            else
            {
            v10 = v9;
            v11 = v3;
            v12 = mCurItem;
            }
            v13 = 1;
            }
            _pc = 5;
            continue _sm;
          case 2:
            if ( !(v7.position == ItemPosition) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            v10 = i;
            v11 = v3;
            v12 = mCurItem;
            v13 = v5;
            _pc = 5;
            continue _sm;
          case 4:
            if ( v7.position == this.mCurItem )
            mCurItem = ItemPosition;
            v7.position = ItemPosition;
            v10 = i;
            v11 = v3;
            v12 = mCurItem;
            v13 = 1;
            _pc = 5;
            continue _sm;
          case 5:
            v5 = v13;
            mCurItem = v12;
            v3 = v11;
            _pc = 6;
            continue _sm;
          case 6:
            i = v10 + 1;
            _pc = 1;
            continue _sm;
          case 7:
            if ( v3 != 0 )
            this.mAdapter.finishUpdate(this);
            Collections.sort(this.mItems, COMPARATOR);
            if ( v5 != 0 )
            {
            ChildCount = this.getChildCount();
            for ( j = 0; j < ChildCount; ++j )
            {
            v16 = (android.support.v4.view.ViewPager$LayoutParams)this.getChildAt(j).getLayoutParams();
            if ( !v16.isDecor )
            v16.widthFactor = 0.0f;
            }
            this.setCurrentItemInternal(mCurItem, false, true);
            this.requestLayout();
            }
            return;
        }
      }
}

    public boolean dispatchKeyEvent(android.view.KeyEvent p0)
    {
      return super.dispatchKeyEvent(p0) || this.executeKeyEvent(p0);
    }

    public boolean dispatchPopulateAccessibilityEvent(android.view.accessibility.AccessibilityEvent p0)
    {
      boolean v2;
      int ChildCount;
      int i;
      android.view.View ChildAt;
      android.support.v4.view.ViewPager$ItemInfo v7; // RETVAL
    
      v2 = false;
      if ( p0.getEventType() == 4096 )
        return super.dispatchPopulateAccessibilityEvent(p0);
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( ChildAt.getVisibility() == 0 )
        {
          v7 = this.infoForChild(ChildAt);
          if ( v7 != null && v7.position == this.mCurItem && ChildAt.dispatchPopulateAccessibilityEvent(p0) )
            return true;
        }
      }
      return v2;
    }

    float distanceInfluenceForSnapDuration(float p0)
    {
      float v2;
      v2 = (float)((p0 - 0.5f) * 0.4712389167638204);
      return (float)Math.sin(v2);
    }

    public void draw(android.graphics.Canvas p0)
    {
      int v2;
      int OverScrollMode; // RETVAL
      int v4;
      int v5;
      int Width;
      int v7;
      int v8;
      int v9;
      super.draw(p0);
      v2 = 0;
      OverScrollMode = ViewCompat.getOverScrollMode(this);
      if ( OverScrollMode == 0 || OverScrollMode == 1 && this.mAdapter != null && this.mAdapter.getCount() > 1 )
      {
        if ( !this.mLeftEdge.isFinished() )
        {
          v4 = p0.save();
          v5 = this.getHeight() - this.getPaddingTop() - this.getPaddingBottom();
          Width = this.getWidth();
          p0.rotate(270.0f);
          p0.translate((float)(this.getPaddingTop() - v5), this.mFirstOffset * (float)Width);
          this.mLeftEdge.setSize(v5, Width);
          v2 = this.mLeftEdge.draw(p0) ? 1 : 0;
          p0.restoreToCount(v4);
        }
        if ( !this.mRightEdge.isFinished() )
        {
          v7 = p0.save();
          v8 = this.getWidth();
          v9 = this.getHeight() - this.getPaddingTop() - this.getPaddingBottom();
          p0.rotate(90.0f);
          p0.translate((float)-this.getPaddingTop(), -(this.mLastOffset + 1.0f) * (float)v8);
          this.mRightEdge.setSize(v9, v8);
          v2 |= this.mRightEdge.draw(p0) ? 1 : 0;
          p0.restoreToCount(v7);
        }
      }
      else
      {
        this.mLeftEdge.finish();
        this.mRightEdge.finish();
      }
      if ( v2 != 0 )
        ViewCompat.postInvalidateOnAnimation(this);
    }

    protected void drawableStateChanged()
    {
      android.graphics.drawable.Drawable mMarginDrawable;
      super.drawableStateChanged();
      mMarginDrawable = this.mMarginDrawable;
      if ( mMarginDrawable != null && mMarginDrawable.isStateful() )
        mMarginDrawable.setState(this.getDrawableState());
    }

    public void endFakeDrag()
    {
      android.view.VelocityTracker mVelocityTracker;
      int XVelocity;
      int ClientWidth;
      int ScrollX;
      android.support.v4.view.ViewPager$ItemInfo v5; // RETVAL
    
      if ( !this.mFakeDragging )
        throw new IllegalStateException("No fake drag in progress. Call beginFakeDrag first.");
      mVelocityTracker = this.mVelocityTracker;
      mVelocityTracker.computeCurrentVelocity(1000, (float)this.mMaximumVelocity);
      XVelocity = (int)VelocityTrackerCompat.getXVelocity(mVelocityTracker, this.mActivePointerId);
      this.mPopulatePending = true;
      ClientWidth = this.getClientWidth();
      ScrollX = this.getScrollX();
      v5 = this.infoForCurrentScrollPosition();
      this.setCurrentItemInternal(this.determineTargetPage(v5.position, ((float)ScrollX / (float)ClientWidth - v5.offset)
                                                                      / v5.widthFactor, XVelocity, (int)(this.mLastMotionX - this.mInitialMotionX)), true, true, XVelocity);
      this.endDrag();
      this.mFakeDragging = false;
    }

    public boolean executeKeyEvent(android.view.KeyEvent p0)
    {
      boolean v2;
      v2 = false;
      if ( p0.getAction() == 0 )
      {
        switch ( p0.getKeyCode() )
        {
          case 21:
            v2 = this.arrowScroll(17);
            break;
          case 22:
            v2 = this.arrowScroll(66);
            break;
          case 61:
            if ( Build.VERSION.SDK_INT >= 11 )
            {
              if ( KeyEventCompat.hasNoModifiers(p0) )
              {
                v2 = this.arrowScroll(2);
              }
              else if ( KeyEventCompat.hasModifiers(p0, 1) )
              {
                v2 = this.arrowScroll(1);
              }
            }
            break;
          default:
            return v2;
        }
      }
      return v2;
    }

    public void fakeDragBy(float p0)
    {
      float v2;
      int ClientWidth;
      float v4;
      float v5;
      android.support.v4.view.ViewPager$ItemInfo v6;
      android.support.v4.view.ViewPager$ItemInfo v7;
      float v8;
      float v9;
      android.view.MotionEvent v10; // RETVAL
    
      if ( !this.mFakeDragging )
        throw new IllegalStateException("No fake drag in progress. Call beginFakeDrag first.");
      this.mLastMotionX = this.mLastMotionX + p0;
      v2 = (float)this.getScrollX() - p0;
      ClientWidth = this.getClientWidth();
      v4 = (float)ClientWidth * this.mFirstOffset;
      v5 = (float)ClientWidth * this.mLastOffset;
      v6 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(0);
      v7 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(this.mItems.size() - 1);
      if ( v6.position != 0 )
        v8 = v6.offset * (float)ClientWidth;
      else
        v8 = v4;
      if ( v7.position == this.mAdapter.getCount() - 1 )
        v9 = v5;
      else
        v9 = v7.offset * (float)ClientWidth;
      if ( v2 >= v8 )
      {
        if ( v2 <= v9 )
          v8 = v2;
        else
          v8 = v9;
      }
      this.mLastMotionX = v8 - (float)(int)v8 + this.mLastMotionX;
      this.scrollTo((int)v8, this.getScrollY());
      this.pageScrolled((int)v8);
      v10 = MotionEvent.obtain(this.mFakeDragBeginTime, SystemClock.uptimeMillis(), 2, this.mLastMotionX, 0.0f, 0);
      this.mVelocityTracker.addMovement(v10);
      v10.recycle();
    }

    protected android.view.ViewGroup.LayoutParams generateDefaultLayoutParams()
    {
      return new android.support.v4.view.ViewPager$LayoutParams();
    }

    public android.view.ViewGroup.LayoutParams generateLayoutParams(android.util.AttributeSet p0)
    {
      return new android.support.v4.view.ViewPager$LayoutParams(this.getContext(), p0);
    }

    protected android.view.ViewGroup.LayoutParams generateLayoutParams(android.view.ViewGroup.LayoutParams p0)
    {
      return this.generateDefaultLayoutParams();
    }

    public android.support.v4.view.PagerAdapter getAdapter()
    {
      return this.mAdapter;
    }

    protected int getChildDrawingOrder(int p0, int p1)
    {
      if ( this.mDrawingOrder == 2 )
        p1 = p0 - 1 - p1;
      return ((android.support.v4.view.ViewPager$LayoutParams)((android.view.View)this.mDrawingOrderedChildren.get(p1)).getLayoutParams()).childIndex;
    }

    public int getCurrentItem()
    {
      return this.mCurItem;
    }

    public int getOffscreenPageLimit()
    {
      return this.mOffscreenPageLimit;
    }

    public int getPageMargin()
    {
      return this.mPageMargin;
    }

    android.support.v4.view.ViewPager$ItemInfo infoForAnyChild(android.view.View p0)
    {
      android.view.ViewParent Parent; // RETVAL
    
      while ( true )
      {
        Parent = p0.getParent();
        if ( Parent == this )
          break;
        if ( Parent == null || !(Parent instanceof android.view.View) )
          return null;
        p0 = (android.view.View)Parent;
      }
      return this.infoForChild(p0);
    }

    android.support.v4.view.ViewPager$ItemInfo infoForChild(android.view.View p0)
    {
      int i;
      android.support.v4.view.ViewPager$ItemInfo v3;
      for ( i = 0; i < this.mItems.size(); ++i )
      {
        v3 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(i);
        if ( this.mAdapter.isViewFromObject(p0, v3.object) )
          return v3;
      }
      return null;
    }

    android.support.v4.view.ViewPager$ItemInfo infoForPosition(int p0)
    {
      int i;
      android.support.v4.view.ViewPager$ItemInfo v3;
      for ( i = 0; i < this.mItems.size(); ++i )
      {
        v3 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(i);
        if ( v3.position == p0 )
          return v3;
      }
      return null;
    }

    void initViewPager()
    {
      android.content.Context Context;
      android.view.ViewConfiguration v2;
      float density;
      this.setWillNotDraw(false);
      this.setDescendantFocusability(0x40000);
      this.setFocusable(true);
      Context = this.getContext();
      this.mScroller = new android.widget.Scroller(Context, sInterpolator);
      v2 = ViewConfiguration.get(Context);
      density = Context.getResources().getDisplayMetrics().density;
      this.mTouchSlop = ViewConfigurationCompat.getScaledPagingTouchSlop(v2);
      this.mMinimumVelocity = (int)(400.0f * density);
      this.mMaximumVelocity = v2.getScaledMaximumFlingVelocity();
      this.mLeftEdge = new android.support.v4.widget.EdgeEffectCompat(Context);
      this.mRightEdge = new android.support.v4.widget.EdgeEffectCompat(Context);
      this.mFlingDistance = (int)(25.0f * density);
      this.mCloseEnough = (int)(2.0f * density);
      this.mDefaultGutterSize = (int)(16.0f * density);
      ViewCompat.setAccessibilityDelegate(this, new android.support.v4.view.ViewPager$MyAccessibilityDelegate(this));
      if ( ViewCompat.getImportantForAccessibility(this) == 0 )
        ViewCompat.setImportantForAccessibility(this, 1);
    }

    public boolean isFakeDragging()
    {
      return this.mFakeDragging;
    }

    protected void onAttachedToWindow()
    {
      super.onAttachedToWindow();
      this.mFirstLayout = true;
    }

    protected void onDetachedFromWindow()
    {
      this.removeCallbacks(this.mEndScrollRunnable);
      super.onDetachedFromWindow();
    }

    protected void onDraw(android.graphics.Canvas p0)
    {
      int ScrollX;
      int Width;
      float v4;
      android.support.v4.view.ViewPager$ItemInfo v5;
      float offset;
      int v7;
      int position;
      int v9;
      int i;
      float v11;
      float PageWidth; // RETVAL
    
      super.onDraw(p0);
      if ( this.mPageMargin > 0 && this.mMarginDrawable != null && this.mItems.size() > 0 && this.mAdapter != null )
      {
        ScrollX = this.getScrollX();
        Width = this.getWidth();
        v4 = (float)this.mPageMargin / (float)Width;
        v5 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(0);
        offset = v5.offset;
        v7 = this.mItems.size();
        position = ((android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v7 - 1)).position;
        v9 = 0;
        for ( i = v5.position; i < position; ++i )
        {
          while ( i > v5.position && v9 < v7 )
            v5 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(++v9);
          if ( i == v5.position )
          {
            v11 = (v5.offset + v5.widthFactor) * (float)Width;
            offset = v5.offset + v5.widthFactor + v4;
          }
          else
          {
            PageWidth = this.mAdapter.getPageWidth(i);
            v11 = (offset + PageWidth) * (float)Width;
            offset = PageWidth + v4 + offset;
          }
          if ( (float)this.mPageMargin + v11 > (float)ScrollX )
          {
            this.mMarginDrawable.setBounds((int)v11, this.mTopPageBounds, (int)((float)this.mPageMargin + v11 + 0.5f), this.mBottomPageBounds);
            this.mMarginDrawable.draw(p0);
          }
          if ( v11 > (float)(ScrollX + Width) )
            break;
        }
      }
    }

    public boolean onInterceptTouchEvent(android.view.MotionEvent p0)
    {
      boolean mIsBeingDragged = false;
      int v3 = 0;
      int mActivePointerId = 0;
      int PointerIndex = 0;
      float v7 = 0.0f;
      float v8 = 0.0f;
      float v9 = 0.0f;
      float v10 = 0.0f;
      float v11 = 0.0f;
      float v12 = 0.0f;
      float v13 = 0.0f; // RETVAL
      float v14 = 0.0f; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            mIsBeingDragged = false;
            v3 = p0.getAction() & 0xFF;
            if ( !(v3 == 3 || v3 == 1) ) { _pc = 1; continue _sm; }
            {
            this.mIsBeingDragged = false;
            this.mIsUnableToDrag = false;
            this.mActivePointerId = -1;
            if ( this.mVelocityTracker != null )
            {
            this.mVelocityTracker.recycle();
            this.mVelocityTracker = null;
            }
            }
            _pc = 9;
            continue _sm;
          case 1:
            if ( v3 != 0 )
            {
            if ( this.mIsBeingDragged )
            return true;
            if ( this.mIsUnableToDrag )
            return mIsBeingDragged;
            }
            _sw_1 = (v3);
            if ( (_sw_1 == (0)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 7; continue _sm; }
            _pc = 8;
            continue _sm;
          case 2:
            v13 = p0.getX();
            this.mInitialMotionX = v13;
            this.mLastMotionX = v13;
            v14 = p0.getY();
            this.mInitialMotionY = v14;
            this.mLastMotionY = v14;
            this.mActivePointerId = MotionEventCompat.getPointerId(p0, 0);
            this.mIsUnableToDrag = false;
            this.mScroller.computeScrollOffset();
            if ( this.mScrollState == 2
            && Math.abs(this.mScroller.getFinalX() - this.mScroller.getCurrX()) > this.mCloseEnough )
            {
            this.mScroller.abortAnimation();
            this.mPopulatePending = false;
            this.populate();
            this.mIsBeingDragged = true;
            this.requestParentDisallowInterceptTouchEvent(true);
            this.setScrollState(1);
            }
            else
            {
            this.completeScroll(false);
            this.mIsBeingDragged = false;
            }
            _pc = 4;
            continue _sm;
          case 3:
            mActivePointerId = this.mActivePointerId;
            if ( mActivePointerId == -1 )
            { _pc = 4; continue _sm; }
            PointerIndex = MotionEventCompat.findPointerIndex(p0, mActivePointerId);
            v7 = MotionEventCompat.getX(p0, PointerIndex);
            v8 = v7 - this.mLastMotionX;
            v9 = Math.abs(v8);
            v10 = MotionEventCompat.getY(p0, PointerIndex);
            v11 = Math.abs(v10 - this.mInitialMotionY);
            if ( !(v8 == 0.0f
            || this.isGutterDrag(this.mLastMotionX, v8)
            || !this.canScroll(this, false, (int)v8, (int)v7, (int)v10)) ) { _pc = 5; continue _sm; }
            if ( v9 <= (float)this.mTouchSlop || 0.5f * v9 <= v11 )
            {
            if ( v11 > (float)this.mTouchSlop )
            this.mIsUnableToDrag = true;
            }
            else
            {
            this.mIsBeingDragged = true;
            this.requestParentDisallowInterceptTouchEvent(true);
            this.setScrollState(1);
            if ( v8 <= 0.0f )
            v12 = this.mInitialMotionX - (float)this.mTouchSlop;
            else
            v12 = this.mInitialMotionX + (float)this.mTouchSlop;
            this.mLastMotionX = v12;
            this.mLastMotionY = v10;
            this.setScrollingCacheEnabled(true);
            }
            if ( this.mIsBeingDragged && this.performDrag(v7) )
            ViewCompat.postInvalidateOnAnimation(this);
            _pc = 4;
            continue _sm;
          case 4:
            if ( this.mVelocityTracker == null )
            this.mVelocityTracker = VelocityTracker.obtain();
            this.mVelocityTracker.addMovement(p0);
            mIsBeingDragged = this.mIsBeingDragged;
            _pc = 6;
            continue _sm;
          case 5:
            {
            this.mLastMotionX = v7;
            this.mLastMotionY = v10;
            this.mIsUnableToDrag = true;
            }
            _pc = 6;
            continue _sm;
          case 6:
            _pc = 9;
            continue _sm;
          case 7:
            this.onSecondaryPointerUp(p0);
            _pc = 4;
            continue _sm;
          case 8:
            _pc = 4;
            continue _sm;
          case 9:
            return mIsBeingDragged;
        }
      }
}

    protected void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      int ChildCount;
      int v7;
      int v8;
      int PaddingLeft;
      int PaddingTop;
      int PaddingRight;
      int PaddingBottom;
      int ScrollX;
      int v14;
      int v15;
      android.view.View ChildAt;
      android.support.v4.view.ViewPager$LayoutParams v17;
      int v18;
      int v19;
      int v20;
      int v21;
      int v22;
      int v23;
      int v24;
      int v25;
      int v26;
      int v27;
      int v28;
      int v29;
      int v30;
      int v31;
      int v32;
      int v33;
      int i;
      android.view.View v35;
      android.support.v4.view.ViewPager$LayoutParams v36;
      android.support.v4.view.ViewPager$ItemInfo v37; // RETVAL
      int v38;
      ChildCount = this.getChildCount();
      v7 = p3 - p1;
      v8 = p4 - p2;
      PaddingLeft = this.getPaddingLeft();
      PaddingTop = this.getPaddingTop();
      PaddingRight = this.getPaddingRight();
      PaddingBottom = this.getPaddingBottom();
      ScrollX = this.getScrollX();
      v14 = 0;
      v15 = 0;
      while ( v15 < ChildCount )
      {
        ChildAt = this.getChildAt(v15);
        if ( ChildAt.getVisibility() == 8
          || !(v17 = (android.support.v4.view.ViewPager$LayoutParams)ChildAt.getLayoutParams()).isDecor )
        {
          v24 = v14;
          v25 = PaddingTop;
          v26 = PaddingRight;
          v27 = PaddingLeft;
        }
        else
        {
          v18 = v17.gravity & 0x70;
          switch ( v17.gravity & 7 )
          {
            case 1:
              v19 = Math.max((v7 - ChildAt.getMeasuredWidth()) / 2, PaddingLeft);
              break;
            case 3:
              v19 = PaddingLeft;
              PaddingLeft += ChildAt.getMeasuredWidth();
              break;
            case 5:
              v28 = v7 - PaddingRight - ChildAt.getMeasuredWidth();
              PaddingRight += ChildAt.getMeasuredWidth();
              v19 = v28;
              break;
            default:
              v19 = PaddingLeft;
              break;
          }
          switch ( v18 )
          {
            case 16:
              v20 = Math.max((v8 - ChildAt.getMeasuredHeight()) / 2, PaddingTop);
              v31 = PaddingBottom;
              v22 = PaddingTop;
              v23 = v31;
              break;
            case 48:
              v29 = ChildAt.getMeasuredHeight() + PaddingTop;
              v30 = PaddingTop;
              v23 = PaddingBottom;
              v22 = v29;
              v20 = v30;
              break;
            case 80:
              v20 = v8 - PaddingBottom - ChildAt.getMeasuredHeight();
              v32 = PaddingBottom + ChildAt.getMeasuredHeight();
              v22 = PaddingTop;
              v23 = v32;
              break;
            default:
              v20 = PaddingTop;
              v21 = PaddingBottom;
              v22 = PaddingTop;
              v23 = v21;
              break;
          }
          ChildAt.layout(v19 + ScrollX, v20, ChildAt.getMeasuredWidth() + v19 + ScrollX, ChildAt.getMeasuredHeight() + v20);
          v24 = v14 + 1;
          v25 = v22;
          PaddingBottom = v23;
          v26 = PaddingRight;
          v27 = PaddingLeft;
        }
        ++v15;
        PaddingLeft = v27;
        PaddingRight = v26;
        PaddingTop = v25;
        v14 = v24;
      }
      v33 = v7 - PaddingLeft - PaddingRight;
      for ( i = 0; i < ChildCount; ++i )
      {
        v35 = this.getChildAt(i);
        if ( v35.getVisibility() != 8 )
        {
          v36 = (android.support.v4.view.ViewPager$LayoutParams)v35.getLayoutParams();
          if ( !v36.isDecor )
          {
            v37 = this.infoForChild(v35);
            if ( v37 != null )
            {
              v38 = (int)(v37.offset * (float)v33) + PaddingLeft;
              if ( v36.needsMeasure )
              {
                v36.needsMeasure = false;
                v35.measure(View.MeasureSpec.makeMeasureSpec((int)(v36.widthFactor * (float)v33), 0x40000000), View.MeasureSpec.makeMeasureSpec(v8 - PaddingTop - PaddingBottom, 0x40000000));
              }
              v35.layout(v38, PaddingTop, v35.getMeasuredWidth() + v38, v35.getMeasuredHeight() + PaddingTop);
            }
          }
        }
      }
      this.mTopPageBounds = PaddingTop;
      this.mBottomPageBounds = v8 - PaddingBottom;
      this.mDecorChildCount = v14;
      if ( this.mFirstLayout )
        this.scrollToItem(this.mCurItem, false, 0, false);
      this.mFirstLayout = false;
    }

    protected void onMeasure(int p0, int p1)
    {
      int MeasuredWidth;
      int v4;
      int v5;
      int ChildCount;
      int i;
      android.view.View ChildAt;
      android.support.v4.view.ViewPager$LayoutParams v9;
      int v10;
      int v11;
      int v12;
      int v13;
      boolean v14;
      boolean v15;
      int v16;
      int width;
      int height;
      int v19;
      int j;
      android.view.View v21;
      android.support.v4.view.ViewPager$LayoutParams v22;
      this.setMeasuredDimension(getDefaultSize(0, p0), getDefaultSize(0, p1));
      MeasuredWidth = this.getMeasuredWidth();
      this.mGutterSize = Math.min(MeasuredWidth / 10, this.mDefaultGutterSize);
      v4 = MeasuredWidth - this.getPaddingLeft() - this.getPaddingRight();
      v5 = this.getMeasuredHeight() - this.getPaddingTop() - this.getPaddingBottom();
      ChildCount = this.getChildCount();
      for ( i = 0; i < ChildCount; ++i )
      {
        ChildAt = this.getChildAt(i);
        if ( ChildAt.getVisibility() != 8 )
        {
          v9 = (android.support.v4.view.ViewPager$LayoutParams)ChildAt.getLayoutParams();
          if ( v9 != null && v9.isDecor )
          {
            v10 = v9.gravity & 7;
            v11 = v9.gravity & 0x70;
            v12 = 0x80000000;
            v13 = 0x80000000;
            v14 = v11 == 48 || v11 == 80;
            v15 = v10 == 3 || v10 == 5;
            if ( v14 )
            {
              v12 = 0x40000000;
            }
            else if ( v15 )
            {
              v13 = 0x40000000;
            }
            if ( v9.width == -2 )
            {
              v16 = v12;
              width = v4;
            }
            else
            {
              v16 = 0x40000000;
              if ( v9.width == -1 )
                width = v4;
              else
                width = v9.width;
            }
            if ( v9.height == -2 || (com.gameloft.android.DecompRT.comma((v13 = 0x40000000), (v9.height == -1))) )
              height = v5;
            else
              height = v9.height;
            ChildAt.measure(View.MeasureSpec.makeMeasureSpec(width, v16), View.MeasureSpec.makeMeasureSpec(height, v13));
            if ( v14 )
            {
              v5 -= ChildAt.getMeasuredHeight();
            }
            else if ( v15 )
            {
              v4 -= ChildAt.getMeasuredWidth();
            }
          }
        }
      }
      this.mChildWidthMeasureSpec = View.MeasureSpec.makeMeasureSpec(v4, 0x40000000);
      this.mChildHeightMeasureSpec = View.MeasureSpec.makeMeasureSpec(v5, 0x40000000);
      this.mInLayout = true;
      this.populate();
      this.mInLayout = false;
      v19 = this.getChildCount();
      for ( j = 0; j < v19; ++j )
      {
        v21 = this.getChildAt(j);
        if ( v21.getVisibility() != 8 )
        {
          v22 = (android.support.v4.view.ViewPager$LayoutParams)v21.getLayoutParams();
          if ( v22 == null || !v22.isDecor )
            v21.measure(View.MeasureSpec.makeMeasureSpec((int)(v22.widthFactor * (float)v4), 0x40000000), this.mChildHeightMeasureSpec);
        }
      }
    }

    protected void onPageScrolled(int p0, float p1, int p2)
    {
      int ScrollX;
      int PaddingLeft;
      int PaddingRight;
      int Width;
      int ChildCount;
      int v9;
      android.view.View ChildAt;
      android.support.v4.view.ViewPager$LayoutParams v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20;
      int v21;
      int v22;
      int v23;
      int i;
      android.view.View v25;
      int v26;
      if ( this.mDecorChildCount > 0 )
      {
        ScrollX = this.getScrollX();
        PaddingLeft = this.getPaddingLeft();
        PaddingRight = this.getPaddingRight();
        Width = this.getWidth();
        ChildCount = this.getChildCount();
        v9 = 0;
        while ( v9 < ChildCount )
        {
          ChildAt = this.getChildAt(v9);
          v11 = (android.support.v4.view.ViewPager$LayoutParams)ChildAt.getLayoutParams();
          if ( v11.isDecor )
          {
            switch ( v11.gravity & 7 )
            {
              case 1:
                v12 = Math.max((Width - ChildAt.getMeasuredWidth()) / 2, PaddingLeft);
                v20 = PaddingRight;
                v14 = PaddingLeft;
                v15 = v20;
                break;
              case 3:
                v18 = ChildAt.getWidth() + PaddingLeft;
                v19 = PaddingLeft;
                v15 = PaddingRight;
                v14 = v18;
                v12 = v19;
                break;
              case 5:
                v12 = Width - PaddingRight - ChildAt.getMeasuredWidth();
                v21 = PaddingRight + ChildAt.getMeasuredWidth();
                v14 = PaddingLeft;
                v15 = v21;
                break;
              default:
                v12 = PaddingLeft;
                v13 = PaddingRight;
                v14 = PaddingLeft;
                v15 = v13;
                break;
            }
            v16 = v12 + ScrollX - ChildAt.getLeft();
            if ( v16 != 0 )
              ChildAt.offsetLeftAndRight(v16);
          }
          else
          {
            v26 = PaddingRight;
            v14 = PaddingLeft;
            v15 = v26;
          }
          ++v9;
          v17 = v15;
          PaddingLeft = v14;
          PaddingRight = v17;
        }
      }
      if ( this.mOnPageChangeListener != null )
        this.mOnPageChangeListener.onPageScrolled(p0, p1, p2);
      if ( this.mInternalPageChangeListener != null )
        this.mInternalPageChangeListener.onPageScrolled(p0, p1, p2);
      if ( this.mPageTransformer != null )
      {
        v22 = this.getScrollX();
        v23 = this.getChildCount();
        for ( i = 0; i < v23; ++i )
        {
          v25 = this.getChildAt(i);
          if ( !((android.support.v4.view.ViewPager$LayoutParams)v25.getLayoutParams()).isDecor )
            this.mPageTransformer.transformPage(v25, (float)(v25.getLeft() - v22) / (float)this.getClientWidth());
        }
      }
      this.mCalledSuper = true;
    }

    protected boolean onRequestFocusInDescendants(int p0, android.graphics.Rect p1)
    {
      boolean v3;
      int v4;
      int ChildCount; // RETVAL
      int v6;
      int v7;
      android.view.View ChildAt;
      android.support.v4.view.ViewPager$ItemInfo v9; // RETVAL
    
      v3 = true;
      v4 = -1;
      ChildCount = this.getChildCount();
      v6 = ChildCount;
      if ( (p0 & 2) != 0 )
      {
        v4 = 1;
        v7 = 0;
      }
      else
      {
        v7 = ChildCount - 1;
        v6 = -1;
      }
      while ( v7 != v6 )
      {
        ChildAt = this.getChildAt(v7);
        if ( ChildAt.getVisibility() == 0 )
        {
          v9 = this.infoForChild(ChildAt);
          if ( v9 != null && v9.position == this.mCurItem && ChildAt.requestFocus((byte)p0, p1) )
            return v3;
        }
        v7 += v4;
      }
      return false;
    }

    public void onRestoreInstanceState(android.os.Parcelable p0)
    {
      android.support.v4.view.ViewPager$SavedState v2;
      if ( p0 instanceof android.support.v4.view.ViewPager$SavedState )
      {
        v2 = (android.support.v4.view.ViewPager$SavedState)p0;
        super.onRestoreInstanceState(v2.getSuperState());
        if ( this.mAdapter != null )
        {
          this.mAdapter.restoreState(v2.adapterState, v2.loader);
          this.setCurrentItemInternal(v2.position, false, true);
        }
        else
        {
          this.mRestoredCurItem = v2.position;
          this.mRestoredAdapterState = v2.adapterState;
          this.mRestoredClassLoader = v2.loader;
        }
      }
      else
      {
        super.onRestoreInstanceState(p0);
      }
    }

    public android.os.Parcelable onSaveInstanceState()
    {
      android.support.v4.view.ViewPager$SavedState v1;
      v1 = new android.support.v4.view.ViewPager$SavedState(super.onSaveInstanceState());
      v1.position = this.mCurItem;
      if ( this.mAdapter != null )
        v1.adapterState = this.mAdapter.saveState();
      return v1;
    }

    protected void onSizeChanged(int p0, int p1, int p2, int p3)
    {
      super.onSizeChanged(p0, p1, p2, p3);
      if ( p0 != p2 )
        this.recomputeScrollPosition(p0, p2, this.mPageMargin, this.mPageMargin);
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      int v2;
      float v5; // RETVAL
      float v6; // RETVAL
      int PointerIndex;
      float v8;
      float v9;
      float v10;
      float v11; // RETVAL
      float v12;
      android.view.ViewParent Parent; // RETVAL
      android.view.VelocityTracker mVelocityTracker;
      int XVelocity;
      int ClientWidth;
      int ScrollX;
      android.support.v4.view.ViewPager$ItemInfo v18; // RETVAL
      int ActionIndex;
      v2 = 0;
      if ( this.mFakeDragging )
        return true;
      if ( p0.getAction() == 0 && p0.getEdgeFlags() != 0 )
        return false;
      if ( this.mAdapter == null || this.mAdapter.getCount() == 0 )
        return false;
      if ( this.mVelocityTracker == null )
        this.mVelocityTracker = VelocityTracker.obtain();
      this.mVelocityTracker.addMovement(p0);
      switch ( p0.getAction() & 0xFF )
      {
        case 0:
          this.mScroller.abortAnimation();
          this.mPopulatePending = false;
          this.populate();
          v5 = p0.getX();
          this.mInitialMotionX = v5;
          this.mLastMotionX = v5;
          v6 = p0.getY();
          this.mInitialMotionY = v6;
          this.mLastMotionY = v6;
          this.mActivePointerId = MotionEventCompat.getPointerId(p0, 0);
          break;
        case 1:
          if ( this.mIsBeingDragged )
          {
            mVelocityTracker = this.mVelocityTracker;
            mVelocityTracker.computeCurrentVelocity(1000, (float)this.mMaximumVelocity);
            XVelocity = (int)VelocityTrackerCompat.getXVelocity(mVelocityTracker, this.mActivePointerId);
            this.mPopulatePending = true;
            ClientWidth = this.getClientWidth();
            ScrollX = this.getScrollX();
            v18 = this.infoForCurrentScrollPosition();
            this.setCurrentItemInternal(this.determineTargetPage(v18.position, ((float)ScrollX / (float)ClientWidth
                                                                              - v18.offset)
                                                                             / v18.widthFactor, XVelocity, (int)(MotionEventCompat.getX(p0, MotionEventCompat.findPointerIndex(p0, this.mActivePointerId)) - this.mInitialMotionX)), true, true, XVelocity);
            this.mActivePointerId = -1;
            this.endDrag();
            v2 = com.gameloft.android.DecompRT.b2i(this.mRightEdge.onRelease()) | com.gameloft.android.DecompRT.b2i(this.mLeftEdge.onRelease());
          }
          break;
        case 2:
          if ( !this.mIsBeingDragged )
          {
            PointerIndex = MotionEventCompat.findPointerIndex(p0, this.mActivePointerId);
            v8 = MotionEventCompat.getX(p0, PointerIndex);
            v9 = Math.abs(v8 - this.mLastMotionX);
            v10 = MotionEventCompat.getY(p0, PointerIndex);
            v11 = Math.abs(v10 - this.mLastMotionY);
            if ( v9 > (float)this.mTouchSlop && v9 > v11 )
            {
              this.mIsBeingDragged = true;
              this.requestParentDisallowInterceptTouchEvent(true);
              v12 = v8 - this.mInitialMotionX <= 0.0f
                  ? this.mInitialMotionX - (float)this.mTouchSlop
                  : this.mInitialMotionX + (float)this.mTouchSlop;
              this.mLastMotionX = v12;
              this.mLastMotionY = v10;
              this.setScrollState(1);
              this.setScrollingCacheEnabled(true);
              Parent = this.getParent();
              if ( Parent != null )
                Parent.requestDisallowInterceptTouchEvent(true);
            }
          }
          if ( this.mIsBeingDragged )
            v2 = this.performDrag(MotionEventCompat.getX(p0, MotionEventCompat.findPointerIndex(p0, this.mActivePointerId)))
               ? 1
               : 0;
          break;
        case 3:
          if ( this.mIsBeingDragged )
          {
            this.scrollToItem(this.mCurItem, true, 0, false);
            this.mActivePointerId = -1;
            this.endDrag();
            v2 = com.gameloft.android.DecompRT.b2i(this.mRightEdge.onRelease()) | com.gameloft.android.DecompRT.b2i(this.mLeftEdge.onRelease());
          }
          break;
        case 5:
          ActionIndex = MotionEventCompat.getActionIndex(p0);
          this.mLastMotionX = MotionEventCompat.getX(p0, ActionIndex);
          this.mActivePointerId = MotionEventCompat.getPointerId(p0, ActionIndex);
          break;
        case 6:
          this.onSecondaryPointerUp(p0);
          this.mLastMotionX = MotionEventCompat.getX(p0, MotionEventCompat.findPointerIndex(p0, this.mActivePointerId));
          break;
        default:
          break;
      }
      if ( v2 != 0 )
        ViewCompat.postInvalidateOnAnimation(this);
      return true;
    }

    boolean pageLeft()
    {
      boolean v1;
      v1 = true;
      if ( this.mCurItem <= 0 )
        return false;
      this.setCurrentItem(this.mCurItem - 1, true);
      return v1;
    }

    boolean pageRight()
    {
      boolean v1;
      v1 = true;
      if ( this.mAdapter == null || this.mCurItem >= this.mAdapter.getCount() - 1 )
        return false;
      this.setCurrentItem(this.mCurItem + 1, true);
      return v1;
    }

    void populate()
    {
      this.populate(this.mCurItem);
    }

    void populate(int p0)
    {
      int v2 = 0;
      android.support.v4.view.ViewPager$ItemInfo v3 = null;
      int v4 = 0;
      int mOffscreenPageLimit = 0;
      int v6 = 0;
      int Count = 0;
      int v8 = 0;
      int mExpectedAdapterCount = 0;
      String ResourceName = null;
      int i = 0;
      android.support.v4.view.ViewPager$ItemInfo v12 = null;
      android.support.v4.view.ViewPager$ItemInfo v13 = null;
      android.support.v4.view.ViewPager$ItemInfo v14 = null;
      int ClientWidth = 0;
      float v16 = 0.0f;
      float v17 = 0.0f;
      int v18 = 0;
      int v19 = 0;
      int v20 = 0;
      float widthFactor = 0.0f;
      int v22 = 0;
      android.support.v4.view.ViewPager$ItemInfo v23 = null;
      float v24 = 0.0f;
      android.support.v4.view.ViewPager$ItemInfo v25 = null;
      int v26 = 0;
      int v27 = 0;
      android.support.v4.view.ViewPager$ItemInfo v28 = null;
      android.support.v4.view.ViewPager$ItemInfo v29 = null;
      float v30 = 0.0f;
      android.support.v4.view.ViewPager$ItemInfo v31 = null;
      float v32 = 0.0f;
      float v33 = 0.0f;
      float v34 = 0.0f;
      android.support.v4.view.ViewPager$ItemInfo v35 = null;
      float v36 = 0.0f;
      android.support.v4.view.ViewPager$ItemInfo v37 = null; // RETVAL
      float v38 = 0.0f;
      android.support.v4.view.ViewPager$ItemInfo v39 = null;
      float v40 = 0.0f;
      android.support.v4.view.PagerAdapter mAdapter = null;
      int mCurItem = 0;
      Object object = null;
      int ChildCount = 0;
      int j = 0;
      android.view.View ChildAt = null;
      android.support.v4.view.ViewPager$LayoutParams v47 = null;
      android.support.v4.view.ViewPager$ItemInfo v48 = null; // RETVAL
      android.view.View Focus = null; // RETVAL
      android.support.v4.view.ViewPager$ItemInfo v50 = null;
      int k = 0;
      android.view.View v52 = null;
      android.support.v4.view.ViewPager$ItemInfo v53 = null; // RETVAL
      float v54 = 0.0f;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( this.mCurItem == p0 )
            {
            v3 = null;
            v4 = 2;
            }
            else
            {
            if ( this.mCurItem >= p0 )
            v2 = 17;
            else
            v2 = 66;
            this.mCurItem = p0;
            v3 = this.infoForPosition(this.mCurItem);
            v4 = v2;
            }
            if ( this.mAdapter == null )
            {
            this.sortChildDrawingOrder();
            return;
            }
            if ( this.mPopulatePending )
            {
            this.sortChildDrawingOrder();
            return;
            }
            if ( !(this.getWindowToken() != null) ) { _pc = 13; continue _sm; }
            this.mAdapter.startUpdate(this);
            mOffscreenPageLimit = this.mOffscreenPageLimit;
            v6 = Math.max(0, this.mCurItem - mOffscreenPageLimit);
            Count = this.mAdapter.getCount();
            v8 = Math.min(Count - 1, mOffscreenPageLimit + this.mCurItem);
            mExpectedAdapterCount = this.mExpectedAdapterCount;
            if ( Count != mExpectedAdapterCount )
            {
            try
            {
            ResourceName = this.getResources().getResourceName(this.getId());
            }
            catch ( android.content.res.Resources.NotFoundException e )
            {
            ResourceName = Integer.toHexString(this.getId());
            }
            throw new IllegalStateException("The application's PagerAdapter changed the adapter's contents without calling Page" +
            "rAdapter#notifyDataSetChanged! Expected adapter item count: "
            + this.mExpectedAdapterCount
            + ", found: "
            + Count
            + " Pager id: "
            + ResourceName
            + " Pager class: "
            + this.getClass()
            + " Problematic adapter: "
            + this.mAdapter.getClass());
            }
            for ( i = 0; ; ++i )
            {
            if ( i >= this.mItems.size() )
            { _pc = 1; continue _sm; }
            v12 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(i);
            if ( v12.position >= this.mCurItem )
            break;
            }
            if ( v12.position != this.mCurItem ) { _pc = 1; continue _sm; } else { _pc = 2; continue _sm; }
          case 1:
            v12 = null;
            _pc = 2;
            continue _sm;
          case 2:
            if ( v12 != null || Count <= 0 )
            v13 = v12;
            else
            v13 = this.addNewItem(this.mCurItem, i);
            if ( v13 == null )
            { _pc = 5; continue _sm; }
            if ( i - 1 < 0 )
            v14 = null;
            else
            v14 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(i - 1);
            ClientWidth = this.getClientWidth();
            if ( ClientWidth > 0 )
            v16 = 2.0f - v13.widthFactor + (float)this.getPaddingLeft() / (float)ClientWidth;
            else
            v16 = 0.0f;
            v17 = 0.0f;
            v18 = this.mCurItem - 1;
            v19 = i;
            v20 = i - 1;
            _pc = 3;
            continue _sm;
          case 3:
            if ( !(v18 < 0) ) { _pc = 6; continue _sm; }
            _pc = 4;
            continue _sm;
          case 4:
            widthFactor = v13.widthFactor;
            v22 = v19 + 1;
            if ( widthFactor < 2.0f )
            {
            if ( v22 >= this.mItems.size() )
            v23 = null;
            else
            v23 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v22);
            if ( ClientWidth > 0 )
            v24 = (float)this.getPaddingRight() / (float)ClientWidth + 2.0f;
            else
            v24 = 0.0f;
            v25 = v23;
            v26 = v19 + 1;
            v27 = this.mCurItem + 1;
            v28 = v25;
            while ( v27 < Count )
            {
            if ( widthFactor < v24 || v27 <= v8 )
            {
            if ( v28 != null && v27 == v28.position )
            {
            v34 = widthFactor + v28.widthFactor;
            if ( ++v26 >= this.mItems.size() )
            v35 = null;
            else
            v35 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v26);
            v36 = v34;
            v31 = v35;
            v32 = v36;
            }
            else
            {
            v37 = this.addNewItem(v27, v26++);
            v38 = widthFactor + v37.widthFactor;
            if ( v26 >= this.mItems.size() )
            v39 = null;
            else
            v39 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v26);
            v40 = v38;
            v31 = v39;
            v32 = v40;
            }
            }
            else
            {
            if ( v28 == null )
            break;
            if ( v27 != v28.position || v28.scrolling )
            {
            v54 = widthFactor;
            v31 = v28;
            v32 = v54;
            }
            else
            {
            this.mItems.remove(v26);
            this.mAdapter.destroyItem(this, v27, v28.object);
            if ( v26 >= this.mItems.size() )
            v29 = null;
            else
            v29 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v26);
            v30 = widthFactor;
            v31 = v29;
            v32 = v30;
            }
            }
            ++v27;
            v33 = v32;
            v28 = v31;
            widthFactor = v33;
            }
            }
            this.calculatePageOffsets(v13, v19, v3);
            _pc = 5;
            continue _sm;
          case 5:
            mAdapter = this.mAdapter;
            mCurItem = this.mCurItem;
            if ( v13 != null )
            object = v13.object;
            else
            object = null;
            mAdapter.setPrimaryItem(this, mCurItem, object);
            this.mAdapter.finishUpdate(this);
            ChildCount = this.getChildCount();
            for ( j = 0; j < ChildCount; ++j )
            {
            ChildAt = this.getChildAt(j);
            v47 = (android.support.v4.view.ViewPager$LayoutParams)ChildAt.getLayoutParams();
            v47.childIndex = j;
            if ( !v47.isDecor && v47.widthFactor == 0.0f )
            {
            v48 = this.infoForChild(ChildAt);
            if ( v48 != null )
            {
            v47.widthFactor = v48.widthFactor;
            v47.position = v48.position;
            }
            }
            }
            this.sortChildDrawingOrder();
            if ( this.hasFocus() )
            {
            Focus = this.findFocus();
            v50 = Focus != null ? this.infoForAnyChild(Focus) : null;
            if ( v50 == null || v50.position != this.mCurItem )
            {
            for ( k = 0; k < this.getChildCount(); ++k )
            {
            v52 = this.getChildAt(k);
            v53 = this.infoForChild(v52);
            if ( v53 != null && v53.position == this.mCurItem && v52.requestFocus(v4) )
            break;
            }
            }
            }
            return;
          case 6:
            if ( !(v17 < v16 || v18 >= v6) ) { _pc = 11; continue _sm; }
            if ( !(v14 != null && v18 == v14.position) ) { _pc = 7; continue _sm; }
            {
            v17 = v17 + v14.widthFactor;
            if ( --v20 >= 0 )
            { _pc = 8; continue _sm; }
            v14 = null;
            }
            _pc = 10;
            continue _sm;
          case 7:
            v17 = v17 + this.addNewItem(v18, v20 + 1).widthFactor;
            ++v19;
            if ( !(v20 >= 0) ) { _pc = 9; continue _sm; }
            _pc = 8;
            continue _sm;
          case 8:
            v14 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(v20);
            _pc = 12;
            continue _sm;
          case 9:
            v14 = null;
            _pc = 10;
            continue _sm;
          case 10:
            _pc = 12;
            continue _sm;
          case 11:
            {
            if ( v14 == null )
            { _pc = 4; continue _sm; }
            if ( v18 == v14.position && !v14.scrolling )
            {
            this.mItems.remove(v20);
            this.mAdapter.destroyItem(this, v18, v14.object);
            --v20;
            --v19;
            if ( v20 >= 0 )
            { _pc = 8; continue _sm; }
            v14 = null;
            }
            }
            _pc = 12;
            continue _sm;
          case 12:
            --v18;
            _pc = 3;
            continue _sm;
          case 13:
            return;
        }
      }
}

    public void removeView(android.view.View p0)
    {
      if ( this.mInLayout )
        this.removeViewInLayout(p0);
      else
        super.removeView(p0);
    }

    public void setAdapter(android.support.v4.view.PagerAdapter p0)
    {
      int i;
      android.support.v4.view.ViewPager$ItemInfo v3;
      android.support.v4.view.PagerAdapter mAdapter;
      boolean mFirstLayout;
      if ( this.mAdapter != null )
      {
        this.mAdapter.unregisterDataSetObserver(this.mObserver);
        this.mAdapter.startUpdate(this);
        for ( i = 0; i < this.mItems.size(); ++i )
        {
          v3 = (android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(i);
          this.mAdapter.destroyItem(this, v3.position, v3.object);
        }
        this.mAdapter.finishUpdate(this);
        this.mItems.clear();
        this.removeNonDecorViews();
        this.mCurItem = 0;
        this.scrollTo(0, 0);
      }
      mAdapter = this.mAdapter;
      this.mAdapter = p0;
      this.mExpectedAdapterCount = 0;
      if ( mAdapter != null )
      {
        if ( this.mObserver == null )
          this.mObserver = new android.support.v4.view.ViewPager$PagerObserver(this, null);
        this.mAdapter.registerDataSetObserver(this.mObserver);
        this.mPopulatePending = false;
        mFirstLayout = this.mFirstLayout;
        this.mFirstLayout = true;
        this.mExpectedAdapterCount = this.mAdapter.getCount();
        if ( this.mRestoredCurItem < 0 )
        {
          if ( mFirstLayout )
            this.requestLayout();
          else
            this.populate();
        }
        else
        {
          this.mAdapter.restoreState(this.mRestoredAdapterState, this.mRestoredClassLoader);
          this.setCurrentItemInternal(this.mRestoredCurItem, false, true);
          this.mRestoredCurItem = -1;
          this.mRestoredAdapterState = null;
          this.mRestoredClassLoader = null;
        }
      }
      if ( this.mAdapterChangeListener != null && mAdapter != p0 )
        this.mAdapterChangeListener.onAdapterChanged(mAdapter, p0);
    }

    void setChildrenDrawingOrderEnabledCompat(boolean p0)
    {
      Class[] v2;
      Object[] v3;
      if ( Build.VERSION.SDK_INT < 7 )
        return;
      if ( this.mSetChildrenDrawingOrderEnabled == null )
      {
        try
        {
          v2 = new Class[1];
          v2[0] = Boolean.TYPE;
          this.mSetChildrenDrawingOrderEnabled = android.view.ViewGroup.class.getDeclaredMethod("setChildrenDrawingOrderEnabled", v2);
        }
        catch ( NoSuchMethodException v4 )
        {
          Log.e("ViewPager", "Can't find setChildrenDrawingOrderEnabled", v4);
        }
      }
      try
      {
        v3 = new Object[1];
        v3[0] = Boolean.valueOf(p0);
        this.mSetChildrenDrawingOrderEnabled.invoke(this, v3);
      }
      catch ( Exception v5 )
      {
        Log.e("ViewPager", "Error changing children drawing order", v5);
      }
    }

    public void setCurrentItem(int p0)
    {
      this.mPopulatePending = false;
      this.setCurrentItemInternal(p0, !this.mFirstLayout, false);
    }

    public void setCurrentItem(int p0, boolean p1)
    {
      this.mPopulatePending = false;
      this.setCurrentItemInternal(p0, p1, false);
    }

    void setCurrentItemInternal(int p0, boolean p1, boolean p2)
    {
      this.setCurrentItemInternal(p0, p1, p2, 0);
    }

    void setCurrentItemInternal(int p0, boolean p1, boolean p2, int p3)
    {
      boolean v5;
      int mOffscreenPageLimit;
      int i;
      v5 = false;
      if ( this.mAdapter != null && this.mAdapter.getCount() > 0 && (p2 || this.mCurItem != p0 || this.mItems.size() == 0) )
      {
        if ( p0 >= 0 )
        {
          if ( p0 >= this.mAdapter.getCount() )
            p0 = this.mAdapter.getCount() - 1;
        }
        else
        {
          p0 = 0;
        }
        mOffscreenPageLimit = this.mOffscreenPageLimit;
        if ( p0 > this.mCurItem + mOffscreenPageLimit || p0 < this.mCurItem - mOffscreenPageLimit )
        {
          for ( i = 0; i < this.mItems.size(); ++i )
            ((android.support.v4.view.ViewPager$ItemInfo)this.mItems.get(i)).scrolling = true;
        }
        if ( this.mCurItem != p0 )
          v5 = true;
        if ( this.mFirstLayout )
        {
          this.mCurItem = p0;
          if ( v5 && this.mOnPageChangeListener != null )
            this.mOnPageChangeListener.onPageSelected(p0);
          if ( v5 && this.mInternalPageChangeListener != null )
            this.mInternalPageChangeListener.onPageSelected(p0);
          this.requestLayout();
        }
        else
        {
          this.populate(p0);
          this.scrollToItem(p0, p1, p3, v5);
        }
      }
      else
      {
        this.setScrollingCacheEnabled(false);
      }
    }

    android.support.v4.view.ViewPager$OnPageChangeListener setInternalPageChangeListener(
            android.support.v4.view.ViewPager$OnPageChangeListener p0)
    {
      this.mInternalPageChangeListener = p0;
      return this.mInternalPageChangeListener;
    }

    public void setOffscreenPageLimit(int p0)
    {
      if ( p0 <= 0 )
      {
        Log.w("ViewPager", "Requested offscreen page limit " + p0 + " too small; defaulting to 1");
        p0 = 1;
      }
      if ( p0 != this.mOffscreenPageLimit )
      {
        this.mOffscreenPageLimit = p0;
        this.populate();
      }
    }

    void setOnAdapterChangeListener(android.support.v4.view.ViewPager$OnAdapterChangeListener p0)
    {
      this.mAdapterChangeListener = p0;
    }

    public void setOnPageChangeListener(android.support.v4.view.ViewPager$OnPageChangeListener p0)
    {
      this.mOnPageChangeListener = p0;
    }

    public void setPageMargin(int p0)
    {
      int Width; // RETVAL
    
      this.mPageMargin = p0;
      Width = this.getWidth();
      this.recomputeScrollPosition(Width, Width, p0, this.mPageMargin);
      this.requestLayout();
    }

    public void setPageMarginDrawable(int p0)
    {
      this.setPageMarginDrawable(this.getContext().getResources().getDrawable(p0));
    }

    public void setPageMarginDrawable(android.graphics.drawable.Drawable p0)
    {
      boolean v2;
      this.mMarginDrawable = p0;
      if ( p0 != null )
      {
        this.refreshDrawableState();
        v2 = false;
      }
      else
      {
        v2 = true;
      }
      this.setWillNotDraw(v2);
      this.invalidate();
    }

    public void setPageTransformer(boolean p0, android.support.v4.view.ViewPager$PageTransformer p1)
    {
      int v3;
      boolean v4;
      boolean v5;
      v3 = 1;
      if ( Build.VERSION.SDK_INT >= 11 )
      {
        v4 = p1 != null;
        v5 = v4 != (this.mPageTransformer != null);
        this.mPageTransformer = p1;
        this.setChildrenDrawingOrderEnabledCompat(v4);
        if ( p1 != null )
        {
          if ( p0 )
            v3 = 2;
          this.mDrawingOrder = v3;
        }
        else
        {
          this.mDrawingOrder = 0;
        }
        if ( v5 )
          this.populate();
      }
    }

    void smoothScrollTo(int p0, int p1)
    {
      this.smoothScrollTo(p0, p1, 0);
    }

    void smoothScrollTo(int p0, int p1, int p2)
    {
      int ScrollX;
      int ScrollY;
      int v6;
      int v7;
      int ClientWidth;
      float v9;
      int v10; // RETVAL
      int v11;
      if ( this.getChildCount() != 0 )
      {
        ScrollX = this.getScrollX();
        ScrollY = this.getScrollY();
        v6 = p0 - ScrollX;
        v7 = p1 - ScrollY;
        if ( p0 != ScrollX || v7 != 0 )
        {
          this.setScrollingCacheEnabled(true);
          this.setScrollState(2);
          ClientWidth = this.getClientWidth();
          v9 = (float)(ClientWidth / 2)
             * this.distanceInfluenceForSnapDuration(Math.min(1.0f, (float)Math.abs(v6) * 1.0f / (float)ClientWidth))
             + (float)(ClientWidth / 2);
          v10 = Math.abs(p2);
          if ( v10 <= 0 )
            v11 = (int)(((float)Math.abs(v6)
                       / ((float)ClientWidth * this.mAdapter.getPageWidth(this.mCurItem) + (float)this.mPageMargin)
                       + 1.0f)
                      * 100.0f);
          else
            v11 = 4 * Math.round(1000.0f * Math.abs(v9 / (float)v10));
          this.mScroller.startScroll(ScrollX, ScrollY, v6, v7, Math.min(v11, 600));
          ViewCompat.postInvalidateOnAnimation(this);
        }
        else
        {
          this.completeScroll(false);
          this.populate();
          this.setScrollState(0);
        }
      }
      else
      {
        this.setScrollingCacheEnabled(false);
      }
    }

    protected boolean verifyDrawable(android.graphics.drawable.Drawable p0)
    {
      return super.verifyDrawable(p0) || p0 == this.mMarginDrawable;
    }

}
