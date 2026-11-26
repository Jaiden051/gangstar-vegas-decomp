// Decompiled from classes.dex (SourceFile: EdgeEffectCompat$EdgeEffectIcsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class EdgeEffectCompat$EdgeEffectIcsImpl implements android.support.v4.widget.EdgeEffectCompat$EdgeEffectImpl {
    // Methods
    EdgeEffectCompat$EdgeEffectIcsImpl()
    {
      super();
    }

    public boolean draw(Object p0, android.graphics.Canvas p1)
    {
      return EdgeEffectCompatIcs.draw(p0, p1);
    }

    public void finish(Object p0)
    {
      EdgeEffectCompatIcs.finish(p0);
    }

    public boolean isFinished(Object p0)
    {
      return EdgeEffectCompatIcs.isFinished(p0);
    }

    public Object newEdgeEffect(android.content.Context p0)
    {
      return EdgeEffectCompatIcs.newEdgeEffect(p0);
    }

    public boolean onAbsorb(Object p0, int p1)
    {
      return EdgeEffectCompatIcs.onAbsorb(p0, p1);
    }

    public boolean onPull(Object p0, float p1)
    {
      return EdgeEffectCompatIcs.onPull(p0, p1);
    }

    public boolean onRelease(Object p0)
    {
      return EdgeEffectCompatIcs.onRelease(p0);
    }

    public void setSize(Object p0, int p1, int p2)
    {
      EdgeEffectCompatIcs.setSize(p0, p1, p2);
    }

}
