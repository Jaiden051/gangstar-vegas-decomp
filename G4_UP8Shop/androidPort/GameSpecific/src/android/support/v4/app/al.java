// Decompiled from classes.dex (SourceFile: al.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public final class al extends android.support.v4.app.au {
    // Fields
    android.graphics.Bitmap a;
    android.graphics.Bitmap b;
    boolean c;

    // Methods
    public al()
    {
      super();
    }

    private al(android.support.v4.app.an p0)
    {
      super();
      this.a(p0);
    }

    private android.support.v4.app.al a(android.graphics.Bitmap p0)
    {
      this.a = p0;
      return this;
    }

    private android.support.v4.app.al a(CharSequence p0)
    {
      this.e = p0;
      return this;
    }

    private android.support.v4.app.al b(android.graphics.Bitmap p0)
    {
      this.b = p0;
      this.c = true;
      return this;
    }

    private android.support.v4.app.al b(CharSequence p0)
    {
      this.f = p0;
      this.g = true;
      return this;
    }

}
