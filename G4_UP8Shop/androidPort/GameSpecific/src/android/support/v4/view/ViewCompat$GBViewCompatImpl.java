// Decompiled from classes.dex (SourceFile: ViewCompat$GBViewCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewCompat$GBViewCompatImpl extends android.support.v4.view.ViewCompat$EclairMr1ViewCompatImpl {
    // Methods
    ViewCompat$GBViewCompatImpl()
    {
      super();
    }

    public int getOverScrollMode(android.view.View p0)
    {
      return ViewCompatGingerbread.getOverScrollMode(p0);
    }

    public void setOverScrollMode(android.view.View p0, int p1)
    {
      ViewCompatGingerbread.setOverScrollMode(p0, p1);
    }

}
