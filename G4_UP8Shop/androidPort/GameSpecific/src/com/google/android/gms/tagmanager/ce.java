// Decompiled from classes.dex (SourceFile: ce.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class ce extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.u.toString();
      b = com.google.android.gms.internal.b.bf.toString();
      c = com.google.android.gms.internal.b.be.toString();
    }

    public ce()
    {
      super(a, new String[0]);
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      com.google.android.gms.internal.d$a v2;
      com.google.android.gms.internal.d$a v3;
      com.google.android.gms.tagmanager.dg v4;
      com.google.android.gms.tagmanager.dg v5;
      double v6;
      double v7;
      double v8;
      v2 = (com.google.android.gms.internal.d$a)p0.get(b);
      v3 = (com.google.android.gms.internal.d$a)p0.get(c);
      if ( v2 == null
        || v2 == dh.mY()
        || v3 == null
        || v3 == dh.mY()
        || (com.gameloft.android.DecompRT.comma((v4 = dh.k(v2)), com.gameloft.android.DecompRT.comma((v5 = dh.k(v3)), (v4 == dh.mW()))))
        || v5 == dh.mW()
        || (com.gameloft.android.DecompRT.comma((v6 = v4.doubleValue()), com.gameloft.android.DecompRT.comma((v7 = v5.doubleValue()), (v6 > v7)))) )
      {
        v7 = 2147483647.0;
        v8 = 0.0;
      }
      else
      {
        v8 = v6;
      }
      return dh.r(Long.valueOf(Math.round((v7 - v8) * Math.random() + v8)));
    }

    public final boolean a()
    {
      return false;
    }

}
