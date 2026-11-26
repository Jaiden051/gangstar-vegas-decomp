// Decompiled from classes.dex (SourceFile: PublisherInterstitialAd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.doubleclick;

public final class PublisherInterstitialAd {
    // Fields
    private final com.google.android.gms.internal.aw a;

    // Methods
    private PublisherInterstitialAd(android.content.Context p0)
    {
      super();
      this.a = new com.google.android.gms.internal.aw(p0);
    }

    private com.google.android.gms.ads.AdListener a()
    {
      return this.a.a();
    }

    private void a(com.google.android.gms.ads.AdListener p0)
    {
      this.a.a(p0);
    }

    private void a(com.google.android.gms.ads.doubleclick.AppEventListener p0)
    {
      this.a.a(p0);
    }

    private void a(com.google.android.gms.ads.doubleclick.PublisherAdRequest p0)
    {
      this.a.a(p0.a());
    }

    private void a(String p0)
    {
      this.a.a(p0);
    }

    private String b()
    {
      return this.a.b();
    }

    private com.google.android.gms.ads.doubleclick.AppEventListener c()
    {
      return this.a.c();
    }

    private boolean d()
    {
      return this.a.e();
    }

    private void e()
    {
      this.a.f();
    }

}
