// Decompiled from classes.dex (SourceFile: PlayersImpl$LoadXpStreamResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class PlayersImpl$LoadXpStreamResultImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected PlayersImpl$LoadXpStreamResultImpl()
    {
      super();
    }

    private com.google.android.gms.games.Players$LoadXpStreamResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.Players$LoadXpStreamResult)new com.google.android.gms.games.internal.api.PlayersImpl$LoadXpStreamResultImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.PlayersImpl$LoadXpStreamResultImpl$1(this, p0);
    }

}
