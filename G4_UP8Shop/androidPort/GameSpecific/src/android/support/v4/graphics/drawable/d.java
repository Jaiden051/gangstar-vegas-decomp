// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.graphics.drawable;

final class d extends android.support.v4.graphics.drawable.c {
    // Methods
    d()
    {
      super();
    }

    public final void a(android.graphics.drawable.Drawable p0, boolean p1)
    {
      DrawableCompatKitKat.setAutoMirrored(p0, p1);
    }

    public final boolean b(android.graphics.drawable.Drawable p0)
    {
      return DrawableCompatKitKat.isAutoMirrored(p0);
    }

}
