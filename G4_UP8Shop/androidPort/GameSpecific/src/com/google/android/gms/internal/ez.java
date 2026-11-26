// Decompiled from classes.dex (SourceFile: ez.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.net.Uri;
public class ez extends android.webkit.WebViewClient {
    // Fields
    protected final com.google.android.gms.internal.ey a;
    private final java.util.HashMap b;
    private final java.lang.Object c;
    private com.google.android.gms.internal.u d;
    private com.google.android.gms.internal.cj e;
    private com.google.android.gms.internal.ez$a f;
    private com.google.android.gms.internal.bb g;
    private boolean h;
    private com.google.android.gms.internal.be i;
    private com.google.android.gms.internal.bg j;
    private boolean k;
    private com.google.android.gms.internal.cm l;

    // Methods
    public ez(com.google.android.gms.internal.ey p0, boolean p1)
    {
      super();
      this.b = new java.util.HashMap();
      this.c = new Object();
      this.h = false;
      this.a = p0;
      this.k = p1;
    }

    private void a(android.net.Uri p0)
 throws InterruptedException {
      String Path;
      com.google.android.gms.internal.bd v3;
      java.util.Map v4;
      java.util.Iterator v5;
      String v6;
      Path = p0.getPath();
      v3 = (com.google.android.gms.internal.bd)this.b.get(Path);
      if ( v3 != null )
      {
        v4 = ep.b(p0);
        if ( ev.p(2) )
        {
          ev.C("Received GMSG: " + Path);
          v5 = v4.keySet().iterator();
          while ( v5.hasNext() )
          {
            v6 = (String)v5.next();
            ev.C("  " + v6 + ": " + (String)v4.get(v6));
          }
        }
        v3.a(this.a, v4);
      }
      else
      {
        ev.C("No GMSG handler found for GMSG: " + p0);
      }
    }

    private void a(com.google.android.gms.internal.ci p0)
    {
      cg.a(this.a.getContext(), p0);
    }

    private static boolean c(android.net.Uri p0)
    {
      String Scheme;
      Scheme = p0.getScheme();
      return "http".equalsIgnoreCase(Scheme) || "https".equalsIgnoreCase(Scheme);
    }

    public final void a(com.google.android.gms.internal.cf p0)
    {
      com.google.android.gms.internal.cj e;
      boolean v3;
      com.google.android.gms.internal.ci v4;
      com.google.android.gms.internal.u d;
      e = null;
      v3 = this.a.i();
      v4 = null;
      if ( !v3 || this.a.e().e )
        d = this.d;
      else
        d = null;
      if ( !v3 )
        e = this.e;
      this.a((v4 = new com.google.android.gms.internal.ci(p0, d, e, this.l, this.a.h())));
    }

    public final void a(com.google.android.gms.internal.ez$a p0)
    {
      this.f = p0;
    }

    public final void a(
            com.google.android.gms.internal.u p0,
            com.google.android.gms.internal.cj p1,
            com.google.android.gms.internal.bb p2,
            com.google.android.gms.internal.cm p3,
            boolean p4,
            com.google.android.gms.internal.be p5)
    {
      this.a("/appEvent", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.ba(p2));
      this.a("/canOpenURLs", bc.b);
      this.a("/click", bc.c);
      this.a("/close", bc.d);
      this.a("/customClose", bc.e);
      this.a("/httpTrack", bc.f);
      this.a("/log", bc.g);
      this.a("/open", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.bh(p5));
      this.a("/touch", bc.h);
      this.a("/video", bc.i);
      this.d = p0;
      this.e = p1;
      this.g = p2;
      this.i = p5;
      this.l = p3;
      this.h = p4;
    }

    public final void a(
            com.google.android.gms.internal.u p0,
            com.google.android.gms.internal.cj p1,
            com.google.android.gms.internal.bb p2,
            com.google.android.gms.internal.cm p3,
            boolean p4,
            com.google.android.gms.internal.be p5,
            com.google.android.gms.internal.bg p6)
    {
      this.a(p0, null, p2, p3, true, p5);
      this.a("/setInterstitialProperties", (com.google.android.gms.internal.bd)new com.google.android.gms.internal.bf(p6));
      this.j = p6;
    }

    public final void a(String p0, com.google.android.gms.internal.bd p1)
    {
      this.b.put(p0, p1);
    }

    public final void a(boolean p0)
    {
      this.h = p0;
    }

