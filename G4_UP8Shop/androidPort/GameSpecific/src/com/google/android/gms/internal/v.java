// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.ads.AdRequest$Builder;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.os.Build;
import android.view.View;
import com.google.android.gms.ads.AdRequest;
import com.google.android.gms.common.GooglePlayServicesUtil;
public class v extends com.google.android.gms.internal.ar$a implements com.google.android.gms.internal.bb, com.google.android.gms.internal.be, com.google.android.gms.internal.bg, com.google.android.gms.internal.bo, com.google.android.gms.internal.cj, com.google.android.gms.internal.cm, com.google.android.gms.internal.dn$a, com.google.android.gms.internal.ek, com.google.android.gms.internal.u {
    // Fields
    private final com.google.android.gms.internal.bu a;
    private final com.google.android.gms.internal.v$c b;
    private final com.google.android.gms.internal.z c;
    private final com.google.android.gms.internal.ac d;
    private boolean e;
    private final android.content.ComponentCallbacks f;

    // Methods
    public v(
            android.content.Context p0,
            com.google.android.gms.internal.am p1,
            String p2,
            com.google.android.gms.internal.bu p3,
            com.google.android.gms.internal.ew p4)
    {
      super();
      this.f = (android.content.ComponentCallbacks)new com.google.android.gms.internal.v$1(this);
      this.b = new com.google.android.gms.internal.v$c(p0, p1, p2, p4);
      this.a = p3;
      this.c = new com.google.android.gms.internal.z(this);
      this.d = new com.google.android.gms.internal.ac();
      ep.k(p0);
      if ( Build.VERSION.SDK_INT >= 14 && this.b != null && this.b.c != null )
        this.b.c.registerComponentCallbacks(this.f);
    }

    private void A()
    {
      if ( this.b.i != null )
      {
        this.b.i.b.destroy();
        this.b.i = null;
      }
    }

    /* synthetic */ static com.google.android.gms.internal.v$c a(com.google.android.gms.internal.v p0)
    {
      return p0.b;
    }

    private void a(int p0)
    {
      ev.D("Failed to load ad: " + p0);
      if ( this.b.f != null )
      {
        try
        {
          this.b.f.a(p0);
        }
        catch ( android.os.RemoteException v2 )
        {
          ev.c("Could not call AdListener.onAdFailedToLoad().", v2);
        }
      }
    }

    private void a(android.view.View p0)
    {
      this.b.a.addView(p0, new android.view.ViewGroup.LayoutParams(-2, -2));
    }

    private void b(boolean p0)
    {
      if ( this.b.i != null )
      {
        ev.z("Pinging Impression URLs.");
        this.b.j.a();
        if ( this.b.i.e != null )
          ep.a(this.b.c, this.b.e.b, this.b.i.e);
        if ( this.b.i.o != null && this.b.i.o.d != null )
          bs.a(this.b.c, this.b.e.b, this.b.i, this.b.b, p0, this.b.i.o.d);
        if ( this.b.i.l != null && this.b.i.l.f != null )
          bs.a(this.b.c, this.b.e.b, this.b.i, this.b.b, p0, this.b.i.l.f);
      }
      else
      {
        ev.D("Ad state was null when trying to ping impression URLs.");
      }
    }

