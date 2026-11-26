// Decompiled from classes.dex (SourceFile: cd$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

final class cd$a extends com.gameloft.android.DecompRT.EnumBase<cd$a> {
    // Fields
    public static final com.google.android.gms.tagmanager.cd$a a;
    public static final com.google.android.gms.tagmanager.cd$a b;
    public static final com.google.android.gms.tagmanager.cd$a c;
    private static final com.google.android.gms.tagmanager.cd$a[] d;

    // Methods
    static
    {
      com.google.android.gms.tagmanager.cd$a[] v0;
      a = new com.google.android.gms.tagmanager.cd$a("NONE", 0);
      b = new com.google.android.gms.tagmanager.cd$a("CONTAINER", 1);
      c = new com.google.android.gms.tagmanager.cd$a("CONTAINER_DEBUG", 2);
      v0 = new com.google.android.gms.tagmanager.cd$a[3];
      v0[0] = a;
      v0[1] = b;
      v0[2] = c;
      d = (com.google.android.gms.tagmanager.cd$a[])v0;
    }

    private cd$a(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.google.android.gms.tagmanager.cd$a valueOf(String p0)
    {
      return (com.google.android.gms.tagmanager.cd$a)com.gameloft.android.DecompRT.EnumBase.valueOf(com.google.android.gms.tagmanager.cd$a.class, p0);
    }

    public static com.google.android.gms.tagmanager.cd$a[] values()
    {
      return (com.google.android.gms.tagmanager.cd$a[])d.clone();
    }

}
