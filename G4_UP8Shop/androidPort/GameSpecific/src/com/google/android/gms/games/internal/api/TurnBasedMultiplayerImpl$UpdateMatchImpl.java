// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$UpdateMatchImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class TurnBasedMultiplayerImpl$UpdateMatchImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected TurnBasedMultiplayerImpl$UpdateMatchImpl()
    {
      super();
    }

    /* synthetic */ TurnBasedMultiplayerImpl$UpdateMatchImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult)new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$UpdateMatchImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$UpdateMatchImpl$1(this, p0);
    }

}
