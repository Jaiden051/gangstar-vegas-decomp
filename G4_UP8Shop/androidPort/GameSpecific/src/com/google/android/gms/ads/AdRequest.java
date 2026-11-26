// Decompiled from classes.dex (SourceFile: AdRequest.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads;

import com.google.android.gms.internal.au;
public final class AdRequest {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static final java.lang.String i;
    private final com.google.android.gms.internal.au j;

    // Methods
    static
    {
      i = au.a;
    }

    private AdRequest(com.google.android.gms.ads.AdRequest$Builder p0)
    {
      super();
      this.j = new com.google.android.gms.internal.au(AdRequest$Builder.a(p0));
    }

    /* synthetic */ AdRequest(com.google.android.gms.ads.AdRequest$Builder p0, int p1)
    {
      this(p0);
    }

    private <T extends com.google.android.gms.ads.mediation.NetworkExtras> T a(Class<T> p0)
    {
      return this.j.a(p0);
    }

    private boolean a(android.content.Context p0)
    {
      return this.j.a(p0);
    }

    private <T extends com.google.android.gms.ads.mediation.MediationAdapter> android.os.Bundle b(Class<T> p0)
    {
      return this.j.b(p0);
    }

    private java.util.Date b()
    {
      return this.j.a();
    }

    private <T extends com.google.android.gms.ads.mediation.customevent.CustomEvent> android.os.Bundle c(
            Class<T> p0)
    {
      return this.j.c(p0);
    }

    private String c()
    {
      return this.j.b();
    }

    private int d()
    {
      return this.j.c();
    }

    private java.util.Set<String> e()
    {
      return this.j.d();
    }

    private android.location.Location f()
    {
      return this.j.e();
    }

    final com.google.android.gms.internal.au a()
    {
      return this.j;
    }

}
