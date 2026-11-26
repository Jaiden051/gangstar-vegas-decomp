// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$SubmitScoreImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

public abstract class LeaderboardsImpl$SubmitScoreImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected LeaderboardsImpl$SubmitScoreImpl()
    {
      super();
    }

    private com.google.android.gms.games.leaderboard.Leaderboards$SubmitScoreResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.leaderboard.Leaderboards$SubmitScoreResult)new com.google.android.gms.games.internal.api.LeaderboardsImpl$SubmitScoreImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.LeaderboardsImpl$SubmitScoreImpl$1(this, p0);
    }

}
