// Decompiled from classes.dex (SourceFile: bz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class bz implements com.google.android.gms.ads.mediation.MediationBannerListener, com.google.android.gms.ads.mediation.MediationInterstitialListener {
    // Fields
    private final com.google.android.gms.internal.bw a;

    // Methods
    public bz(com.google.android.gms.internal.bw p0)
    {
      super();
      this.a = p0;
    }

    public final void a()
    {
      hn.ay("onAdLoaded must be called on the main UI thread.");
      ev.z("Adapter called onAdLoaded.");
      try
      {
        this.a.e();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdLoaded.", v1);
      }
    }

    public final void a(int p0)
    {
      hn.ay("onAdFailedToLoad must be called on the main UI thread.");
      ev.z("Adapter called onAdFailedToLoad with error. " + p0);
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Could not call onAdFailedToLoad.", v2);
      }
    }

    public final void b()
    {
      hn.ay("onAdOpened must be called on the main UI thread.");
      ev.z("Adapter called onAdOpened.");
      try
      {
        this.a.d();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdOpened.", v1);
      }
    }

    public final void b(int p0)
    {
      hn.ay("onAdFailedToLoad must be called on the main UI thread.");
      ev.z("Adapter called onAdFailedToLoad with error " + p0 + ".");
      try
      {
        this.a.a(p0);
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Could not call onAdFailedToLoad.", v2);
      }
    }

    public final void c()
    {
      hn.ay("onAdClosed must be called on the main UI thread.");
      ev.z("Adapter called onAdClosed.");
      try
      {
        this.a.b();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdClosed.", v1);
      }
    }

    public final void d()
    {
      hn.ay("onAdLeftApplication must be called on the main UI thread.");
      ev.z("Adapter called onAdLeftApplication.");
      try
      {
        this.a.c();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdLeftApplication.", v1);
      }
    }

    public final void e()
    {
      hn.ay("onAdClicked must be called on the main UI thread.");
      ev.z("Adapter called onAdClicked.");
      try
      {
        this.a.a();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdClicked.", v1);
      }
    }

    public final void f()
    {
      hn.ay("onAdLoaded must be called on the main UI thread.");
      ev.z("Adapter called onAdLoaded.");
      try
      {
        this.a.e();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdLoaded.", v1);
      }
    }

    public final void g()
    {
      hn.ay("onAdOpened must be called on the main UI thread.");
      ev.z("Adapter called onAdOpened.");
      try
      {
        this.a.d();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdOpened.", v1);
      }
    }

    public final void h()
    {
      hn.ay("onAdClosed must be called on the main UI thread.");
      ev.z("Adapter called onAdClosed.");
      try
      {
        this.a.b();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdClosed.", v1);
      }
    }

    public final void i()
    {
      hn.ay("onAdLeftApplication must be called on the main UI thread.");
      ev.z("Adapter called onAdLeftApplication.");
      try
      {
        this.a.c();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdLeftApplication.", v1);
      }
    }

    public final void j()
    {
      hn.ay("onAdClicked must be called on the main UI thread.");
      ev.z("Adapter called onAdClicked.");
      try
      {
        this.a.a();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdClicked.", v1);
      }
    }

}
