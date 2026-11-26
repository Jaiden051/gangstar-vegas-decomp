// Decompiled from classes.dex (SourceFile: ViewPager$PagerObserver.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewPager$PagerObserver extends android.database.DataSetObserver {
    // Fields
    final android.support.v4.view.ViewPager this$0;

    // Methods
    private ViewPager$PagerObserver(android.support.v4.view.ViewPager p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ ViewPager$PagerObserver(android.support.v4.view.ViewPager p0, android.support.v4.view.ViewPager$1 p1)
    {
      this(p0);
    }

    public void onChanged()
    {
      this.this$0.dataSetChanged();
    }

    public void onInvalidated()
    {
      this.this$0.dataSetChanged();
    }

}
