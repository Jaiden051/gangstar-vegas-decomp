// Decompiled from classes.dex (SourceFile: PublisherAdRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.doubleclick;

import com.google.android.gms.internal.au;
public final class PublisherAdRequest {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static final java.lang.String h;
    private final com.google.android.gms.internal.au i;

    // Methods
    static
    {
      h = au.a;
    }

    private PublisherAdRequest(com.google.android.gms.ads.doubleclick.PublisherAdRequest$Builder p0)
    {
      super();
      this.i = new com.google.android.gms.internal.au(PublisherAdRequest$Builder.a(p0));
    }

    /* synthetic */ PublisherAdRequest(com.google.android.gms.ads.doubleclick.PublisherAdRequest$Builder p0, int p1)
    {
      this(p0);
    }

    private <T extends com.google.android.gms.ads.mediation.NetworkExtras> T a(Class<T> p0)
    {
      return this.i.a(p0);
    }

    private boolean a(android.content.Context p0)
    {
      return this.i.a(p0);
    }

    private <T extends com.google.android.gms.ads.mediation.MediationAdapter> android.os.Bundle b(
            Class<T> p0)
    {
      return this.i.b(p0);
    }

    private java.util.Date b()
    {
      return this.i.a();
    }

    private <T extends com.google.android.gms.ads.mediation.customevent.CustomEvent> android.os.Bundle c(
            Class<T> p0)
    {
      return this.i.c(p0);
    }

    private String c()
    {
      return this.i.b();
    }

    private int d()
    {
      return this.i.c();
    }

    private java.util.Set<String> e()
    {
      return this.i.d();
    }

    private android.location.Location f()
    {
      return this.i.e();
    }

    private boolean g()
    {
      return this.i.f();
    }

    private String h()
    {
      return this.i.g();
    }

    final com.google.android.gms.internal.au a()
    {
      return this.i;
    }

}
