// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadPlayerScoreResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadPlayerScoreResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.leaderboard.Leaderboards$LoadPlayerScoreResult {
    // Fields
    private final com.google.android.gms.games.leaderboard.LeaderboardScoreEntity c;

    // Methods
    GamesClientImpl$LoadPlayerScoreResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer v2;
      v2 = new com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer(p0);
      try
      {
        if ( v2.b() > 0 )
        {
          this.c = (com.google.android.gms.games.leaderboard.LeaderboardScoreEntity)v2.a(0).h();
          return;
        }
        this.c = null;
      }
      finally
      {
        v2.c();
      }
    
    }

    public final com.google.android.gms.games.leaderboard.LeaderboardScore b()
    {
      return (com.google.android.gms.games.leaderboard.LeaderboardScore)this.c;
    }

}
