// Decompiled from classes.dex (SourceFile: LeaderboardScoreBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

public final class LeaderboardScoreBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Fields
    private final com.google.android.gms.games.leaderboard.LeaderboardScoreBufferHeader b;

    // Methods
    public LeaderboardScoreBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.b = new com.google.android.gms.games.leaderboard.LeaderboardScoreBufferHeader(p0.f());
    }

    public final com.google.android.gms.games.leaderboard.LeaderboardScore a(int p0)
    {
      return (com.google.android.gms.games.leaderboard.LeaderboardScore)new com.google.android.gms.games.leaderboard.LeaderboardScoreRef(this.a, p0);
    }

    public final com.google.android.gms.games.leaderboard.LeaderboardScoreBufferHeader a()
    {
      return this.b;
    }

    /* synthetic */ public final Object b(int p0)
    {
      return this.a(p0);
    }

}
