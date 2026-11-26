// Decompiled from classes.dex (SourceFile: ca.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ca<NETWORK_EXTRAS extends com.google.ads.mediation.i, SERVER_PARAMETERS extends com.google.ads.mediation.MediationServerParameters> extends com.google.android.gms.internal.bv$a {
    // Fields
    private final com.google.ads.mediation.b a;
    private final com.google.ads.mediation.i b;

    // Methods
    public ca(com.google.ads.mediation.b<NETWORK_EXTRAS, SERVER_PARAMETERS> p0, NETWORK_EXTRAS p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    private SERVER_PARAMETERS a(String p0)
 throws android.os.RemoteException {
      org.json.JSONObject v2;
      java.util.Map v3;
      java.util.Iterator v4;
      String v5;
      Class v7; // RETVAL
      com.google.ads.mediation.MediationServerParameters v8;
      try
      {
        if ( p0 != null )
        {
          v2 = new org.json.JSONObject(p0);
          v3 = new java.util.HashMap(v2.length());
          v4 = v2.keys();
          while ( v4.hasNext() )
          {
            v5 = (String)v4.next();
            v3.put(v5, v2.getString(v5));
          }
        }
        else
        {
          v3 = new java.util.HashMap(0);
        }
        v7 = this.a.c();
        v8 = null;
        if ( v7 != null )
        {
          v8 = (com.google.ads.mediation.MediationServerParameters)v7.newInstance();
          v8.a(v3);
        }
        return (SERVER_PARAMETERS)v8;
      }
      catch ( Throwable v6 )
      {
        ev.c("Could not get MediationServerParameters.", v6);
        throw new android.os.RemoteException();
      }
    }

    public final com.google.android.gms.dynamic.d a()
 throws android.os.RemoteException {
      if ( !(this.a instanceof com.google.ads.mediation.c) )
      {
        ev.D("MediationAdapter is not a MediationBannerAdapter: " + this.a.getClass().getCanonicalName());
        throw new android.os.RemoteException();
      }
      try
      {
        return com.google.android.gms.dynamic.e.h(((com.google.ads.mediation.c)this.a).d());
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
      if ( !(this.a instanceof com.google.ads.mediation.e) )
      {
        ev.D("MediationAdapter is not a MediationInterstitialAdapter: " + this.a.getClass().getCanonicalName());
        throw new android.os.RemoteException();
      }
      ev.z("Requesting interstitial ad from adapter.");
      try
      {
        ((com.google.ads.mediation.e)this.a).a((com.google.ads.mediation.f)new com.google.android.gms.internal.cb(p4), (android.app.Activity)com.google.android.gms.dynamic.e.e(p0), this.a(p2), cc.e(p1), this.b);
      }
      catch ( Throwable v6 )
      {
        ev.c("Could not request interstitial ad from adapter.", v6);
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
      if ( !(this.a instanceof com.google.ads.mediation.c) )
      {
        ev.D("MediationAdapter is not a MediationBannerAdapter: " + this.a.getClass().getCanonicalName());
        throw new android.os.RemoteException();
      }
      ev.z("Requesting banner ad from adapter.");
      try
      {
        ((com.google.ads.mediation.c)this.a).a((com.google.ads.mediation.d)new com.google.android.gms.internal.cb(p5), (android.app.Activity)com.google.android.gms.dynamic.e.e(p0), this.a(p3), cc.b(p1), cc.e(p2), this.b);
      }
      catch ( Throwable v7 )
      {
        ev.c("Could not request banner ad from adapter.", v7);
        throw new android.os.RemoteException();
      }
    }

    public final void b()
 throws android.os.RemoteException {
      if ( !(this.a instanceof com.google.ads.mediation.e) )
      {
        ev.D("MediationAdapter is not a MediationInterstitialAdapter: " + this.a.getClass().getCanonicalName());
        throw new android.os.RemoteException();
      }
      ev.z("Showing interstitial from adapter.");
      try
      {
        ((com.google.ads.mediation.e)this.a).e();
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
      throw new android.os.RemoteException();
    }

    public final void e()
 throws android.os.RemoteException {
      throw new android.os.RemoteException();
    }

}
