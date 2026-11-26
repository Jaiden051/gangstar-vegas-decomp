// Decompiled from classes.dex (SourceFile: ScrollerCompat$ScrollerCompatImplGingerbread.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ScrollerCompat$ScrollerCompatImplGingerbread implements android.support.v4.widget.ScrollerCompat$ScrollerCompatImpl {
    // Methods
    ScrollerCompat$ScrollerCompatImplGingerbread()
    {
      super();
    }

    public void abortAnimation(Object p0)
    {
      ScrollerCompatGingerbread.abortAnimation(p0);
    }

    public boolean computeScrollOffset(Object p0)
    {
      return ScrollerCompatGingerbread.computeScrollOffset(p0);
    }

    public Object createScroller(
            android.content.Context p0,
            android.view.animation.Interpolator p1)
    {
      return ScrollerCompatGingerbread.createScroller(p0, p1);
    }

    public void fling(
            Object p0,
            int p1,
            int p2,
            int p3,
            int p4,
            int p5,
            int p6,
            int p7,
            int p8)
    {
      ScrollerCompatGingerbread.fling(p0, p1, p2, p3, p4, p5, p6, p7, p8);
    }

    public void fling(
            Object p0,
            int p1,
            int p2,
            int p3,
            int p4,
            int p5,
            int p6,
            int p7,
            int p8,
            int p9,
            int p10)
    {
      ScrollerCompatGingerbread.fling(p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
    }

    public float getCurrVelocity(Object p0)
    {
      return 0.0f;
    }

    public int getCurrX(Object p0)
    {
      return ScrollerCompatGingerbread.getCurrX(p0);
    }

    public int getCurrY(Object p0)
    {
      return ScrollerCompatGingerbread.getCurrY(p0);
    }

    public int getFinalX(Object p0)
    {
      return ScrollerCompatGingerbread.getFinalX(p0);
    }

    public int getFinalY(Object p0)
    {
      return ScrollerCompatGingerbread.getFinalY(p0);
    }

    public boolean isFinished(Object p0)
    {
      return ScrollerCompatGingerbread.isFinished(p0);
    }

    public boolean isOverScrolled(Object p0)
    {
      return ScrollerCompatGingerbread.isOverScrolled(p0);
    }

    public void notifyHorizontalEdgeReached(Object p0, int p1, int p2, int p3)
    {
      ScrollerCompatGingerbread.notifyHorizontalEdgeReached(p0, p1, p2, p3);
    }

    public void notifyVerticalEdgeReached(Object p0, int p1, int p2, int p3)
    {
      ScrollerCompatGingerbread.notifyVerticalEdgeReached(p0, p1, p2, p3);
    }

    public void startScroll(Object p0, int p1, int p2, int p3, int p4)
    {
      ScrollerCompatGingerbread.startScroll(p0, p1, p2, p3, p4);
    }

    public void startScroll(Object p0, int p1, int p2, int p3, int p4, int p5)
    {
      ScrollerCompatGingerbread.startScroll(p0, p1, p2, p3, p4, p5);
    }

}
