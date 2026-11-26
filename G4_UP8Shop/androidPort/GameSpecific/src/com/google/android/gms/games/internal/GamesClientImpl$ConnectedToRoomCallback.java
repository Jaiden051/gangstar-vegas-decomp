// Decompiled from classes.dex (SourceFile: GamesClientImpl$ConnectedToRoomCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$ConnectedToRoomCallback extends com.google.android.gms.games.internal.GamesClientImpl$AbstractRoomStatusCallback {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;

    // Methods
    GamesClientImpl$ConnectedToRoomCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p1,
            com.google.android.gms.common.data.DataHolder p2)
    {
      super(p0, p1, p2);
      this.a = p0;
    
    }

    public final void a(
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p0,
            com.google.android.gms.games.multiplayer.realtime.Room p1)
    {
      p0.g();
    }

}
