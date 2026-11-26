// Decompiled from classes.dex (SourceFile: GamesClientImpl$PeerDeclinedCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$PeerDeclinedCallback extends com.google.android.gms.games.internal.GamesClientImpl$AbstractPeerStatusCallback {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl c;

    // Methods
    GamesClientImpl$PeerDeclinedCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p1,
            com.google.android.gms.common.data.DataHolder p2,
            String[] p3)
    {
      super(p0, p1, p2, p3);
      this.c = p0;
    
    }

    protected final void a(
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p0,
            com.google.android.gms.games.multiplayer.realtime.Room p1,
            java.util.ArrayList<String> p2)
    {
      p0.d();
    }

}
