// Decompiled from classes.dex (SourceFile: GoogleAnalyticsTracker.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import android.util.Log;
import com.google.android.gms.analytics.GoogleAnalytics;
public class GoogleAnalyticsTracker {
    // Fields
    public static java.lang.String a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    private static com.google.android.apps.analytics.GoogleAnalyticsTracker e;
    private boolean f;
    private boolean g;
    private boolean h;
    private boolean i;
    private int j;
    private java.lang.String k;
    private android.content.Context l;
    private android.net.ConnectivityManager m;
    private java.lang.String n;
    private java.lang.String o;
    private int p;
    private com.google.android.apps.analytics.j q;
    private com.google.android.apps.analytics.c r;
    private boolean s;
    private boolean t;
    private com.google.android.apps.analytics.a u;
    private com.google.android.apps.analytics.CustomVariableBuffer v;
    private java.util.Map w;
    private java.util.Map x;
    private android.os.Handler y;
    private java.lang.Runnable z;

    // Methods
    static
    {
      e = new com.google.android.apps.analytics.GoogleAnalyticsTracker();
    }

    private GoogleAnalyticsTracker()
    {
      super();
      this.f = false;
      this.g = false;
      this.h = false;
      this.i = false;
      this.j = 100;
      this.n = "GoogleAnalytics";
      this.o = "1.4.2";
      this.w = new java.util.HashMap();
      this.x = new java.util.HashMap();
      this.z = (Runnable)new com.google.android.apps.analytics.f(this);
    }

    private void a(int p0)
    {
      this.p = p0;
      if ( this.p > 0 )
        this.h();
      this.g();
    }

    private void a(com.google.android.apps.analytics.Item p0)
    {
      java.util.Map v2;
      if ( (com.google.android.apps.analytics.Transaction)this.w.get(p0.a()) == null )
      {
        Log.i("GoogleAnalyticsTracker", "No transaction with orderId " + p0.a() + " found, creating one");
        this.w.put(p0.a(), new com.google.android.apps.analytics.Transaction$Builder(p0.a(), 0.0).a());
      }
      v2 = (java.util.Map)this.x.get(p0.a());
      if ( v2 == null )
      {
        v2 = new java.util.HashMap();
        this.x.put(p0.a(), v2);
      }
      v2.put(p0.b(), p0);
    }

    private void a(com.google.android.apps.analytics.Transaction p0)
    {
      this.w.put(p0.a(), p0);
    }

    private void a(com.google.android.apps.analytics.a p0)
    {
      this.u = p0;
    }

    private void a(String p0)
    {
      this.a(this.k, "__##GOOGLEPAGEVIEW##__", p0, null, -1);
    }

    private void a(String p0, int p1, android.content.Context p2)
    {
      this.b(p0, -1, p2);
    }

    private void a(
            String p0,
            int p1,
            android.content.Context p2,
            com.google.android.apps.analytics.j p3,
            com.google.android.apps.analytics.c p4,
            boolean p5)
    {
      com.google.android.apps.analytics.d v7;
      v7 = (com.google.android.apps.analytics.d)new com.google.android.apps.analytics.g(this);
      this.k = p0;
      if ( p2 == null )
        throw new NullPointerException("Context cannot be null");
      this.l = p2.getApplicationContext();
      this.q = p3;
      this.u = new com.google.android.apps.analytics.a();
      if ( p5 )
        this.q.i();
      this.r = p4;
      this.r.a(v7);
      this.t = false;
      if ( this.m == null )
        this.m = (android.net.ConnectivityManager)this.l.getSystemService("connectivity");
      if ( this.y != null )
        this.h();
      else
        this.y = new android.os.Handler(p2.getMainLooper());
      this.p = p1;
      if ( this.p > 0 )
        this.h();
      this.g();
    }

    private void a(
            String p0,
            int p1,
            android.content.Context p2,
            com.google.android.apps.analytics.j p3,
            com.google.android.apps.analytics.c p4,
            boolean p5,
            com.google.android.apps.analytics.d p6)
    {
      this.k = p0;
      if ( p2 == null )
        throw new NullPointerException("Context cannot be null");
      this.l = p2.getApplicationContext();
      this.q = p3;
      this.u = new com.google.android.apps.analytics.a();
      if ( p5 )
        this.q.i();
      this.r = p4;
      this.r.a(p6);
      this.t = false;
      if ( this.m == null )
        this.m = (android.net.ConnectivityManager)this.l.getSystemService("connectivity");
      if ( this.y != null )
        this.h();
      else
        this.y = new android.os.Handler(p2.getMainLooper());
      this.p = p1;
      if ( this.p > 0 )
        this.h();
      this.g();
    }

