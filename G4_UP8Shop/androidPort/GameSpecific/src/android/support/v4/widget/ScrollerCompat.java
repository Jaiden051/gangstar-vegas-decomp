// Decompiled from classes.dex (SourceFile: ScrollerCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

import android.os.Build;
public class ScrollerCompat {
    // Fields
    static final android.support.v4.widget.ScrollerCompat$ScrollerCompatImpl IMPL;
    java.lang.Object mScroller;

    // Methods
    static
    {
      int v0;
      v0 = Build.VERSION.SDK_INT;
      if ( v0 < 14 )
      {
        if ( v0 < 9 )
          IMPL = (android.support.v4.widget.ScrollerCompat$ScrollerCompatImpl)new android.support.v4.widget.ScrollerCompat$ScrollerCompatImplBase();
        else
          IMPL = (android.support.v4.widget.ScrollerCompat$ScrollerCompatImpl)new android.support.v4.widget.ScrollerCompat$ScrollerCompatImplGingerbread();
      }
      else
      {
        IMPL = (android.support.v4.widget.ScrollerCompat$ScrollerCompatImpl)new android.support.v4.widget.ScrollerCompat$ScrollerCompatImplIcs();
      }
    }

    ScrollerCompat(android.content.Context p0, android.view.animation.Interpolator p1)
    {
      super();
      this.mScroller = IMPL.createScroller(p0, p1);
    }

    public static android.support.v4.widget.ScrollerCompat create(android.content.Context p0)
    {
      return create(p0, null);
    }

    public static android.support.v4.widget.ScrollerCompat create(
            android.content.Context p0,
            android.view.animation.Interpolator p1)
    {
      return new android.support.v4.widget.ScrollerCompat(p0, p1);
    }

    public void abortAnimation()
    {
      IMPL.abortAnimation(this.mScroller);
    }

    public boolean computeScrollOffset()
    {
      return IMPL.computeScrollOffset(this.mScroller);
    }

    public void fling(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7)
    {
      IMPL.fling(this.mScroller, p0, p1, p2, p3, p4, p5, p6, p7);
    }

    public void fling(int p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9)
    {
      IMPL.fling(this.mScroller, p0, p1, p2, p3, p4, p5, p6, p7, p8, p9);
    }

    public float getCurrVelocity()
    {
      return IMPL.getCurrVelocity(this.mScroller);
    }

    public int getCurrX()
    {
      return IMPL.getCurrX(this.mScroller);
    }

    public int getCurrY()
    {
      return IMPL.getCurrY(this.mScroller);
    }

    public int getFinalX()
    {
      return IMPL.getFinalX(this.mScroller);
    }

    public int getFinalY()
    {
      return IMPL.getFinalY(this.mScroller);
    }

    public boolean isFinished()
    {
      return IMPL.isFinished(this.mScroller);
    }

    public boolean isOverScrolled()
    {
      return IMPL.isOverScrolled(this.mScroller);
    }

    public void notifyHorizontalEdgeReached(int p0, int p1, int p2)
    {
      IMPL.notifyHorizontalEdgeReached(this.mScroller, p0, p1, p2);
    }

    public void notifyVerticalEdgeReached(int p0, int p1, int p2)
    {
      IMPL.notifyVerticalEdgeReached(this.mScroller, p0, p1, p2);
    }

    public void startScroll(int p0, int p1, int p2, int p3)
    {
      IMPL.startScroll(this.mScroller, p0, p1, p2, p3);
    }

    public void startScroll(int p0, int p1, int p2, int p3, int p4)
    {
      IMPL.startScroll(this.mScroller, p0, p1, p2, p3, p4);
    }

}
