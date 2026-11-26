// Decompiled from classes.dex (SourceFile: PagerTitleStrip.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

import android.graphics.Color;
import android.os.Build;
import android.text.TextUtils;
import android.view.View;
public class PagerTitleStrip extends android.view.ViewGroup implements android.support.v4.view.ViewPager$Decor {
    // Fields
    private static final int[] ATTRS;
    private static final android.support.v4.view.PagerTitleStrip$PagerTitleStripImpl IMPL;
    private static float SIDE_ALPHA;
    private static java.lang.String TAG;
    private static final int[] TEXT_ATTRS;
    private static int TEXT_SPACING;
    android.widget.TextView mCurrText;
    private int mGravity;
    private int mLastKnownCurrentPage;
    private float mLastKnownPositionOffset;
    android.widget.TextView mNextText;
    private int mNonPrimaryAlpha;
    private final android.support.v4.view.PagerTitleStrip$PageListener mPageListener;
    android.support.v4.view.ViewPager mPager;
    android.widget.TextView mPrevText;
    private int mScaledTextSpacing;
    int mTextColor;
    private boolean mUpdatingPositions;
    private boolean mUpdatingText;
    private java.lang.ref.WeakReference mWatchingAdapter;

    // Methods
    static
    {
      int[] v0;
      ATTRS = new int[] { 16842804, 16842901, 16842904, 16842927 };
      v0 = new int[1];
      v0[0] = 16843660;
      TEXT_ATTRS = (int[])v0;
      if ( Build.VERSION.SDK_INT < 14 )
        IMPL = (android.support.v4.view.PagerTitleStrip$PagerTitleStripImpl)new android.support.v4.view.PagerTitleStrip$PagerTitleStripImplBase();
      else
        IMPL = (android.support.v4.view.PagerTitleStrip$PagerTitleStripImpl)new android.support.v4.view.PagerTitleStrip$PagerTitleStripImplIcs();
    }

    public PagerTitleStrip(android.content.Context p0)
    {
      this(p0, null);
    }

    public PagerTitleStrip(android.content.Context p0, android.util.AttributeSet p1)
    {
      super(p0, p1);
      boolean Boolean;
      android.widget.TextView v4;
      android.widget.TextView v5;
      android.widget.TextView v6;
      android.content.res.TypedArray v7;
      int ResourceId; // RETVAL
      int v9;
      int DimensionPixelSize; // RETVAL
      int Color; // RETVAL
      android.content.res.TypedArray v12;
      Boolean = false;
      this.mLastKnownCurrentPage = -1;
      this.mLastKnownPositionOffset = -1.0f;
      this.mPageListener = new android.support.v4.view.PagerTitleStrip$PageListener(this, null);
      v4 = new android.widget.TextView(p0);
      this.mPrevText = v4;
      this.addView(v4);
      v5 = new android.widget.TextView(p0);
      this.mCurrText = v5;
      this.addView(v5);
      v6 = new android.widget.TextView(p0);
      this.mNextText = v6;
      this.addView(v6);
      v7 = p0.obtainStyledAttributes(p1, ATTRS);
      ResourceId = v7.getResourceId(0, 0);
      v9 = ResourceId;
      if ( ResourceId != 0 )
      {
        this.mPrevText.setTextAppearance(p0, ResourceId);
        this.mCurrText.setTextAppearance(p0, ResourceId);
        this.mNextText.setTextAppearance(p0, ResourceId);
      }
      DimensionPixelSize = v7.getDimensionPixelSize(1, 0);
      if ( DimensionPixelSize != 0 )
        this.setTextSize(0, (float)DimensionPixelSize);
      if ( v7.hasValue(2) )
      {
        Color = v7.getColor(2, 0);
        this.mPrevText.setTextColor(Color);
        this.mCurrText.setTextColor(Color);
        this.mNextText.setTextColor(Color);
      }
      this.mGravity = v7.getInteger(3, 80);
      v7.recycle();
      this.mTextColor = this.mCurrText.getTextColors().getDefaultColor();
      this.setNonPrimaryAlpha(0.6f);
      this.mPrevText.setEllipsize(TextUtils.TruncateAt.END);
      this.mCurrText.setEllipsize(TextUtils.TruncateAt.END);
      this.mNextText.setEllipsize(TextUtils.TruncateAt.END);
      if ( v9 != 0 )
      {
        v12 = p0.obtainStyledAttributes(v9, TEXT_ATTRS);
        Boolean = v12.getBoolean(0, false);
        v12.recycle();
      }
      if ( Boolean )
      {
        setSingleLineAllCaps(this.mPrevText);
        setSingleLineAllCaps(this.mCurrText);
        setSingleLineAllCaps(this.mNextText);
      }
      else
      {
        this.mPrevText.setSingleLine();
        this.mCurrText.setSingleLine();
        this.mNextText.setSingleLine();
      }
      this.mScaledTextSpacing = (int)(p0.getResources().getDisplayMetrics().density * 16.0f);
    
    }

