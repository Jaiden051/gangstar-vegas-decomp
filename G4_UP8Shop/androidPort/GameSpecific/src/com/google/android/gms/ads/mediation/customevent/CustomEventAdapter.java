// Decompiled from classes.dex (SourceFile: CustomEventAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.ads.mediation.customevent;

import com.google.android.gms.internal.ev;
public final class CustomEventAdapter implements com.google.android.gms.ads.mediation.MediationBannerAdapter, com.google.android.gms.ads.mediation.MediationInterstitialAdapter {
    // Fields
    private android.view.View a;
    private com.google.android.gms.ads.mediation.customevent.CustomEventBanner b;
    private com.google.android.gms.ads.mediation.customevent.CustomEventInterstitial c;

    // Methods
    public CustomEventAdapter()
    {
      super();
    }

    private static <T> T a(String p0)
    {
      try
      {
        return (T)Class.forName(p0).newInstance();
      }
      catch ( Throwable v3 )
      {
        ev.D("Could not instantiate custom event adapter: " + p0 + ". " + v3.getMessage());
        return null;
      }
    }

    private void a(android.view.View p0)
    {
      this.a = p0;
    }

    /* synthetic */ static void a(
            com.google.android.gms.ads.mediation.customevent.CustomEventAdapter p0,
            android.view.View p1)
    {
      p0.a = p1;
    }

    public final void a()
    {
      if ( this.b != null )
        this.b.a();
      if ( this.c != null )
        this.c.a();
    }

    public final void a(
            android.content.Context p0,
            com.google.android.gms.ads.mediation.MediationBannerListener p1,
            android.os.Bundle p2,
            com.google.android.gms.ads.AdSize p3,
            com.google.android.gms.ads.mediation.MediationAdRequest p4,
            android.os.Bundle p5)
    {
      this.b = (com.google.android.gms.ads.mediation.customevent.CustomEventBanner)a(p2.getString("class_name"));
      if ( this.b != null )
      {
        if ( p5 != null )
          p5.getBundle(p2.getString("class_name"));
        new com.google.android.gms.ads.mediation.customevent.CustomEventAdapter$a(this, p1);
        p2.getString("parameter");
        this.b.d();
      }
      else
      {
        p1.a(0);
      }
    }

    public final void a(
            android.content.Context p0,
            com.google.android.gms.ads.mediation.MediationInterstitialListener p1,
            android.os.Bundle p2,
            com.google.android.gms.ads.mediation.MediationAdRequest p3,
            android.os.Bundle p4)
    {
      this.c = (com.google.android.gms.ads.mediation.customevent.CustomEventInterstitial)a(p2.getString("class_name"));
      if ( this.c != null )
      {
        if ( p4 != null )
          p4.getBundle(p2.getString("class_name"));
        new com.google.android.gms.ads.mediation.customevent.CustomEventAdapter$b(this, this, p1);
        p2.getString("parameter");
        this.c.d();
      }
      else
      {
        p1.b(0);
      }
    }

    public final void b()
    {
      if ( this.b != null )
        this.b.b();
      if ( this.c != null )
        this.c.b();
    }

    public final void c()
    {
      if ( this.b != null )
        this.b.c();
      if ( this.c != null )
        this.c.c();
    }

    public final android.view.View d()
    {
      return this.a;
    }

    public final void e()
    {
      this.c.e();
    }

}
