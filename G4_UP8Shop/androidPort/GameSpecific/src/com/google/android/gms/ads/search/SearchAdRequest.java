// Decompiled from classes.dex (SourceFile: SearchAdRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.search;

import com.google.android.gms.internal.au;
public final class SearchAdRequest {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static final java.lang.String e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    private final java.lang.String A;
    private final com.google.android.gms.internal.au m;
    private final int n;
    private final int o;
    private final int p;
    private final int q;
    private final int r;
    private final int s;
    private final int t;
    private final int u;
    private final java.lang.String v;
    private final int w;
    private final java.lang.String x;
    private final int y;
    private final int z;

    // Methods
    static
    {
      e = au.a;
    }

    private SearchAdRequest(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      super();
      this.n = SearchAdRequest$Builder.a(p0);
      this.o = SearchAdRequest$Builder.b(p0);
      this.p = SearchAdRequest$Builder.c(p0);
      this.q = SearchAdRequest$Builder.d(p0);
      this.r = SearchAdRequest$Builder.e(p0);
      this.s = SearchAdRequest$Builder.f(p0);
      this.t = SearchAdRequest$Builder.g(p0);
      this.u = SearchAdRequest$Builder.h(p0);
      this.v = SearchAdRequest$Builder.i(p0);
      this.w = SearchAdRequest$Builder.j(p0);
      this.x = SearchAdRequest$Builder.k(p0);
      this.y = SearchAdRequest$Builder.l(p0);
      this.z = SearchAdRequest$Builder.m(p0);
      this.A = SearchAdRequest$Builder.n(p0);
      this.m = new com.google.android.gms.internal.au(SearchAdRequest$Builder.o(p0), this);
    }

    /* synthetic */ SearchAdRequest(com.google.android.gms.ads.search.SearchAdRequest$Builder p0, int p1)
    {
      this(p0);
    }

    private <T extends com.google.android.gms.ads.mediation.NetworkExtras> T a(Class<T> p0)
    {
      return this.m.a(p0);
    }

    private boolean a(android.content.Context p0)
    {
      return this.m.a(p0);
    }

    private <T extends com.google.android.gms.ads.mediation.MediationAdapter> android.os.Bundle b(
            Class<T> p0)
    {
      return this.m.b(p0);
    }

    private <T extends com.google.android.gms.ads.mediation.customevent.CustomEvent> android.os.Bundle c(
            Class<T> p0)
    {
      return this.m.c(p0);
    }

    private android.location.Location p()
    {
      return this.m.e();
    }

    public final int a()
    {
      return this.n;
    }

    public final int b()
    {
      return this.o;
    }

    public final int c()
    {
      return this.p;
    }

    public final int d()
    {
      return this.q;
    }

    public final int e()
    {
      return this.r;
    }

    public final int f()
    {
      return this.s;
    }

    public final int g()
    {
      return this.t;
    }

    public final int h()
    {
      return this.u;
    }

    public final String i()
    {
      return this.v;
    }

    public final int j()
    {
      return this.w;
    }

    public final String k()
    {
      return this.x;
    }

    public final int l()
    {
      return this.y;
    }

    public final int m()
    {
      return this.z;
    }

    public final String n()
    {
      return this.A;
    }

    final com.google.android.gms.internal.au o()
    {
      return this.m;
    }

}
