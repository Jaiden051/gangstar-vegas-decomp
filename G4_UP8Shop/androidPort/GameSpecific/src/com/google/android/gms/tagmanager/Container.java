// Decompiled from classes.dex (SourceFile: Container.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

public class Container {
    // Fields
    private final android.content.Context a;
    private final java.lang.String b;
    private final com.google.android.gms.tagmanager.DataLayer c;
    private com.google.android.gms.tagmanager.cs d;
    private java.util.Map e;
    private java.util.Map f;
    private volatile long g;
    private volatile java.lang.String h;

    // Methods
    Container(
            android.content.Context p0,
            com.google.android.gms.tagmanager.DataLayer p1,
            String p2,
            long p3,
            com.google.android.gms.internal.c$j p5)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      super();
      com.google.android.gms.internal.c$f b;
      this.e = new java.util.HashMap();
      this.f = new java.util.HashMap();
      this.h = "";
      this.a = p0;
      this.c = p1;
      this.b = p2;
      this.g = p3;
      b = p5.b;
      if ( b == null )
        throw new NullPointerException();
      try
      {
        this.a(cq.b(b));
      }
      catch ( com.google.android.gms.tagmanager.cq$g v7 )
      {
        bh.A("Not loading resource: " + b + " because it is invalid: " + v7.toString());
      }
      if ( p5.a != null )
        this.a(p5.a);
    
    }

    Container(
            android.content.Context p0,
            com.google.android.gms.tagmanager.DataLayer p1,
            String p2,
            long p3,
            com.google.android.gms.tagmanager.cq$c p5)
    {
      super();
      this.e = new java.util.HashMap();
      this.f = new java.util.HashMap();
      this.h = "";
      this.a = p0;
      this.c = p1;
      this.b = p2;
      this.g = 0;
      this.a(p5);
    }

    private void a(com.google.android.gms.internal.c$f p0)
    {
      if ( p0 == null )
        throw new NullPointerException();
      try
      {
        this.a(cq.b(p0));
      }
      catch ( com.google.android.gms.tagmanager.cq$g v2 )
      {
        bh.A("Not loading resource: " + p0 + " because it is invalid: " + v2.toString());
      }
    }

    private void a(com.google.android.gms.tagmanager.cq$c p0)
    {
      this.h = p0.b();
      com.gameloft.android.DecompRT.discard(this.h);
      cd.lY().a().equals(cd$a.c);
      this.a(new com.google.android.gms.tagmanager.cs(this.a, p0, this.c, (com.google.android.gms.tagmanager.s$a)new com.google.android.gms.tagmanager.Container$a(this, 0), (com.google.android.gms.tagmanager.s$a)new com.google.android.gms.tagmanager.Container$b(this, 0), (com.google.android.gms.tagmanager.ag)new com.google.android.gms.tagmanager.bq()));
    }

    private synchronized void a(com.google.android.gms.tagmanager.cs p0)
    {
      this.d = p0;
    }

    private void a(String p0, com.google.android.gms.tagmanager.Container$FunctionCallMacroCallback p1)
    {
      java.util.Map e;
      if ( p1 == null )
        throw new NullPointerException("Macro handler must be non-null");
      e = this.e;
      synchronized ( e )
      {
        this.e.put(p0, p1);
      }
    }

    private void a(String p0, com.google.android.gms.tagmanager.Container$FunctionCallTagCallback p1)
    {
      java.util.Map f;
      if ( p1 == null )
        throw new NullPointerException("Tag callback must be non-null");
      f = this.f;
      synchronized ( f )
      {
        this.f.put(p0, p1);
      }
    }

    private void a(com.google.android.gms.internal.c$i[] p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      java.util.List v2;
      int v3;
      int i;
      v2 = new java.util.ArrayList();
      v3 = p0.length;
      for ( i = 0; i < v3; ++i )
        v2.add(p0[i]);
      this.f().a(v2);
    }

    private static com.google.android.gms.tagmanager.ag bI$443e6f12()
    {
      cd.lY().a().equals(cd$a.c);
      return (com.google.android.gms.tagmanager.ag)new com.google.android.gms.tagmanager.bq();
    }

    private boolean d(String p0)
    {
      com.google.android.gms.tagmanager.cs v2; // RETVAL
      com.google.android.gms.tagmanager.cs v3;
      v2 = this.f();
      v3 = v2;
      if ( v2 != null )
      {
        try
        {
          return dh.n((com.google.android.gms.internal.d$a)v2.b(p0).a()).booleanValue();
        }
        catch ( Exception v6 )
        {
          bh.A("Calling getBoolean() threw an exception: " + v6.getMessage() + " Returning default value.");
          return dh.mV().booleanValue();
        }
      }
      else
      {
        bh.A("getBoolean called for closed container.");
        return dh.mV().booleanValue();
      }
    }

    private double e(String p0)
    {
      com.google.android.gms.tagmanager.cs v2; // RETVAL
      com.google.android.gms.tagmanager.cs v3;
      v2 = this.f();
      v3 = v2;
      if ( v2 != null )
      {
        try
        {
          return dh.m((com.google.android.gms.internal.d$a)v2.b(p0).a()).doubleValue();
        }
        catch ( Exception v6 )
        {
          bh.A("Calling getDouble() threw an exception: " + v6.getMessage() + " Returning default value.");
          return dh.mU().doubleValue();
        }
      }
      else
      {
        bh.A("getDouble called for closed container.");
        return dh.mU().doubleValue();
      }
    }

    private long f(String p0)
    {
      com.google.android.gms.tagmanager.cs v2; // RETVAL
      com.google.android.gms.tagmanager.cs v3;
      v2 = this.f();
      v3 = v2;
      if ( v2 != null )
      {
        try
        {
          return dh.l((com.google.android.gms.internal.d$a)v2.b(p0).a()).longValue();
        }
        catch ( Exception v6 )
        {
          bh.A("Calling getLong() threw an exception: " + v6.getMessage() + " Returning default value.");
          return dh.mT().longValue();
        }
      }
      else
      {
        bh.A("getLong called for closed container.");
        return dh.mT().longValue();
      }
    }

    private synchronized com.google.android.gms.tagmanager.cs f()
    {
      return this.d;
    }

    private String g(String p0)
    {
      com.google.android.gms.tagmanager.cs v2; // RETVAL
      com.google.android.gms.tagmanager.cs v3;
      v2 = this.f();
      v3 = v2;
      if ( v2 != null )
      {
        try
        {
          return dh.j((com.google.android.gms.internal.d$a)v2.b(p0).a());
        }
        catch ( Exception v6 )
        {
          bh.A("Calling getString() threw an exception: " + v6.getMessage() + " Returning default value.");
          return dh.mX();
        }
      }
      else
      {
        bh.A("getString called for closed container.");
        return dh.mX();
      }
    }

    private void h(String p0)
    {
      java.util.Map e;
      e = this.e;
      synchronized ( e )
      {
        this.e.remove(p0);
      }
    }

    private void i(String p0)
    {
      java.util.Map f;
      f = this.f;
      synchronized ( f )
      {
        this.f.remove(p0);
      }
    }

    final com.google.android.gms.tagmanager.Container$FunctionCallMacroCallback a(String p0)
    {
      java.util.Map e;
      e = this.e;
      synchronized ( e )
      {
        return (com.google.android.gms.tagmanager.Container$FunctionCallMacroCallback)this.e.get(p0);
      }
    }

    public final String a()
    {
      return this.b;
    }

    public final long b()
    {
      return this.g;
    }

    final com.google.android.gms.tagmanager.Container$FunctionCallTagCallback b(String p0)
    {
      java.util.Map f;
      f = this.f;
      synchronized ( f )
      {
        return (com.google.android.gms.tagmanager.Container$FunctionCallTagCallback)this.f.get(p0);
      }
    }

    final void c(String p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      this.f().a(p0);
    }

    public final boolean c()
    {
      long g;
      g = this.g;
      return g == 0;
    }

    final String d()
    {
      return this.h;
    }

    final void e()
    {
      this.d = null;
    }

}
