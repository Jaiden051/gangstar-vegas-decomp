// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class e extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private final android.content.Context d;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.C.toString();
      b = com.google.android.gms.internal.b.M.toString();
      c = com.google.android.gms.internal.b.P.toString();
    }

    public e(android.content.Context p0)
    {
      super(a, new String[] { c });
      this.d = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      com.google.android.gms.internal.d$a v2;
      String v5;
      com.google.android.gms.internal.d$a v6;
      String v7;
      String v8; // RETVAL
    
      v2 = (com.google.android.gms.internal.d$a)p0.get(c);
      if ( v2 != null
        && (com.gameloft.android.DecompRT.comma(((com.gameloft.android.DecompRT.comma((v5 = dh.j(v2)), ((v6 = (com.google.android.gms.internal.d$a)p0.get(b)) == null))) ? (v7 = null) : (v7 = dh.j(v6))), ((v8 = ay.d(this.d, v5, v7)) != null))) )
      {
        return dh.r(v8);
      }
      else
      {
        return dh.mY();
      }
    }

    public final boolean a()
    {
      return true;
    }

}
