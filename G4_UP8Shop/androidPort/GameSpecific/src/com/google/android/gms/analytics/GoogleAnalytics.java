// Decompiled from classes.dex (SourceFile: GoogleAnalytics.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.content.pm.ApplicationInfo;
import android.os.Build;
import java.util.Locale;
public class GoogleAnalytics extends com.google.android.gms.analytics.TrackerHandler {
    // Fields
    private static boolean a;
    private static com.google.android.gms.analytics.GoogleAnalytics l;
    private boolean b;
    private com.google.android.gms.analytics.f c;
    private com.google.android.gms.analytics.af d;
    private android.content.Context e;
    private volatile java.lang.Boolean f;
    private com.google.android.gms.analytics.Logger g;
    private java.lang.String h;
    private java.lang.String i;
    private java.util.Set j;
    private boolean k;

    // Methods
    private GoogleAnalytics(android.content.Context p0)
    {
      this(p0, t.u(p0), r.cz());
    }

    private GoogleAnalytics(
            android.content.Context p0,
            com.google.android.gms.analytics.f p1,
            com.google.android.gms.analytics.af p2)
    {
      super();
      int v4;
      android.content.pm.ApplicationInfo ApplicationInfo;
      android.os.Bundle v8;
      int Int; // RETVAL
      com.google.android.gms.analytics.w v10;
      String v11;
      boolean v12;
      v4 = 0;
      this.f = Boolean.valueOf(false);
      this.k = false;
      if ( p0 == null )
        throw new IllegalArgumentException("context cannot be null");
      this.e = p0.getApplicationContext();
      this.c = p1;
      this.d = p2;
      com.google.android.gms.analytics.g.r(this.e);
      ae.r(this.e);
      com.google.android.gms.analytics.h.r(this.e);
      this.g = (com.google.android.gms.analytics.Logger)new com.google.android.gms.analytics.l();
      this.j = new java.util.HashSet();
      if ( !a )
      {
        try
        {
          ApplicationInfo = this.e.getPackageManager().getApplicationInfo(this.e.getPackageName(), 129);
        }
        catch ( android.content.pm.PackageManager.NameNotFoundException v7 )
        {
          aa.C("PackageManager doesn't know about package: " + v7);
          ApplicationInfo = null;
        }
        if ( ApplicationInfo != null )
        {
          v8 = ApplicationInfo.metaData;
          if ( v8 != null )
          {
            Int = v8.getInt("com.google.android.gms.analytics.globalConfigResource");
            if ( Int > 0 )
            {
              v10 = (com.google.android.gms.analytics.w)new com.google.android.gms.analytics.v(this.e).a(Int);
              if ( v10 != null )
              {
                aa.C("Loading global config values.");
                if ( v10.a() )
                {
                  this.i = v10.b();
                  aa.C("app name loaded: " + this.i);
                }
                if ( v10.c() )
                {
                  this.h = v10.d();
                  aa.C("app version loaded: " + this.h);
                }
                if ( v10.e() )
                {
                  v11 = v10.f().toLowerCase();
                  if ( !"verbose".equals(v11) )
                  {
                    if ( "info".equals(v11) )
                    {
                      v4 = 1;
                    }
                    else if ( "warning".equals(v11) )
                    {
                      v4 = 2;
                    }
                    else if ( "error".equals(v11) )
                    {
                      v4 = 3;
                    }
                    else
                    {
                      v4 = -1;
                    }
                  }
                  if ( v4 >= 0 )
                  {
                    aa.C("log level loaded: " + v4);
                    this.g.a(v4);
                  }
                }
                if ( v10.g() )
                  this.d.a(v10.h());
                if ( v10.i() )
                {
                  v12 = v10.j();
                  u.cP().a(u$a.ac);
                  this.b = v12;
                }
              }
            }
          }
        }
        else
        {
          aa.D("Couldn't get ApplicationInfo to load gloabl config.");
        }
      }
    
    }

