// Decompiled from classes.dex (SourceFile: Games$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

final class Games$1 implements com.google.android.gms.common.api.Api$b {
    // Methods
    Games$1()
    {
      super();
    }

    private static com.google.android.gms.games.internal.GamesClientImpl a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            com.google.android.gms.games.Games$GamesOptions p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      if ( p3 == null )
        p3 = new com.google.android.gms.games.Games$GamesOptions(0);
      return new com.google.android.gms.games.internal.GamesClientImpl(p0, p1, p2.f(), p2.b(), p4, p5, p2.e(), p2.c(), p2.g(), p3.a, p3.b, p3.c, p3.d, p3.e, p3.f);
    }

    public final int a()
    {
      return 1;
    }

    /* synthetic */ public final com.google.android.gms.common.api.Api$a a(
            android.content.Context p0,
            android.os.Looper p1,
            com.google.android.gms.internal.gz p2,
            Object p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5)
    {
      com.google.android.gms.games.Games$GamesOptions v7;
      v7 = (com.google.android.gms.games.Games$GamesOptions)p3;
      if ( v7 == null )
        v7 = new com.google.android.gms.games.Games$GamesOptions(0);
      return (com.google.android.gms.common.api.Api$a)new com.google.android.gms.games.internal.GamesClientImpl(p0, p1, p2.f(), p2.b(), p4, p5, p2.e(), p2.c(), p2.g(), v7.a, v7.b, v7.c, v7.d, v7.e, v7.f);
    }

}
