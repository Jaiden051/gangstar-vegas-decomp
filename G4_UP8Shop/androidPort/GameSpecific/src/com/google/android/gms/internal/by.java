// Decompiled from classes.dex (SourceFile: by.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Bundle;
public final class by extends com.google.android.gms.internal.bv$a {
    // Fields
    private final com.google.android.gms.ads.mediation.MediationAdapter a;

    // Methods
    public by(com.google.android.gms.ads.mediation.MediationAdapter p0)
    {
      super();
      this.a = p0;
    }

    private android.os.Bundle a(String p0, int p1, String p2)
 throws android.os.RemoteException {
      String v4;
      android.os.Bundle v5;
      org.json.JSONObject v6;
      android.os.Bundle v7;
      java.util.Iterator v8;
      String v9;
      v4 = "Server parameters: " + p0;
      ev.D(v4);
      try
      {
        v5 = new android.os.Bundle();
        if ( p0 != null )
        {
          v6 = new org.json.JSONObject(p0);
          v7 = new android.os.Bundle();
          v8 = v6.keys();
          while ( v8.hasNext() )
          {
            v9 = (String)v8.next();
            v7.putString(v9, v6.getString(v9));
          }
          v5 = v7;
        }
        if ( this.a instanceof com.google.ads.mediation.admob.AdMobAdapter )
        {
          v5.putString("adJson", p2);
          v5.putInt("tagForChildDirectedTreatment", p1);
        }
        return v5;
      }
      catch ( Throwable v10 )
      {
        ev.c("Could not get Server Parameters Bundle.", v10);
        throw new android.os.RemoteException();
      }
    }

    public final com.google.android.gms.dynamic.d a()
 throws android.os.RemoteException {
      if ( !(this.a instanceof com.google.android.gms.ads.mediation.MediationBannerAdapter) )
      {
        ev.D("MediationAdapter is not a MediationBannerAdapter: " + this.a.getClass().getCanonicalName());
        throw new android.os.RemoteException();
      }
      try
      {
        return com.google.android.gms.dynamic.e.h(((com.google.android.gms.ads.mediation.MediationBannerAdapter)this.a).d());
      }
      catch ( Throwable v2 )
      {
        ev.c("Could not get banner view from adapter.", v2);
        throw new android.os.RemoteException();
      }
    }

