// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$InitiateMatchImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class TurnBasedMultiplayerImpl$InitiateMatchImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected TurnBasedMultiplayerImpl$InitiateMatchImpl()
    {
      super();
    }

    /* synthetic */ TurnBasedMultiplayerImpl$InitiateMatchImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult)new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$InitiateMatchImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$InitiateMatchImpl$1(this, p0);
    }

}
