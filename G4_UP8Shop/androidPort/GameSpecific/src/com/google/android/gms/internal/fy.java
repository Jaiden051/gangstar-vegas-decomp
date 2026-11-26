// Decompiled from classes.dex (SourceFile: fy.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fy extends com.google.android.gms.internal.hc {
    // Methods
    public fy(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3)
    {
      super(p0, p1, p2, p3, new String[0]);
    }

    private static com.google.android.gms.internal.fv C(android.os.IBinder p0)
    {
      return fv$a.A(p0);
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)fv$a.A(p0);
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      p0.b(p1, 5077000, this.E().getPackageName());
    }

    protected final String e()
    {
      return "com.google.android.gms.appdatasearch.internal.ILightweightAppDataSearch";
    }

    protected final String f()
    {
      return "com.google.android.gms.icing.LIGHTWEIGHT_INDEX_SERVICE";
    }

    public final com.google.android.gms.internal.fv g()
    {
      return (com.google.android.gms.internal.fv)this.H();
    }

}
