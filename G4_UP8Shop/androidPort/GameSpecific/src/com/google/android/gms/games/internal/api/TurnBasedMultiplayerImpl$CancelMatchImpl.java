// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$CancelMatchImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class TurnBasedMultiplayerImpl$CancelMatchImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Fields
    private final java.lang.String a;

    // Methods
    public TurnBasedMultiplayerImpl$CancelMatchImpl(String p0)
    {
      super();
      this.a = p0;
    }

    /* synthetic */ static String a(
            com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$CancelMatchImpl p0)
    {
      return p0.a;
    }

    private com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$CancelMatchResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$CancelMatchResult)new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$CancelMatchImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$CancelMatchImpl$1(this, p0);
    }

}
