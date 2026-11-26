// Decompiled from classes.dex (SourceFile: de$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class de$a implements com.google.android.gms.analytics.Logger {
    // Methods
    de$a()
    {
      super();
    }

    private static int dv(int p0)
    {
      int v1;
      v1 = 3;
      switch ( p0 )
      {
        case 2:
          v1 = 0;
          break;
        case 3:
        case 4:
          v1 = 1;
          break;
        case 5:
          v1 = 2;
          break;
        default:
          return v1;
      }
      return v1;
    }

    public final int a()
    {
      return dv(bh.getLogLevel());
    }

    public final void a(int p0)
    {
      bh.D("GA uses GTM logger. Please use TagManager.setLogLevel(int) instead.");
    }

    public final void a(Exception p0)
    {
      bh.b("", p0);
    }

    public final void a(String p0)
    {
      bh.C(p0);
    }

    public final void b(String p0)
    {
      bh.B(p0);
    }

    public final void c(String p0)
    {
      bh.D(p0);
    }

    public final void d(String p0)
    {
      bh.A(p0);
    }

}
