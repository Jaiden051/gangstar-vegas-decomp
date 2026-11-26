// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads.mediation.admob;

final class a extends com.google.android.gms.ads.AdListener {
    // Fields
    private final com.google.ads.mediation.admob.AdMobAdapter a;
    private final com.google.android.gms.ads.mediation.MediationBannerListener b;

    // Methods
    public a(
            com.google.ads.mediation.admob.AdMobAdapter p0,
            com.google.android.gms.ads.mediation.MediationBannerListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final void a()
    {
      this.b.a();
    }

    public final void a(int p0)
    {
      this.b.a(p0);
    }

    public final void b()
    {
      this.b.e();
      this.b.b();
    }

    public final void c()
    {
      this.b.c();
    }

    public final void d()
    {
      this.b.d();
    }

}
