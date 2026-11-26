// Decompiled from classes.dex (SourceFile: PagerTabStrip.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.view.ViewConfiguration;
public class PagerTabStrip extends android.support.v4.view.PagerTitleStrip {
    // Fields
    private static int FULL_UNDERLINE_HEIGHT;
    private static int INDICATOR_HEIGHT;
    private static int MIN_PADDING_BOTTOM;
    private static int MIN_STRIP_HEIGHT;
    private static int MIN_TEXT_SPACING;
    private static int TAB_PADDING;
    private static int TAB_SPACING;
    private static java.lang.String TAG;
    private boolean mDrawFullUnderline;
    private boolean mDrawFullUnderlineSet;
    private int mFullUnderlineHeight;
    private boolean mIgnoreTap;
    private int mIndicatorColor;
    private int mIndicatorHeight;
    private float mInitialMotionX;
    private float mInitialMotionY;
    private int mMinPaddingBottom;
    private int mMinStripHeight;
    private int mMinTextSpacing;
    private int mTabAlpha;
    private int mTabPadding;
    private final android.graphics.Paint mTabPaint;
    private final android.graphics.Rect mTempRect;
    private int mTouchSlop;

    // Methods
    public PagerTabStrip(android.content.Context p0)
    {
      this(p0, null);
    }

    public PagerTabStrip(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      float density;
      this.mTabPaint = new android.graphics.Paint();
      this.mTempRect = new android.graphics.Rect();
      this.mTabAlpha = 255;
      this.mDrawFullUnderline = false;
      this.mDrawFullUnderlineSet = false;
      this.mIndicatorColor = this.mTextColor;
      this.mTabPaint.setColor(this.mIndicatorColor);
      density = p0.getResources().getDisplayMetrics().density;
      this.mIndicatorHeight = (int)(3.0f * density + 0.5f);
      this.mMinPaddingBottom = (int)(6.0f * density + 0.5f);
      this.mMinTextSpacing = (int)(64.0f * density);
      this.mTabPadding = (int)(16.0f * density + 0.5f);
      this.mFullUnderlineHeight = (int)(1.0f * density + 0.5f);
      this.mMinStripHeight = (int)(density * 32.0f + 0.5f);
      this.mTouchSlop = ViewConfiguration.get(p0).getScaledTouchSlop();
      this.setPadding(this.getPaddingLeft(), this.getPaddingTop(), this.getPaddingRight(), this.getPaddingBottom());
      this.setTextSpacing(this.getTextSpacing());
      this.setWillNotDraw(false);
      this.mPrevText.setFocusable(true);
      this.mPrevText.setOnClickListener((android.view.View.OnClickListener)new android.support.v4.view.PagerTabStrip$1(this));
      this.mNextText.setFocusable(true);
      this.mNextText.setOnClickListener((android.view.View.OnClickListener)new android.support.v4.view.PagerTabStrip$2(this));
      if ( this.getBackground() == null )
        this.mDrawFullUnderline = true;
    
    }

    public boolean getDrawFullUnderline()
    {
      return this.mDrawFullUnderline;
    }

    int getMinHeight()
    {
      return Math.max(super.getMinHeight(), this.mMinStripHeight);
    }

    public int getTabIndicatorColor()
    {
      return this.mIndicatorColor;
    }

