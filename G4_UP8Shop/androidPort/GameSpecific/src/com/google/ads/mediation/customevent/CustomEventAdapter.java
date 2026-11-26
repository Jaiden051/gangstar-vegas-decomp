// Decompiled from classes.dex (SourceFile: CustomEventAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads.mediation.customevent;

import com.google.android.gms.internal.ev;
public final class CustomEventAdapter implements com.google.ads.mediation.c, com.google.ads.mediation.e {
    // Fields
    private android.view.View a;
    private com.google.ads.mediation.customevent.d b;
    private com.google.ads.mediation.customevent.f c;

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
            com.google.ads.mediation.customevent.CustomEventAdapter p0,
            android.view.View p1)
    {
      p0.a = p1;
    }

    private void a(
            com.google.ads.mediation.d p0,
            android.app.Activity p1,
            com.google.ads.mediation.customevent.i p2,
            com.google.ads.AdSize p3,
            com.google.ads.mediation.MediationAdRequest p4,
            com.google.android.gms.ads.mediation.customevent.CustomEventExtras p5)
    {
      this.b = (com.google.ads.mediation.customevent.d)a(p2.b);
      if ( this.b != null )
      {
        if ( p5 != null )
          p5.a(p2.a);
        new com.google.ads.mediation.customevent.b(this, p0);
      }
      else
      {
        p0.a(com.google.ads.AdRequest$ErrorCode.d);
      }
    }

    private void a(
            com.google.ads.mediation.f p0,
            android.app.Activity p1,
            com.google.ads.mediation.customevent.i p2,
            com.google.ads.mediation.MediationAdRequest p3,
            com.google.android.gms.ads.mediation.customevent.CustomEventExtras p4)
    {
      this.c = (com.google.ads.mediation.customevent.f)a(p2.b);
      if ( this.c != null )
      {
        if ( p4 != null )
          p4.a(p2.a);
        new com.google.ads.mediation.customevent.c(this, this, p0);
      }
      else
      {
        p0.b(com.google.ads.AdRequest$ErrorCode.d);
      }
    }

    public final void a()
    {
      ;
    }

    /* synthetic */ public final void a(
            com.google.ads.mediation.d p0,
            android.app.Activity p1,
            com.google.ads.mediation.MediationServerParameters p2,
            com.google.ads.AdSize p3,
            com.google.ads.mediation.MediationAdRequest p4,
            com.google.ads.mediation.i p5)
    {
      com.google.ads.mediation.customevent.i v7;
      com.google.android.gms.ads.mediation.customevent.CustomEventExtras v8;
      v7 = (com.google.ads.mediation.customevent.i)p2;
      v8 = (com.google.android.gms.ads.mediation.customevent.CustomEventExtras)p5;
      this.b = (com.google.ads.mediation.customevent.d)a(v7.b);
      if ( this.b != null )
      {
        if ( v8 != null )
          v8.a(v7.a);
        new com.google.ads.mediation.customevent.b(this, p0);
      }
      else
      {
        p0.a(com.google.ads.AdRequest$ErrorCode.d);
      }
    }

    /* synthetic */ public final void a(
            com.google.ads.mediation.f p0,
            android.app.Activity p1,
            com.google.ads.mediation.MediationServerParameters p2,
            com.google.ads.mediation.MediationAdRequest p3,
            com.google.ads.mediation.i p4)
    {
      com.google.ads.mediation.customevent.i v6;
      com.google.android.gms.ads.mediation.customevent.CustomEventExtras v7;
      v6 = (com.google.ads.mediation.customevent.i)p2;
      v7 = (com.google.android.gms.ads.mediation.customevent.CustomEventExtras)p4;
      this.c = (com.google.ads.mediation.customevent.f)a(v6.b);
      if ( this.c != null )
      {
        if ( v7 != null )
          v7.a(v6.a);
        new com.google.ads.mediation.customevent.c(this, this, p0);
      }
      else
      {
        p0.b(com.google.ads.AdRequest$ErrorCode.d);
      }
    }

    public final Class<com.google.android.gms.ads.mediation.customevent.CustomEventExtras> b()
    {
      return com.google.android.gms.ads.mediation.customevent.CustomEventExtras.class;
    }

    public final Class<com.google.ads.mediation.customevent.i> c()
    {
      return com.google.ads.mediation.customevent.i.class;
    }

    public final android.view.View d()
    {
      return this.a;
    }

    public final void e()
    {
      ;
    }

}
