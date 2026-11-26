// Decompiled from classes.dex (SourceFile: Tracker$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class Tracker$a implements com.google.android.gms.analytics.GoogleAnalytics$a {
    // Fields
    final com.google.android.gms.analytics.Tracker a;
    private boolean b;
    private int c;
    private long d;
    private boolean e;
    private long f;
    private com.google.android.gms.analytics.i g;

    // Methods
    public Tracker$a(com.google.android.gms.analytics.Tracker p0)
    {
      super();
      this.a = p0;
      this.b = false;
      this.c = 0;
      this.d = -1;
      this.e = false;
      this.g = (com.google.android.gms.analytics.i)new com.google.android.gms.analytics.Tracker$a$1(this, p0);
    
    }

    private void e()
    {
      com.google.android.gms.analytics.GoogleAnalytics v1;
      v1 = GoogleAnalytics.dd();
      if ( v1 != null )
      {
        if ( this.d >= 0 || this.b )
          v1.a((com.google.android.gms.analytics.GoogleAnalytics$a)Tracker.b(this.a));
        else
          v1.b((com.google.android.gms.analytics.GoogleAnalytics$a)Tracker.b(this.a));
      }
      else
      {
        aa.A("GoogleAnalytics isn't initialized for the Tracker!");
      }
    }

    private boolean f()
    {
      return this.g.a() >= this.f + Math.max(1000, this.d);
    }

    public final void a()
    {
      u.cP().a(u$a.aj);
      --this.c;
      this.c = Math.max(0, this.c);
      if ( this.c == 0 )
        this.f = this.g.a();
    }

    public final void a(long p0)
    {
      this.d = p0;
      this.e();
    }

    public final void a(android.app.Activity p0)
    {
      java.util.Map v2;
      com.google.android.gms.analytics.Tracker a;
      String CanonicalName;
      u.cP().a(u$a.ai);
      if ( this.c == 0 && this.g.a() >= this.f + Math.max(1000, this.d) )
        this.e = true;
      ++this.c;
      if ( this.b )
      {
        v2 = new java.util.HashMap();
        v2.put("&t", "screenview");
        u.cP().a(true);
        a = this.a;
        if ( Tracker.c(a) != null )
          CanonicalName = Tracker.c(this.a).a(p0);
        else
          CanonicalName = p0.getClass().getCanonicalName();
        a.a("&cd", CanonicalName);
        this.a.a(v2);
        u.cP().a(false);
      }
    }

    public final void a(boolean p0)
    {
      this.b = p0;
      this.e();
    }

    public final long b()
    {
      return this.d;
    }

    public final boolean c()
    {
      return this.b;
    }

    public final boolean d()
    {
      this.e = false;
      return this.e;
    }

}
