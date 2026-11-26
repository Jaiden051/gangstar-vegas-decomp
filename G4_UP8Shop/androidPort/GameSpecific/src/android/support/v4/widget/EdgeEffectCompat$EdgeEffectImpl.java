// Decompiled from classes.dex (SourceFile: EdgeEffectCompat$EdgeEffectImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

interface EdgeEffectCompat$EdgeEffectImpl {
    // Methods
    public abstract boolean draw(java.lang.Object p0, android.graphics.Canvas p1);

    public abstract void finish(java.lang.Object p0);

    public abstract boolean isFinished(java.lang.Object p0);

    public abstract java.lang.Object newEdgeEffect(android.content.Context p0);

    public abstract boolean onAbsorb(java.lang.Object p0, int p1);

    public abstract boolean onPull(java.lang.Object p0, float p1);

    public abstract boolean onRelease(java.lang.Object p0);

    public abstract void setSize(java.lang.Object p0, int p1, int p2);

}
