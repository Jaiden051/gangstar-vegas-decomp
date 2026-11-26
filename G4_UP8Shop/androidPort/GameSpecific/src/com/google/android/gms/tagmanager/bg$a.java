// Decompiled from classes.dex (SourceFile: bg$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

public final class bg$a extends com.gameloft.android.DecompRT.EnumBase<bg$a> {
    // Fields
    public static final com.google.android.gms.tagmanager.bg$a a;
    public static final com.google.android.gms.tagmanager.bg$a b;
    public static final com.google.android.gms.tagmanager.bg$a c;
    private static final com.google.android.gms.tagmanager.bg$a[] d;

    // Methods
    static
    {
      com.google.android.gms.tagmanager.bg$a[] v0;
      a = new com.google.android.gms.tagmanager.bg$a("NOT_AVAILABLE", 0);
      b = new com.google.android.gms.tagmanager.bg$a("IO_ERROR", 1);
      c = new com.google.android.gms.tagmanager.bg$a("SERVER_ERROR", 2);
      v0 = new com.google.android.gms.tagmanager.bg$a[3];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      d = (com.google.android.gms.tagmanager.bg$a[])v0;
    }

    private bg$a(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.google.android.gms.tagmanager.bg$a valueOf(String p0)
    {
      return (com.google.android.gms.tagmanager.bg$a)com.gameloft.android.DecompRT.EnumBase.valueOf(com.google.android.gms.tagmanager.bg$a.class, p0);
    }

    public static com.google.android.gms.tagmanager.bg$a[] values()
    {
      return (com.google.android.gms.tagmanager.bg$a[])d.clone();
    }

}
