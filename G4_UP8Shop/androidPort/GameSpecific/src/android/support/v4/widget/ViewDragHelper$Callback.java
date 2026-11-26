// Decompiled from classes.dex (SourceFile: ViewDragHelper$Callback.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

public abstract class ViewDragHelper$Callback {
    // Methods
    public ViewDragHelper$Callback()
    {
      super();
    }

    public int clampViewPositionHorizontal(android.view.View p0, int p1, int p2)
    {
      return 0;
    }

    public int clampViewPositionVertical(android.view.View p0, int p1, int p2)
    {
      return 0;
    }

    public int getOrderedChildIndex(int p0)
    {
      return p0;
    }

    public int getViewHorizontalDragRange(android.view.View p0)
    {
      return 0;
    }

    public int getViewVerticalDragRange(android.view.View p0)
    {
      return 0;
    }

    public void onEdgeDragStarted(int p0, int p1)
    {
      ;
    }

    public boolean onEdgeLock(int p0)
    {
      return false;
    }

    public void onEdgeTouched(int p0, int p1)
    {
      ;
    }

    public void onViewCaptured(android.view.View p0, int p1)
    {
      ;
    }

    public void onViewDragStateChanged(int p0)
    {
      ;
    }

    public void onViewPositionChanged(android.view.View p0, int p1, int p2, int p3, int p4)
    {
      ;
    }

    public void onViewReleased(android.view.View p0, float p1, float p2)
    {
      ;
    }

    public abstract boolean tryCaptureView(android.view.View p0, int p1);

}
