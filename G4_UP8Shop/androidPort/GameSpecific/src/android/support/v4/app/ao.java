// Decompiled from classes.dex (SourceFile: ao.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.app;

public final class ao extends android.support.v4.app.au {
    // Fields
    java.util.ArrayList a;

    // Methods
    public ao()
    {
      super();
      this.a = new java.util.ArrayList();
    }

    private ao(android.support.v4.app.an p0)
    {
      super();
      this.a = new java.util.ArrayList();
      this.a(p0);
    }

    private android.support.v4.app.ao a(CharSequence p0)
    {
      this.e = p0;
      return this;
    }

    private android.support.v4.app.ao b(CharSequence p0)
    {
      this.f = p0;
      this.g = true;
      return this;
    }

    private android.support.v4.app.ao c(CharSequence p0)
    {
      this.a.add(p0);
      return this;
    }

}
