// Decompiled from classes.dex (SourceFile: PlayersImpl$LoadPlayersImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class PlayersImpl$LoadPlayersImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected PlayersImpl$LoadPlayersImpl()
    {
      super();
    }

    /* synthetic */ PlayersImpl$LoadPlayersImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.Players$LoadPlayersResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.Players$LoadPlayersResult)new com.google.android.gms.games.internal.api.PlayersImpl$LoadPlayersImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.PlayersImpl$LoadPlayersImpl$1(this, p0);
    }

}
