// Decompiled from classes.dex (SourceFile: EdgeEffectCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.widget;

class EdgeEffectCompatIcs {
    // Methods
    EdgeEffectCompatIcs()
    {
      super();
    }

    public static boolean draw(Object p0, android.graphics.Canvas p1)
    {
      return ((android.widget.EdgeEffect)p0).draw(p1);
    }

    public static void finish(Object p0)
    {
      ((android.widget.EdgeEffect)p0).finish();
    }

    public static boolean isFinished(Object p0)
    {
      return ((android.widget.EdgeEffect)p0).isFinished();
    }

    public static Object newEdgeEffect(android.content.Context p0)
    {
      return new android.widget.EdgeEffect(p0);
    }

    public static boolean onAbsorb(Object p0, int p1)
    {
      ((android.widget.EdgeEffect)p0).onAbsorb(p1);
      return true;
    }

    public static boolean onPull(Object p0, float p1)
    {
      ((android.widget.EdgeEffect)p0).onPull(p1);
      return true;
    }

    public static boolean onRelease(Object p0)
    {
      android.widget.EdgeEffect v1;
      v1 = (android.widget.EdgeEffect)p0;
      v1.onRelease();
      return v1.isFinished();
    }

    public static void setSize(Object p0, int p1, int p2)
    {
      ((android.widget.EdgeEffect)p0).setSize(p1, p2);
    }

}
