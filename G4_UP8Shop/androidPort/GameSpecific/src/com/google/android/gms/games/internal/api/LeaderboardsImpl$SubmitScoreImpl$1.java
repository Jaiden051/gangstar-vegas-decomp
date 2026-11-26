// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$SubmitScoreImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.common.data.DataHolder;
class LeaderboardsImpl$SubmitScoreImpl$1 implements com.google.android.gms.games.leaderboard.Leaderboards$SubmitScoreResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.LeaderboardsImpl$SubmitScoreImpl b;

    // Methods
    LeaderboardsImpl$SubmitScoreImpl$1(
            com.google.android.gms.games.internal.api.LeaderboardsImpl$SubmitScoreImpl p0,
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

    public final com.google.android.gms.games.leaderboard.ScoreSubmissionData b()
    {
      return new com.google.android.gms.games.leaderboard.ScoreSubmissionData(DataHolder.af(14));
    }

    public final void d()
    {
      ;
    }

}
