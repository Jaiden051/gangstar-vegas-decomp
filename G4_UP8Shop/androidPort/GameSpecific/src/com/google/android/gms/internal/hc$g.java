// Decompiled from classes.dex (SourceFile: hc$g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class hc$g implements com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener {
    // Fields
    private final com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener a;

    // Methods
    public hc$g(com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.common.ConnectionResult p0)
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      this.a.a(p0);
    }

    public final boolean equals(Object p0)
    {
      if ( p0 instanceof com.google.android.gms.internal.hc$g )
        return this.a.equals(((com.google.android.gms.internal.hc$g)p0).a);
      else
        return this.a.equals(p0);
    }

}
