// Decompiled from classes.dex (SourceFile: Cast$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

import com.google.android.gms.internal.hn;
final class Cast$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    Cast$1()
    {
      super();
    }

    private static com.google.android.gms.internal.gi a$5d9816de(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.cast.Cast$CastOptions p2,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p3,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p4)
    {
      hn.b(p2, "Setting the API options is required.");
      return new com.google.android.gms.internal.gi(p0, p1, p2.a, Cast$CastOptions.a(p2), p2.b, p3, p4);
    }

    public final int a()
    {
      return 0x7FFFFFFF;
    }

    /* synthetic */ public final com.google.android.gms.common.api.Api$a a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            Object p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      com.google.android.gms.cast.Cast$CastOptions v7;
      v7 = (com.google.android.gms.cast.Cast$CastOptions)p3;
      hn.b(v7, "Setting the API options is required.");
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.internal.gi(p0, p1, v7.a, Cast$CastOptions.a(v7), v7.b, p4, p5);
    }

}
