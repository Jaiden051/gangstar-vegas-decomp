// Decompiled from classes.dex (SourceFile: ExtendedGameBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

public final class ExtendedGameBuffer extends com.google.android.gms.common.data.g {
    // Methods
    public ExtendedGameBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.internal.game.ExtendedGame b(int p0, int p1)
    {
      return (com.google.android.gms.games.internal.game.ExtendedGame)new com.google.android.gms.games.internal.game.ExtendedGameRef(this.a, p0, p1);
    }

    /* synthetic */ protected final Object a(int p0, int p1)
    {
      return new com.google.android.gms.games.internal.game.ExtendedGameRef(this.a, p0, p1);
    }

    protected final String f()
    {
      return "external_game_id";
    }

}
