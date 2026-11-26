// Decompiled from classes.dex (SourceFile: ei.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.math.BigInteger;
public class ei {
    // Fields
    public static final java.lang.String a;
    private static final com.google.android.gms.internal.ei c;
    public final java.lang.String b;
    private final java.lang.Object d;
    private final com.google.android.gms.internal.ej e;
    private java.math.BigInteger f;
    private final java.util.HashSet g;
    private final java.util.HashMap h;
    private boolean i;

    // Methods
    static
    {
      com.google.android.gms.internal.ei v0;
      v0 = new com.google.android.gms.internal.ei();
      c = v0;
      a = v0.b;
    }

    private ei()
    {
      super();
      this.d = new Object();
      this.f = BigInteger.ONE;
      this.g = new java.util.HashSet();
      this.h = new java.util.HashMap();
      this.i = false;
      this.b = ep.bO();
      this.e = new com.google.android.gms.internal.ej(this.b);
    }

    public static android.os.Bundle a(android.content.Context p0, com.google.android.gms.internal.ek p1, String p2)
    {
      return c.b(p0, p1, p2);
    }

    private String a()
    {
      Object d;
      String v2;
      d = this.d;
      synchronized ( d )
      {
        v2 = this.f.toString();
        this.f = this.f.add(BigInteger.ONE);
        return v2;
      }
    }

    private void a(java.util.HashSet<com.google.android.gms.internal.eh> p0)
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        this.g.addAll(p0);
      }
    }

    private android.os.Bundle b(android.content.Context p0, com.google.android.gms.internal.ek p1, String p2)
    {
      Object d;
      android.os.Bundle v5;
      android.os.Bundle v6;
      java.util.Iterator v7;
      String v8;
      java.util.ArrayList v10;
      java.util.Iterator i;
      d = this.d;
      synchronized ( d )
      {
        v5 = new android.os.Bundle();
        v5.putBundle("app", this.e.a(p0, p2));
        v6 = new android.os.Bundle();
        v7 = this.h.keySet().iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          v6.putBundle(v8, ((com.google.android.gms.internal.el)this.h.get(v8)).a());
        }
        v5.putBundle("slots", v6);
        v10 = new java.util.ArrayList();
        for ( i = this.g.iterator(); i.hasNext(); v10.add(((com.google.android.gms.internal.eh)i.next()).d()) )
          ;
        v5.putParcelableArrayList("ads", v10);
        p1.a(this.g);
        this.g.clear();
        return v5;
      }
    }

    private com.google.android.gms.internal.ej b()
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        return this.e;
      }
    }

    public static void b(java.util.HashSet<com.google.android.gms.internal.eh> p0)
    {
      com.google.android.gms.internal.ei v1;
      Object d;
      v1 = c;
      d = v1.d;
      synchronized ( d )
      {
        v1.g.addAll(p0);
      }
    }

    public static com.google.android.gms.internal.ei bC()
    {
      return c;
    }

    public static String bD()
    {
      return c.a();
    }

    public static com.google.android.gms.internal.ej bF()
    {
      return c.b();
    }

    public static boolean bH()
    {
      return c.c();
    }

    private boolean c()
    {
      Object d;
      boolean i;
      d = this.d;
      synchronized ( d )
      {
        i = this.i;
        this.i = true;
        return i;
      }
    }

    public final void a(com.google.android.gms.internal.eh p0)
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        this.g.add(p0);
      }
    }

    public final void a(String p0, com.google.android.gms.internal.el p1)
    {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        this.h.put(p0, p1);
      }
    }

}
