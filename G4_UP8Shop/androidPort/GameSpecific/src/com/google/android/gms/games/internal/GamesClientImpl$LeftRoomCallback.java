// Decompiled from classes.dex (SourceFile: GamesClientImpl$LeftRoomCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LeftRoomCallback extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final int b;
    private final java.lang.String c;

    // Methods
    GamesClientImpl$LeftRoomCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p1,
            int p2,
            String p3)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
      this.c = p3;
    
    }

    private void a(
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p0)
    {
      p0.c();
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ public final void a(Object p0)
    {
      ((com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener)p0).c();
    }

}
