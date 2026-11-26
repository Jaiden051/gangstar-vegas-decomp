// Decompiled from classes.dex (SourceFile: PlayersImpl$LoadXpForGameCategoriesResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class PlayersImpl$LoadXpForGameCategoriesResultImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected PlayersImpl$LoadXpForGameCategoriesResultImpl()
    {
      super();
    }

    private com.google.android.gms.games.Players$LoadXpForGameCategoriesResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.Players$LoadXpForGameCategoriesResult)new com.google.android.gms.games.internal.api.PlayersImpl$LoadXpForGameCategoriesResultImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.PlayersImpl$LoadXpForGameCategoriesResultImpl$1(this, p0);
    }

}
