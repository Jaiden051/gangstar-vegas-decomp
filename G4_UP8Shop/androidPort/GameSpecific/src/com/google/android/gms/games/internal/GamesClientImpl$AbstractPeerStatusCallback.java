// Decompiled from classes.dex (SourceFile: GamesClientImpl$AbstractPeerStatusCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

abstract class GamesClientImpl$AbstractPeerStatusCallback extends com.google.android.gms.games.internal.GamesClientImpl$AbstractRoomStatusCallback {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final java.util.ArrayList c;

    // Methods
    GamesClientImpl$AbstractPeerStatusCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p1,
            com.google.android.gms.common.data.DataHolder p2,
            String[] p3)
    {
      super(p0, p1, p2);
      int v5;
      int v6;
      this.a = p0;
      this.c = new java.util.ArrayList();
      v5 = 0;
      v6 = p3.length;
      while ( v5 < v6 )
        this.c.add(p3[v5++]);
    
    }

    protected final void a(
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p0,
            com.google.android.gms.games.multiplayer.realtime.Room p1)
    {
      this.a(p0, p1, this.c);
    }

    protected abstract void a(com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p0, com.google.android.gms.games.multiplayer.realtime.Room p1, java.util.ArrayList<String> p2);

}