    private void a(String p0, int p1, android.content.Context p2, boolean p3)
    {
      com.google.android.apps.analytics.j q;
      com.google.android.apps.analytics.c r;
      if ( p2 == null )
        throw new NullPointerException("Context cannot be null");
      if ( this.q != null )
      {
        q = this.q;
      }
      else
      {
        q = (com.google.android.apps.analytics.j)new com.google.android.apps.analytics.PersistentHitStore(p2);
        q.a(this.h);
        q.c(this.j);
      }
      if ( this.r != null )
      {
        r = this.r;
      }
      else
      {
        r = (com.google.android.apps.analytics.c)new com.google.android.apps.analytics.NetworkDispatcher(this.n, this.o);
        r.a(this.g);
      }
      this.k = p0;
      this.l = p2.getApplicationContext();
      this.q = q;
      this.u = new com.google.android.apps.analytics.a();
      this.q.i();
      this.r = r;
      this.r.a((com.google.android.apps.analytics.d)new com.google.android.apps.analytics.g(this));
      this.t = false;
      if ( this.m == null )
        this.m = (android.net.ConnectivityManager)this.l.getSystemService("connectivity");
      if ( this.y != null )
        this.h();
      else
        this.y = new android.os.Handler(p2.getMainLooper());
      this.p = p1;
      if ( this.p > 0 )
        this.h();
      this.g();
    }

    private void a(String p0, android.content.Context p1)
    {
      this.b(p0, -1, p1);
    }

    private void a(String p0, String p1)
    {
      this.n = p0;
      this.o = p1;
    }

    private void a(String p0, String p1, String p2, int p3)
    {
      if ( p0 == null )
        throw new IllegalArgumentException("category cannot be null");
      if ( p1 == null )
        throw new IllegalArgumentException("action cannot be null");
      this.a(this.k, p0, p1, p2, p3);
    }

    private void a(String p0, String p1, String p2, String p3, int p4)
    {
      com.google.android.apps.analytics.e v6;
      v6 = new com.google.android.apps.analytics.e(p0, p1, p2, p3, p4, this.l.getResources().getDisplayMetrics().widthPixels, this.l.getResources().getDisplayMetrics().heightPixels);
      v6.m = this.v;
      v6.b(this.u.a());
      v6.b(this.i);
      this.v = new com.google.android.apps.analytics.CustomVariableBuffer();
      this.q.a(v6);
      this.i();
    }

    private void a(boolean p0)
    {
      this.h = p0;
      if ( this.q != null )
        this.q.a(this.h);
    }

    private boolean a(int p0, String p1, String p2)
    {
      return this.a(p0, p1, p2, 3);
    }

    private boolean a(int p0, String p1, String p2, int p3)
    {
      com.google.android.apps.analytics.b v5;
      try
      {
        v5 = new com.google.android.apps.analytics.b(p0, p1, p2, 3);
        if ( this.v == null )
          this.v = new com.google.android.apps.analytics.CustomVariableBuffer();
        this.v.a(v5);
        return true;
      }
      catch ( IllegalArgumentException e )
      {
        return false;
      }
    }

    private boolean a(com.google.android.apps.analytics.c p0)
    {
      if ( this.t )
        return false;
      if ( this.r != null )
        this.r.a();
      this.r = p0;
      this.r.a((com.google.android.apps.analytics.d)new com.google.android.apps.analytics.g(this));
      this.r.a(this.g);
      return true;
    }

    /* synthetic */ static android.os.Handler access$000(
            com.google.android.apps.analytics.GoogleAnalyticsTracker p0)
    {
      return p0.y;
    }

    /* synthetic */ static com.google.android.apps.analytics.j access$100(
            com.google.android.apps.analytics.GoogleAnalyticsTracker p0)
    {
      return p0.q;
    }

    private String b(int p0)
    {
      if ( p0 <= 0 || p0 > 5 )
        throw new IllegalArgumentException("Index must be between 1 and 5 inclusive.");
      return this.q.b(p0);
    }

    private void b(String p0, int p1, android.content.Context p2)
    {
      com.google.android.apps.analytics.j q;
      com.google.android.apps.analytics.c r;
      if ( p2 == null )
        throw new NullPointerException("Context cannot be null");
      if ( this.q != null )
      {
        q = this.q;
      }
      else
      {
        q = (com.google.android.apps.analytics.j)new com.google.android.apps.analytics.PersistentHitStore(p2);
        q.a(this.h);
        q.c(this.j);
      }
      if ( this.r != null )
      {
        r = this.r;
      }
      else
      {
        r = (com.google.android.apps.analytics.c)new com.google.android.apps.analytics.NetworkDispatcher(this.n, this.o);
        r.a(this.g);
      }
      this.k = p0;
      this.l = p2.getApplicationContext();
      this.q = q;
      this.u = new com.google.android.apps.analytics.a();
      this.q.i();
      this.r = r;
      this.r.a((com.google.android.apps.analytics.d)new com.google.android.apps.analytics.g(this));
      this.t = false;
      if ( this.m == null )
        this.m = (android.net.ConnectivityManager)this.l.getSystemService("connectivity");
      if ( this.y != null )
        this.h();
      else
        this.y = new android.os.Handler(p2.getMainLooper());
      this.p = p1;
      if ( this.p > 0 )
        this.h();
      this.g();
    }

    private void b(String p0, android.content.Context p1)
    {
      this.b(p0, -1, p1);
    }

    private void b(boolean p0)
    {
      this.i = p0;
    }

