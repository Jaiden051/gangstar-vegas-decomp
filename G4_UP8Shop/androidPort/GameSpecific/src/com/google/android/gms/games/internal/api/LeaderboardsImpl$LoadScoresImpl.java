// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$LoadScoresImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class LeaderboardsImpl$LoadScoresImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected LeaderboardsImpl$LoadScoresImpl()
    {
      super();
    }

    /* synthetic */ LeaderboardsImpl$LoadScoresImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult)new com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadScoresImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadScoresImpl$1(this, p0);
    }

}