    /* synthetic */ static float access$100(android.support.v4.view.PagerTitleStrip p0)
    {
      return p0.mLastKnownPositionOffset;
    }

    private static void setSingleLineAllCaps(android.widget.TextView p0)
    {
      IMPL.setSingleLineAllCaps(p0);
    }

    int getMinHeight()
    {
      int v1;
      android.graphics.drawable.Drawable Background; // RETVAL
    
      v1 = 0;
      Background = this.getBackground();
      if ( Background != null )
        return Background.getIntrinsicHeight();
      return v1;
    }

    public int getTextSpacing()
    {
      return this.mScaledTextSpacing;
    }

    protected void onAttachedToWindow()
    {
      android.view.ViewParent Parent; // RETVAL
      android.support.v4.view.ViewPager v2;
      android.support.v4.view.PagerAdapter Adapter;
      android.support.v4.view.PagerAdapter v4;
      super.onAttachedToWindow();
      Parent = this.getParent();
      if ( !(Parent instanceof android.support.v4.view.ViewPager) )
        throw new IllegalStateException("PagerTitleStrip must be a direct child of a ViewPager.");
      v2 = (android.support.v4.view.ViewPager)Parent;
      Adapter = v2.getAdapter();
      v2.setInternalPageChangeListener(this.mPageListener);
      v2.setOnAdapterChangeListener(this.mPageListener);
      this.mPager = v2;
      if ( this.mWatchingAdapter != null )
        v4 = (android.support.v4.view.PagerAdapter)this.mWatchingAdapter.get();
      else
        v4 = null;
      this.updateAdapter(v4, Adapter);
    }

    protected void onDetachedFromWindow()
    {
      super.onDetachedFromWindow();
      if ( this.mPager != null )
      {
        this.updateAdapter(this.mPager.getAdapter(), null);
        this.mPager.setInternalPageChangeListener(null);
        this.mPager.setOnAdapterChangeListener(null);
        this.mPager = null;
      }
    }

    protected void onLayout(boolean p0, int p1, int p2, int p3, int p4)
    {
      float mLastKnownPositionOffset;
      mLastKnownPositionOffset = 0.0f;
      if ( this.mPager != null )
      {
        if ( this.mLastKnownPositionOffset >= 0.0f )
          mLastKnownPositionOffset = this.mLastKnownPositionOffset;
        this.updateTextPositions(this.mLastKnownCurrentPage, mLastKnownPositionOffset, true);
      }
    }

