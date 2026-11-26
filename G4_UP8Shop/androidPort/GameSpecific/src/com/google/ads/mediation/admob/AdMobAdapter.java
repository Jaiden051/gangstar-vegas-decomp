// Decompiled from classes.dex (SourceFile: AdMobAdapter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.ads.mediation.admob;

import android.text.TextUtils;
import com.google.android.gms.internal.eu;
public final class AdMobAdapter implements com.google.android.gms.ads.mediation.MediationBannerAdapter, com.google.android.gms.ads.mediation.MediationInterstitialAdapter {
    // Fields
    private com.google.android.gms.ads.AdView a;
    private com.google.android.gms.ads.InterstitialAd b;

    // Methods
    public AdMobAdapter()
    {
      super();
    }

    private static com.google.android.gms.ads.AdRequest a(
            android.content.Context p0,
            com.google.android.gms.ads.mediation.MediationAdRequest p1,
            android.os.Bundle p2,
            android.os.Bundle p3)
    {
      com.google.android.gms.ads.AdRequest$Builder v4;
      java.util.Date v5; // RETVAL
      int v6; // RETVAL
      java.util.Set v7; // RETVAL
      java.util.Iterator i;
      v4 = new com.google.android.gms.ads.AdRequest$Builder();
      v5 = p1.a();
      if ( v5 != null )
        v4.a(v5);
      v6 = p1.b();
      if ( v6 != 0 )
        v4.a(v6);
      v7 = p1.c();
      if ( v7 != null )
      {
        for ( i = v7.iterator(); i.hasNext(); v4.a((String)i.next()) )
          ;
      }
      if ( p1.e() )
        v4.b(eu.o(p0));
      if ( p3.getInt("tagForChildDirectedTreatment") != -1 )
        v4.a(p3.getInt("tagForChildDirectedTreatment") == 1);
      if ( p2 == null )
        p2 = new android.os.Bundle();
      p2.putInt("gw", 1);
      p2.putString("mad_hac", p3.getString("mad_hac"));
      if ( !TextUtils.isEmpty(p3.getString("adJson")) )
        p2.putString("_ad", p3.getString("adJson"));
      p2.putBoolean("_noRefresh", true);
      v4.a(com.google.ads.mediation.admob.AdMobAdapter.class, p2);
      return v4.a();
    }

    public final void a()
    {
      if ( this.a != null )
      {
        this.a.a();
        this.a = null;
      }
      if ( this.b != null )
        this.b = null;
    }

    public final void a(
            android.content.Context p0,
            com.google.android.gms.ads.mediation.MediationBannerListener p1,
            android.os.Bundle p2,
            com.google.android.gms.ads.AdSize p3,
            com.google.android.gms.ads.mediation.MediationAdRequest p4,
            android.os.Bundle p5)
    {
      this.a = new com.google.android.gms.ads.AdView(p0);
      this.a.a(new com.google.android.gms.ads.AdSize(p3.b(), p3.a()));
      this.a.a(p2.getString("pubid"));
      this.a.a(new com.google.ads.mediation.admob.a(this, p1));
      this.a.a(a(p0, p4, p5, p2));
    }

    public final void a(
            android.content.Context p0,
            com.google.android.gms.ads.mediation.MediationInterstitialListener p1,
            android.os.Bundle p2,
            com.google.android.gms.ads.mediation.MediationAdRequest p3,
            android.os.Bundle p4)
    {
      this.b = new com.google.android.gms.ads.InterstitialAd(p0);
      this.b.a(p2.getString("pubid"));
      this.b.a(new com.google.ads.mediation.admob.b(this, p1));
      this.b.a(a(p0, p3, p4, p2));
    }

    public final void b()
    {
      if ( this.a != null )
        this.a.b();
    }

    public final void c()
    {
      if ( this.a != null )
        this.a.c();
    }

    public final android.view.View d()
    {
      return this.a;
    }

    public final void e()
    {
      this.b.a();
    }

}
