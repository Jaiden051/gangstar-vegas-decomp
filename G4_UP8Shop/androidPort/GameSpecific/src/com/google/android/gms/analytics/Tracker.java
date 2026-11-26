// Decompiled from classes.dex (SourceFile: Tracker.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
import com.google.android.gms.internal.hn;
import java.util.Locale;
public class Tracker {
    // Fields
    private final com.google.android.gms.analytics.TrackerHandler a;
    private android.content.Context b;
    private final java.util.Map c;
    private com.google.android.gms.analytics.ad d;
    private final com.google.android.gms.analytics.h e;
    private final com.google.android.gms.analytics.ae f;
    private final com.google.android.gms.analytics.g g;
    private boolean h;
    private com.google.android.gms.analytics.Tracker$a i;
    private com.google.android.gms.analytics.aj j;
    private com.google.android.gms.analytics.ExceptionReporter k;

    // Methods
    Tracker(String p0, com.google.android.gms.analytics.TrackerHandler p1, android.content.Context p2)
    {
      this(p0, p1, com.google.android.gms.analytics.h.cq(), ae.dq(), com.google.android.gms.analytics.g.cp(), (com.google.android.gms.analytics.ad)new com.google.android.gms.analytics.z("tracking"), p2);
    }

    private Tracker(
            String p0,
            com.google.android.gms.analytics.TrackerHandler p1,
            com.google.android.gms.analytics.h p2,
            com.google.android.gms.analytics.ae p3,
            com.google.android.gms.analytics.g p4,
            com.google.android.gms.analytics.ad p5,
            android.content.Context p6)
    {
      super();
      this.c = new java.util.HashMap();
      this.a = p1;
      if ( p6 != null )
        this.b = p6.getApplicationContext();
      if ( p0 != null )
        this.c.put("&tid", p0);
      this.c.put("useSecure", "1");
      this.e = p2;
      this.f = p3;
      this.g = p4;
      this.c.put("&a", Integer.toString(new java.util.Random().nextInt(0x7FFFFFFF) + 1));
      this.d = p5;
      this.i = new com.google.android.gms.analytics.Tracker$a(this);
      this.c.put("&ate", null);
      this.c.put("&adid", null);
    }

    private long a()
    {
      return this.i.b();
    }

    private String a(String p0)
    {
      String v2;
      v2 = null;
      u.cP().a(u$a.j);
      if ( !TextUtils.isEmpty(p0) )
      {
        if ( this.c.containsKey(p0) )
        {
          return (String)this.c.get(p0);
        }
        else if ( p0.equals("&ul") )
        {
          return ak.a(Locale.getDefault());
        }
        else if ( this.e != null && com.google.android.gms.analytics.h.J(p0) )
        {
          return this.e.a(p0);
        }
        else if ( this.f != null && ae.J(p0) )
        {
          return this.f.a(p0);
        }
        else if ( this.g != null && com.google.android.gms.analytics.g.J(p0) )
        {
          return this.g.a(p0);
        }
      }
      return v2;
    }

    private void a(double p0)
    {
      this.a("&sf", Double.toHexString(p0));
    }

    private void a(int p0, int p1)
    {
      if ( p0 >= 0 || p1 >= 0 )
        this.a("&sr", p0 + "x" + p1);
      else
        aa.D("Invalid width or height. The values should be non-negative.");
    }

    private void a(long p0)
    {
      this.i.a(1000 * p0);
    }

    private void a(boolean p0)
    {
      if ( this.h != p0 )
      {
        this.h = p0;
        if ( p0 )
        {
          this.k = new com.google.android.gms.analytics.ExceptionReporter(this, Thread.getDefaultUncaughtExceptionHandler(), this.b);
          Thread.setDefaultUncaughtExceptionHandler((Thread.UncaughtExceptionHandler)this.k);
          aa.C("Uncaught exceptions will be reported to Google Analytics.");
        }
        else
        {
          if ( this.k != null )
            Thread.setDefaultUncaughtExceptionHandler(this.k.a());
          else
            Thread.setDefaultUncaughtExceptionHandler(null);
          aa.C("Uncaught exceptions will not be reported to Google Analytics.");
        }
      }
    }

    /* synthetic */ static com.google.android.gms.analytics.Tracker$a b(
            com.google.android.gms.analytics.Tracker p0)
    {
      return p0.i;
    }

    private void b(String p0)
    {
      this.a("&cd", p0);
    }

    private void b(boolean p0)
    {
      this.i.a(p0);
    }

    private boolean b()
    {
      return this.i.c();
    }

    /* synthetic */ static com.google.android.gms.analytics.aj c(com.google.android.gms.analytics.Tracker p0)
    {
      return p0.j;
    }

    private void c(String p0)
    {
      this.a("&dl", p0);
    }

    private void c(boolean p0)
    {
      this.a("useSecure", ak.v(p0));
    }

