// Decompiled from classes.dex (SourceFile: PrintHelper.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.print;

import android.os.Build;
public final class PrintHelper {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    android.support.v4.print.d g;

    // Methods
    private PrintHelper(android.content.Context p0)
    {
      super();
      if ( systemSupportsPrint() )
        this.g = (android.support.v4.print.d)new android.support.v4.print.b(p0);
      else
        this.g = (android.support.v4.print.d)new android.support.v4.print.c((byte)0);
    }

    private int a()
    {
      return this.g.a();
    }

    private void a(int p0)
    {
      this.g.a(p0);
    }

    private void a(String p0, android.graphics.Bitmap p1)
    {
      this.g.a(p0, p1);
    }

    private void a(String p0, android.net.Uri p1)
    {
      this.g.a(p0, p1);
    }

    private int b()
    {
      return this.g.b();
    }

    private void b(int p0)
    {
      this.g.b(p0);
    }

    private int c()
    {
      return this.g.c();
    }

    private void c(int p0)
    {
      this.g.c(p0);
    }

    public static boolean systemSupportsPrint()
    {
      return Build.VERSION.SDK_INT >= 19;
    }

}
