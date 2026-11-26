// Decompiled from classes.dex (SourceFile: ViewPager$ViewPositionComparator.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewPager$ViewPositionComparator implements java.util.Comparator {
    // Methods
    ViewPager$ViewPositionComparator()
    {
      super();
    }

    public int compare(android.view.View p0, android.view.View p1)
    {
      android.support.v4.view.ViewPager$LayoutParams v3;
      android.support.v4.view.ViewPager$LayoutParams v4;
      v3 = (android.support.v4.view.ViewPager$LayoutParams)p0.getLayoutParams();
      v4 = (android.support.v4.view.ViewPager$LayoutParams)p1.getLayoutParams();
      if ( v3.isDecor == v4.isDecor )
        return v3.position - v4.position;
      if ( v3.isDecor )
        return 1;
      return -1;
    }

    /* bridge */ public int compare(Object p0, Object p1)
    {
      return this.compare/* int */((android.view.View)p0, (android.view.View)p1);
    }

}
