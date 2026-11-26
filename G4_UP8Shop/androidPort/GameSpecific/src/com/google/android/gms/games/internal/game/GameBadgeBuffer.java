// Decompiled from classes.dex (SourceFile: GameBadgeBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.game;

public final class GameBadgeBuffer extends com.google.android.gms.common.data.DataBuffer {
    public GameBadgeBuffer(com.google.android.gms.common.data.DataHolder p0) { super(p0); }
    // Methods
    private com.google.android.gms.games.internal.game.GameBadge a(int p0)
    {
      return (com.google.android.gms.games.internal.game.GameBadge)new com.google.android.gms.games.internal.game.GameBadgeRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.internal.game.GameBadgeRef(this.a, p0);
    }

}
