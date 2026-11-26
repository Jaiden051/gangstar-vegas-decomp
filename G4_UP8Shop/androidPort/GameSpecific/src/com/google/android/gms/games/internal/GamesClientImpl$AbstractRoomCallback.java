// Decompiled from classes.dex (SourceFile: GamesClientImpl$AbstractRoomCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

abstract class GamesClientImpl$AbstractRoomCallback extends com.google.android.gms.internal.hc$d {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;

    // Methods
    GamesClientImpl$AbstractRoomCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p1,
            com.google.android.gms.common.data.DataHolder p2)
    {
      super(p0, p1, p2);
      this.a = p0;
    
    }

    private void a(
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p0,
            com.google.android.gms.common.data.DataHolder p1)
    {
      this.a(p0, GamesClientImpl.a(this.a, p1), p1.e());
    }

    protected abstract void a(com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p0, com.google.android.gms.games.multiplayer.realtime.Room p1, int p2);

    /* synthetic */ protected final void a(
            Object p0,
            com.google.android.gms.common.data.DataHolder p1)
    {
      this.a((com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener)p0, GamesClientImpl.a(this.a, p1), p1.e());
    }

}