    public final void a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.aj p1,
            String p2,
            com.google.android.gms.internal.bw p3)
 throws android.os.RemoteException {
      this.a(p0, p1, p2, null, p3);
    }

    public final void a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.aj p1,
            String p2,
            String p3,
            com.google.android.gms.internal.bw p4)
 throws android.os.RemoteException {
      android.os.Bundle Bundle;
      com.google.android.gms.ads.mediation.MediationInterstitialAdapter v7;
      java.util.Set v8;
      com.google.android.gms.ads.mediation.MediationAdRequest v9;
      Bundle = null;
      if ( !(this.a instanceof com.google.android.gms.ads.mediation.MediationInterstitialAdapter) )
      {
        ev.D("MediationAdapter is not a MediationInterstitialAdapter: " + this.a.getClass().getCanonicalName());
        throw new android.os.RemoteException();
      }
      ev.z("Requesting interstitial ad from adapter.");
      try
      {
        v7 = (com.google.android.gms.ads.mediation.MediationInterstitialAdapter)this.a;
        if ( p1.e != null )
          v8 = new java.util.HashSet(p1.e);
        else
          v8 = null;
        v9 = (com.google.android.gms.ads.mediation.MediationAdRequest)new com.google.android.gms.internal.bx(new java.util.Date(p1.b), p1.d, v8, p1.f, p1.g);
        if ( p1.m != null )
          Bundle = p1.m.getBundle(v7.getClass().getName());
        v7.a((android.content.Context)com.google.android.gms.dynamic.e.e(p0), (com.google.android.gms.ads.mediation.MediationInterstitialListener)new com.google.android.gms.internal.bz(p4), this.a(p2, p1.g, p3), v9, Bundle);
      }
      catch ( Throwable v10 )
      {
        ev.c("Could not request interstitial ad from adapter.", v10);
        throw new android.os.RemoteException();
      }
    }

    public final void a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.am p1,
            com.google.android.gms.internal.aj p2,
            String p3,
            com.google.android.gms.internal.bw p4)
 throws android.os.RemoteException {
      this.a(p0, p1, p2, p3, null, p4);
    }

    public final void a(
            com.google.android.gms.dynamic.d p0,
            com.google.android.gms.internal.am p1,
            com.google.android.gms.internal.aj p2,
            String p3,
            String p4,
            com.google.android.gms.internal.bw p5)
 throws android.os.RemoteException {
      android.os.Bundle Bundle;
      com.google.android.gms.ads.mediation.MediationBannerAdapter v8;
      java.util.Set v9;
      com.google.android.gms.ads.mediation.MediationAdRequest v10;
      Bundle = null;
      if ( !(this.a instanceof com.google.android.gms.ads.mediation.MediationBannerAdapter) )
      {
        ev.D("MediationAdapter is not a MediationBannerAdapter: " + this.a.getClass().getCanonicalName());
        throw new android.os.RemoteException();
      }
      ev.z("Requesting banner ad from adapter.");
      try
      {
        v8 = (com.google.android.gms.ads.mediation.MediationBannerAdapter)this.a;
        if ( p2.e != null )
          v9 = new java.util.HashSet(p2.e);
        else
          v9 = null;
        v10 = (com.google.android.gms.ads.mediation.MediationAdRequest)new com.google.android.gms.internal.bx(new java.util.Date(p2.b), p2.d, v9, p2.f, p2.g);
        if ( p2.m != null )
          Bundle = p2.m.getBundle(v8.getClass().getName());
        ((com.google.android.gms.ads.mediation.MediationBannerAdapter)v8).a((android.content.Context)com.google.android.gms.dynamic.e.e(p0), (com.google.android.gms.ads.mediation.MediationBannerListener)new com.google.android.gms.internal.bz(p5), this.a(p3, p2.g, p4), com.google.android.gms.ads.a.a(p1.f, p1.c, p1.b), v10, Bundle);
      }
      catch ( Throwable v11 )
      {
        ev.c("Could not request banner ad from adapter.", v11);
        throw new android.os.RemoteException();
      }
    }

    public final void b()
 throws android.os.RemoteException {
      if ( !(this.a instanceof com.google.android.gms.ads.mediation.MediationInterstitialAdapter) )
      {
        ev.D("MediationAdapter is not a MediationInterstitialAdapter: " + this.a.getClass().getCanonicalName());
        throw new android.os.RemoteException();
      }
      ev.z("Showing interstitial from adapter.");
      try
      {
        ((com.google.android.gms.ads.mediation.MediationInterstitialAdapter)this.a).e();
      }
      catch ( Throwable v1 )
      {
        ev.c("Could not show interstitial from adapter.", v1);
        throw new android.os.RemoteException();
      }
    }

    public final void c()
 throws android.os.RemoteException {
      try
      {
        this.a.a();
      }
      catch ( Throwable v1 )
      {
        ev.c("Could not destroy adapter.", v1);
        throw new android.os.RemoteException();
      }
    }

    public final void d()
 throws android.os.RemoteException {
      try
      {
        this.a.b();
      }
      catch ( Throwable v1 )
      {
        ev.c("Could not pause adapter.", v1);
        throw new android.os.RemoteException();
      }
    }

    public final void e()
 throws android.os.RemoteException {
      try
      {
        this.a.c();
      }
      catch ( Throwable v1 )
      {
        ev.c("Could not resume adapter.", v1);
        throw new android.os.RemoteException();
      }
    }

}