    private static int P(String p0)
    {
      String v1;
      v1 = p0.toLowerCase();
      if ( "verbose".equals(v1) )
        return 0;
      if ( "info".equals(v1) )
        return 1;
      if ( "warning".equals(v1) )
        return 2;
      if ( "error".equals(v1) )
        return 3;
      return -1;
    }

    private com.google.android.gms.analytics.Tracker a(com.google.android.gms.analytics.Tracker p0)
    {
      if ( this.i != null )
        p0.a("&an", this.i);
      if ( this.h != null )
        p0.a("&av", this.h);
      return p0;
    }

    private void a(android.app.Application p0)
    {
      if ( Build.VERSION.SDK_INT >= 14 && !this.k )
      {
        p0.registerActivityLifecycleCallbacks((android.app.Application.ActivityLifecycleCallbacks)new com.google.android.gms.analytics.GoogleAnalytics$b(this));
        this.k = true;
      }
    }

    /* synthetic */ static void a(
            com.google.android.gms.analytics.GoogleAnalytics p0,
            android.app.Activity p1)
    {
      p0.c(p1);
    }

    private void a(com.google.android.gms.analytics.w p0)
    {
      String v2;
      int v3;
      boolean v4;
      aa.C("Loading global config values.");
      if ( p0.a() )
      {
        this.i = p0.b();
        aa.C("app name loaded: " + this.i);
      }
      if ( p0.c() )
      {
        this.h = p0.d();
        aa.C("app version loaded: " + this.h);
      }
      if ( p0.e() )
      {
        v2 = p0.f().toLowerCase();
        if ( "verbose".equals(v2) )
        {
          v3 = 0;
        }
        else if ( "info".equals(v2) )
        {
          v3 = 1;
        }
        else if ( "warning".equals(v2) )
        {
          v3 = 2;
        }
        else
        {
          v3 = "error".equals(v2) ? 3 : -1;
        }
        if ( v3 >= 0 )
        {
          aa.C("log level loaded: " + v3);
          this.g.a(v3);
        }
      }
      if ( p0.g() )
        this.d.a(p0.h());
      if ( p0.i() )
      {
        v4 = p0.j();
        u.cP().a(u$a.ac);
        this.b = v4;
      }
    }

    private void a(boolean p0)
    {
      u.cP().a(u$a.ac);
      this.b = p0;
    }

    private void b(int p0)
    {
      this.d.a(p0);
    }

    /* synthetic */ static void b(
            com.google.android.gms.analytics.GoogleAnalytics p0,
            android.app.Activity p1)
    {
      p0.d(p1);
    }

    private void b(boolean p0)
    {
      Boolean f;
      u.cP().a(u$a.Q);
      this.f = Boolean.valueOf(p0);
      f = this.f;
      if ( f.booleanValue() )
        this.c.b();
    }

    private void c(android.app.Activity p0)
    {
      java.util.Iterator i;
      for ( i = this.j.iterator(); i.hasNext(); ((com.google.android.gms.analytics.GoogleAnalytics$a)i.next()).a(p0) )
        ;
    }

    private void d(android.app.Activity p0)
    {
      java.util.Iterator i;
      for ( i = this.j.iterator(); i.hasNext(); ((com.google.android.gms.analytics.GoogleAnalytics$a)i.next()).a() )
        ;
    }

    static com.google.android.gms.analytics.GoogleAnalytics dd()
    {
      Object v0;
      v0 = com.google.android.gms.analytics.GoogleAnalytics.class;
      synchronized ( v0 )
      {
        return l;
      }
    }

