// Decompiled from classes.dex (SourceFile: eb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
public final class eb {
    // Fields
    private java.lang.String a;
    private java.lang.String b;
    private java.lang.String c;
    private java.util.List d;
    private java.lang.String e;
    private java.lang.String f;
    private java.util.List g;
    private long h;
    private boolean i;
    private final long j;
    private java.util.List k;
    private long l;
    private int m;

    // Methods
    public eb()
    {
      super();
      this.h = -1;
      this.i = false;
      this.j = -1;
      this.l = -1;
      this.m = -1;
    }

    private static String a(java.util.Map<String, java.util.List<String>> p0, String p1)
    {
      java.util.List v2;
      v2 = (java.util.List)p0.get(p1);
      if ( v2 == null || v2.isEmpty() )
        return null;
      else
        return (String)v2.get(0);
    }

    private static long b(java.util.Map<String, java.util.List<String>> p0, String p1)
    {
      java.util.List v2;
      String v3;
      v2 = (java.util.List)p0.get(p1);
      if ( v2 != null && !v2.isEmpty() )
      {
        v3 = (String)v2.get(0);
        try
        {
          return (long)(Float.parseFloat(v3) * 1000.0f);
        }
        catch ( NumberFormatException e )
        {
          ev.D("Could not parse float from " + p1 + " header: " + v3);
        }
      }
      return -1;
    }

    private void b(java.util.Map<String, java.util.List<String>> p0)
    {
      this.a = a(p0, "X-Afma-Ad-Size");
    }

    private static java.util.List<String> c(java.util.Map<String, java.util.List<String>> p0, String p1)
    {
      java.util.List v2;
      String v3;
      v2 = (java.util.List)p0.get(p1);
      if ( v2 != null && !v2.isEmpty() && (v3 = (String)v2.get(0)) != null )
        return Arrays.asList(v3.trim().split("\\s+"));
      else
        return null;
    }

    private void c(java.util.Map<String, java.util.List<String>> p0)
    {
      java.util.List v2; // RETVAL
    
      v2 = c(p0, "X-Afma-Click-Tracking-Urls");
      if ( v2 != null )
        this.d = v2;
    }

    private void d(java.util.Map<String, java.util.List<String>> p0)
    {
      java.util.List v2;
      v2 = (java.util.List)p0.get("X-Afma-Debug-Dialog");
      if ( v2 != null && !v2.isEmpty() )
        this.e = (String)v2.get(0);
    }

    private void e(java.util.Map<String, java.util.List<String>> p0)
    {
      java.util.List v2; // RETVAL
    
      v2 = c(p0, "X-Afma-Tracking-Urls");
      if ( v2 != null )
        this.g = v2;
    }

    private void f(java.util.Map<String, java.util.List<String>> p0)
    {
      long v2; // RETVAL
    
      v2 = b(p0, "X-Afma-Interstitial-Timeout");
      if ( v2 != -1 )
        this.h = v2;
    }

    private void g(java.util.Map<String, java.util.List<String>> p0)
    {
      this.f = a(p0, "X-Afma-ActiveView");
    }

    private void h(java.util.Map<String, java.util.List<String>> p0)
    {
      java.util.List v2;
      v2 = (java.util.List)p0.get("X-Afma-Mediation");
      if ( v2 != null && !v2.isEmpty() )
        this.i = Boolean.valueOf((String)v2.get(0)).booleanValue();
    }

    private void i(java.util.Map<String, java.util.List<String>> p0)
    {
      java.util.List v2; // RETVAL
    
      v2 = c(p0, "X-Afma-Manual-Tracking-Urls");
      if ( v2 != null )
        this.k = v2;
    }

    private void j(java.util.Map<String, java.util.List<String>> p0)
    {
      long v2; // RETVAL
    
      v2 = b(p0, "X-Afma-Refresh-Rate");
      if ( v2 != -1 )
        this.l = v2;
    }

    private void k(java.util.Map<String, java.util.List<String>> p0)
    {
      java.util.List v2;
      String v3;
      v2 = (java.util.List)p0.get("X-Afma-Orientation");
      if ( v2 != null && !v2.isEmpty() )
      {
        v3 = (String)v2.get(0);
        if ( "portrait".equalsIgnoreCase(v3) )
        {
          this.m = ep.bN();
        }
        else if ( "landscape".equalsIgnoreCase(v3) )
        {
          this.m = ep.bM();
        }
      }
    }

    public final com.google.android.gms.internal.dv a(long p0)
    {
      return new com.google.android.gms.internal.dv(this.b, this.c, this.d, this.g, this.h, this.i, -1, this.k, this.l, this.m, this.a, p0, this.e, this.f);
    }

    public final void a(String p0, java.util.Map<String, java.util.List<String>> p1, String p2)
    {
      this.b = p0;
      this.c = p2;
      this.a(p1);
    }

    public final void a(java.util.Map<String, java.util.List<String>> p0)
    {
      java.util.List v2; // RETVAL
      java.util.List v3;
      java.util.List v4; // RETVAL
      long v5; // RETVAL
      java.util.List v6;
      java.util.List v7; // RETVAL
      long v8; // RETVAL
      java.util.List v9;
      String v10;
      this.a = a(p0, "X-Afma-Ad-Size");
      v2 = c(p0, "X-Afma-Click-Tracking-Urls");
      if ( v2 != null )
        this.d = v2;
      v3 = (java.util.List)p0.get("X-Afma-Debug-Dialog");
      if ( v3 != null && !v3.isEmpty() )
        this.e = (String)v3.get(0);
      v4 = c(p0, "X-Afma-Tracking-Urls");
      if ( v4 != null )
        this.g = v4;
      v5 = b(p0, "X-Afma-Interstitial-Timeout");
      if ( v5 != -1 )
        this.h = v5;
      v6 = (java.util.List)p0.get("X-Afma-Mediation");
      if ( v6 != null && !v6.isEmpty() )
        this.i = Boolean.valueOf((String)v6.get(0)).booleanValue();
      v7 = c(p0, "X-Afma-Manual-Tracking-Urls");
      if ( v7 != null )
        this.k = v7;
      v8 = b(p0, "X-Afma-Refresh-Rate");
      if ( v8 != -1 )
        this.l = v8;
      v9 = (java.util.List)p0.get("X-Afma-Orientation");
      if ( v9 != null && !v9.isEmpty() )
      {
        v10 = (String)v9.get(0);
        if ( "portrait".equalsIgnoreCase(v10) )
        {
          this.m = ep.bN();
        }
        else if ( "landscape".equalsIgnoreCase(v10) )
        {
          this.m = ep.bM();
        }
      }
      this.f = a(p0, "X-Afma-ActiveView");
    }

}
