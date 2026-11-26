// Decompiled from classes.dex (SourceFile: GamesClientImpl$RoomConnectedCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$RoomConnectedCallback extends com.google.android.gms.games.internal.GamesClientImpl$AbstractRoomCallback {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl b;

    // Methods
    GamesClientImpl$RoomConnectedCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p1,
            com.google.android.gms.common.data.DataHolder p2)
    {
      super(p0, p1, p2);
      this.b = p0;
    
    }

    public final void a(
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p0,
            com.google.android.gms.games.multiplayer.realtime.Room p1,
            int p2)
    {
      p0.u_();
    }

}
