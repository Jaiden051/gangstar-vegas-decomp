// Decompiled from classes.dex (SourceFile: GamesClientImpl$SubmitScoreResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$SubmitScoreResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.leaderboard.Leaderboards$SubmitScoreResult {
    // Fields
    private final com.google.android.gms.games.leaderboard.ScoreSubmissionData c;

    // Methods
    public GamesClientImpl$SubmitScoreResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      try
      {
        this.c = new com.google.android.gms.games.leaderboard.ScoreSubmissionData(p0);
      }
      finally
      {
        p0.i();
      }
    }

    public final com.google.android.gms.games.leaderboard.ScoreSubmissionData b()
    {
      return this.c;
    }

}
