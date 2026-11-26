// Decompiled from classes.dex (SourceFile: ScrollerCompatGingerbread.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class ScrollerCompatGingerbread {
    // Methods
    ScrollerCompatGingerbread()
    {
      super();
    }

    public static void abortAnimation(Object p0)
    {
      ((android.widget.OverScroller)p0).abortAnimation();
    }

    public static boolean computeScrollOffset(Object p0)
    {
      return ((android.widget.OverScroller)p0).computeScrollOffset();
    }

    public static Object createScroller(
            android.content.Context p0,
            android.view.animation.Interpolator p1)
    {
      if ( p1 != null )
        return new android.widget.OverScroller(p0, p1);
      else
        return new android.widget.OverScroller(p0);
    }

    public static void fling(
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
      ((android.widget.OverScroller)p0).fling(p1, p2, p3, p4, p5, p6, p7, p8);
    }

    public static void fling(
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
      ((android.widget.OverScroller)p0).fling(p1, p2, p3, p4, p5, p6, p7, p8, p9, p10);
    }

    public static int getCurrX(Object p0)
    {
      return ((android.widget.OverScroller)p0).getCurrX();
    }

    public static int getCurrY(Object p0)
    {
      return ((android.widget.OverScroller)p0).getCurrY();
    }

    public static int getFinalX(Object p0)
    {
      return ((android.widget.OverScroller)p0).getFinalX();
    }

    public static int getFinalY(Object p0)
    {
      return ((android.widget.OverScroller)p0).getFinalY();
    }

    public static boolean isFinished(Object p0)
    {
      return ((android.widget.OverScroller)p0).isFinished();
    }

    public static boolean isOverScrolled(Object p0)
    {
      return ((android.widget.OverScroller)p0).isOverScrolled();
    }

    public static void notifyHorizontalEdgeReached(Object p0, int p1, int p2, int p3)
    {
      ((android.widget.OverScroller)p0).notifyHorizontalEdgeReached(p1, p2, p3);
    }

    public static void notifyVerticalEdgeReached(Object p0, int p1, int p2, int p3)
    {
      ((android.widget.OverScroller)p0).notifyVerticalEdgeReached(p1, p2, p3);
    }

    public static void startScroll(Object p0, int p1, int p2, int p3, int p4)
    {
      ((android.widget.OverScroller)p0).startScroll(p1, p2, p3, p4);
    }

    public static void startScroll(Object p0, int p1, int p2, int p3, int p4, int p5)
    {
      ((android.widget.OverScroller)p0).startScroll(p1, p2, p3, p4, p5);
    }

}
