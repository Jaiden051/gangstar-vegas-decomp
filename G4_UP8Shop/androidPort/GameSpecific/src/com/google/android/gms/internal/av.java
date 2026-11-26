// Decompiled from classes.dex (SourceFile: av.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.ads.AdSize;
public final class av {
    // Fields
    private final com.google.android.gms.internal.bt a;
    private final com.google.android.gms.internal.al b;
    private com.google.android.gms.ads.AdListener c;
    private com.google.android.gms.internal.ar d;
    private com.google.android.gms.ads.AdSize[] e;
    private java.lang.String f;
    private java.lang.String g;
    private android.view.ViewGroup h;
    private com.google.android.gms.ads.doubleclick.AppEventListener i;
    private com.google.android.gms.ads.purchase.InAppPurchaseListener j;
    private com.google.android.gms.ads.purchase.PlayStorePurchaseListener k;

    // Methods
    public av(android.view.ViewGroup p0)
    {
      this(p0, null, false, al.aA());
    }

    public av(android.view.ViewGroup p0, android.util.AttributeSet p1, boolean p2)
    {
      this(p0, p1, p2, al.aA());
    }

    private av(android.view.ViewGroup p0, android.util.AttributeSet p1, boolean p2, com.google.android.gms.internal.al p3)
    {
      super();
      android.content.Context Context; // RETVAL
      android.content.Context v6;
      com.google.android.gms.internal.ap v7;
      this.a = new com.google.android.gms.internal.bt();
      this.h = p0;
      this.b = p3;
      if ( p1 == null )
        return;
      Context = p0.getContext();
      v6 = Context;
      try
      {
        v7 = new com.google.android.gms.internal.ap(Context, p1);
        this.e = v7.a(p2);
        this.f = v7.a();
        if ( p0.isInEditMode() )
          eu.a(p0, new com.google.android.gms.internal.am(v6, this.e[0]), "Ads by Google");
      }
      catch ( IllegalArgumentException v8 )
      {
        eu.a(p0, new com.google.android.gms.internal.am(Context, new com.google.android.gms.ads.AdSize(0, 0)), v8.getMessage(), v8.getMessage());
      }
    
    }

    private void k()
    {
      com.google.android.gms.dynamic.d v1; // RETVAL
    
      try
      {
        v1 = this.d.a();
        if ( v1 != null )
          this.h.addView((android.view.View)com.google.android.gms.dynamic.e.e(v1));
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Failed to get an ad frame.", v2);
      }
    }

    private void l()
 throws android.os.RemoteException {
      android.content.Context Context; // RETVAL
      com.google.android.gms.dynamic.d v2; // RETVAL
    
      if ( (this.e == null || this.f == null) && this.d == null )
        throw new IllegalStateException("The ad size and ad unit ID must be set before loadAd is called.");
      Context = this.h.getContext();
      this.d = ai.a(Context, new com.google.android.gms.internal.am(Context, this.e), this.f, this.a);
      if ( this.c != null )
        this.d.a(new com.google.android.gms.internal.ah(this.c));
      if ( this.i != null )
        this.d.a(new com.google.android.gms.internal.ao(this.i));
      if ( this.j != null )
        this.d.a(new com.google.android.gms.internal.di(this.j));
      if ( this.k != null )
        this.d.a(new com.google.android.gms.internal.dm(this.k), this.g);
      try
      {
        v2 = this.d.a();
        if ( v2 != null )
          this.h.addView((android.view.View)com.google.android.gms.dynamic.e.e(v2));
      }
      catch ( android.os.RemoteException v3 )
      {
        ev.c("Failed to get an ad frame.", v3);
      }
    }

    public final void a()
    {
      try
      {
        if ( this.d != null )
          this.d.b();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Failed to destroy AdView.", v1);
      }
    }

    public final void a(com.google.android.gms.ads.AdListener p0)
    {
      com.google.android.gms.internal.ar d;
      com.google.android.gms.internal.aq v3;
      try
      {
        this.c = p0;
        if ( this.d != null )
        {
          d = this.d;
          if ( p0 != null )
            v3 = new com.google.android.gms.internal.ah(p0);
          else
            v3 = null;
          d.a(v3);
        }
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Failed to set the AdListener.", v4);
      }
    }

