// Decompiled from classes.dex (SourceFile: GamesClientImpl$AbstractRoomStatusCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

abstract class GamesClientImpl$AbstractRoomStatusCallback extends com.google.android.gms.internal.hc$d {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl b;

    // Methods
    GamesClientImpl$AbstractRoomStatusCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p1,
            com.google.android.gms.common.data.DataHolder p2)
    {
      super(p0, p1, p2);
      this.b = p0;
    
    }

    private void a(
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p0,
            com.google.android.gms.common.data.DataHolder p1)
    {
      this.a(p0, GamesClientImpl.a(this.b, p1));
    }

    protected abstract void a(com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p0, com.google.android.gms.games.multiplayer.realtime.Room p1) ;

    /* bridge */ protected final void a(
            Object p0,
            com.google.android.gms.common.data.DataHolder p1)
    {
      this.a/* void */((com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener)p0, GamesClientImpl.a(
                                                                                                         this.b,
                                                                                                         p1));
    }

}
