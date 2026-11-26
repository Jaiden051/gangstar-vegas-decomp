// Decompiled from classes.dex (SourceFile: GamesClientImpl$MessageReceivedCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$MessageReceivedCallback extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.games.multiplayer.realtime.RealTimeMessage b;

    // Methods
    GamesClientImpl$MessageReceivedCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener p1,
            com.google.android.gms.games.multiplayer.realtime.RealTimeMessage p2)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
    
    }

    private void a(
            com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener p0)
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
      com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener v2;
      v2 = (com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener)p0;
      if ( v2 != null )
        v2.a();
    }

}
