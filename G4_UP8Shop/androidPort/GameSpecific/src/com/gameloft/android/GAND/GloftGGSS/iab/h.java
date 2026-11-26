// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
final class h {
    // Fields
    java.lang.String a;
    java.lang.String b;
    java.lang.String c;
    long d;
    long e;
    double f;
    java.lang.StringBuffer g;
    java.lang.StringBuffer h;
    java.lang.StringBuffer i;
    org.json.JSONObject j;
    org.json.JSONObject k;
    final com.gameloft.android.GAND.GloftGGSS.iab.IABLogging l;
    private int m;

    // Methods
    private h(com.gameloft.android.GAND.GloftGGSS.iab.IABLogging p0)
    {
      super();
      this.l = p0;
      this.m = 0;
      this.a = null;
      this.b = null;
      this.c = null;
      this.d = 0;
      this.e = 0;
      this.f = 0.0;
      this.g = null;
      this.h = null;
      this.i = null;
      this.j = null;
      this.k = null;
    
    }

    private h(com.gameloft.android.GAND.GloftGGSS.iab.IABLogging p0, int p1, String p2)
    {
      super();
      this.l = p0;
      this.m = 0;
      this.a = null;
      this.b = null;
      this.c = null;
      this.d = 0;
      this.e = 0;
      this.f = 0.0;
      this.g = null;
      this.h = null;
      this.i = null;
      this.j = null;
      this.k = null;
      this.m = p1;
      this.a = p2;
      this.d = System.currentTimeMillis();
      this.g = new StringBuffer();
      this.h = new StringBuffer();
      this.i = new StringBuffer();
      this.j = new org.json.JSONObject();
      this.k = new org.json.JSONObject();
    
    }

    public h(com.gameloft.android.GAND.GloftGGSS.iab.IABLogging p0, int p1, String p2, String p3, String p4)
    {
      this(p0, p1, p2);
      this.b = p3;
      this.c = p4;
    }

    private void a(StringBuffer p0, String p1, String p2)
    {
      if ( this.g() && !TextUtils.isEmpty(p1) && !TextUtils.isEmpty(p2) )
      {
        if ( p0.length() > 0 )
          p0.append("&");
        p0.append(p1);
        p0.append("=");
        p0.append(p2);
      }
    }

    private void d(String p0)
    {
      this.b = p0;
    }

    private void e(String p0)
    {
      this.c = p0;
    }

    private boolean g()
    {
      return this.m > 0;
    }

    private String h()
    {
      return this.a;
    }

    public final void a()
    {
      if ( this.g() && this.f == 0.0 )
      {
        this.e = System.currentTimeMillis();
        this.f = (double)(this.e - this.d) / 1000.0;
      }
    }

    public final void a(String p0)
    {
      this.a(this.g, p0);
    }

    public final void a(String p0, String p1)
    {
      this.a(this.g, p0, p1);
    }

    public final void a(StringBuffer p0, String p1)
    {
      if ( this.g() && !TextUtils.isEmpty(p1) )
      {
        if ( p0.length() > 0 )
          p0.append("&");
        p0.append(p1);
      }
    }

    public final double b()
    {
      return this.f;
    }

    public final void b(String p0)
    {
      this.a(this.h, p0);
    }

    public final void b(String p0, String p1)
    {
      this.a(this.h, p0, p1);
    }

    public final long c()
    {
      return this.m;
    }

    public final void c(String p0)
    {
      try
      {
        this.k.put("requestID", this.m);
        this.k.put("raw_response", p0);
        this.k.put("server_headers", this.i.toString());
        this.k.put("response_type", this.a);
      }
      catch ( Exception e )
      {
      }
    }

    public final void c(String p0, String p1)
    {
      this.a(this.i, p0, p1);
    }

    public final void d()
    {
      if ( this.g() )
      {
        try
        {
          this.j.put("requestID", this.m);
          this.j.put("url", this.b);
          this.j.put("payload", this.h.toString());
          this.j.put("methodType", this.c);
          this.j.put("headers", this.g.toString());
          this.j.put("requestType", this.a);
        }
        catch ( Exception e )
        {
        }
      }
    }

    public final String e()
    {
      if ( this.g() )
        return this.j.toString();
      else
        return "";
    }

    public final String f()
    {
      if ( this.g() )
        return this.k.toString();
      else
        return "";
    }

}
