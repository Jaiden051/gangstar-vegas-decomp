// Decompiled from classes.dex (SourceFile: PlayerBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public final class PlayerBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Methods
    public PlayerBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    public final com.google.android.gms.games.Player a(int p0)
    {
      return (com.google.android.gms.games.Player)new com.google.android.gms.games.PlayerRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return this.a(p0);
    }

}
