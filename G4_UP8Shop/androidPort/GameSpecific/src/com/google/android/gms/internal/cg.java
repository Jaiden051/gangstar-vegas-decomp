// Decompiled from classes.dex (SourceFile: cg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.graphics.Color;
import android.os.Build;
public class cg extends com.google.android.gms.internal.co$a {
    // Fields
    private static final int a;
    private final android.app.Activity b;
    private com.google.android.gms.internal.ci c;
    private com.google.android.gms.internal.ck d;
    private com.google.android.gms.internal.ey e;
    private com.google.android.gms.internal.cg$c f;
    private com.google.android.gms.internal.cl g;
    private boolean h;
    private android.widget.FrameLayout i;
    private android.webkit.WebChromeClient.CustomViewCallback j;
    private boolean k;
    private boolean l;
    private boolean m;
    private android.widget.RelativeLayout n;

    // Methods
    static
    {
      a = Color.argb(0, 0, 0, 0);
    }

    public cg(android.app.Activity p0)
    {
      super();
      this.k = false;
      this.l = false;
      this.m = false;
      this.b = p0;
    }

    private static android.widget.RelativeLayout.LayoutParams a(int p0, int p1, int p2, int p3)
    {
      android.widget.RelativeLayout.LayoutParams v4;
      v4 = new android.widget.RelativeLayout.LayoutParams(p2, p3);
      v4.setMargins(p0, p1, 0, 0);
      v4.addRule(10);
      v4.addRule(9);
      return v4;
    }