    protected void onMeasure(int p0, int p1)
    {
      int Mode;
      int v4;
      int Size;
      int v6;
      int MinHeight;
      int v8;
      int MeasureSpec;
      int v10; // RETVAL
    
      Mode = View.MeasureSpec.getMode(p0);
      v4 = View.MeasureSpec.getMode(p1);
      Size = View.MeasureSpec.getSize(p0);
      v6 = View.MeasureSpec.getSize(p1);
      if ( Mode != 0x40000000 )
        throw new IllegalStateException("Must measure with an exact width");
      MinHeight = this.getMinHeight();
      v8 = this.getPaddingTop() + this.getPaddingBottom();
      MeasureSpec = View.MeasureSpec.makeMeasureSpec((int)((float)Size * 0.8f), 0x80000000);
      v10 = View.MeasureSpec.makeMeasureSpec(v6 - v8, 0x80000000);
      this.mPrevText.measure(MeasureSpec, v10);
      this.mCurrText.measure(MeasureSpec, v10);
      this.mNextText.measure(MeasureSpec, v10);
      if ( v4 == 0x40000000 )
        this.setMeasuredDimension(Size, v6);
      else
        this.setMeasuredDimension(Size, Math.max(MinHeight, this.mCurrText.getMeasuredHeight() + v8));
    }

    public void requestLayout()
    {
      if ( !this.mUpdatingText )
        super.requestLayout();
    }

    public void setGravity(int p0)
    {
      this.mGravity = p0;
      this.requestLayout();
    }

    public void setNonPrimaryAlpha(float p0)
    {
      int v2;
      this.mNonPrimaryAlpha = (int)(255.0f * p0) & 0xFF;
      v2 = (this.mNonPrimaryAlpha << 24) | this.mTextColor & 0xFFFFFF;
      this.mPrevText.setTextColor(v2);
      this.mNextText.setTextColor(v2);
    }

    public void setTextColor(int p0)
    {
      int v2;
      this.mTextColor = p0;
      this.mCurrText.setTextColor(p0);
      v2 = (this.mNonPrimaryAlpha << 24) | this.mTextColor & 0xFFFFFF;
      this.mPrevText.setTextColor(v2);
      this.mNextText.setTextColor(v2);
    }

    public void setTextSize(int p0, float p1)
    {
      this.mPrevText.setTextSize(p0, p1);
      this.mCurrText.setTextSize(p0, p1);
      this.mNextText.setTextSize(p0, p1);
    }

    public void setTextSpacing(int p0)
    {
      this.mScaledTextSpacing = p0;
      this.requestLayout();
    }

    void updateAdapter(android.support.v4.view.PagerAdapter p0, android.support.v4.view.PagerAdapter p1)
    {
      if ( p0 != null )
      {
        p0.unregisterDataSetObserver(this.mPageListener);
        this.mWatchingAdapter = null;
      }
      if ( p1 != null )
      {
        p1.registerDataSetObserver(this.mPageListener);
        this.mWatchingAdapter = new java.lang.ref.WeakReference(p1);
      }
      if ( this.mPager != null )
      {
        this.mLastKnownCurrentPage = -1;
        this.mLastKnownPositionOffset = -1.0f;
        this.updateText(this.mPager.getCurrentItem(), p1);
        this.requestLayout();
      }
    }

    void updateText(int p0, android.support.v4.view.PagerAdapter p1)
    {
      CharSequence v3;
      int Count;
      CharSequence PageTitle;
      android.widget.TextView mCurrText;
      CharSequence v7;
      int v8;
      int v9;
      int MeasureSpec;
      int v11; // RETVAL
    
      v3 = null;
      if ( p1 != null )
        Count = p1.getCount();
      else
        Count = 0;
      this.mUpdatingText = true;
      if ( p0 > 0 && p1 != null )
        PageTitle = p1.getPageTitle(p0 - 1);
      else
        PageTitle = null;
      this.mPrevText.setText(PageTitle);
      mCurrText = this.mCurrText;
      if ( p1 != null && p0 < Count )
        v7 = p1.getPageTitle(p0);
      else
        v7 = null;
      mCurrText.setText(v7);
      if ( p0 + 1 < Count && p1 != null )
        v3 = p1.getPageTitle(p0 + 1);
      this.mNextText.setText(v3);
      v8 = this.getWidth() - this.getPaddingLeft() - this.getPaddingRight();
      v9 = this.getHeight() - this.getPaddingTop() - this.getPaddingBottom();
      MeasureSpec = View.MeasureSpec.makeMeasureSpec((int)((float)v8 * 0.8f), 0x80000000);
      v11 = View.MeasureSpec.makeMeasureSpec(v9, 0x80000000);
      this.mPrevText.measure(MeasureSpec, v11);
      this.mCurrText.measure(MeasureSpec, v11);
      this.mNextText.measure(MeasureSpec, v11);
      this.mLastKnownCurrentPage = p0;
      if ( !this.mUpdatingPositions )
        this.updateTextPositions(p0, this.mLastKnownPositionOffset, false);
      this.mUpdatingText = false;
    }

