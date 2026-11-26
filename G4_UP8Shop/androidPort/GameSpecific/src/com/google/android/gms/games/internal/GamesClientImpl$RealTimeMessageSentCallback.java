// Decompiled from classes.dex (SourceFile: GamesClientImpl$RealTimeMessageSentCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$RealTimeMessageSentCallback extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final int b;
    private final java.lang.String c;
    private final int e;

    // Methods
    GamesClientImpl$RealTimeMessageSentCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback p1,
            int p2,
            int p3,
            String p4)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
      this.e = p3;
      this.c = p4;
    
    }

    private void a(
            com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback p0)
    {
      if ( p0 != null )
        p0.a();
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ public final void a(Object p0)
    {
      com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback v2;
      v2 = (com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback)p0;
      if ( v2 != null )
        v2.a();
    }

}
