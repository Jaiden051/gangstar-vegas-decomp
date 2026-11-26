// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.net.Uri;
class i extends com.google.android.gms.tagmanager.df {
    // Fields
    static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private static final java.lang.String d;
    private static final java.lang.String e;
    private static final java.util.Set f;
    private final com.google.android.gms.tagmanager.i$a g;
    private final android.content.Context h;

    // Methods
    static
    {
      b = com.google.android.gms.internal.a.V.toString();
      c = com.google.android.gms.internal.b.ct.toString();
      d = com.google.android.gms.internal.b.c.toString();
      e = com.google.android.gms.internal.b.cs.toString();
      a = "gtm_" + b + "_unrepeatable";
      f = new java.util.HashSet();
    }

    public i(android.content.Context p0)
    {
      this(p0, (com.google.android.gms.tagmanager.i$a)new com.google.android.gms.tagmanager.i$1(p0));
    }

    private i(android.content.Context p0, com.google.android.gms.tagmanager.i$a p1)
    {
      super(b, new String[] { c });
      this.g = p1;
      this.h = p0;
    }

    private synchronized boolean a(String p0)
    {
      boolean v2;
      v2 = true;
      if ( !f.contains(p0) )
      {
        try
        {
          if ( !this.h.getSharedPreferences(a, 0).contains(p0) )
            return false;
          f.add(p0);
        }
        finally
        {
        }
      }
      return v2;
    }

    private boolean b(String p0)
    {
      return this.h.getSharedPreferences(a, 0).contains(p0);
    }

    private static boolean bD(String p0)
    {
      return f.contains(p0);
    }

    public final void b(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      String v2;
      android.net.Uri.Builder v3;
      com.google.android.gms.internal.d$a v4;
      Object v5; // RETVAL
      java.util.Iterator v6;
      Object v7; // RETVAL
      java.util.Iterator v8;
      java.util.Map.Entry v9;
      String v10;
      Object v11;
      if ( p0.get(e) != null )
        v2 = dh.j((com.google.android.gms.internal.d$a)p0.get(e));
      else
        v2 = null;
      if ( v2 == null || !this.a(v2) )
      {
        v3 = Uri.parse(dh.j((com.google.android.gms.internal.d$a)p0.get(c))).buildUpon();
        v4 = (com.google.android.gms.internal.d$a)p0.get(d);
        if ( v4 != null )
        {
          v5 = dh.o(v4);
          if ( !(v5 instanceof java.util.List) )
          {
            bh.A("ArbitraryPixel: additional params not a list: not sending partial hit: " + v3.build().toString());
            return;
          }
          v6 = ((java.util.List)v5).iterator();
          while ( v6.hasNext() )
          {
            v7 = v6.next();
            if ( !(v7 instanceof java.util.Map) )
            {
              bh.A("ArbitraryPixel: additional params contains non-map: not sending partial hit: " + v3.build().toString());
              return;
            }
            v8 = ((java.util.Map)v7).entrySet().iterator();
            while ( v8.hasNext() )
            {
              v9 = (java.util.Map.Entry)v8.next();
              v3.appendQueryParameter(v9.getKey().toString(), v9.getValue().toString());
            }
          }
        }
        v10 = v3.build().toString();
        this.g.a().a(v10);
        bh.C("ArbitraryPixel: url = " + v10);
        if ( v2 != null )
        {
          v11 = com.google.android.gms.tagmanager.i.class;
          synchronized ( v11 )
          {
            f.add(v2);
            cy.a(this.h, a, v2, "true");
          }
        }
      }
    }

}
