// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class m extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.g.toString();
      b = com.google.android.gms.internal.b.cB.toString();
    }

    public m()
    {
      super(a, new String[] { b });
    }

    public static String lf()
    {
      return a;
    }

    public static String lg()
    {
      return b;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      return (com.google.android.gms.internal.d$a)p0.get(b);
    }

    public final boolean a()
    {
      return true;
    }

}
