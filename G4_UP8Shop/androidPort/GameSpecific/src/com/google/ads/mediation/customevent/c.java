// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads.mediation.customevent;

import com.google.android.gms.internal.ev;
final class c implements com.google.ads.mediation.customevent.g {
    // Fields
    final com.google.ads.mediation.customevent.CustomEventAdapter a;
    private final com.google.ads.mediation.customevent.CustomEventAdapter b;
    private final com.google.ads.mediation.f c;

    // Methods
    public c(
            com.google.ads.mediation.customevent.CustomEventAdapter p0,
            com.google.ads.mediation.customevent.CustomEventAdapter p1,
            com.google.ads.mediation.f p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void a()
    {
      ev.z("Custom event adapter called onFailedToReceiveAd.");
      this.c.b(com.google.ads.AdRequest$ErrorCode.b);
    }

    public final void b()
    {
      ev.z("Custom event adapter called onReceivedAd.");
      this.c.f();
    }

    public final void c()
    {
      ev.z("Custom event adapter called onPresentScreen.");
      this.c.g();
    }

    public final void d()
    {
      ev.z("Custom event adapter called onDismissScreen.");
      this.c.h();
    }

    public final void e()
    {
      ev.z("Custom event adapter called onLeaveApplication.");
      this.c.i();
    }

}
