// Decompiled from classes.dex (SourceFile: GameBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

public final class GameBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Methods
    public GameBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    public final com.google.android.gms.games.Game a(int p0)
    {
      return (com.google.android.gms.games.Game)new com.google.android.gms.games.GameRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return this.a(p0);
    }

}