    private boolean b(String p0)
    {
      if ( this.q == null )
        throw new IllegalStateException("Can't set a referrer before starting the tracker");
      return this.q.a(p0);
    }

    private void c(int p0)
    {
      if ( p0 >= 0 && p0 <= 100 )
      {
        this.j = p0;
        if ( this.q != null )
          this.q.c(this.j);
      }
      else
      {
        Log.w("GoogleAnalyticsTracker", "Invalid sample rate: " + p0 + " (should be between 0 and 100");
      }
    }

    private void c(boolean p0)
    {
      this.f = p0;
    }

    private void d(boolean p0)
    {
      this.g = p0;
      if ( this.r != null )
        this.r.a(p0);
    }

    private com.google.android.apps.analytics.c f()
    {
      return this.r;
    }

    private void g()
    {
      if ( this.p >= 0 && this.y.postDelayed(this.z, 1000 * this.p) && this.f )
        Log.v("GoogleAnalyticsTracker", "Scheduled next dispatch");
    }

    public static com.google.android.apps.analytics.GoogleAnalyticsTracker getInstance()
    {
      return e;
    }

    private void h()
    {
      if ( this.y != null )
        this.y.removeCallbacks(this.z);
    }

    private void i()
    {
      if ( this.s )
      {
        this.s = false;
        this.g();
      }
    }

    private void j()
    {
      if ( this.r != null )
        this.r.a();
      this.h();
    }

    private void k()
    {
      if ( this.r != null )
        this.r.a();
      this.h();
    }

    private com.google.android.apps.analytics.j l()
    {
      return this.q;
    }

    private void m()
    {
      java.util.Iterator v1;
      com.google.android.apps.analytics.Transaction v2;
      com.google.android.apps.analytics.e v3;
      java.util.Map v4;
      java.util.Iterator v5;
      com.google.android.apps.analytics.Item v6;
      com.google.android.apps.analytics.e v7;
      v1 = this.w.values().iterator();
      while ( v1.hasNext() )
      {
        v2 = (com.google.android.apps.analytics.Transaction)v1.next();
        v3 = new com.google.android.apps.analytics.e(this.k, "__##GOOGLETRANSACTION##__", "", "", 0, this.l.getResources().getDisplayMetrics().widthPixels, this.l.getResources().getDisplayMetrics().heightPixels);
        v3.a(v2);
        this.q.a(v3);
        v4 = (java.util.Map)this.x.get(v2.a());
        if ( v4 != null )
        {
          v5 = v4.values().iterator();
          while ( v5.hasNext() )
          {
            v6 = (com.google.android.apps.analytics.Item)v5.next();
            v7 = new com.google.android.apps.analytics.e(this.k, "__##GOOGLEITEM##__", "", "", 0, this.l.getResources().getDisplayMetrics().widthPixels, this.l.getResources().getDisplayMetrics().heightPixels);
            v7.a(v6);
            this.q.a(v7);
          }
        }
      }
      this.w.clear();
      this.x.clear();
      this.i();
    }

    private void n()
    {
      this.w.clear();
      this.x.clear();
    }

    private boolean o()
    {
      return this.h;
    }

    private int p()
    {
      return this.j;
    }

    private boolean q()
    {
      return this.g;
    }

    private static void returnToInitialState()
    {
      e = new com.google.android.apps.analytics.GoogleAnalyticsTracker();
    }

    public final boolean a()
    {
      boolean v1 = false;
      android.net.NetworkInfo ActiveNetworkInfo = null; // RETVAL
      com.google.android.apps.analytics.i[] v4 = null; // RETVAL
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = false;
            if ( this.f )
            Log.v("GoogleAnalyticsTracker", "Called dispatch");
            if ( !(this.t) ) { _pc = 2; continue _sm; }
            if ( this.f )
            Log.v("GoogleAnalyticsTracker", "...but dispatcher was busy");
            _pc = 1;
            continue _sm;
          case 1:
            this.g();
            return v1;
          case 2:
            ActiveNetworkInfo = this.m.getActiveNetworkInfo();
            if ( ActiveNetworkInfo == null || !ActiveNetworkInfo.isAvailable() )
            {
            if ( this.f )
            Log.v("GoogleAnalyticsTracker", "...but there was no network available");
            { _pc = 1; continue _sm; }
            }
            if ( this.q.b() != 0 )
            {
            v4 = this.q.a();
            this.r.a(v4);
            this.t = true;
            this.g();
            if ( this.f )
            Log.v("GoogleAnalyticsTracker", "Sending " + v4.length + " hits to dispatcher");
            return true;
            }
            else
            {
            this.s = true;
            if ( this.f )
            Log.v("GoogleAnalyticsTracker", "...but there was nothing to dispatch");
            }
            return v1;
        }
      }
}

    final void b()
    {
      this.t = false;
    }

    final String c()
    {
      if ( this.q != null )
        return this.q.d();
      else
        return null;
    }

    final String d()
    {
      if ( this.q != null )
        return this.q.e();
      else
        return null;
    }

    public final boolean e()
    {
      return this.f;
    }

}
