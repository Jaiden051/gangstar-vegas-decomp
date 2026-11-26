// Decompiled from classes.dex (SourceFile: ds.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class ds extends com.google.android.gms.internal.hc {
    // Fields
    final int a;

    // Methods
    public ds(
            android.content.Context p0,
            com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks p1,
            com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p2,
            int p3)
    {
      super(p0, p1, p2, new String[0]);
      this.a = p3;
    }

    private static com.google.android.gms.internal.dx w(android.os.IBinder p0)
    {
      return dx$a.y(p0);
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)dx$a.y(p0);
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      p0.g(p1, this.a, this.E().getPackageName(), new android.os.Bundle());
    }

    protected final String e()
    {
      return "com.google.android.gms.ads.internal.request.IAdRequestService";
    }

    protected final String f()
    {
      return "com.google.android.gms.ads.service.START";
    }

    public final com.google.android.gms.internal.dx g()
    {
      return (com.google.android.gms.internal.dx)super.H();
    }

}
