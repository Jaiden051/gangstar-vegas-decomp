// Decompiled from classes.dex (SourceFile: az$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

final class az$a extends com.gameloft.android.DecompRT.EnumBase<az$a> {
    // Fields
    public static final com.google.android.gms.tagmanager.az$a a;
    public static final com.google.android.gms.tagmanager.az$a b;
    public static final com.google.android.gms.tagmanager.az$a c;
    private static final com.google.android.gms.tagmanager.az$a[] d;

    // Methods
    static
    {
      com.google.android.gms.tagmanager.az$a[] v0;
      a = new com.google.android.gms.tagmanager.az$a("NONE", 0);
      b = new com.google.android.gms.tagmanager.az$a("URL", 1);
      c = new com.google.android.gms.tagmanager.az$a("BACKSLASH", 2);
      v0 = new com.google.android.gms.tagmanager.az$a[3];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      d = (com.google.android.gms.tagmanager.az$a[])v0;
    }

    private az$a(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.google.android.gms.tagmanager.az$a valueOf(String p0)
    {
      return (com.google.android.gms.tagmanager.az$a)com.gameloft.android.DecompRT.EnumBase.valueOf(com.google.android.gms.tagmanager.az$a.class, p0);
    }

    public static com.google.android.gms.tagmanager.az$a[] values()
    {
      return (com.google.android.gms.tagmanager.az$a[])d.clone();
    }

}