    void updateTextPositions(int p0, float p1, boolean p2)
    {
      int MeasuredWidth;
      int v5;
      int v6;
      int Width;
      int Height;
      int PaddingLeft;
      int PaddingRight;
      int PaddingTop;
      int PaddingBottom;
      float v13;
      int v14;
      int v15;
      int Baseline;
      int v17;
      int v18;
      int v19; // RETVAL
      int v20;
      int v21;
      int v22;
      int v23; // RETVAL
      int v24;
      int v25;
      int v26;
      int v27;
      int v28;
      int v29;
      int v30;
      if ( p0 == this.mLastKnownCurrentPage )
      {
        if ( !p2 && p1 == this.mLastKnownPositionOffset )
          return;
      }
      else
      {
        this.updateText(p0, this.mPager.getAdapter());
      }
      this.mUpdatingPositions = true;
      MeasuredWidth = this.mPrevText.getMeasuredWidth();
      v5 = this.mCurrText.getMeasuredWidth();
      v6 = this.mNextText.getMeasuredWidth();
      Width = this.getWidth();
      Height = this.getHeight();
      PaddingLeft = this.getPaddingLeft();
      PaddingRight = this.getPaddingRight();
      PaddingTop = this.getPaddingTop();
      PaddingBottom = this.getPaddingBottom();
      v13 = p1 + 0.5f;
      if ( p1 + 0.5f > 1.0f )
        v13 = v13 - 1.0f;
      v14 = Width
          - (PaddingRight
           + v5 / 2)
          - (int)(v13 * (float)(Width - (PaddingLeft + v5 / 2) - (PaddingRight + v5 / 2)))
          - v5 / 2;
      v15 = v14 + v5;
      Baseline = this.mPrevText.getBaseline();
      v17 = this.mCurrText.getBaseline();
      v18 = this.mNextText.getBaseline();
      v19 = Math.max(Math.max(Baseline, v17), v18);
      v20 = v19 - Baseline;
      v21 = v19 - v17;
      v22 = v19 - v18;
      v23 = Math.max(
              Math.max(this.mPrevText.getMeasuredHeight() + v20, this.mCurrText.getMeasuredHeight() + v21),
              this.mNextText.getMeasuredHeight() + v19 - v18);
      switch ( this.mGravity & 0x70 )
      {
        case 0x10:
          v29 = (Height - PaddingTop - PaddingBottom - v23) / 2;
          v24 = v29 + v20;
          v25 = v29 + v21;
          v26 = v29 + v22;
          break;
        case 0x50:
          v30 = Height - PaddingBottom - v23;
          v24 = v30 + v20;
          v25 = v30 + v21;
          v26 = v30 + v22;
          break;
        default:
          v24 = PaddingTop + v20;
          v25 = PaddingTop + v21;
          v26 = PaddingTop + v22;
          break;
      }
      this.mCurrText.layout(v14, v25, v15, this.mCurrText.getMeasuredHeight() + v25);
      v27 = Math.min(PaddingLeft, v14 - this.mScaledTextSpacing - MeasuredWidth);
      this.mPrevText.layout(v27, v24, MeasuredWidth + v27, this.mPrevText.getMeasuredHeight() + v24);
      v28 = Math.max(Width - PaddingRight - v6, this.mScaledTextSpacing + v15);
      this.mNextText.layout(v28, v26, v28 + v6, this.mNextText.getMeasuredHeight() + v26);
      this.mLastKnownPositionOffset = p1;
      this.mUpdatingPositions = false;
    }

}