    protected void onDraw(android.graphics.Canvas p0)
    {
      int Height;
      int v3;
      int v4;
      super.onDraw(p0);
      Height = this.getHeight();
      v3 = this.mCurrText.getLeft() - this.mTabPadding;
      v4 = this.mCurrText.getRight() + this.mTabPadding;
      this.mTabPaint.setColor((this.mTabAlpha << 24) | this.mIndicatorColor & 0xFFFFFF);
      p0.drawRect((float)v3, (float)(Height - this.mIndicatorHeight), (float)v4, (float)Height, this.mTabPaint);
      if ( this.mDrawFullUnderline )
      {
        this.mTabPaint.setColor(this.mIndicatorColor & 0xFFFFFF | 0xFF000000);
        p0.drawRect((float)this.getPaddingLeft(), (float)(Height - this.mFullUnderlineHeight), (float)(this.getWidth()
                                                                                                     - this.getPaddingRight()), (float)Height, this.mTabPaint);
      }
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      boolean v2;
      int Action;
      float v5;
      float v6; // RETVAL
      float v7;
      v2 = false;
      Action = p0.getAction();
      if ( Action == 0 || !this.mIgnoreTap )
      {
        v5 = p0.getX();
        v6 = p0.getY();
        v7 = v6;
        switch ( Action )
        {
          case 0:
            this.mInitialMotionX = v5;
            this.mInitialMotionY = v6;
            this.mIgnoreTap = false;
            break;
          case 1:
            if ( v5 >= (float)(this.mCurrText.getLeft() - this.mTabPadding) )
            {
              if ( v5 > (float)(this.mCurrText.getRight() + this.mTabPadding) )
                this.mPager.setCurrentItem(this.mPager.getCurrentItem() + 1);
            }
            else
            {
              this.mPager.setCurrentItem(this.mPager.getCurrentItem() - 1);
            }
            break;
          case 2:
            if ( Math.abs(v5 - this.mInitialMotionX) > (float)this.mTouchSlop
              || Math.abs(v7 - this.mInitialMotionY) > (float)this.mTouchSlop )
            {
              this.mIgnoreTap = true;
            }
            break;
          default:
            return true;
        }
        return true;
      }
      return v2;
    }

    public void setBackgroundColor(int p0)
    {
      super.setBackgroundColor(p0);
      if ( !this.mDrawFullUnderlineSet )
        this.mDrawFullUnderline = (p0 & 0xFF000000) == 0;
    }

    public void setBackgroundDrawable(android.graphics.drawable.Drawable p0)
    {
      super.setBackgroundDrawable(p0);
      if ( !this.mDrawFullUnderlineSet )
        this.mDrawFullUnderline = p0 == null;
    }

    public void setBackgroundResource(int p0)
    {
      super.setBackgroundResource(p0);
      if ( !this.mDrawFullUnderlineSet )
        this.mDrawFullUnderline = p0 == 0;
    }

    public void setDrawFullUnderline(boolean p0)
    {
      this.mDrawFullUnderline = p0;
      this.mDrawFullUnderlineSet = true;
      this.invalidate();
    }

    public void setPadding(int p0, int p1, int p2, int p3)
    {
      if ( p3 < this.mMinPaddingBottom )
        p3 = this.mMinPaddingBottom;
      super.setPadding(p0, p1, p2, p3);
    }

    public void setTabIndicatorColor(int p0)
    {
      this.mIndicatorColor = p0;
      this.mTabPaint.setColor(this.mIndicatorColor);
      this.invalidate();
    }

    public void setTabIndicatorColorResource(int p0)
    {
      this.setTabIndicatorColor(this.getContext().getResources().getColor(p0));
    }

    public void setTextSpacing(int p0)
    {
      if ( p0 < this.mMinTextSpacing )
        p0 = this.mMinTextSpacing;
      super.setTextSpacing(p0);
    }

    void updateTextPositions(int p0, float p1, boolean p2)
    {
      android.graphics.Rect mTempRect;
      int Height;
      int v6;
      mTempRect = this.mTempRect;
      Height = this.getHeight();
      v6 = Height - this.mIndicatorHeight;
      mTempRect.set(this.mCurrText.getLeft() - this.mTabPadding, v6, this.mCurrText.getRight() + this.mTabPadding, Height);
      super.updateTextPositions(p0, p1, p2);
      this.mTabAlpha = (int)(Math.abs(p1 - 0.5f) * 2.0f * 255.0f);
      mTempRect.union(this.mCurrText.getLeft() - this.mTabPadding, v6, this.mCurrText.getRight() + this.mTabPadding, Height);
      this.invalidate(mTempRect);
    }

}
