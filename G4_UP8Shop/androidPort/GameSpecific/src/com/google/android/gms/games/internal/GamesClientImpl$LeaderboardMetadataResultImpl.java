// Decompiled from classes.dex (SourceFile: GamesClientImpl$LeaderboardMetadataResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LeaderboardMetadataResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.leaderboard.Leaderboards$LeaderboardMetadataResult {
    // Fields
    private final com.google.android.gms.games.leaderboard.LeaderboardBuffer c;

    // Methods
    GamesClientImpl$LeaderboardMetadataResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.leaderboard.LeaderboardBuffer(p0);
    }

    public final com.google.android.gms.games.leaderboard.LeaderboardBuffer b()
    {
      return this.c;
    }

}