    public final void a(com.google.android.gms.ads.doubleclick.AppEventListener p0)
    {
      com.google.android.gms.internal.ar d;
      com.google.android.gms.internal.at v3;
      try
      {
        this.i = p0;
        if ( this.d != null )
        {
          d = this.d;
          if ( p0 != null )
            v3 = new com.google.android.gms.internal.ao(p0);
          else
            v3 = null;
          d.a(v3);
        }
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Failed to set the AppEventListener.", v4);
      }
    }

    public final void a(com.google.android.gms.ads.purchase.InAppPurchaseListener p0)
    {
      com.google.android.gms.internal.ar d;
      com.google.android.gms.internal.dd v3;
      if ( this.k != null )
        throw new IllegalStateException("Play store purchase parameter has already been set.");
      try
      {
        this.j = p0;
        if ( this.d != null )
        {
          d = this.d;
          if ( p0 != null )
            v3 = new com.google.android.gms.internal.di(p0);
          else
            v3 = null;
          d.a(v3);
        }
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Failed to set the InAppPurchaseListener.", v4);
      }
    }

    public final void a(com.google.android.gms.ads.purchase.PlayStorePurchaseListener p0, String p1)
    {
      com.google.android.gms.internal.ar d;
      com.google.android.gms.internal.dh v4;
      if ( this.j != null )
        throw new IllegalStateException("InAppPurchaseListener has already been set.");
      try
      {
        this.k = p0;
        this.g = p1;
        if ( this.d != null )
        {
          d = this.d;
          if ( p0 != null )
            v4 = new com.google.android.gms.internal.dm(p0);
          else
            v4 = null;
          d.a(v4, p1);
        }
      }
      catch ( android.os.RemoteException v5 )
      {
        ev.c("Failed to set the play store purchase parameter.", v5);
      }
    }

    public final void a(com.google.android.gms.internal.au p0)
    {
      android.content.Context Context; // RETVAL
    
      try
      {
        if ( this.d == null )
        {
          if ( (this.e == null || this.f == null) && this.d == null )
            throw new IllegalStateException("The ad size and ad unit ID must be set before loadAd is called.");
          Context = this.h.getContext();
          this.d = ai.a(Context, new com.google.android.gms.internal.am(Context, this.e), this.f, this.a);
          if ( this.c != null )
            this.d.a(new com.google.android.gms.internal.ah(this.c));
          if ( this.i != null )
            this.d.a(new com.google.android.gms.internal.ao(this.i));
          if ( this.j != null )
            this.d.a(new com.google.android.gms.internal.di(this.j));
          if ( this.k != null )
            this.d.a(new com.google.android.gms.internal.dm(this.k), this.g);
          this.k();
        }
        if ( this.d.a(al.a(this.h.getContext(), p0)) )
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
        throw new IllegalStateException("The ad unit ID can only be set once on AdView.");
      this.f = p0;
    }

    public final void a(com.google.android.gms.ads.AdSize[] p0)
    {
      if ( this.e != null )
        throw new IllegalStateException("The ad size can only be set once on AdView.");
      this.b(p0);
    }

    public final com.google.android.gms.ads.AdListener b()
    {
      return this.c;
    }

    public final void b(com.google.android.gms.ads.AdSize[] p0)
    {
      this.e = (com.google.android.gms.ads.AdSize[])p0;
      try
      {
        if ( this.d != null )
          this.d.a(new com.google.android.gms.internal.am(this.h.getContext(), this.e));
      }
      catch ( android.os.RemoteException v2 )
      {
        ev.c("Failed to set the ad size.", v2);
      }
      this.h.requestLayout();
    }

    public final com.google.android.gms.ads.AdSize c()
    {
      try
      {
        if ( this.d != null )
          return this.d.i().a();
      }
      catch ( android.os.RemoteException v3 )
      {
        ev.c("Failed to get the current AdSize.", v3);
      }
      if ( this.e != null )
        return this.e[0];
      else
        return null;
    }

    public final com.google.android.gms.ads.AdSize[] d()
    {
      return this.e;
    }

    public final String e()
    {
      return this.f;
    }

    public final com.google.android.gms.ads.doubleclick.AppEventListener f()
    {
      return this.i;
    }

    public final com.google.android.gms.ads.purchase.InAppPurchaseListener g()
    {
      return this.j;
    }

    public final void h()
    {
      try
      {
        if ( this.d != null )
          this.d.d();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Failed to call pause.", v1);
      }
    }

    public final void i()
    {
      try
      {
        this.d.h();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Failed to record impression.", v1);
      }
    }

    public final void j()
    {
      try
      {
        if ( this.d != null )
          this.d.e();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Failed to call resume.", v1);
      }
    }

}
