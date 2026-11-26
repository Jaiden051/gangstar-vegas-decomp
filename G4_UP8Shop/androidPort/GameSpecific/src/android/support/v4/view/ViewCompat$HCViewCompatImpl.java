// Decompiled from classes.dex (SourceFile: ViewCompat$HCViewCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.view;

class ViewCompat$HCViewCompatImpl extends android.support.v4.view.ViewCompat$GBViewCompatImpl {
    // Methods
    ViewCompat$HCViewCompatImpl()
    {
      super();
    }

    public float getAlpha(android.view.View p0)
    {
      return ViewCompatHC.getAlpha(p0);
    }

    long getFrameTime()
    {
      return ViewCompatHC.getFrameTime();
    }

    public int getLayerType(android.view.View p0)
    {
      return ViewCompatHC.getLayerType(p0);
    }

    public int getMeasuredHeightAndState(android.view.View p0)
    {
      return ViewCompatHC.getMeasuredHeightAndState(p0);
    }

    public int getMeasuredState(android.view.View p0)
    {
      return ViewCompatHC.getMeasuredState(p0);
    }

    public int getMeasuredWidthAndState(android.view.View p0)
    {
      return ViewCompatHC.getMeasuredWidthAndState(p0);
    }

    public int resolveSizeAndState(int p0, int p1, int p2)
    {
      return ViewCompatHC.resolveSizeAndState(p0, p1, p2);
    }

    public void setLayerPaint(android.view.View p0, android.graphics.Paint p1)
    {
      this.setLayerType(p0, this.getLayerType(p0), p1);
      p0.invalidate();
    }

    public void setLayerType(android.view.View p0, int p1, android.graphics.Paint p2)
    {
      ViewCompatHC.setLayerType(p0, p1, p2);
    }

}