    private boolean b(com.google.android.gms.internal.eg p0)
    {
      android.view.View v3 = null;
      android.view.View v4 = null; // RETVAL
      android.view.View NextView = null; // RETVAL
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !(!p0.k) ) { _pc = 2; continue _sm; }
            if ( p0.r != null )
            {
            p0.b.a(p0.r);
            this.b.a.removeAllViews();
            this.b.a.setMinimumWidth(p0.r.g);
            this.b.a.setMinimumHeight(p0.r.d);
            this.a(p0.b);
            }
            _pc = 1;
            continue _sm;
          case 1:
            if ( this.b.a.getChildCount() > 1 )
            this.b.a.showNext();
            if ( this.b.i != null )
            {
            NextView = this.b.a.getNextView();
            if ( NextView instanceof com.google.android.gms.internal.ey )
            {
            ((com.google.android.gms.internal.ey)NextView).a(this.b.c, this.b.h);
            }
            else if ( NextView != null )
            {
            this.b.a.removeView(NextView);
            }
            if ( this.b.i.m != null )
            {
            try
            {
            this.b.i.m.c();
            }
            catch ( android.os.RemoteException e )
            {
            ev.D("Could not destroy previous mediation adapter.");
            }
            }
            }
            this.b.a.setVisibility(0);
            return true;
          case 2:
            try
            {
            v3 = (android.view.View)com.google.android.gms.dynamic.e.e(p0.m.a());
            v4 = this.b.a.getNextView();
            if ( v4 != null )
            this.b.a.removeView(v4);
            try
            {
            this.a(v3);
            { _pc = 1; continue _sm; }
            }
            catch ( Throwable v9 )
            {
            ev.c("Could not add mediation view to view hierarchy.", v9);
            return false;
            }
            }
            catch ( android.os.RemoteException v8 )
            {
            ev.c("Could not get View from mediation adapter.", v8);
            return false;
            }
            

        }
      }
}

    private com.google.android.gms.internal.dt$a c(com.google.android.gms.internal.aj p0)
    {
      android.content.pm.ApplicationInfo ApplicationInfo;
      android.content.pm.PackageInfo PackageInfo;
      int[] v4;
      int v5;
      int v6;
      android.util.DisplayMetrics DisplayMetrics;
      int Width;
      int Height;
      boolean v10;
      android.os.Bundle v11;
      String v12;
      ApplicationInfo = this.b.c.getApplicationInfo();
      try
      {
        PackageInfo = this.b.c.getPackageManager().getPackageInfo(ApplicationInfo.packageName, 0);
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        PackageInfo = null;
      }
      if ( this.b.h.e || this.b.a.getParent() == null )
      {
        v11 = null;
      }
      else
      {
        v4 = new int[2];
        this.b.a.getLocationOnScreen(v4);
        v5 = v4[0];
        v6 = v4[1];
        DisplayMetrics = this.b.c.getResources().getDisplayMetrics();
        Width = this.b.a.getWidth();
        Height = this.b.a.getHeight();
        v10 = this.b.a.isShown()
           && v5 + Width > 0
           && v6 + Height > 0
           && v5 <= DisplayMetrics.widthPixels
           && v6 <= DisplayMetrics.heightPixels;
        v11 = new android.os.Bundle(5);
        v11.putInt("x", v5);
        v11.putInt("y", v6);
        v11.putInt("width", Width);
        v11.putInt("height", Height);
        v11.putInt("visible", v10 ? 1 : 0);
      }
      v12 = ei.bD();
      this.b.j = new com.google.android.gms.internal.eh(v12, this.b.b);
      this.b.j.a(p0);
      return new com.google.android.gms.internal.dt$a(v11, p0, this.b.h, this.b.b, ApplicationInfo, PackageInfo, v12, ei.a, this.b.e, ei.a(this.b.c, this, v12));
    }

    private void s()
    {
      if ( Build.VERSION.SDK_INT >= 14 && this.b != null && this.b.c != null )
        this.b.c.registerComponentCallbacks(this.f);
    }

    private void t()
    {
      if ( Build.VERSION.SDK_INT >= 14 && this.b != null && this.b.c != null )
        this.b.c.unregisterComponentCallbacks(this.f);
    }

    private void u()
    {
      ev.B("Ad closing.");
      if ( this.b.f != null )
      {
        try
        {
          this.b.f.a();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call AdListener.onAdClosed().", v1);
        }
      }
    }

    private void v()
    {
      ev.B("Ad leaving application.");
      if ( this.b.f != null )
      {
        try
        {
          this.b.f.b();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call AdListener.onAdLeftApplication().", v1);
        }
      }
    }

    private void w()
    {
      ev.B("Ad opening.");
      if ( this.b.f != null )
      {
        try
        {
          this.b.f.d();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call AdListener.onAdOpened().", v1);
        }
      }
    }

    private void x()
    {
      ev.B("Ad finished loading.");
      if ( this.b.f != null )
      {
        try
        {
          this.b.f.c();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call AdListener.onAdLoaded().", v1);
        }
      }
    }

    private boolean y()
    {
      boolean v1;
      v1 = true;
      if ( !ep.a(this.b.c.getPackageManager(), this.b.c.getPackageName(), "android.permission.INTERNET") )
      {
        if ( !this.b.h.e )
          eu.a(
            this.b.a,
            this.b.h,
            "Missing internet permission in AndroidManifest.xml.",
            "Missing internet permission in AndroidManifest.xml. You must have the following declaration: <uses-permission an" +
            "droid:name=\"android.permission.INTERNET\" />");
        v1 = false;
      }
      if ( !ep.j(this.b.c) )
      {
        if ( !this.b.h.e )
          eu.a(
            this.b.a,
            this.b.h,
            "Missing AdActivity with android:configChanges in AndroidManifest.xml.",
            "Missing AdActivity with android:configChanges in AndroidManifest.xml. You must have the following declaration wi" +
            "thin the <application> element: <activity android:name=\"com.google.android.gms.ads.AdActivity\" android:configC" +
            "hanges=\"keyboard|keyboardHidden|orientation|screenLayout|uiMode|screenSize|smallestScreenSize\" />");
        v1 = false;
      }
      if ( !v1 && !this.b.h.e )
        this.b.a.setVisibility(0);
      return v1;
    }

    private void z()
    {
      if ( this.b.i != null )
      {
        ev.z("Pinging click URLs.");
        this.b.j.b();
        if ( this.b.i.c != null )
          ep.a(this.b.c, this.b.e.b, this.b.i.c);
        if ( this.b.i.o != null && this.b.i.o.c != null )
          bs.a(this.b.c, this.b.e.b, this.b.i, this.b.b, false, this.b.i.o.c);
      }
      else
      {
        ev.D("Ad state was null when trying to ping click URLs.");
      }
    }

    public final com.google.android.gms.dynamic.d a()
    {
      hn.ay("getAdFrame must be called on the main UI thread.");
      return com.google.android.gms.dynamic.e.h(this.b.a);
    }

    public final void a(com.google.android.gms.internal.am p0)
    {
      hn.ay("setAdSize must be called on the main UI thread.");
      this.b.h = p0;
      if ( this.b.i != null )
        this.b.i.b.a(p0);
      if ( this.b.a.getChildCount() > 1 )
        this.b.a.removeView(this.b.a.getNextView());
      this.b.a.setMinimumWidth(p0.g);
      this.b.a.setMinimumHeight(p0.d);
      this.b.a.requestLayout();
    }

    public final void a(com.google.android.gms.internal.aq p0)
    {
      hn.ay("setAdListener must be called on the main UI thread.");
      this.b.f = p0;
    }

    public final void a(com.google.android.gms.internal.at p0)
    {
      hn.ay("setAppEventListener must be called on the main UI thread.");
      this.b.k = p0;
    }

    public final void a(com.google.android.gms.internal.dd p0)
    {
      hn.ay("setInAppPurchaseListener must be called on the main UI thread.");
      this.b.m = p0;
    }

    public final void a(com.google.android.gms.internal.dh p0, String p1)
    {
      hn.ay("setPlayStorePurchaseParams must be called on the main UI thread.");
      this.b.n = new com.google.android.gms.internal.da(p1);
      this.b.l = p0;
      if ( !ei.bH() && p0 != null )
        new com.google.android.gms.internal.ct(this.b.c, this.b.l, this.b.n).e();
    }

    public final void a(com.google.android.gms.internal.eg p0)
    {
      int i;
      boolean v3;
      int h;
      com.google.android.gms.internal.ad v5;
      i = 0;
      this.b.g = null;
      if ( p0.d != -2 && p0.d != 3 )
        ei.b(this.b.a());
      if ( p0.d != -1 )
      {
        v3 = p0.a.c != null && p0.a.c.getBoolean("_noRefresh", false);
        if ( this.b.h.e )
        {
          ep.a(p0.b);
        }
        else if ( !v3 )
        {
          if ( p0.h <= 0 )
          {
            if ( p0.o != null && p0.o.g > 0 )
            {
              this.c.a(p0.a, p0.o.g);
            }
            else if ( !p0.k && p0.d == 2 )
            {
              this.c.a(p0.a);
            }
          }
          else
          {
            this.c.a(p0.a, p0.h);
          }
        }
        if ( p0.d == 3 && p0.o != null && p0.o.e != null )
        {
          ev.z("Pinging no fill URLs.");
          bs.a(this.b.c, this.b.e.b, p0, this.b.b, false, p0.o.e);
        }
        if ( p0.d != -2 )
        {
          this.a(p0.d);
          return;
        }
        if ( !this.b.h.e )
        {
          if ( !this.b(p0) )
          {
            this.a(0);
            return;
          }
          if ( this.b.a != null )
            v$a.a(this.b.a).a(p0.v);
        }
        if ( this.b.i != null && this.b.i.p != null )
          this.b.i.p.a((com.google.android.gms.internal.bo)null);
        if ( p0.p != null )
          p0.p.a(this);
        this.d.a(this.b.i);
        this.b.i = p0;
        if ( p0.r != null )
          this.b.h = p0.r;
        this.b.j.a(p0.t);
        this.b.j.b(p0.u);
        this.b.j.a(this.b.h.e);
        this.b.j.b(p0.k);
        if ( !this.b.h.e )
          this.b(false);
        if ( this.b.o == null )
          this.b.o = new com.google.android.gms.internal.el(this.b.b);
        if ( p0.o != null )
        {
          h = p0.o.h;
          i = p0.o.i;
        }
        else
        {
          h = 0;
        }
        this.b.o.a(h, i);
        if ( !this.b.h.e && p0.b != null && (p0.b.f().a() || p0.j != null) )
        {
          v5 = this.d.a(this.b.h, this.b.i);
          if ( p0.b.f().a() && v5 != null )
            v5.a((com.google.android.gms.internal.aa)new com.google.android.gms.internal.y(p0.b));
        }
        this.b.i.b.a();
        this.x();
      }
    }

    public final void a(String p0, String p1)
    {
      if ( this.b.k != null )
      {
        try
        {
          this.b.k.a(p0, p1);
        }
        catch ( android.os.RemoteException v3 )
        {
          ev.c("Could not call the AppEventListener.", v3);
        }
      }
    }

    public final void a(String p0, java.util.ArrayList<String> p1)
    {
      com.google.android.gms.internal.dc v3 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v3 = new com.google.android.gms.internal.cu(p0, p1, this.b.c, this.b.e.b);
            if ( this.b.m != null )
            {
            try
            {
            this.b.m.a(v3);
            }
            catch ( android.os.RemoteException e )
            {
            ev.D("Could not start In-App purchase.");
            }
            return;
            }
            ev.D("InAppPurchaseListener is not set. Try to launch default purchase flow.");
            if ( GooglePlayServicesUtil.isGooglePlayServicesAvailable(this.b.c) != 0 )
            {
            ev.D("Google Play Service unavailable, cannot launch default purchase flow.");
            return;
            }
            if ( this.b.l == null )
            {
            ev.D("PlayStorePurchaseListener is not set.");
            return;
            }
            if ( this.b.n == null )
            {
            ev.D("PlayStorePurchaseVerifier is not initialized.");
            return;
            }
            try
            {
            if ( this.b.l.a(p0) )
            { _pc = 1; continue _sm; }
            return;
            }
            catch ( android.os.RemoteException e )
            {
            ev.D("Could not start In-App purchase.");
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            cv.a(this.b.c, this.b.e.e, new com.google.android.gms.internal.cr(v3, this.b.l, this.b.n, this.b.c));
            return;
            
          }
          default: break _sm;
        }
      }
    }

    public final void a(java.util.HashSet<com.google.android.gms.internal.eh> p0)
    {
      this.b.a(p0);
    }

    public final void a(boolean p0)
    {
      this.b.p = p0;
    }

    public final boolean a(com.google.android.gms.internal.aj p0)
    {
      boolean v2;
      int v4;
      com.google.android.gms.internal.dt$a v5;
      com.google.android.gms.internal.ey v6;
      com.google.android.gms.internal.ey v7;
      android.view.View NextView; // RETVAL
      com.google.android.gms.internal.ey v9;
      android.view.View v10; // RETVAL
    
      v2 = false;
      hn.ay("loadAd must be called on the main UI thread.");
      if ( this.b.g != null )
      {
        ev.D("An ad request is already in progress. Aborting.");
      }
      else if ( this.b.h.e && this.b.i != null )
      {
        ev.D("An interstitial is already loading. Aborting.");
      }
      else
      {
        if ( ep.a(this.b.c.getPackageManager(), this.b.c.getPackageName(), "android.permission.INTERNET") )
        {
          v4 = 1;
        }
        else
        {
          if ( !this.b.h.e )
            eu.a(
              this.b.a,
              this.b.h,
              "Missing internet permission in AndroidManifest.xml.",
              "Missing internet permission in AndroidManifest.xml. You must have the following declaration: <uses-permission " +
              "android:name=\"android.permission.INTERNET\" />");
          v4 = 0;
        }
        if ( !ep.j(this.b.c) )
        {
          if ( !this.b.h.e )
            eu.a(
              this.b.a,
              this.b.h,
              "Missing AdActivity with android:configChanges in AndroidManifest.xml.",
              "Missing AdActivity with android:configChanges in AndroidManifest.xml. You must have the following declaration " +
              "within the <application> element: <activity android:name=\"com.google.android.gms.ads.AdActivity\" android:con" +
              "figChanges=\"keyboard|keyboardHidden|orientation|screenLayout|uiMode|screenSize|smallestScreenSize\" />");
          v4 = 0;
        }
        if ( v4 == 0 && !this.b.h.e )
          this.b.a.setVisibility(0);
        if ( v4 != 0 )
        {
          ev.B("Starting ad request.");
          if ( !p0.f )
            ev.B("Use AdRequest$Builder.addTestDevice(\"" + eu.o(this.b.c) + "\") to get test ads on this device.");
          this.c.a();
          this.b.p = false;
          v5 = this.c(p0);
          if ( this.b.h.e )
          {
            v6 = ey.a(this.b.c, this.b.h, false, false, this.b.d, this.b.e);
            v6.f().a(this, null, this, this, true, this, this);
            v7 = v6;
          }
          else
          {
            NextView = this.b.a.getNextView();
            if ( NextView instanceof com.google.android.gms.internal.ey )
            {
              v9 = (com.google.android.gms.internal.ey)NextView;
              v9.a(this.b.c, this.b.h);
            }
            else
            {
              if ( NextView != null )
                this.b.a.removeView(NextView);
              v10 = ey.a(this.b.c, this.b.h, false, false, this.b.d, this.b.e);
              v9 = (com.google.android.gms.internal.ey)v10;
              if ( this.b.h.h == null )
                this.a(v10);
            }
            v9.f().a(this, this, this, this, false, this);
            v7 = v9;
          }
          this.b.g = dn.a(this.b.c, v5, this.b.d, v7, this.a, this);
          return true;
        }
      }
      return v2;
    }

    public final void b()
 throws android.os.RemoteException {
      hn.ay("destroy must be called on the main UI thread.");
      if ( Build.VERSION.SDK_INT >= 14 && this.b != null && this.b.c != null )
        this.b.c.unregisterComponentCallbacks(this.f);
      this.b.f = null;
      this.b.k = null;
      this.c.a();
      this.d.a();
      this.g();
      if ( this.b.a != null )
        this.b.a.removeAllViews();
      if ( this.b.i != null && this.b.i.b != null )
        this.b.i.b.destroy();
      if ( this.b.i != null && this.b.i.m != null )
      {
        try
        {
          this.b.i.m.c();
        }
        catch ( android.os.RemoteException e )
        {
          ev.D("Could not destroy mediation adapter.");
        }
      }
    }

    public final void b(com.google.android.gms.internal.aj p0)
    {
      android.view.ViewParent Parent; // RETVAL
    
      Parent = this.b.a.getParent();
      if ( Parent instanceof android.view.View && ((android.view.View)Parent).isShown() && ep.bL() && !this.e )
      {
        this.a(p0);
      }
      else
      {
        ev.B("Ad is not visible. Not refreshing ad.");
        this.c.a(p0);
      }
    }

    public final boolean c()
    {
      hn.ay("isLoaded must be called on the main UI thread.");
      return this.b.g == null && this.b.i != null;
    }

    public final void d()
    {
      hn.ay("pause must be called on the main UI thread.");
      if ( this.b.i != null )
      {
        ep.a(this.b.i.b);
        if ( this.b.i.m != null )
        {
          try
          {
            this.b.i.m.d();
          }
          catch ( android.os.RemoteException e )
          {
            ev.D("Could not pause mediation adapter.");
          }
        }
      }
      this.d.b();
      this.c.b();
    }

    public final void e()
    {
      hn.ay("resume must be called on the main UI thread.");
      if ( this.b.i != null )
      {
        ep.b(this.b.i.b);
        if ( this.b.i.m != null )
        {
          try
          {
            this.b.i.m.e();
          }
          catch ( android.os.RemoteException e )
          {
            ev.D("Could not resume mediation adapter.");
          }
        }
      }
      this.c.c();
      this.d.c();
    }

    public final void f()
    {
      com.google.android.gms.internal.ad v1;
      com.google.android.gms.internal.w v3;
      android.view.Window Window;
      android.graphics.Rect v5;
      android.graphics.Rect v6;
      hn.ay("showInterstitial must be called on the main UI thread.");
      if ( this.b.h.e )
      {
        if ( this.b.i != null )
        {
          if ( this.b.i.b.i() )
          {
            ev.D("The interstitial is already showing.");
          }
          else
          {
            this.b.i.b.a(true);
            if ( this.b.i.b.f().a() || this.b.i.j != null )
            {
              v1 = this.d.a(this.b.h, this.b.i);
              if ( this.b.i.b.f().a() && v1 != null )
                v1.a((com.google.android.gms.internal.aa)new com.google.android.gms.internal.y(this.b.i.b));
            }
            if ( this.b.i.k )
            {
              try
              {
                this.b.i.m.b();
              }
              catch ( android.os.RemoteException v2 )
              {
                ev.c("Could not show interstitial.", v2);
                this.A();
              }
            }
            else
            {
              v3 = new com.google.android.gms.internal.w(this.b.p, false);
              if ( this.b.c instanceof android.app.Activity )
              {
                Window = ((android.app.Activity)this.b.c).getWindow();
                v5 = new android.graphics.Rect();
                v6 = new android.graphics.Rect();
                Window.getDecorView().getGlobalVisibleRect(v5);
                Window.getDecorView().getWindowVisibleDisplayFrame(v6);
                if ( v5.bottom != 0 && v6.bottom != 0 )
                  v3 = new com.google.android.gms.internal.w(this.b.p, v5.top == v6.top);
              }
              cg.a(
                this.b.c,
                new com.google.android.gms.internal.ci(this, this, this, this.b.i.b, this.b.i.g, this.b.e, this.b.i.v, v3));
            }
          }
        }
        else
        {
          ev.D("The interstitial has not loaded.");
        }
      }
      else
      {
        ev.D("Cannot call showInterstitial on a banner ad.");
      }
    }

    public final void g()
 throws android.os.RemoteException {
      hn.ay("stopLoading must be called on the main UI thread.");
      if ( this.b.i != null )
      {
        this.b.i.b.stopLoading();
        this.b.i = null;
      }
      if ( this.b.g != null )
        this.b.g.f();
    }

    public final void h()
    {
      hn.ay("recordManualImpression must be called on the main UI thread.");
      if ( this.b.i != null )
      {
        ev.z("Pinging manual tracking URLs.");
        if ( this.b.i.f != null )
          ep.a(this.b.c, this.b.e.b, this.b.i.f);
      }
      else
      {
        ev.D("Ad state was null when trying to ping manual tracking URLs.");
      }
    }

    public final com.google.android.gms.internal.am i()
    {
      hn.ay("getAdSize must be called on the main UI thread.");
      return this.b.h;
    }

    public final void j()
    {
      this.r();
    }

    public final void k()
    {
      this.o();
    }

    public final void l()
    {
      this.q();
    }

    public final void m()
    {
      this.p();
    }

    public final void n()
    {
      if ( this.b.i != null )
        ev.D("Mediation adapter " + this.b.i.n + " refreshed, but mediation adapters should never refresh.");
      this.b(true);
      this.x();
    }

    public final void o()
    {
      this.d.a(this.b.i);
      if ( this.b.h.e )
        this.A();
      this.e = false;
      ev.B("Ad closing.");
      if ( this.b.f != null )
      {
        try
        {
          this.b.f.a();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call AdListener.onAdClosed().", v1);
        }
      }
      this.b.j.c();
    }

    public final void p()
    {
      if ( this.b.h.e )
        this.b(false);
      this.e = true;
      ev.B("Ad opening.");
      if ( this.b.f != null )
      {
        try
        {
          this.b.f.d();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call AdListener.onAdOpened().", v1);
        }
      }
    }

    public final void q()
    {
      ev.B("Ad leaving application.");
      if ( this.b.f != null )
      {
        try
        {
          this.b.f.b();
        }
        catch ( android.os.RemoteException v1 )
        {
          ev.c("Could not call AdListener.onAdLeftApplication().", v1);
        }
      }
    }

    public final void r()
    {
      if ( this.b.i != null )
      {
        ev.z("Pinging click URLs.");
        this.b.j.b();
        if ( this.b.i.c != null )
          ep.a(this.b.c, this.b.e.b, this.b.i.c);
        if ( this.b.i.o != null && this.b.i.o.c != null )
          bs.a(this.b.c, this.b.e.b, this.b.i, this.b.b, false, this.b.i.o.c);
      }
      else
      {
        ev.D("Ad state was null when trying to ping click URLs.");
      }
    }

}
