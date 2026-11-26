// Decompiled from classes.dex (SourceFile: aw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class aw {
    // Fields
    private final com.google.android.gms.internal.bt a;
    private final android.content.Context b;
    private final com.google.android.gms.internal.al c;
    private com.google.android.gms.ads.AdListener d;
    private com.google.android.gms.internal.ar e;
    private java.lang.String f;
    private java.lang.String g;
    private com.google.android.gms.ads.doubleclick.AppEventListener h;
    private com.google.android.gms.ads.purchase.PlayStorePurchaseListener i;
    private com.google.android.gms.ads.purchase.InAppPurchaseListener j;

    // Methods
    public aw(android.content.Context p0)
    {
      this(p0, al.aA());
    }

    private aw(android.content.Context p0, com.google.android.gms.internal.al p1)
    {
      super();
      this.a = new com.google.android.gms.internal.bt();
      this.b = p0;
      this.c = p1;
    }

    private void b(String p0)
 throws android.os.RemoteException {
      if ( this.f == null )
        this.c(p0);
      this.e = ai.a(this.b, new com.google.android.gms.internal.am(), this.f, this.a);
      if ( this.d != null )
        this.e.a(new com.google.android.gms.internal.ah(this.d));
      if ( this.h != null )
        this.e.a(new com.google.android.gms.internal.ao(this.h));
      if ( this.j != null )
        this.e.a(new com.google.android.gms.internal.di(this.j));
      if ( this.i != null )
        this.e.a(new com.google.android.gms.internal.dm(this.i), this.g);
    }

    private void c(String p0)
    {
      if ( this.e == null )
        throw new IllegalStateException("The ad unit ID must be set on InterstitialAd before " + p0 + " is called.");
    }

    public final com.google.android.gms.ads.AdListener a()
    {
      return this.d;
    }

    public final void a(com.google.android.gms.ads.AdListener p0)
    {
      com.google.android.gms.internal.ar e;
      com.google.android.gms.internal.aq v3;
      try
      {
        this.d = p0;
        if ( this.e != null )
        {
          e = this.e;
          if ( p0 != null )
            v3 = new com.google.android.gms.internal.ah(p0);
          else
            v3 = null;
          e.a(v3);
        }
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Failed to set the AdListener.", v4);
      }
    }

    public final void a(com.google.android.gms.ads.doubleclick.AppEventListener p0)
    {
      com.google.android.gms.internal.ar e;
      com.google.android.gms.internal.at v3;
      try
      {
        this.h = p0;
        if ( this.e != null )
        {
          e = this.e;
          if ( p0 != null )
            v3 = new com.google.android.gms.internal.ao(p0);
          else
            v3 = null;
          e.a(v3);
        }
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Failed to set the AppEventListener.", v4);
      }
    }

    public final void a(com.google.android.gms.ads.purchase.InAppPurchaseListener p0)
    {
      com.google.android.gms.internal.ar e;
      com.google.android.gms.internal.dd v3;
      if ( this.i != null )
        throw new IllegalStateException("Play store purchase parameter has already been set.");
      try
      {
        this.j = p0;
        if ( this.e != null )
        {
          e = this.e;
          if ( p0 != null )
            v3 = new com.google.android.gms.internal.di(p0);
          else
            v3 = null;
          e.a(v3);
        }
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Failed to set the InAppPurchaseListener.", v4);
      }
    }

    public final void a(com.google.android.gms.ads.purchase.PlayStorePurchaseListener p0, String p1)
    {
      com.google.android.gms.internal.ar e;
      com.google.android.gms.internal.dh v4;
      try
      {
        this.i = p0;
        if ( this.e != null )
        {
          e = this.e;
          if ( p0 != null )
            v4 = new com.google.android.gms.internal.dm(p0);
          else
            v4 = null;
          e.a(v4, p1);
        }
      }
      catch ( android.os.RemoteException v5 )
      {
        ev.c("Failed to set the play store purchase parameter.", v5);
      }
    }

    public final void a(com.google.android.gms.internal.au p0)
    {
      try
      {
        if ( this.e == null )
        {
          if ( this.f == null )
            this.c("loadAd");
          this.e = ai.a(this.b, new com.google.android.gms.internal.am(), this.f, this.a);
          if ( this.d != null )
            this.e.a(new com.google.android.gms.internal.ah(this.d));
          if ( this.h != null )
            this.e.a(new com.google.android.gms.internal.ao(this.h));
          if ( this.j != null )
            this.e.a(new com.google.android.gms.internal.di(this.j));
          if ( this.i != null )
            this.e.a(new com.google.android.gms.internal.dm(this.i), this.g);
        }
        if ( this.e.a(al.a(this.b, p0)) )
          this.a.a(p0.i());
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Failed to load ad.", v2);
      }
    }

    public final void a(String p0)
    {
      if ( this.f != null )
        throw new IllegalStateException("The ad unit ID can only be set once on InterstitialAd.");
      this.f = p0;
    }

    public final String b()
    {
      return this.f;
    }

    public final com.google.android.gms.ads.doubleclick.AppEventListener c()
    {
      return this.h;
    }

    public final com.google.android.gms.ads.purchase.InAppPurchaseListener d()
    {
      return this.j;
    }

    public final boolean e()
    {
      boolean v1;
      v1 = false;
      try
      {
        if ( this.e != null )
          return this.e.c();
        return v1;
      }
      catch ( android.os.RemoteException v3 )
      {
        ev.c("Failed to check if ad is ready.", v3);
      }
      return v1;
    }

    public final void f()
    {
      try
      {
        this.c("show");
        this.e.f();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Failed to show interstitial.", v1);
      }
    }

}
