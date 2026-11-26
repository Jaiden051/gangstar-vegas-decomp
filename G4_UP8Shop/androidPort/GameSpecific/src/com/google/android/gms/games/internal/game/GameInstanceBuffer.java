// Decompiled from classes.dex (SourceFile: GameInstanceBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

public final class GameInstanceBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Methods
    public GameInstanceBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.internal.game.GameInstance a(int p0)
    {
      return (com.google.android.gms.games.internal.game.GameInstance)new com.google.android.gms.games.internal.game.GameInstanceRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.internal.game.GameInstanceRef(this.a, p0);
    }

}
