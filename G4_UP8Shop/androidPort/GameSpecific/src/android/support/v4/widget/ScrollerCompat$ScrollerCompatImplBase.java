// Decompiled from classes.dex (SourceFile: ScrollerCompat$ScrollerCompatImplBase.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ScrollerCompat$ScrollerCompatImplBase implements android.support.v4.widget.ScrollerCompat$ScrollerCompatImpl {
    // Methods
    ScrollerCompat$ScrollerCompatImplBase()
    {
      super();
    }

    public void abortAnimation(Object p0)
    {
      ((android.widget.Scroller)p0).abortAnimation();
    }

    public boolean computeScrollOffset(Object p0)
    {
      return ((android.widget.Scroller)p0).computeScrollOffset();
    }

    public Object createScroller(
            android.content.Context p0,
            android.view.animation.Interpolator p1)
    {
      if ( p1 != null )
        return new android.widget.Scroller(p0, p1);
      else
        return new android.widget.Scroller(p0);
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
      ((android.widget.Scroller)p0).fling(p1, p2, p3, p4, p5, p6, p7, p8);
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
      ((android.widget.Scroller)p0).fling(p1, p2, p3, p4, p5, p6, p7, p8);
    }

    public float getCurrVelocity(Object p0)
    {
      return 0.0f;
    }

    public int getCurrX(Object p0)
    {
      return ((android.widget.Scroller)p0).getCurrX();
    }

    public int getCurrY(Object p0)
    {
      return ((android.widget.Scroller)p0).getCurrY();
    }

    public int getFinalX(Object p0)
    {
      return ((android.widget.Scroller)p0).getFinalX();
    }

    public int getFinalY(Object p0)
    {
      return ((android.widget.Scroller)p0).getFinalY();
    }

    public boolean isFinished(Object p0)
    {
      return ((android.widget.Scroller)p0).isFinished();
    }

    public boolean isOverScrolled(Object p0)
    {
      return false;
    }

    public void notifyHorizontalEdgeReached(Object p0, int p1, int p2, int p3)
    {
      ;
    }

    public void notifyVerticalEdgeReached(Object p0, int p1, int p2, int p3)
    {
      ;
    }

    public void startScroll(Object p0, int p1, int p2, int p3, int p4)
    {
      ((android.widget.Scroller)p0).startScroll(p1, p2, p3, p4);
    }

    public void startScroll(Object p0, int p1, int p2, int p3, int p4, int p5)
    {
      ((android.widget.Scroller)p0).startScroll(p1, p2, p3, p4, p5);
    }

}
