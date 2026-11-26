// Decompiled from classes.dex (SourceFile: CustomEventAdapter$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.mediation.customevent;

import com.google.android.gms.internal.ev;
final class CustomEventAdapter$a implements com.google.android.gms.ads.mediation.customevent.CustomEventBannerListener {
    // Fields
    private final com.google.android.gms.ads.mediation.customevent.CustomEventAdapter a;
    private final com.google.android.gms.ads.mediation.MediationBannerListener b;

    // Methods
    public CustomEventAdapter$a(
            com.google.android.gms.ads.mediation.customevent.CustomEventAdapter p0,
            com.google.android.gms.ads.mediation.MediationBannerListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final void a()
    {
      ev.z("Custom event adapter called onAdClicked.");
      this.b.e();
    }

    public final void a(int p0)
    {
      ev.z("Custom event adapter called onAdFailedToLoad.");
      this.b.a(p0);
    }

    public final void a(android.view.View p0)
    {
      ev.z("Custom event adapter called onAdLoaded.");
      CustomEventAdapter.a(this.a, p0);
      this.b.a();
    }

    public final void b()
    {
      ev.z("Custom event adapter called onAdOpened.");
      this.b.b();
    }

    public final void c()
    {
      ev.z("Custom event adapter called onAdClosed.");
      this.b.c();
    }

    public final void d()
    {
      ev.z("Custom event adapter called onAdLeftApplication.");
      this.b.d();
    }

}
