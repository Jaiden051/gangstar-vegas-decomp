// Decompiled from classes.dex (SourceFile: kh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class kh extends com.google.android.gms.internal.hc {
    // Methods
    public kh(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p2,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p3)
    {
      super(p0, p1, p2, p3, null);
    }

    private static com.google.android.gms.internal.kf bj(android.os.IBinder p0)
    {
      return kf$a.bi(p0);
    }

    /* synthetic */ public final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)kf$a.bi(p0);
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      p0.a(p1, 5077000, this.E().getPackageName(), new android.os.Bundle());
    }

    protected final String e()
    {
      return "com.google.android.gms.panorama.internal.IPanoramaService";
    }

    protected final String f()
    {
      return "com.google.android.gms.panorama.service.START";
    }

}
