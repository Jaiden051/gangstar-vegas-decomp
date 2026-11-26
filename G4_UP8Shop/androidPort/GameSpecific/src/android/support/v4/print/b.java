// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.print;

final class b implements android.support.v4.print.d {
    // Fields
    private final android.support.v4.print.PrintHelperKitkat a;

    // Methods
    b(android.content.Context p0)
    {
      super();
      this.a = new android.support.v4.print.PrintHelperKitkat(p0);
    }

    public final int a()
    {
      return this.a.a();
    }

    public final void a(int p0)
    {
      this.a.a(p0);
    }

    public final void a(String p0, android.graphics.Bitmap p1)
    {
      this.a.a(p0, p1);
    }

    public final void a(String p0, android.net.Uri p1)
    {
      this.a.a(p0, p1);
    }

    public final int b()
    {
      return this.a.c();
    }

    public final void b(int p0)
    {
      this.a.b(p0);
    }

    public final int c()
    {
      return this.a.b();
    }

    public final void c(int p0)
    {
      this.a.c(p0);
    }

}
