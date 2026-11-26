// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads.mediation.customevent;

import com.google.android.gms.internal.ev;
final class b implements com.google.ads.mediation.customevent.e {
    // Fields
    private final com.google.ads.mediation.customevent.CustomEventAdapter a;
    private final com.google.ads.mediation.d b;

    // Methods
    public b(com.google.ads.mediation.customevent.CustomEventAdapter p0, com.google.ads.mediation.d p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final void a()
    {
      ev.z("Custom event adapter called onFailedToReceiveAd.");
      this.b.a(com.google.ads.AdRequest$ErrorCode.b);
    }

    public final void a(android.view.View p0)
    {
      ev.z("Custom event adapter called onReceivedAd.");
      CustomEventAdapter.a(this.a, p0);
      this.b.a();
    }

    public final void b()
    {
      ev.z("Custom event adapter called onFailedToReceiveAd.");
      this.b.e();
    }

    public final void c()
    {
      ev.z("Custom event adapter called onFailedToReceiveAd.");
      this.b.b();
    }

    public final void d()
    {
      ev.z("Custom event adapter called onFailedToReceiveAd.");
      this.b.c();
    }

    public final void e()
    {
      ev.z("Custom event adapter called onFailedToReceiveAd.");
      this.b.d();
    }

}
