// Decompiled from classes.dex (SourceFile: RoomBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.realtime;

public final class RoomBuffer extends com.google.android.gms.common.data.g {
    // Methods
    public RoomBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.multiplayer.realtime.Room b(int p0, int p1)
    {
      return (com.google.android.gms.games.multiplayer.realtime.Room)new com.google.android.gms.games.multiplayer.realtime.RoomRef(this.a, p0, p1);
    }

    /* synthetic */ protected final Object a(int p0, int p1)
    {
      return new com.google.android.gms.games.multiplayer.realtime.RoomRef(this.a, p0, p1);
    }

    protected final String f()
    {
      return "external_match_id";
    }

}
