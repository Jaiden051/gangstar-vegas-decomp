// Decompiled from classes.dex (SourceFile: kj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.plus.Plus;
public final class kj implements com.google.android.gms.plus.Account {
    // Methods
    public kj()
    {
      super();
    }

    private static com.google.android.gms.plus.internal.e a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.common.api.Api$c<com.google.android.gms.plus.internal.e> p1)
    {
      com.google.android.gms.plus.internal.e v2;
      hn.b(p0 != null, "GoogleApiClient parameter is required.");
      hn.a(p0.g(), "GoogleApiClient must be connected.");
      v2 = (com.google.android.gms.plus.internal.e)p0.a(p1);
      hn.a(
        v2 != null,
        "GoogleApiClient is not configured to use the Plus.API Api. Pass this into GoogleApiClient.Builder#addApi() to use this feature.");
      return v2;
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> a(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.internal.kj$1(this));
    }

    public final void b(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      a(p0, Plus.a).i();
    }

    public final String c(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return a(p0, Plus.a).g();
    }

}