    private void d(String p0)
    {
      this.a("&dr", p0);
    }

    private void d(boolean p0)
    {
      this.a("&aip", ak.v(p0));
    }

    private void e(String p0)
    {
      this.a("&dp", p0);
    }

    private void e(boolean p0)
    {
      this.c.put("&ate", null);
      this.c.put("&adid", null);
    }

    private void f(String p0)
    {
      this.a("&dh", p0);
    }

    private void g(String p0)
    {
      this.a("&dt", p0);
    }

    private void h(String p0)
    {
      this.a("&ul", p0);
    }

    private void i(String p0)
    {
      this.a("&de", p0);
    }

    private void j(String p0)
    {
      this.a("&sd", p0);
    }

    private void k(String p0)
    {
      this.a("&vp", p0);
    }

    private void l(String p0)
    {
      this.a("&cid", p0);
    }

    private void m(String p0)
    {
      this.a("&an", p0);
    }

    private void n(String p0)
    {
      this.a("&aid", p0);
    }

    private void o(String p0)
    {
      this.a("&aiid", p0);
    }

    private void p(String p0)
    {
      this.a("&av", p0);
    }

    final void a(com.google.android.gms.analytics.aj p0)
    {
      String v2; // RETVAL
      String v3; // RETVAL
      boolean v4; // RETVAL
    
      aa.C("Loading Tracker config values.");
      this.j = p0;
      if ( this.j.a() )
      {
        v2 = this.j.b();
        this.a("&tid", v2);
        aa.C("[Tracker] trackingId loaded: " + v2);
      }
      if ( this.j.c() )
      {
        v3 = Double.toString(this.j.d());
        this.a("&sf", v3);
        aa.C("[Tracker] sample frequency loaded: " + v3);
      }
      if ( this.j.e() )
      {
        this.i.a(1000L * this.j.f());
        aa.C("[Tracker] session timeout loaded: " + this.i.b());
      }
      if ( this.j.g() )
      {
        this.i.a(this.j.h());
        aa.C("[Tracker] auto activity tracking loaded: " + this.i.c());
      }
      if ( this.j.i() )
      {
        if ( this.j.j() )
        {
          this.a("&aip", "1");
          aa.C("[Tracker] anonymize ip loaded: true");
        }
        aa.C("[Tracker] anonymize ip loaded: false");
      }
      v4 = this.j.k();
      if ( this.h != v4 )
      {
        this.h = v4;
        if ( v4 )
        {
          this.k = new com.google.android.gms.analytics.ExceptionReporter(this, Thread.getDefaultUncaughtExceptionHandler(), this.b);
          Thread.setDefaultUncaughtExceptionHandler((Thread.UncaughtExceptionHandler)this.k);
          aa.C("Uncaught exceptions will be reported to Google Analytics.");
        }
        else
        {
          if ( this.k != null )
            Thread.setDefaultUncaughtExceptionHandler(this.k.a());
          else
            Thread.setDefaultUncaughtExceptionHandler(null);
          aa.C("Uncaught exceptions will not be reported to Google Analytics.");
        }
      }
    }

    public final void a(String p0, String p1)
    {
      hn.b(p0, "Key should be non-null");
      u.cP().a(u$a.k);
      this.c.put(p0, p1);
    }

    public final void a(java.util.Map<String, String> p0)
    {
      java.util.Map v2;
      Object[] v3;
      CharSequence v4;
      Object[] v5;
      String v6;
      int v7; // RETVAL
      int v8;
      u.cP().a(u$a.l);
      v2 = new java.util.HashMap();
      v2.putAll(this.c);
      if ( p0 != null )
        v2.putAll(p0);
      if ( TextUtils.isEmpty((CharSequence)v2.get("&tid")) )
      {
        v3 = new Object[1];
        v3[0] = "&tid";
        aa.D(String.format("Missing tracking id (%s) parameter.", v3));
      }
      v4 = (String)v2.get("&t");
      if ( TextUtils.isEmpty(v4) )
      {
        v5 = new Object[1];
        v5[0] = "&t";
        aa.D(String.format("Missing hit type (%s) parameter.", v5));
        v4 = "";
      }
      if ( this.i.d() )
        v2.put("&sc", "start");
      v6 = ((String)v4).toLowerCase();
      if ( "screenview".equals(v6) || "pageview".equals(v6) || "appview".equals(v6) || TextUtils.isEmpty(v6) )
      {
        v7 = Integer.parseInt((String)this.c.get("&a"));
        v8 = v7 + 1;
        if ( v7 == 2147483646 )
          v8 = 1;
        this.c.put("&a", Integer.toString(v8));
      }
      if ( v6.equals("transaction") || v6.equals("item") || this.d.a() )
        this.a.a(v2);
      else
        aa.D("Too many hits sent too quickly, rate limiting invoked.");
    }

}
