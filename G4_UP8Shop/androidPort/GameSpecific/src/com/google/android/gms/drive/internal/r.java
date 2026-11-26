// Decompiled from classes.dex (SourceFile: r.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.common.api.Status;
import com.google.android.gms.internal.hn;
public class r extends com.google.android.gms.internal.hc {
    // Fields
    final com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks a;
    java.util.Map b;
    private final java.lang.String c;
    private final java.lang.String g;
    private final android.os.Bundle h;
    private com.google.android.gms.drive.DriveId i;
    private com.google.android.gms.drive.DriveId j;

    // Methods
    public r(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p3,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p4,
            String[] p5,
            android.os.Bundle p6)
    {
      super(p0, p1, p3, p4, p5);
      this.b = new java.util.HashMap();
      this.c = (String)hn.b(p2.b(), "Must call Api.ClientBuilder.setAccountName()");
      this.g = p2.f();
      this.a = p3;
      this.h = p6;
    }

    private static com.google.android.gms.drive.internal.aa O(android.os.IBinder p0)
    {
      return aa$a.P(p0);
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)aa$a.P(p0);
    }

    final <C extends com.google.android.gms.drive.events.DriveEvent> com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.DriveId p1,
            int p2,
            com.google.android.gms.drive.events.DriveEvent$Listener<C> p3)
 throws android.os.RemoteException {
      boolean v5; // RETVAL
      java.util.Map b;
      java.util.Map v7;
      com.google.android.gms.drive.internal.x v10;
      hn.b(com.google.android.gms.drive.events.b.a(1, p1), "id");
      hn.b(p3, "listener");
      v5 = this.c();
      hn.a(v5, "Client must be connected");
      b = this.b;
      synchronized ( b )
      {
        v7 = (java.util.Map)this.b.get(p1);
        if ( v7 == null )
        {
          v7 = new java.util.HashMap();
          this.b.put(p1, v7);
        }
        if ( v7.containsKey(p3) )
          return (com.google.android.gms.common.api.PendingResult)new com.google.android.gms.drive.internal.p$k(p0, Status.a);
        v10 = new com.google.android.gms.drive.internal.x(this.d(), 1, p3);
        v7.put(p3, v10);
        return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.r$1(this, p1, 1, v10));
      }
    }

    protected final void a(int p0, android.os.IBinder p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      if ( p2 != null )
      {
        p2.setClassLoader(this.getClass().getClassLoader());
        this.i = (com.google.android.gms.drive.DriveId)p2.getParcelable("com.google.android.gms.drive.root_id");
        this.j = (com.google.android.gms.drive.DriveId)p2.getParcelable("com.google.android.gms.drive.appdata_id");
      }
      super.a(p0, p1, p2);
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      String PackageName;
      android.os.Bundle v4;
      PackageName = this.E().getPackageName();
      hn.f(p1);
      hn.f(PackageName);
      hn.f(this.F());
      v4 = new android.os.Bundle();
      v4.putString("proxy_package_name", this.g);
      v4.putAll(this.h);
      p0.a(p1, 5077000, PackageName, this.F(), this.c, v4);
    }

    final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.drive.DriveId p1,
            int p2,
            com.google.android.gms.drive.events.DriveEvent$Listener<?> p3)
 throws android.os.RemoteException {
      Object v5; // RETVAL
      java.util.Map b;
      java.util.Map v7;
      com.google.android.gms.drive.internal.x v10;
      hn.b(com.google.android.gms.drive.events.b.a(1, p1), "id");
      hn.a(this.c(), "Client must be connected");
      v5 = hn.b(p3, "listener");
      b = this.b;
      synchronized ( b )
      {
        v7 = (java.util.Map)this.b.get(p1);
        if ( v7 == null || (v10 = (com.google.android.gms.drive.internal.x)v7.remove(p3)) == null )
          return (com.google.android.gms.common.api.PendingResult)new com.google.android.gms.drive.internal.p$k(p0, Status.a);
        if ( v7.isEmpty() )
          this.b.remove(p1);
        return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.drive.internal.r$2(this, p1, 1, v10));
      }
    }

    public final void b()
 throws android.os.RemoteException {
      com.google.android.gms.drive.internal.aa v1;
      v1 = (com.google.android.gms.drive.internal.aa)this.H();
      if ( v1 != null )
      {
        try
        {
          v1.a(new com.google.android.gms.drive.internal.DisconnectRequest());
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
      super.b();
      this.b.clear();
    }

    protected final String e()
    {
      return "com.google.android.gms.drive.internal.IDriveService";
    }

    protected final String f()
    {
      return "com.google.android.gms.drive.ApiService.START";
    }

    public final com.google.android.gms.drive.internal.aa g()
    {
      return (com.google.android.gms.drive.internal.aa)this.H();
    }

    public final com.google.android.gms.drive.DriveId h()
    {
      return this.i;
    }

    public final com.google.android.gms.drive.DriveId i()
    {
      return this.j;
    }

}
