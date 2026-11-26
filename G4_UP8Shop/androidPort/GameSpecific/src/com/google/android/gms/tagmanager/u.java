// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class u extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private final com.google.android.gms.tagmanager.DataLayer d;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.i.toString();
      b = com.google.android.gms.internal.b.bh.toString();
      c = com.google.android.gms.internal.b.ag.toString();
    }

    public u(com.google.android.gms.tagmanager.DataLayer p0)
    {
      super(a, new String[] { b });
      this.d = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      Object v2; // RETVAL
      com.google.android.gms.internal.d$a v3;
      v2 = this.d.b(dh.j((com.google.android.gms.internal.d$a)p0.get(b)));
      if ( v2 != null )
        return dh.r(v2);
      v3 = (com.google.android.gms.internal.d$a)p0.get(c);
      if ( v3 == null )
        return dh.mY();
      return v3;
    }

    public final boolean a()
    {
      return false;
    }

}
