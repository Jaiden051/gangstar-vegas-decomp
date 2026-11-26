// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$LoadScoresImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.common.data.DataHolder;
class LeaderboardsImpl$LoadScoresImpl$1 implements com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadScoresImpl b;

    // Methods
    LeaderboardsImpl$LoadScoresImpl$1(
            com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadScoresImpl p0,
            com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.games.leaderboard.Leaderboard b()
    {
      return null;
    }

    public final com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer c()
    {
      return new com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer(DataHolder.af(14));
    }

    public final void d()
    {
      ;
    }

}