    private void e()
    {
      android.content.pm.ApplicationInfo ApplicationInfo;
      android.os.Bundle v4;
      int Int; // RETVAL
      com.google.android.gms.analytics.w v6;
      String v7;
      int v8;
      boolean v9;
      if ( a )
        return;
      try
      {
        ApplicationInfo = this.e.getPackageManager().getApplicationInfo(this.e.getPackageName(), 129);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException v3 )
      {
        aa.C("PackageManager doesn't know about package: " + v3);
        ApplicationInfo = null;
      }
      if ( ApplicationInfo != null )
      {
        v4 = ApplicationInfo.metaData;
        if ( v4 != null )
        {
          Int = v4.getInt("com.google.android.gms.analytics.globalConfigResource");
          if ( Int > 0 )
          {
            v6 = (com.google.android.gms.analytics.w)new com.google.android.gms.analytics.v(this.e).a(Int);
            if ( v6 != null )
            {
              aa.C("Loading global config values.");
              if ( v6.a() )
              {
                this.i = v6.b();
                aa.C("app name loaded: " + this.i);
              }
              if ( v6.c() )
              {
                this.h = v6.d();
                aa.C("app version loaded: " + this.h);
              }
              if ( v6.e() )
              {
                v7 = v6.f().toLowerCase();
                if ( "verbose".equals(v7) )
                {
                  v8 = 0;
                }
                else if ( "info".equals(v7) )
                {
                  v8 = 1;
                }
                else if ( "warning".equals(v7) )
                {
                  v8 = 2;
                }
                else
                {
                  v8 = "error".equals(v7) ? 3 : -1;
                }
                if ( v8 >= 0 )
                {
                  aa.C("log level loaded: " + v8);
                  this.g.a(v8);
                }
              }
              if ( v6.g() )
                this.d.a(v6.h());
              if ( v6.i() )
              {
                v9 = v6.j();
                u.cP().a(u$a.ac);
                this.b = v9;
              }
            }
          }
        }
      }
      else
      {
        aa.D("Couldn't get ApplicationInfo to load gloabl config.");
      }
    }

    public static com.google.android.gms.analytics.GoogleAnalytics getInstance(android.content.Context p0)
    {
      Object v1;
      v1 = com.google.android.gms.analytics.GoogleAnalytics.class;
      synchronized ( v1 )
      {
        if ( l == null )
          l = new com.google.android.gms.analytics.GoogleAnalytics(p0);
        return l;
      }
    }

    public final com.google.android.gms.analytics.Tracker a(int p0)
    {
      com.google.android.gms.analytics.Tracker v2;
      com.google.android.gms.analytics.aj v3;
      synchronized ( this )
      {
        u.cP().a(u$a.N);
        v2 = new com.google.android.gms.analytics.Tracker(null, this, this.e);
        v3 = (com.google.android.gms.analytics.aj)new com.google.android.gms.analytics.ai(this.e).a(0x7f040001);
        if ( v3 != null )
          v2.a(v3);
        return this.a(v2);
      }
    }

    public final com.google.android.gms.analytics.Tracker a(String p0)
    {
      synchronized ( this )
      {
        u.cP().a(u$a.N);
        return this.a(new com.google.android.gms.analytics.Tracker(p0, this, this.e));
      }
    }

    public final void a(android.app.Activity p0)
    {
      if ( !this.k )
        this.c(p0);
    }

    final void a(com.google.android.gms.analytics.GoogleAnalytics$a p0)
    {
      this.j.add(p0);
    }

    public final void a(com.google.android.gms.analytics.Logger p0)
    {
      u.cP().a(u$a.ae);
      this.g = p0;
    }

    final void a(java.util.Map<String, String> p0)
    {
      synchronized ( this )
      {
        if ( p0 == null )
          throw new IllegalArgumentException("hit cannot be null");
        ak.a(p0, "&ul", ak.a(Locale.getDefault()));
        ak.a(p0, "&sr", ae.dq().a("&sr"));
        p0.put("&_u", u.cP().b());
        u.cP().a();
        this.c.a(p0);
      }
    }

    public final boolean a()
    {
      u.cP().a(u$a.ad);
      return this.b;
    }

    public final void b(android.app.Activity p0)
    {
      if ( !this.k )
        this.d(p0);
    }

    final void b(com.google.android.gms.analytics.GoogleAnalytics$a p0)
    {
      this.j.remove(p0);
    }

    public final boolean b()
    {
      Boolean f;
      u.cP().a(u$a.R);
      f = this.f;
      return f.booleanValue();
    }

    public final com.google.android.gms.analytics.Logger c()
    {
      return this.g;
    }

    public final void d()
    {
      this.d.a();
    }

}
