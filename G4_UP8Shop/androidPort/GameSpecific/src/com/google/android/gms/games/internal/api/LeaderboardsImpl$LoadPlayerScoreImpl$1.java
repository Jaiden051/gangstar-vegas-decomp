// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$LoadPlayerScoreImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class LeaderboardsImpl$LoadPlayerScoreImpl$1 implements com.google.android.gms.games.leaderboard.Leaderboards$LoadPlayerScoreResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadPlayerScoreImpl b;

    // Methods
    LeaderboardsImpl$LoadPlayerScoreImpl$1(
            com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadPlayerScoreImpl p0,
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

    public final com.google.android.gms.games.leaderboard.LeaderboardScore b()
    {
      return null;
    }

}