    public final void a(boolean p0, int p1)
    {
      com.google.android.gms.internal.ci v3;
      com.google.android.gms.internal.u d;
      v3 = null;
      if ( !this.a.i() || this.a.e().e )
        d = this.d;
      else
        d = null;
      this.a((v3 = new com.google.android.gms.internal.ci(d, this.e, this.l, this.a, p0, p1, this.a.h())));
    }

    public final void a(boolean p0, int p1, String p2)
    {
      com.google.android.gms.internal.cj e;
      boolean v5;
      com.google.android.gms.internal.ci v6;
      com.google.android.gms.internal.u d;
      e = null;
      v5 = this.a.i();
      v6 = null;
      if ( !v5 || this.a.e().e )
        d = this.d;
      else
        d = null;
      if ( !v5 )
        e = this.e;
      this.a((v6 = new com.google.android.gms.internal.ci(d, e, this.g, this.l, this.a, p0, p1, p2, this.a.h(), this.i)));
    }

    public final void a(boolean p0, int p1, String p2, String p3)
    {
      boolean v5;
      com.google.android.gms.internal.ci v6;
      com.google.android.gms.internal.u d;
      com.google.android.gms.internal.cj e;
      v5 = this.a.i();
      v6 = null;
      if ( !v5 || this.a.e().e )
        d = this.d;
      else
        d = null;
      if ( v5 )
        e = null;
      else
        e = this.e;
      this.a((v6 = new com.google.android.gms.internal.ci(d, e, this.g, this.l, this.a, p0, p1, p2, p3, this.a.h(), this.i)));
    }

    public final boolean a()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        return this.k;
      }
    }

    public final void b()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        this.b.clear();
        this.d = null;
        this.e = null;
        this.f = null;
        this.g = null;
        this.h = false;
        this.k = false;
        this.i = null;
        this.l = null;
      }
    }

    public final void c()
    {
      Object c;
      com.google.android.gms.internal.cg v2;
      c = this.c;
      synchronized ( c )
      {
        this.h = false;
        this.k = true;
        v2 = this.a.d();
        if ( v2 != null )
        {
          if ( eu.bR() )
            v2.k();
          else
            eu.a.post((Runnable)new com.google.android.gms.internal.ez$1(this, v2));
        }
        return;
      }
    }

    public final void onLoadResource(android.webkit.WebView p0, String p1)
    {
      try {
      android.net.Uri v3;
      ev.C("Loading resource: " + p1);
      v3 = Uri.parse(p1);
      if ( "gmsg".equalsIgnoreCase(v3.getScheme()) && "mobileads.google.com".equalsIgnoreCase(v3.getHost()) )
        this.a(v3);
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

    public final void onPageFinished(android.webkit.WebView p0, String p1)
    {
      try {
      if ( this.f != null )
      {
        this.f.a(this.a);
        this.f = null;
      }
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

    public final boolean shouldOverrideUrlLoading(android.webkit.WebView p0, String p1)
    {
      try {
      android.net.Uri v3;
      String Scheme;
      String Host;
      com.google.android.gms.internal.l v8; // RETVAL
      com.google.android.gms.internal.l v9;
      android.net.Uri v10;
      ev.C("AdWebView shouldOverrideUrlLoading: " + p1);
      v3 = Uri.parse(p1);
      Scheme = v3.getScheme();
      if ( !"gmsg".equalsIgnoreCase(Scheme) || (com.gameloft.android.DecompRT.comma((Host = v3.getHost()), (!"mobileads.google.com".equalsIgnoreCase(Host)))) )
      {
        if ( this.h && p0 == this.a && c(v3) )
          return super.shouldOverrideUrlLoading(p0, p1);
        if ( this.a.willNotDraw() )
        {
          ev.D("AdWebView unable to handle URL: " + p1);
          return true;
        }
        try
        {
          v8 = this.a.g();
          v9 = v8;
          if ( v8 != null && v8.a(v3) )
            v3 = v9.a(v3, this.a.getContext());
          v10 = v3;
        }
        catch ( com.google.android.gms.internal.m e )
        {
          ev.D("Unable to append parameter to URL: " + p1);
          v10 = v3;
        }
        this.a(new com.google.android.gms.internal.cf("android.intent.action.VIEW", v10.toString(), null, null, null, null, null));
        return true;
      }
      this.a(v3);
      return true;
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
