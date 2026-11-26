// Decompiled from classes.dex (SourceFile: cb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class cb implements com.google.ads.mediation.d, com.google.ads.mediation.f {
    // Fields
    private final com.google.android.gms.internal.bw a;

    // Methods
    public cb(com.google.android.gms.internal.bw p0)
    {
      super();
      this.a = p0;
    }

    /* synthetic */ static com.google.android.gms.internal.bw a(com.google.android.gms.internal.cb p0)
    {
      return p0.a;
    }

    public final void a()
    {
      ev.z("Adapter called onReceivedAd.");
      if ( eu.bR() )
      {
        try
        {
          this.a.e();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdLoaded.", v1);
        }
      }
      else
      {
        ev.D("onReceivedAd must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$8(this));
      }
    }

    public final void a(com.google.ads.AdRequest$ErrorCode p0)
    {
      ev.z("Adapter called onFailedToReceiveAd with error. " + p0);
      if ( eu.bR() )
      {
        try
        {
          this.a.a(cc.a(p0));
        }
        catch ( android.os.RemoteException v2 )
        {
          ev.c("Could not call onAdFailedToLoad.", v2);
        }
      }
      else
      {
        ev.D("onFailedToReceiveAd must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$5(this, p0));
      }
    }

    public final void b()
    {
      ev.z("Adapter called onPresentScreen.");
      if ( eu.bR() )
      {
        try
        {
          this.a.d();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdOpened.", v1);
        }
      }
      else
      {
        ev.D("onPresentScreen must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$7(this));
      }
    }

    public final void b(com.google.ads.AdRequest$ErrorCode p0)
    {
      ev.z("Adapter called onFailedToReceiveAd with error " + p0 + ".");
      if ( eu.bR() )
      {
        try
        {
          this.a.a(cc.a(p0));
        }
        catch ( android.os.RemoteException v2 )
        {
          ev.c("Could not call onAdFailedToLoad.", v2);
        }
      }
      else
      {
        ev.D("onFailedToReceiveAd must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$10(this, p0));
      }
    }

    public final void c()
    {
      ev.z("Adapter called onDismissScreen.");
      if ( eu.bR() )
      {
        try
        {
          this.a.b();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdClosed.", v1);
        }
      }
      else
      {
        ev.D("onDismissScreen must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$4(this));
      }
    }

    public final void d()
    {
      ev.z("Adapter called onLeaveApplication.");
      if ( eu.bR() )
      {
        try
        {
          this.a.c();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdLeftApplication.", v1);
        }
      }
      else
      {
        ev.D("onLeaveApplication must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$6(this));
      }
    }

    public final void e()
    {
      ev.z("Adapter called onClick.");
      if ( eu.bR() )
      {
        try
        {
          this.a.a();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdClicked.", v1);
        }
      }
      else
      {
        ev.D("onClick must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$1(this));
      }
    }

    public final void f()
    {
      ev.z("Adapter called onReceivedAd.");
      if ( eu.bR() )
      {
        try
        {
          this.a.e();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdLoaded.", v1);
        }
      }
      else
      {
        ev.D("onReceivedAd must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$3(this));
      }
    }

    public final void g()
    {
      ev.z("Adapter called onPresentScreen.");
      if ( eu.bR() )
      {
        try
        {
          this.a.d();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdOpened.", v1);
        }
      }
      else
      {
        ev.D("onPresentScreen must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$2(this));
      }
    }

    public final void h()
    {
      ev.z("Adapter called onDismissScreen.");
      if ( eu.bR() )
      {
        try
        {
          this.a.b();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdClosed.", v1);
        }
      }
      else
      {
        ev.D("onDismissScreen must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$9(this));
      }
    }

    public final void i()
    {
      ev.z("Adapter called onLeaveApplication.");
      if ( eu.bR() )
      {
        try
        {
          this.a.c();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call onAdLeftApplication.", v1);
        }
      }
      else
      {
        ev.D("onLeaveApplication must be called on the main UI thread.");
        eu.a.post((Runnable)new com.google.android.gms.internal.cb$11(this));
      }
    }

}
