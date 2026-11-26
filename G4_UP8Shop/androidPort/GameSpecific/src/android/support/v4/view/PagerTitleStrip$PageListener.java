// Decompiled from classes.dex (SourceFile: PagerTitleStrip$PageListener.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class PagerTitleStrip$PageListener extends android.database.DataSetObserver implements android.support.v4.view.ViewPager$OnAdapterChangeListener, android.support.v4.view.ViewPager$OnPageChangeListener {
    // Fields
    private int mScrollState;
    final android.support.v4.view.PagerTitleStrip this$0;

    // Methods
    private PagerTitleStrip$PageListener(android.support.v4.view.PagerTitleStrip p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ PagerTitleStrip$PageListener(android.support.v4.view.PagerTitleStrip p0, android.support.v4.view.PagerTitleStrip$1 p1)
    {
      this(p0);
    }

    public void onAdapterChanged(
            android.support.v4.view.PagerAdapter p0,
            android.support.v4.view.PagerAdapter p1)
    {
      this.this$0.updateAdapter(p0, p1);
    }

    public void onChanged()
    {
      float v1;
      v1 = 0.0f;
      this.this$0.updateText(this.this$0.mPager.getCurrentItem(), this.this$0.mPager.getAdapter());
      if ( PagerTitleStrip.access$100(this.this$0) >= 0.0f )
        v1 = PagerTitleStrip.access$100(this.this$0);
      this.this$0.updateTextPositions(this.this$0.mPager.getCurrentItem(), v1, true);
    }

    public void onPageScrollStateChanged(int p0)
    {
      this.mScrollState = p0;
    }

    public void onPageScrolled(int p0, float p1, int p2)
    {
      if ( p1 > 0.5f )
        ++p0;
      this.this$0.updateTextPositions(p0, p1, false);
    }

    public void onPageSelected(int p0)
    {
      float v2;
      v2 = 0.0f;
      if ( this.mScrollState == 0 )
      {
        this.this$0.updateText(this.this$0.mPager.getCurrentItem(), this.this$0.mPager.getAdapter());
        if ( PagerTitleStrip.access$100(this.this$0) >= 0.0f )
          v2 = PagerTitleStrip.access$100(this.this$0);
        this.this$0.updateTextPositions(this.this$0.mPager.getCurrentItem(), v2, true);
      }
    }

}
