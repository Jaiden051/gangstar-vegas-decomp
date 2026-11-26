// Decompiled from classes.dex (SourceFile: CustomEventAdapter$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.mediation.customevent;

import com.google.android.gms.internal.ev;
class CustomEventAdapter$b implements com.google.android.gms.ads.mediation.customevent.CustomEventInterstitialListener {
    // Fields
    final com.google.android.gms.ads.mediation.customevent.CustomEventAdapter a;
    private final com.google.android.gms.ads.mediation.customevent.CustomEventAdapter b;
    private final com.google.android.gms.ads.mediation.MediationInterstitialListener c;

    // Methods
    public CustomEventAdapter$b(
            com.google.android.gms.ads.mediation.customevent.CustomEventAdapter p0,
            com.google.android.gms.ads.mediation.customevent.CustomEventAdapter p1,
            com.google.android.gms.ads.mediation.MediationInterstitialListener p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void a()
    {
      ev.z("Custom event adapter called onAdClicked.");
      this.c.j();
    }

    public final void a(int p0)
    {
      ev.z("Custom event adapter called onFailedToReceiveAd.");
      this.c.b(p0);
    }

    public final void b()
    {
      ev.z("Custom event adapter called onAdOpened.");
      this.c.g();
    }

    public final void c()
    {
      ev.z("Custom event adapter called onAdClosed.");
      this.c.h();
    }

    public final void d()
    {
      ev.z("Custom event adapter called onAdLeftApplication.");
      this.c.i();
    }

    public final void e()
    {
      ev.z("Custom event adapter called onReceivedAd.");
      this.c.f();
    }

}
