// Decompiled from classes.dex (SourceFile: Decomp_do.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
import android.text.TextUtils;
import android.view.View;
public class Decomp_do extends com.google.android.gms.internal.en implements com.google.android.gms.internal.dq$a, com.google.android.gms.internal.ez$a {
    // Fields
    private final com.google.android.gms.internal.bu a;
    private final com.google.android.gms.internal.dn$a b;
    private final com.google.android.gms.internal.ey c;
    private final java.lang.Object d;
    private final android.content.Context e;
    private final java.lang.Object f;
    private final com.google.android.gms.internal.dt$a g;
    private final com.google.android.gms.internal.l h;
    private com.google.android.gms.internal.en i;
    private com.google.android.gms.internal.dv j;
    private boolean k;
    private com.google.android.gms.internal.bl l;
    private com.google.android.gms.internal.bn m;
    private com.google.android.gms.internal.br n;

    // Methods
    public Decomp_do(
            android.content.Context p0,
            com.google.android.gms.internal.dt$a p1,
            com.google.android.gms.internal.l p2,
            com.google.android.gms.internal.ey p3,
            com.google.android.gms.internal.bu p4,
            com.google.android.gms.internal.dn$a p5)
    {
      super();
      this.d = new Object();
      this.f = new Object();
      this.k = false;
      this.a = p4;
      this.b = p5;
      this.c = p3;
      this.e = p0;
      this.g = p1;
      this.h = p2;
    }

    private com.google.android.gms.internal.am a(com.google.android.gms.internal.dt p0)
 throws com.google.android.gms.internal.Decomp_do$a {
      String[] v2; // RETVAL
      String[] v3;
      int v4;
      int v5; // RETVAL
      int v6;
      com.google.android.gms.internal.am[] h;
      int v8;
      int i;
      com.google.android.gms.internal.am v10;
      float density;
      int v12;
      int v13;
      if ( this.j.m == null )
        throw new com.google.android.gms.internal.Decomp_do$a("The ad response must specify one of the supported ad sizes.", 0);
      v2 = this.j.m.split("x");
      v3 = v2;
      if ( v2.length != 2 )
        throw new com.google.android.gms.internal.Decomp_do$a("Could not parse the ad size from the ad response: " + this.j.m, 0);
      try
      {
        v4 = Integer.parseInt(v2[0]);
        v5 = Integer.parseInt(v3[1]);
      }
      catch ( NumberFormatException e )
      {
        throw new com.google.android.gms.internal.Decomp_do$a("Could not parse the ad size from the ad response: " + this.j.m, 0);
      }
      v6 = v5;
      h = p0.d.h;
      v8 = h.length;
      for ( i = 0; ; ++i )
      {
        if ( i >= v8 )
          throw new com.google.android.gms.internal.Decomp_do$a("The ad size from the ad response was not one of the requested sizes: "
                                                       + this.j.m, 0);
        v10 = h[i];
        density = this.e.getResources().getDisplayMetrics().density;
        v12 = v10.f == -1 ? (int)((float)v10.g / density) : v10.f;
        v13 = v10.c == -2 ? (int)((float)v10.d / density) : v10.c;
        if ( v4 == v12 && v6 == v13 )
          break;
      }
      return new com.google.android.gms.internal.am(v10, p0.d.h);
    }

    /* synthetic */ static Object a(com.google.android.gms.internal.Decomp_do p0)
    {
      return p0.f;
    }

    private void a(long p0)
 throws com.google.android.gms.internal.Decomp_do$a {
      eu.a.post((Runnable)new com.google.android.gms.internal.Decomp_do$3(this));
      this.d(p0);
    }

