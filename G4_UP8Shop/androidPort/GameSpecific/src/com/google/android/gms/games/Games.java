// Decompiled from classes.dex (SourceFile: Games.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games;

import com.google.android.gms.internal.hn;
public final class Games {
    // Fields
    public static java.lang.String a;
    static final com.google.android.gms.common.api.Api$c b;
    public static final com.google.android.gms.common.api.Scope c;
    public static final com.google.android.gms.common.api.Api d;
    public static final com.google.android.gms.common.api.Scope e;
    public static final com.google.android.gms.common.api.Api f;
    public static final com.google.android.gms.games.GamesMetadata g;
    public static final com.google.android.gms.games.achievement.Achievements h;
    public static final com.google.android.gms.games.event.Events i;
    public static final com.google.android.gms.games.leaderboard.Leaderboards j;
    public static final com.google.android.gms.games.multiplayer.Invitations k;
    public static final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer l;
    public static final com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer m;
    public static final com.google.android.gms.games.multiplayer.Multiplayer n;
    public static final com.google.android.gms.games.Players o;
    public static final com.google.android.gms.games.Notifications p;
    public static final com.google.android.gms.games.quest.Quests q;
    public static final com.google.android.gms.games.request.Requests r;
    public static final com.google.android.gms.games.snapshot.Snapshots s;
    public static final com.google.android.gms.games.internal.game.Acls t;
    private static final com.google.android.gms.common.api.Api$b u;

    // Methods
    static
    {
      com.google.android.gms.common.api.Scope[] v0;
      com.google.android.gms.common.api.Scope[] v1;
      b = new com.google.android.gms.common.api.Api$c();
      u = (com.google.android.gms.common.api.Api$b)new com.google.android.gms.games.Games$1();
      c = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/games");
      v0 = new com.google.android.gms.common.api.Scope[1];
      v0[0] = c;
      d = new com.google.android.gms.common.api.Api(u, b, v0);
      e = new com.google.android.gms.common.api.Scope("https://www.googleapis.com/auth/games.firstparty");
      v1 = new com.google.android.gms.common.api.Scope[1];
      v1[0] = e;
      f = new com.google.android.gms.common.api.Api(u, b, v1);
      g = (com.google.android.gms.games.GamesMetadata)new com.google.android.gms.games.internal.api.GamesMetadataImpl();
      h = (com.google.android.gms.games.achievement.Achievements)new com.google.android.gms.games.internal.api.AchievementsImpl();
      i = (com.google.android.gms.games.event.Events)new com.google.android.gms.games.internal.api.EventsImpl();
      j = (com.google.android.gms.games.leaderboard.Leaderboards)new com.google.android.gms.games.internal.api.LeaderboardsImpl();
      k = (com.google.android.gms.games.multiplayer.Invitations)new com.google.android.gms.games.internal.api.InvitationsImpl();
      l = (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer)new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl();
      m = (com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer)new com.google.android.gms.games.internal.api.RealTimeMultiplayerImpl();
      n = (com.google.android.gms.games.multiplayer.Multiplayer)new com.google.android.gms.games.internal.api.MultiplayerImpl();
      o = (com.google.android.gms.games.Players)new com.google.android.gms.games.internal.api.PlayersImpl();
      p = (com.google.android.gms.games.Notifications)new com.google.android.gms.games.internal.api.NotificationsImpl();
      q = (com.google.android.gms.games.quest.Quests)new com.google.android.gms.games.internal.api.QuestsImpl();
      r = (com.google.android.gms.games.request.Requests)new com.google.android.gms.games.internal.api.RequestsImpl();
      s = (com.google.android.gms.games.snapshot.Snapshots)new com.google.android.gms.games.internal.api.SnapshotsImpl();
      t = (com.google.android.gms.games.internal.game.Acls)new com.google.android.gms.games.internal.api.AclsImpl();
    }

    private Games()
    {
      super();
    }

    public static com.google.android.gms.games.internal.GamesClientImpl c(
            com.google.android.gms.common.api.GoogleApiClient p0)
    {
      hn.b(p0 != null, "GoogleApiClient parameter is required.");
      hn.a(p0.g(), "GoogleApiClient must be connected.");
      return d(p0);
    }

    public static com.google.android.gms.games.internal.GamesClientImpl d(
            com.google.android.gms.common.api.GoogleApiClient p0)
    {
      com.google.android.gms.games.internal.GamesClientImpl v1;
      v1 = (com.google.android.gms.games.internal.GamesClientImpl)p0.a(b);
      hn.a(
        v1 != null,
        "GoogleApiClient is not configured to use the Games Api. Pass Games.API into GoogleApiClient.Builder#addApi() to use this feature.");
      return v1;
    }

    public static String getAppId(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return c(p0).v();
    }

    public static String getCurrentAccountName(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return c(p0).g();
    }

    public static int getSdkVariant(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return c(p0).u();
    }

    public static android.content.Intent getSettingsIntent(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return c(p0).t();
    }

    public static void setGravityForPopups(com.google.android.gms.common.api.GoogleApiClient p0, int p1)
    {
      c(p0).b(p1);
    }

    public static void setViewForPopups(com.google.android.gms.common.api.GoogleApiClient p0, android.view.View p1)
    {
      hn.f(p1);
      c(p0).a(p1);
    }

    public static com.google.android.gms.common.api.PendingResult<com.google.android.gms.common.api.Status> signOut(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.Games$2());
    }

}
