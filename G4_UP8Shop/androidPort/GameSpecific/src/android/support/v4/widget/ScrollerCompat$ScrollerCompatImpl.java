// Decompiled from classes.dex (SourceFile: ScrollerCompat$ScrollerCompatImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

interface ScrollerCompat$ScrollerCompatImpl {
    // Methods
    public abstract void abortAnimation(java.lang.Object p0);

    public abstract boolean computeScrollOffset(java.lang.Object p0);

    public abstract java.lang.Object createScroller(android.content.Context p0, android.view.animation.Interpolator p1);

    public abstract void fling(java.lang.Object p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8);

    public abstract void fling(java.lang.Object p0, int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10);

    public abstract float getCurrVelocity(java.lang.Object p0);

    public abstract int getCurrX(java.lang.Object p0);

    public abstract int getCurrY(java.lang.Object p0);

    public abstract int getFinalX(java.lang.Object p0);

    public abstract int getFinalY(java.lang.Object p0);

    public abstract boolean isFinished(java.lang.Object p0);

    public abstract boolean isOverScrolled(java.lang.Object p0);

    public abstract void notifyHorizontalEdgeReached(java.lang.Object p0, int p1, int p2, int p3);

    public abstract void notifyVerticalEdgeReached(java.lang.Object p0, int p1, int p2, int p3);

    public abstract void startScroll(java.lang.Object p0, int p1, int p2, int p3, int p4);

    public abstract void startScroll(java.lang.Object p0, int p1, int p2, int p3, int p4, int p5);

}
