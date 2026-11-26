// Decompiled from classes.dex (SourceFile: SearchAdRequest$Builder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.search;

import android.graphics.Color;
public final class SearchAdRequest$Builder {
    // Fields
    private final com.google.android.gms.internal.au$a a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private java.lang.String j;
    private int k;
    private java.lang.String l;
    private int m;
    private int n;
    private java.lang.String o;

    // Methods
    public SearchAdRequest$Builder()
    {
      super();
      this.a = new com.google.android.gms.internal.au$a();
      this.h = 0;
    }

    /* synthetic */ static int a(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.b;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder a(int p0)
    {
      this.b = p0;
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder a(int p0, int p1)
    {
      this.c = Color.argb(0, 0, 0, 0);
      this.d = p1;
      this.e = p0;
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder a(
            android.location.Location p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder a(
            com.google.android.gms.ads.mediation.NetworkExtras p0)
    {
      this.a.a(p0);
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder a(
            Class<? extends com.google.android.gms.ads.mediation.MediationAdapter> p0,
            android.os.Bundle p1)
    {
      this.a.a(p0, p1);
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder a(String p0)
    {
      this.a.b(p0);
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder a(boolean p0)
    {
      this.a.b(p0);
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest a()
    {
      return new com.google.android.gms.ads.search.SearchAdRequest(this, 0);
    }

    /* synthetic */ static int b(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.c;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder b(int p0)
    {
      this.c = p0;
      this.d = Color.argb(0, 0, 0, 0);
      this.e = Color.argb(0, 0, 0, 0);
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder b(
            Class<? extends com.google.android.gms.ads.mediation.customevent.CustomEvent> p0,
            android.os.Bundle p1)
    {
      this.a.b(p0, p1);
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder b(String p0)
    {
      this.j = p0;
      return this;
    }

    /* synthetic */ static int c(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.d;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder c(int p0)
    {
      this.f = p0;
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder c(String p0)
    {
      this.l = p0;
      return this;
    }

    /* synthetic */ static int d(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.e;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder d(int p0)
    {
      this.g = p0;
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder d(String p0)
    {
      this.o = p0;
      return this;
    }

    /* synthetic */ static int e(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.f;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder e(int p0)
    {
      this.h = p0;
      return this;
    }

    /* synthetic */ static int f(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.g;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder f(int p0)
    {
      this.i = p0;
      return this;
    }

    /* synthetic */ static int g(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.h;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder g(int p0)
    {
      this.k = p0;
      return this;
    }

    /* synthetic */ static int h(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.i;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder h(int p0)
    {
      this.m = p0;
      return this;
    }

    private com.google.android.gms.ads.search.SearchAdRequest$Builder i(int p0)
    {
      this.n = p0;
      return this;
    }

    /* synthetic */ static String i(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.j;
    }

    /* synthetic */ static int j(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.k;
    }

    /* synthetic */ static String k(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.l;
    }

    /* synthetic */ static int l(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.m;
    }

    /* synthetic */ static int m(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.n;
    }

    /* synthetic */ static String n(com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.o;
    }

    /* synthetic */ static com.google.android.gms.internal.au$a o(
            com.google.android.gms.ads.search.SearchAdRequest$Builder p0)
    {
      return p0.a;
    }

}
