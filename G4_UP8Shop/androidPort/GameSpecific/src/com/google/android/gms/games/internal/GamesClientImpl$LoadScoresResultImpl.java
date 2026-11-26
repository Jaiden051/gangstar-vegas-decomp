// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadScoresResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadScoresResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult {
    // Fields
    private com.google.android.gms.games.leaderboard.LeaderboardEntity c;
    private com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer d;

    // Methods
    GamesClientImpl$LoadScoresResultImpl(
            com.google.android.gms.common.data.DataHolder p0,
            com.google.android.gms.common.data.DataHolder p1)
    {
            super(p1);
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            com.google.android.gms.games.leaderboard.LeaderboardBuffer v3;
            v3 = new com.google.android.gms.games.leaderboard.LeaderboardBuffer(p0);
            try
            {
            if ( v3.b() > 0 )
            {
            this.c = (com.google.android.gms.games.leaderboard.LeaderboardEntity)((com.google.android.gms.games.leaderboard.Leaderboard)v3.b(0)).h();
            { _pc = 1; continue _sm; }
            }
            this.c = null;
            }
            finally
            {
            v3.c();
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            this.d = new com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer(p1);
            
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    public final com.google.android.gms.games.leaderboard.Leaderboard b()
    {
      return (com.google.android.gms.games.leaderboard.Leaderboard)this.c;
    }

    public final com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer c()
    {
      return this.d;
    }

}
