// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads.mediation.admob;

final class b extends com.google.android.gms.ads.AdListener {
    // Fields
    private final com.google.ads.mediation.admob.AdMobAdapter a;
    private final com.google.android.gms.ads.mediation.MediationInterstitialListener b;

    // Methods
    public b(
            com.google.ads.mediation.admob.AdMobAdapter p0,
            com.google.android.gms.ads.mediation.MediationInterstitialListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final void a()
    {
      this.b.f();
    }

    public final void a(int p0)
    {
      this.b.b(p0);
    }

    public final void b()
    {
      this.b.g();
    }

    public final void c()
    {
      this.b.h();
    }

    public final void d()
    {
      this.b.i();
    }

}
