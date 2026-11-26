// Decompiled from classes.dex (SourceFile: w.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class w extends com.google.android.gms.tagmanager.df {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private final com.google.android.gms.tagmanager.DataLayer d;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.L.toString();
      b = com.google.android.gms.internal.b.cB.toString();
      c = com.google.android.gms.internal.b.I.toString();
    }

    public w(com.google.android.gms.tagmanager.DataLayer p0)
    {
      super(a, new String[] { b });
      this.d = p0;
    }

    private void a(com.google.android.gms.internal.d$a p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      String v2;
      if ( p0 != null && p0 != dh.mS() )
      {
        v2 = dh.j(p0);
        if ( v2 != dh.mX() )
          this.d.a(v2);
      }
    }

    private void b(com.google.android.gms.internal.d$a p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      Object v2; // RETVAL
      java.util.Iterator v3;
      Object v4; // RETVAL
    
      if ( p0 != null && p0 != dh.mS() )
      {
        v2 = dh.o(p0);
        if ( v2 instanceof java.util.List )
        {
          v3 = ((java.util.List)v2).iterator();
          while ( v3.hasNext() )
          {
            v4 = v3.next();
            if ( v4 instanceof java.util.Map )
              this.d.a((java.util.Map)v4);
          }
        }
      }
    }

    public final void b(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.internal.d$a v2;
      com.google.android.gms.internal.d$a v3;
      Object v4; // RETVAL
      java.util.Iterator v5;
      Object v6; // RETVAL
      String v7;
      v2 = (com.google.android.gms.internal.d$a)p0.get(b);
      if ( v2 != null && v2 != dh.mS() )
      {
        v4 = dh.o(v2);
        if ( v4 instanceof java.util.List )
        {
          v5 = ((java.util.List)v4).iterator();
          while ( v5.hasNext() )
          {
            v6 = v5.next();
            if ( v6 instanceof java.util.Map )
              this.d.a((java.util.Map)v6);
          }
        }
      }
      v3 = (com.google.android.gms.internal.d$a)p0.get(c);
      if ( v3 != null && v3 != dh.mS() )
      {
        v7 = dh.j(v3);
        if ( v7 != dh.mX() )
          this.d.a(v7);
      }
    }

}
