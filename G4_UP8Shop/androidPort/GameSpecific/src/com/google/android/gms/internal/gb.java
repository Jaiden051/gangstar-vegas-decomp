// Decompiled from classes.dex (SourceFile: gb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.util.Log;
public final class gb extends com.google.android.gms.internal.hc {
    // Fields
    private final java.lang.String a;

    // Methods
    public gb(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3,
            String p4,
            String[] p5)
    {
      super(p0, p1, p2, p3, p5);
      this.a = (String)hn.f(p4);
    }

    private static com.google.android.gms.internal.gd D(android.os.IBinder p0)
    {
      return gd$a.F(p0);
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)gd$a.F(p0);
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.appstate.AppStateManager$StateListResult> p0)
    {
      try
      {
        ((com.google.android.gms.internal.gd)this.H()).a(new com.google.android.gms.internal.gb$c(p0));
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("AppStateClient", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.appstate.AppStateManager$StateDeletedResult> p0,
            int p1)
    {
      try
      {
        ((com.google.android.gms.internal.gd)this.H()).b(new com.google.android.gms.internal.gb$a(p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("AppStateClient", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.appstate.AppStateManager$StateResult> p0,
            int p1,
            String p2,
            byte[] p3)
    {
      try
      {
        ((com.google.android.gms.internal.gd)this.H()).a(new com.google.android.gms.internal.gb$e(p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("AppStateClient", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.appstate.AppStateManager$StateResult> p0,
            int p1,
            byte[] p2)
    {
      com.google.android.gms.internal.gc v4;
      if ( p0 != null )
        v4 = new com.google.android.gms.internal.gb$e(p0);
      else
        v4 = null;
      try
      {
        ((com.google.android.gms.internal.gd)this.H()).a(v4, p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("AppStateClient", "service died");
      }
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      p0.a(p1, 5077000, this.E().getPackageName(), this.a, this.F());
    }

    protected final void a(String[] p0)
    {
      int v2;
      boolean v3;
      Object[] v4;
      v2 = 0;
      v3 = false;
      while ( v2 < p0.length )
      {
        if ( p0[v2].equals("https://www.googleapis.com/auth/appstate") )
          v3 = true;
        ++v2;
      }
      v4 = new Object[1];
      v4[0] = "https://www.googleapis.com/auth/appstate";
      hn.a(v3, String.format("App State APIs requires %s to function.", v4));
    }

    public final void b(com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0)
    {
      try
      {
        ((com.google.android.gms.internal.gd)this.H()).b(new com.google.android.gms.internal.gb$g(p0));
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("AppStateClient", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.appstate.AppStateManager$StateResult> p0,
            int p1)
    {
      try
      {
        ((com.google.android.gms.internal.gd)this.H()).a(new com.google.android.gms.internal.gb$e(p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("AppStateClient", "service died");
      }
    }

    protected final String e()
    {
      return "com.google.android.gms.appstate.internal.IAppStateService";
    }

    protected final String f()
    {
      return "com.google.android.gms.appstate.service.START";
    }

    public final int g()
    {
      try
      {
        return ((com.google.android.gms.internal.gd)this.H()).a();
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("AppStateClient", "service died");
        return 2;
      }
    }

    public final int h()
    {
      try
      {
        return ((com.google.android.gms.internal.gd)this.H()).b();
      }
      catch ( android.os.RemoteException e )
      {
        Log.w("AppStateClient", "service died");
        return 2;
      }
    }

}
