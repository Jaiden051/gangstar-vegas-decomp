// Decompiled from classes.dex (SourceFile: au$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class au$a {
    // Fields
    private final java.util.HashSet a;
    private final android.os.Bundle b;
    private final java.util.HashMap c;
    private final java.util.HashSet d;
    private java.util.Date e;
    private java.lang.String f;
    private int g;
    private android.location.Location h;
    private boolean i;
    private java.lang.String j;
    private int k;

    // Methods
    public au$a()
    {
      super();
      this.a = new java.util.HashSet();
      this.b = new android.os.Bundle();
      this.c = new java.util.HashMap();
      this.d = new java.util.HashSet();
      this.g = -1;
      this.i = false;
      this.k = -1;
    }

    /* synthetic */ static java.util.Date a(com.google.android.gms.internal.au$a p0)
    {
      return p0.e;
    }

    /* synthetic */ static String b(com.google.android.gms.internal.au$a p0)
    {
      return p0.f;
    }

    /* synthetic */ static int c(com.google.android.gms.internal.au$a p0)
    {
      return p0.g;
    }

    /* synthetic */ static java.util.HashSet d(com.google.android.gms.internal.au$a p0)
    {
      return p0.a;
    }

    /* synthetic */ static android.location.Location e(com.google.android.gms.internal.au$a p0)
    {
      return p0.h;
    }

    /* synthetic */ static boolean f(com.google.android.gms.internal.au$a p0)
    {
      return p0.i;
    }

    /* synthetic */ static android.os.Bundle g(com.google.android.gms.internal.au$a p0)
    {
      return p0.b;
    }

    /* synthetic */ static java.util.HashMap h(com.google.android.gms.internal.au$a p0)
    {
      return p0.c;
    }

    /* synthetic */ static String i(com.google.android.gms.internal.au$a p0)
    {
      return p0.j;
    }

    /* synthetic */ static int j(com.google.android.gms.internal.au$a p0)
    {
      return p0.k;
    }

    /* synthetic */ static java.util.HashSet k(com.google.android.gms.internal.au$a p0)
    {
      return p0.d;
    }

    public final void a(int p0)
    {
      this.g = p0;
    }

    public final void a(android.location.Location p0)
    {
      this.h = p0;
    }

    public final void a(com.google.android.gms.ads.mediation.NetworkExtras p0)
    {
      if ( p0 instanceof com.google.android.gms.ads.mediation.admob.AdMobExtras )
        this.a(com.google.ads.mediation.admob.AdMobAdapter.class, ((com.google.android.gms.ads.mediation.admob.AdMobExtras)p0).a());
      else
        this.c.put(p0.getClass(), p0);
    }

    public final void a(
            Class<? extends com.google.android.gms.ads.mediation.MediationAdapter> p0,
            android.os.Bundle p1)
    {
      this.b.putBundle(p0.getName(), p1);
    }

    public final void a(String p0)
    {
      this.a.add(p0);
    }

    public final void a(java.util.Date p0)
    {
      this.e = p0;
    }

    public final void a(boolean p0)
    {
      this.i = p0;
    }

    public final void b(
            Class<? extends com.google.android.gms.ads.mediation.customevent.CustomEvent> p0,
            android.os.Bundle p1)
    {
      if ( this.b.getBundle("com.google.android.gms.ads.mediation.customevent.CustomEventAdapter") == null )
        this.b.putBundle("com.google.android.gms.ads.mediation.customevent.CustomEventAdapter", new android.os.Bundle());
      this.b.getBundle("com.google.android.gms.ads.mediation.customevent.CustomEventAdapter").putBundle(p0.getName(), p1);
    }

    public final void b(String p0)
    {
      this.d.add(p0);
    }

    public final void b(boolean p0)
    {
      this.k = p0 ? 1 : 0;
    }

    public final void c(String p0)
    {
      this.f = p0;
    }

    public final void d(String p0)
    {
      this.j = p0;
    }

}
