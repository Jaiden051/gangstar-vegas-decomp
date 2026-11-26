// Decompiled from classes.dex (SourceFile: bh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

final class bh {
    // Fields
    static com.google.android.gms.tagmanager.bi a;
    static int b;

    // Methods
    static
    {
      a = (com.google.android.gms.tagmanager.bi)new com.google.android.gms.tagmanager.x();
    }

    public static void A(String p0)
    {
      a.a(p0);
    }

    public static void B(String p0)
    {
      a.c(p0);
    }

    public static void C(String p0)
    {
      a.e(p0);
    }

    public static void D(String p0)
    {
      a.b(p0);
    }

    public static void b(String p0, Throwable p1)
    {
      a.a(p0, p1);
    }

    public static void c(String p0, Throwable p1)
    {
      a.b(p0, p1);
    }

    public static int getLogLevel()
    {
      return b;
    }

    public static void setLogLevel(int p0)
    {
      a.a(p0);
    }

    public static void z(String p0)
    {
      a.d(p0);
    }

}