    private void a(com.google.android.gms.internal.dt p0, long p1)
 throws com.google.android.gms.internal.Decomp_do$a {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        this.l = new com.google.android.gms.internal.bl(this.e, p0, this.a, this.m);
      }
      this.n = this.l.a(p1, 60000);
      switch ( this.n.a )
      {
        case 0:
          return;
        case 1:
          throw new com.google.android.gms.internal.Decomp_do$a("No fill from any mediation ad networks.", 3);
        default:
          throw new com.google.android.gms.internal.Decomp_do$a("Unexpected mediation result: " + this.n.a, 0);
      }
    }

    /* synthetic */ static com.google.android.gms.internal.dn$a b(com.google.android.gms.internal.Decomp_do p0)
    {
      return p0.b;
    }

    private void b(long p0)
 throws com.google.android.gms.internal.Decomp_do$a {
      com.google.android.gms.internal.am v2; // RETVAL
      int widthPixels;
      int heightPixels;
      com.google.android.gms.internal.dp v5;
      v2 = this.c.e();
      if ( v2.e )
      {
        widthPixels = this.e.getResources().getDisplayMetrics().widthPixels;
        heightPixels = this.e.getResources().getDisplayMetrics().heightPixels;
      }
      else
      {
        widthPixels = v2.g;
        heightPixels = v2.d;
      }
      v5 = new com.google.android.gms.internal.dp((com.google.android.gms.internal.ez$a)this, this.c, widthPixels, heightPixels);
      eu.a.post((Runnable)new com.google.android.gms.internal.Decomp_do$4(this, v5));
      this.d(p0);
      if ( v5.c() )
      {
        ev.z("Ad-Network indicated no fill with passback URL.");
        throw new com.google.android.gms.internal.Decomp_do$a("AdNetwork sent passback url", 3);
      }
      if ( !v5.d() )
        throw new com.google.android.gms.internal.Decomp_do$a("AdNetwork timed out", 2);
    }

    /* synthetic */ static com.google.android.gms.internal.dv c(com.google.android.gms.internal.Decomp_do p0)
    {
      return p0.j;
    }

    private void c()
 throws com.google.android.gms.internal.Decomp_do$a {
      if ( this.j.e != -3 )
      {
        if ( TextUtils.isEmpty(this.j.c) )
          throw new com.google.android.gms.internal.Decomp_do$a("No fill from ad server.", 3);
        if ( this.j.h )
        {
          try
          {
            this.m = new com.google.android.gms.internal.bn(this.j.c);
          }
          catch ( org.json.JSONException e )
          {
            throw new com.google.android.gms.internal.Decomp_do$a("Could not parse mediation config: " + this.j.c, 0);
          }
        }
      }
    }

    private void c(long p0)
 throws com.google.android.gms.internal.Decomp_do$a {
      Object d;
      do
      {
        if ( !this.e(p0) )
          throw new com.google.android.gms.internal.Decomp_do$a("Timed out waiting for ad response.", 2);
      }
      while ( this.j == null );
      d = this.d;
      synchronized ( d )
      {
        this.i = null;
      }
      if ( this.j.e != -2 && this.j.e != -3 )
        throw new com.google.android.gms.internal.Decomp_do$a("There was a problem getting an ad response. ErrorCode: " + this.j.e, this.j.e);
    }

    /* synthetic */ static com.google.android.gms.internal.ey d(com.google.android.gms.internal.Decomp_do p0)
    {
      return p0.c;
    }

    private void d(long p0)
 throws com.google.android.gms.internal.Decomp_do$a {
      do
      {
        if ( !this.e(p0) )
          throw new com.google.android.gms.internal.Decomp_do$a("Timed out waiting for WebView to finish loading.", 2);
      }
      while ( !this.k );
    }

    private boolean e(long p0)
 throws com.google.android.gms.internal.Decomp_do$a {
      long v2; // RETVAL
      long v3;
      v2 = SystemClock.elapsedRealtime();
      v3 = 60000 - (v2 - p0);
      if ( v3 <= 0 )
        return false;
      try
      {
        this.f.wait(v3);
        return true;
      }
      catch ( InterruptedException e )
      {
        throw new com.google.android.gms.internal.Decomp_do$a("Ad request cancelled.", -1);
      }
    }

    public final void A_()
 throws android.os.RemoteException {
      Object d;
      d = this.d;
      synchronized ( d )
      {
        if ( this.i != null )
          this.i.f();
        this.c.stopLoading();
        ep.a(this.c);
        if ( this.l != null )
          this.l.a();
      }
    }

    public final void a()
    {
      Object f = null;
      com.google.android.gms.internal.dt v2 = null;
      com.google.android.gms.internal.am v3 = null;
      int v4 = 0;
      long v5 = 0L;
      long v6 = 0L;
      com.google.android.gms.internal.en v7 = null; // RETVAL
      Object d = null;
      int v11 = 0; // RETVAL
      long v12 = 0L;
      com.google.android.gms.internal.am v13 = null;
      org.json.JSONObject v14 = null;
      com.google.android.gms.internal.eg v15 = null;
      com.google.android.gms.internal.aj c = null;
      com.google.android.gms.internal.ey v17 = null;
      java.util.List v18 = null;
      java.util.List v19 = null;
      java.util.List j = null;
      int l = 0;
      long k = 0L;
      String i = null;
      boolean h = false;
      com.google.android.gms.internal.bm b = null;
      com.google.android.gms.internal.bv v26 = null;
      String v27 = null;
      com.google.android.gms.internal.bn m = null;
      com.google.android.gms.internal.bp e = null;
      Object v31 = null;
      Object v33 = null;
      com.google.android.gms.internal.am v35 = null; // RETVAL
      int widthPixels = 0;
      int heightPixels = 0;
      com.google.android.gms.internal.dp v38 = null;
      com.google.android.gms.internal.Decomp_do$a _cv_1 = null;
      Exception _cv_2 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              f = this.f;
              com.gameloft.android.DecompRT.monitorEnter(f);
              ev.z("AdLoaderBackgroundTask started.");
              v2 = new com.google.android.gms.internal.dt(this.g, this.h.a().a(this.e));
              v3 = null;
              v4 = -2;
              v5 = -1;
              _ehCatchPc = 4;
              v6 = SystemClock.elapsedRealtime();
              v7 = dq.a(this.e, v2, (com.google.android.gms.internal.dq$a)this);
              d = this.d;
              synchronized ( d )
              {
              this.i = v7;
              if ( this.i == null )
              throw new com.google.android.gms.internal.Decomp_do$a("Could not start the ad request service.", 0);
              }
            case 4:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof com.google.android.gms.internal.Decomp_do$a) ) { _pc = 5; continue _sm; }
              _cv_1 = (com.google.android.gms.internal.Decomp_do$a)_ehCaught;
              v11 = _cv_1.a();
              v4 = v11;
              if ( v11 == 3 || v11 == -1 )
              ev.B(_cv_1.getMessage());
              else
              ev.D(_cv_1.getMessage());
              if ( this.j != null )
              this.j = new com.google.android.gms.internal.dv(v4, this.j.k);
              else
              this.j = new com.google.android.gms.internal.dv(v4);
              eu.a.post((Runnable)new com.google.android.gms.internal.Decomp_do$1(this));
              v12 = v5;
              v13 = v3;
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              if ( !(!TextUtils.isEmpty(this.j.r)) ) { _pc = 10; continue _sm; }
              _ehCatchPc = 8;
              v14 = new org.json.JSONObject(this.j.r);
              _pc = 7;
              continue _sm;
            case 7:
              v15 = null;
              c = v2.c;
              v17 = this.c;
              v18 = this.j.d;
              v19 = this.j.f;
              j = this.j.j;
              l = this.j.l;
              k = this.j.k;
              i = v2.i;
              h = this.j.h;
              if ( this.n != null )
              b = this.n.b;
              else
              b = null;
              if ( this.n != null )
              v26 = this.n.c;
              else
              v26 = null;
              if ( this.n != null )
              v27 = this.n.d;
              else
              v27 = null;
              m = this.m;
              if ( this.n != null )
              e = this.n.e;
              else
              e = null;
              eu.a.post((Runnable)new com.google.android.gms.internal.Decomp_do$2(this, (v15 = new com.google.android.gms.internal.eg(c, v17, v18, v4, v19, j, l, k, i, h, b, v26, v27, m, e, this.j.i, v13, this.j.g, v12, this.j.n, this.j.o, v14))));
              return;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              _cv_2 = (Exception)_ehCaught;
              ev.b("Error parsing the JSON for Active View.", _cv_2);
              _pc = 10;
              continue _sm;
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              v14 = null;
              _pc = 7;
              continue _sm;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    public final void a(com.google.android.gms.internal.dv p0)
    {
      Object f;
      f = this.f;
      synchronized ( f )
      {
        ev.z("Received ad response.");
        this.j = p0;
        this.f.notify();
      }
    }

    public final void a(com.google.android.gms.internal.ey p0)
    {
      Object f;
      f = this.f;
      synchronized ( f )
      {
        ev.z("WebView finished loading.");
        this.k = true;
        this.f.notify();
      }
    }

}
