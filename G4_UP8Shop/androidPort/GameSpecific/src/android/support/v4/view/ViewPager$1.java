// Decompiled from classes.dex (SourceFile: ViewPager$1.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

final class ViewPager$1 implements java.util.Comparator<android.support.v4.view.ViewPager$ItemInfo> {
    // Methods
    ViewPager$1()
    {
      super();
    }

    public final int compare(
            android.support.v4.view.ViewPager$ItemInfo p0,
            android.support.v4.view.ViewPager$ItemInfo p1)
    {
      return p0.position - p1.position;
    }



}