    public static void a(android.content.Context p0, com.google.android.gms.internal.ci p1)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent();
      v2.setClassName(p0, "com.google.android.gms.ads.AdActivity");
      v2.putExtra("com.google.android.gms.ads.internal.overlay.useClientJar", p1.n.e);
      ci.a(v2, p1);
      v2.addFlags(0x80000);
      if ( !(p0 instanceof android.app.Activity) )
        v2.addFlags(0x10000000);
      p0.startActivity(v2);
    }

    private void b(boolean p0)
    {
      int v2;
      android.widget.RelativeLayout.LayoutParams v3;
      int v4;
      if ( p0 )
        v2 = 50;
      else
        v2 = 32;
      this.g = new com.google.android.gms.internal.cl(this.b, v2);
      v3 = new android.widget.RelativeLayout.LayoutParams(-2, -2);
      v3.addRule(10);
      if ( p0 )
        v4 = 11;
      else
        v4 = 9;
      v3.addRule(v4);
      this.g.a(this.c.h);
      this.n.addView(this.g, v3);
    }

    private void c(boolean p0)
 throws com.google.android.gms.internal.cg$a {
      android.view.Window Window; // RETVAL
      boolean v3;
      android.view.ViewParent Parent; // RETVAL
    
      if ( !this.h )
        this.b.requestWindowFeature(1);
      Window = this.b.getWindow();
      if ( !this.m || this.c.q.c )
        Window.setFlags(1024, 1024);
      this.a(this.c.k);
      if ( Build.VERSION.SDK_INT >= 11 )
      {
        ev.z("Enabling hardware acceleration on the AdActivity window.");
        er.a(Window);
      }
      this.n = new com.google.android.gms.internal.cg$b(this.b, this.c.p);
      if ( this.m )
        this.n.setBackgroundColor(a);
      else
        this.n.setBackgroundColor(-16777216);
      this.b.setContentView(this.n);
      this.h = true;
      v3 = this.c.e.f().a();
      if ( p0 )
      {
        this.e = ey.a(this.b, this.c.e.e(), true, v3, null, this.c.n);
        this.e.f().a(null, null, this.c.f, this.c.j, true, this.c.o);
        this.e.f().a((com.google.android.gms.internal.ez$a)new com.google.android.gms.internal.cg$1(this));
        if ( this.c.m != null )
        {
          this.e.loadUrl(this.c.m);
        }
        else
        {
          if ( this.c.i == null )
            throw new com.google.android.gms.internal.cg$a("No URL or HTML to display in ad overlay.");
          this.e.loadDataWithBaseURL(this.c.g, this.c.i, "text/html", "UTF-8", null);
        }
      }
      else
      {
        this.e = this.c.e;
        this.e.a(this.b);
      }
      this.e.a(this);
      Parent = this.e.getParent();
      if ( Parent != null && Parent instanceof android.view.ViewGroup )
        ((android.view.ViewGroup)Parent).removeView(this.e);
      if ( this.m )
        this.e.setBackgroundColor(a);
      this.n.addView(this.e, -1, -1);
      if ( !p0 )
        this.e.c();
      this.b(v3);
    }

    private void l()
    {
      if ( this.b.isFinishing() && !this.l )
      {
        this.l = true;
        if ( this.b.isFinishing() )
        {
          if ( this.e != null )
          {
            this.e.b();
            this.n.removeView(this.e);
            if ( this.f != null )
            {
              this.e.a(false);
              this.f.c.addView(this.e, this.f.a, this.f.b);
            }
          }
          if ( this.c != null && this.c.d != null )
            this.c.d.o();
        }
      }
    }

    public final void a()
    {
      this.b.finish();
    }

    public final void a(int p0)
    {
      this.b.setRequestedOrientation(p0);
    }

    public final void a(android.os.Bundle p0)
    {
      boolean Boolean;
      Boolean = false;
      if ( p0 != null )
        Boolean = p0.getBoolean("com.google.android.gms.ads.internal.overlay.hasResumed", false);
      this.k = Boolean;
      try
      {
        this.c = ci.a(this.b.getIntent());
        this.m = this.c.q != null && this.c.q.b;
        if ( this.c == null )
          throw new com.google.android.gms.internal.cg$a("Could not get info for ad overlay.");
        if ( p0 == null )
        {
          if ( this.c.d != null )
            this.c.d.p();
          if ( this.c.l != 1 && this.c.c != null )
            this.c.c.r();
        }
        switch ( this.c.l )
        {
          case 1:
            this.c(false);
            break;
          case 2:
            this.f = new com.google.android.gms.internal.cg$c(this.c.e);
            this.c(false);
            break;
          case 3:
            this.c(true);
            break;
          case 4:
            if ( this.k || !cd.a(this.b, this.c.b, this.c.j) )
              this.b.finish();
            break;
          default:
            throw new com.google.android.gms.internal.cg$a("Could not determine ad overlay type.");
        }
      }
      catch ( com.google.android.gms.internal.cg$a v3 )
      {
        ev.D(v3.getMessage());
        this.b.finish();
      }
    }

    public final void a(android.view.View p0, android.webkit.WebChromeClient.CustomViewCallback p1)
    {
      this.i = new android.widget.FrameLayout(this.b);
      this.i.setBackgroundColor(-16777216);
      this.i.addView(p0, -1, -1);
      this.b.setContentView(this.i);
      this.h = true;
      this.j = p1;
    }

    public final void a(boolean p0)
    {
      if ( this.g != null )
        this.g.a(p0);
    }

    public final com.google.android.gms.internal.ck b()
    {
      return this.d;
    }

    public final void b(int p0, int p1, int p2, int p3)
    {
      if ( this.d != null )
        this.d.setLayoutParams(a(p0, p1, p2, p3));
    }

    public final void b(android.os.Bundle p0)
    {
      p0.putBoolean("com.google.android.gms.ads.internal.overlay.hasResumed", this.k);
    }

    public final void c()
    {
      if ( this.c != null )
        this.a(this.c.k);
      if ( this.i != null )
      {
        this.b.setContentView(this.n);
        this.h = true;
        this.i.removeAllViews();
        this.i = null;
      }
      if ( this.j != null )
      {
        this.j.onCustomViewHidden();
        this.j = null;
      }
    }

    public final void c(int p0, int p1, int p2, int p3)
    {
      if ( this.d == null )
      {
        this.d = new com.google.android.gms.internal.ck(this.b, this.e);
        this.n.addView(this.d, 0, a(p0, p1, p2, p3));
        this.e.f().a(false);
      }
    }

    public final void d()
    {
      ;
    }

    public final void e()
    {
      ;
    }

    public final void f()
    {
      if ( this.c != null && this.c.l == 4 )
      {
        if ( this.k )
          this.b.finish();
        else
          this.k = true;
      }
      if ( this.e != null )
        ep.b(this.e);
    }

    public final void g()
    {
      if ( this.d != null )
        this.d.c();
      this.c();
      if ( this.e != null && (!this.b.isFinishing() || this.f == null) )
        ep.a(this.e);
      this.l();
    }

    public final void h()
    {
      this.l();
    }

    public final void i()
    {
      if ( this.d != null )
        this.d.a();
      if ( this.e != null )
        this.n.removeView(this.e);
      this.l();
    }

    public final void j()
    {
      this.h = true;
    }

    public final void k()
    {
      this.n.removeView(this.g);
      this.b(true);
    }

}
