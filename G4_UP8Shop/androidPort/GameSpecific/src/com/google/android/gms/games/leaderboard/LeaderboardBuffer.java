// Decompiled from classes.dex (SourceFile: LeaderboardBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.leaderboard;

public final class LeaderboardBuffer extends com.google.android.gms.common.data.g {
    // Methods
    public LeaderboardBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.leaderboard.Leaderboard b(int p0, int p1)
    {
      return (com.google.android.gms.games.leaderboard.Leaderboard)new com.google.android.gms.games.leaderboard.LeaderboardRef(this.a, p0, p1);
    }

    /* synthetic */ protected final Object a(int p0, int p1)
    {
      return new com.google.android.gms.games.leaderboard.LeaderboardRef(this.a, p0, p1);
    }

    protected final String f()
    {
      return "external_leaderboard_id";
    }

}
