// Decompiled from classes.dex (SourceFile: ax.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class ax extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private final android.content.Context c;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.H.toString();
      b = com.google.android.gms.internal.b.M.toString();
    }

    public ax(android.content.Context p0)
    {
      super(a, new String[0]);
      this.c = p0;
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      String v2;
      String v3; // RETVAL
    
      if ( (com.google.android.gms.internal.d$a)p0.get(b) != null )
        v2 = dh.j((com.google.android.gms.internal.d$a)p0.get(b));
      else
        v2 = null;
      v3 = ay.e(this.c, v2);
      if ( v3 != null )
        return dh.r(v3);
      else
        return dh.mY();
    }

    public final boolean a()
    {
      return true;
    }

}
