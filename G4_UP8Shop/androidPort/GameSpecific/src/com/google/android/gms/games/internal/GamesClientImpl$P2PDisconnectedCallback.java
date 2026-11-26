// Decompiled from classes.dex (SourceFile: GamesClientImpl$P2PDisconnectedCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$P2PDisconnectedCallback extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final java.lang.String b;

    // Methods
    GamesClientImpl$P2PDisconnectedCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p1,
            String p2)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
    
    }

    private void a(
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p0)
    {
      if ( p0 != null )
        p0.l();
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ public final void a(Object p0)
    {
      com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener v2;
      v2 = (com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener)p0;
      if ( v2 != null )
        v2.l();
    }

}
