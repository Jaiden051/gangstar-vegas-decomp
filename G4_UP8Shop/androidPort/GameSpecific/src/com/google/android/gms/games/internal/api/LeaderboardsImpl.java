// Decompiled from classes.dex (SourceFile: LeaderboardsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class LeaderboardsImpl implements com.google.android.gms.games.leaderboard.Leaderboards {
    // Methods
    public LeaderboardsImpl()
    {
      super();
    }

    public final android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).k();
    }

    public final android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
    {
      return Games.c(p0).a(p1);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer p1,
            int p2,
            int p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.LeaderboardsImpl$6(this, p1, p2, p3));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$LoadPlayerScoreResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            int p2,
            int p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.LeaderboardsImpl$3(this, p1, p2, p3));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            int p2,
            int p3,
            int p4)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.LeaderboardsImpl$4(this, p1, p2, p3, p4, false));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            int p2,
            int p3,
            int p4,
            boolean p5)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.LeaderboardsImpl$4(this, p1, p2, p3, p4, false));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$LeaderboardMetadataResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            boolean p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.LeaderboardsImpl$2(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$LeaderboardMetadataResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.LeaderboardsImpl$1(this, p1));
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, String p1, long p2)
    {
      Games.c(p0).a(null, p1, p2, null);
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            long p2,
            String p4)
    {
      Games.c(p0).a(null, p1, p2, null);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            int p2,
            int p3,
            int p4)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.LeaderboardsImpl$5(this, p1, p2, p3, p4, false));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            int p2,
            int p3,
            int p4,
            boolean p5)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.LeaderboardsImpl$5(this, p1, p2, p3, p4, false));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$SubmitScoreResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            long p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.LeaderboardsImpl$7(this, p1, p2, null));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.leaderboard.Leaderboards$SubmitScoreResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            long p2,
            String p4)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.LeaderboardsImpl$7(this, p1, p2, null));
    }

}
