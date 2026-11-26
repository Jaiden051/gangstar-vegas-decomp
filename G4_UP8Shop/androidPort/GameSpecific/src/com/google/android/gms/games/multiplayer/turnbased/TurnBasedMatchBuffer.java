// Decompiled from classes.dex (SourceFile: TurnBasedMatchBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.multiplayer.turnbased;

public final class TurnBasedMatchBuffer extends com.google.android.gms.common.data.g {
    // Methods
    public TurnBasedMatchBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch b(int p0, int p1)
    {
      return (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchRef(this.a, p0, p1);
    }

    /* synthetic */ protected final Object a(int p0, int p1)
    {
      return new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchRef(this.a, p0, p1);
    }

    protected final String f()
    {
      return "external_match_id";
    }

}
