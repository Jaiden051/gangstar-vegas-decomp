// Decompiled from classes.dex (SourceFile: InterstitialAd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads;

public final class InterstitialAd {
    // Fields
    private final com.google.android.gms.internal.aw a;

    // Methods
    public InterstitialAd(android.content.Context p0)
    {
      super();
      this.a = new com.google.android.gms.internal.aw(p0);
    }

    private void a(com.google.android.gms.ads.purchase.InAppPurchaseListener p0)
    {
      this.a.a(p0);
    }

    private void a(com.google.android.gms.ads.purchase.PlayStorePurchaseListener p0, String p1)
    {
      this.a.a(p0, p1);
    }

    private com.google.android.gms.ads.AdListener b()
    {
      return this.a.a();
    }

    private String c()
    {
      return this.a.b();
    }

    private com.google.android.gms.ads.purchase.InAppPurchaseListener d()
    {
      return this.a.d();
    }

    private boolean e()
    {
      return this.a.e();
    }

    public final void a()
    {
      this.a.f();
    }

    public final void a(com.google.android.gms.ads.AdListener p0)
    {
      this.a.a(p0);
    }

    public final void a(com.google.android.gms.ads.AdRequest p0)
    {
      this.a.a(p0.a());
    }

    public final void a(String p0)
    {
      this.a.a(p0);
    }

}
