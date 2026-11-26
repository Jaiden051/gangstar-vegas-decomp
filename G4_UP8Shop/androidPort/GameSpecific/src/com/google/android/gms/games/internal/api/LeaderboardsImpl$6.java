// Decompiled from classes.dex (SourceFile: LeaderboardsImpl$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class LeaderboardsImpl$6 extends com.google.android.gms.games.internal.api.LeaderboardsImpl$LoadScoresImpl {
    // Fields
    final com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer a;
    final int b;
    final int c;
    final com.google.android.gms.games.internal.api.LeaderboardsImpl d;

    // Methods
    LeaderboardsImpl$6(
            com.google.android.gms.games.internal.api.LeaderboardsImpl p0,
            com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer p1,
            int p2,
            int p3)
    {
      super(0);
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

}
