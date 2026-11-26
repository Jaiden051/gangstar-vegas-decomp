// Decompiled from classes.dex (SourceFile: PagerTabStrip$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class PagerTabStrip$1 implements android.view.View.OnClickListener {
    // Fields
    final android.support.v4.view.PagerTabStrip this$0;

    // Methods
    PagerTabStrip$1(android.support.v4.view.PagerTabStrip p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onClick(android.view.View p0)
    {
      this.this$0.mPager.setCurrentItem(this.this$0.mPager.getCurrentItem() - 1);
    }

}
