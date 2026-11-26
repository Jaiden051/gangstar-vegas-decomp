// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$LoadPlayerScoreImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class LeaderboardsImpl$LoadPlayerScoreImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected LeaderboardsImpl$LoadPlayerScoreImpl()
    {
      super();
    }

    /* synthetic */ LeaderboardsImpl$LoadPlayerScoreImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.leaderboard.Leaderboards$LoadPlayerScoreResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.leaderboard.Leaderboards$LoadPlayerScoreResult)new com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadPlayerScoreImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadPlayerScoreImpl$1(this, p0);
    }

}
