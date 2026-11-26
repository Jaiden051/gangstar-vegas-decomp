// Decompiled from classes.dex (SourceFile: GamesClientImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.games.Games;
import com.google.android.gms.games.multiplayer.ParticipantUtils;
import com.google.android.gms.internal.hn;
public final class GamesClientImpl extends com.google.android.gms.internal.hc implements com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks, com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener {
    // Fields
    com.google.android.gms.games.internal.events.EventIncrementManager c;
    private final java.lang.String g;
    private final java.lang.String h;
    private final java.util.Map i;
    private com.google.android.gms.games.PlayerEntity j;
    private com.google.android.gms.games.GameEntity k;
    private final com.google.android.gms.games.internal.PopupManager l;
    private boolean m;
    private boolean n;
    private int o;
    private final android.os.Binder p;
    private final long q;
    private final boolean r;
    private final int s;
    private final boolean t;
    private final java.lang.String u;

    // Methods
    public GamesClientImpl(
            android.content.Context p0,
            android.os.Looper p1,
            String p2,
            String p3,
            com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks p4,
            com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener p5,
            String[] p6,
            int p7,
            android.view.View p8,
            boolean p9,
            boolean p10,
            int p11,
            boolean p12,
            int p13,
            String p14)
    {
      super(p0, p1, p4, p5, p6);
      this.c = new com.google.android.gms.games.internal.GamesClientImpl$1(this);
      this.m = false;
      this.n = false;
      this.g = p2;
      this.h = (String)hn.f(p3);
      this.p = new android.os.Binder();
      this.i = new java.util.HashMap();
      this.l = PopupManager.a(this, p7);
      this.a(p8);
      this.n = p10;
      this.o = p11;
      this.q = this.hashCode();
      this.r = p9;
      this.t = p12;
      this.s = p13;
      this.u = p14;
      this.a((com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks)this);
      this.a((com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener)this);
    }

    private void I()
    {
      this.j = null;
    }

    private void J()
    {
      java.util.Iterator v1;
      com.google.android.gms.games.multiplayer.realtime.RealTimeSocket v2;
      v1 = this.i.values().iterator();
      while ( v1.hasNext() )
      {
        v2 = (com.google.android.gms.games.multiplayer.realtime.RealTimeSocket)v1.next();
        try
        {
          v2.b();
        }
        catch ( java.io.IOException v3 )
        {
          GamesLog.b("GamesClientImpl", "IOException:", v3);
        }
      }
      this.i.clear();
    }

    private static com.google.android.gms.games.multiplayer.realtime.Room Q(
            com.google.android.gms.common.data.DataHolder p0)
    {
      com.google.android.gms.games.multiplayer.realtime.RoomBuffer v1;
      com.google.android.gms.games.multiplayer.realtime.Room v2;
      v1 = new com.google.android.gms.games.multiplayer.realtime.RoomBuffer(p0);
      v2 = null;
      try
      {
        if ( v1.b() > 0 )
          v2 = (com.google.android.gms.games.multiplayer.realtime.Room)((com.google.android.gms.games.multiplayer.realtime.Room)v1.b(0)).h();
      }
      finally
      {
        v1.c();
      }
      return v2;
    }

    /* synthetic */ static com.google.android.gms.games.multiplayer.realtime.Room a(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.common.data.DataHolder p1)
    {
      return Q(p1);
    }

    private static com.google.android.gms.games.internal.IGamesService ah(android.os.IBinder p0)
    {
      return IGamesService$Stub.aj(p0);
    }

    private com.google.android.gms.games.multiplayer.realtime.RealTimeSocket e(String p0)
    {
      android.os.ParcelFileDescriptor v2; // RETVAL
      com.google.android.gms.games.multiplayer.realtime.RealTimeSocket v3;
      String v5; // RETVAL
      android.net.LocalSocket v6;
      try
      {
        v2 = ((com.google.android.gms.games.internal.IGamesService)this.H()).h(p0);
        if ( v2 != null )
        {
          GamesLog.i("GamesClientImpl", "Created native libjingle socket.");
          v3 = (com.google.android.gms.games.multiplayer.realtime.RealTimeSocket)new com.google.android.gms.games.internal.LibjingleNativeSocket(v2);
          this.i.put(p0, v3);
          return v3;
        }
        GamesLog.i("GamesClientImpl", "Unable to create native libjingle socket, resorting to old socket.");
        v5 = ((com.google.android.gms.games.internal.IGamesService)this.H()).b(p0);
        if ( v5 == null )
          return null;
        v6 = new android.net.LocalSocket();
        try
        {
          v6.connect(new android.net.LocalSocketAddress(v5));
          v3 = (com.google.android.gms.games.multiplayer.realtime.RealTimeSocket)new com.google.android.gms.games.internal.RealTimeSocketImpl(v6, p0);
          this.i.put(p0, v3);
          return v3;
        }
        catch ( java.io.IOException v7 )
        {
          GamesLog.k("GamesClientImpl", "connect() call failed on socket: " + v7.getMessage());
          return null;
        }
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.k("GamesClientImpl", "Unable to create socket. Service died.");
        return null;
      }
    }

    public final int A()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).w();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return -1;
      }
    }

    public final int B()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).x();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return -1;
      }
    }

    public final void C()
    {
      if ( this.c() )
      {
        try
        {
          ((com.google.android.gms.games.internal.IGamesService)this.H()).c();
        }
        catch ( android.os.RemoteException e )
        {
          GamesLog.j("GamesClientImpl", "service died");
        }
      }
    }

    public final int a(
            com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback p0,
            byte[] p1,
            String p2,
            String p3)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RealTimeReliableMessageBinderCallbacks(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return -1;
      }
    }

    public final int a(byte[] p0, String p1)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0, p1, null);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return -1;
      }
    }

    public final int a(byte[] p0, String p1, String[] p2)
    {
      String v4;
      v4 = "Participant IDs must not be null";
      hn.b(p2, "Participant IDs must not be null");
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0, p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return -1;
      }
    }

    public final android.content.Intent a(int p0, int p1, boolean p2)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0, p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final android.content.Intent a(int p0, byte[] p1, int p2, android.graphics.Bitmap p3, String p4)
    {
      android.content.Intent v6;
      try
      {
        v6 = ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0, p1, p2, p4);
        hn.b(p3, "Must provide a non null icon");
        v6.putExtra("com.google.android.gms.games.REQUEST_ITEM_ICON", p3);
        return v6;
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final android.content.Intent a(
            com.google.android.gms.games.multiplayer.realtime.Room p0,
            int p1)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).a((com.google.android.gms.games.multiplayer.realtime.RoomEntity)p0.h(), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final android.content.Intent a(String p0)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).g(p0);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final android.content.Intent a(String p0, boolean p1, boolean p2, int p3)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0, p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final android.content.Intent a(int[] p0)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    /* synthetic */ protected final android.os.IInterface a(android.os.IBinder p0)
    {
      return (android.os.IInterface)IGamesService$Stub.aj(p0);
    }

    public final void a()
 throws android.os.RemoteException {
      this.j = null;
      super.a();
    }

    public final void a(int p0)
    {
      ;
    }

    protected final void a(int p0, android.os.IBinder p1, android.os.Bundle p2)
 throws android.os.RemoteException {
      if ( p0 == 0 && p2 != null )
        this.m = p2.getBoolean("show_welcome_popup");
      super.a(p0, p1, p2);
    }

    public final void a(android.os.Bundle p0)
    {
      if ( this.m )
      {
        this.l.a();
        this.m = false;
      }
    }

    public final void a(android.os.IBinder p0, android.os.Bundle p1)
    {
      if ( this.c() )
      {
        try
        {
          ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0, p1);
        }
        catch ( android.os.RemoteException e )
        {
          GamesLog.j("GamesClientImpl", "service died");
        }
      }
    }

    public final void a(android.view.View p0)
    {
      this.l.a(p0);
    }

    public final void a(com.google.android.gms.common.ConnectionResult p0)
    {
      this.m = false;
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadGamesResult> p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).d(new com.google.android.gms.games.internal.GamesClientImpl$GamesLoadedBinderCallback(this, p0));
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.Invitations$LoadInvitationsResult> p0,
            int p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$InvitationsLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.request.Requests$LoadRequestsResult> p0,
            int p1,
            int p2,
            int p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RequestsLoadedBinderCallbacks(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult> p0,
            int p1,
            int p2,
            boolean p3,
            boolean p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$ExtendedGamesLoadedBinderCallback(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            int p1,
            boolean p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LoadMatchesResult> p0,
            int p1,
            int[] p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchesLoadedBinderCallbacks(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> p0,
            com.google.android.gms.games.leaderboard.LeaderboardScoreBuffer p1,
            int p2,
            int p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardScoresLoadedBinderCallback(this, p0), p1.a().a(), p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult> p0,
            com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchInitiatedBinderCallbacks(this, p0), p1.a(), p1.b(), p1.c(), p1.d());
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.snapshot.Snapshots$CommitSnapshotResult> p0,
            com.google.android.gms.games.snapshot.Snapshot p1,
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p2)
    {
      com.google.android.gms.drive.Contents v4;
      com.google.android.gms.common.data.a v5;
      v4 = p1.b();
      hn.b(v4, "Must provide a previously opened Snapshot");
      v5 = p2.d();
      if ( v5 != null )
        v5.a(this.E().getCacheDir());
      p1.c();
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$SnapshotCommittedBinderCallbacks(this, p0), p1.a().c(), p2, v4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult> p0,
            String p1,
            int p2)
    {
      com.google.android.gms.games.internal.IGamesCallbacks v4 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( p0 != null )
            {
            v4 = new com.google.android.gms.games.internal.GamesClientImpl$AchievementUpdatedBinderCallback(this, p0);
            { _pc = 2; continue _sm; }
            }
            v4 = null;
            _pc = 1;
            continue _sm;
          case 1:
            try
            {
            ((com.google.android.gms.games.internal.IGamesService)this.H()).a(v4, p1, p2, this.l.c(), this.l.b());
            return;
            }
            catch ( android.os.RemoteException e )
            {
            GamesLog.j("GamesClientImpl", "service died");
            return;
            }
            


          case 2:
            _pc = 1;
            continue _sm;
        }
      }
}

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> p0,
            String p1,
            int p2,
            int p3,
            int p4,
            boolean p5)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardScoresLoadedBinderCallback(this, p0), p1, p2, p3, p4, p5);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            String p1,
            int p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
    {
      if ( !p1.equals("played_with") )
        throw new IllegalArgumentException("Invalid player collection: " + p1);
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).d(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult> p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4,
            boolean p5,
            boolean p6)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$ExtendedGamesLoadedBinderCallback(this, p0), p1, p2, p3, p4, p5, p6);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LoadMatchesResult> p0,
            String p1,
            int p2,
            int[] p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchesLoadedBinderCallbacks(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$SubmitScoreResult> p0,
            String p1,
            long p2,
            String p4)
    {
      com.google.android.gms.games.internal.IGamesCallbacks v5 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( p0 != null )
            {
            v5 = new com.google.android.gms.games.internal.GamesClientImpl$SubmitScoreBinderCallbacks(this, p0);
            { _pc = 2; continue _sm; }
            }
            v5 = null;
            _pc = 1;
            continue _sm;
          case 1:
            try
            {
            ((com.google.android.gms.games.internal.IGamesService)this.H()).a(v5, p1, p2, p4);
            return;
            }
            catch ( android.os.RemoteException e )
            {
            GamesLog.j("GamesClientImpl", "service died");
            return;
            }
            


          case 2:
            _pc = 1;
            continue _sm;
        }
      }
}

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LeaveMatchResult> p0,
            String p1,
            String p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchLeftBinderCallbacks(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LoadPlayerScoreResult> p0,
            String p1,
            String p2,
            int p3,
            int p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$PlayerLeaderboardScoreLoadedBinderCallback(this, p0), null, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.request.Requests$LoadRequestsResult> p0,
            String p1,
            String p2,
            int p3,
            int p4,
            int p5)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RequestsLoadedBinderCallbacks(this, p0), p1, p2, p3, p4, p5);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> p0,
            String p1,
            String p2,
            int p3,
            int p4,
            int p5,
            boolean p6)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardScoresLoadedBinderCallback(this, p0), p1, p2, p3, p4, p5, p6);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            String p1,
            String p2,
            int p3,
            boolean p4,
            boolean p5)
    {
      if ( !p1.equals("played_with") && !p1.equals("circled") )
        throw new IllegalArgumentException("Invalid player collection: " + p1);
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3, p4, p5);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult> p0,
            String p1,
            String p2,
            com.google.android.gms.games.snapshot.SnapshotMetadataChange p3,
            com.google.android.gms.drive.Contents p4)
    {
      com.google.android.gms.common.data.a v6;
      v6 = p3.d();
      if ( v6 != null )
        v6.a(this.E().getCacheDir());
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$SnapshotOpenedBinderCallbacks(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LeaderboardMetadataResult> p0,
            String p1,
            String p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardsLoadedBinderCallback(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.quest.Quests$LoadQuestsResult> p0,
            String p1,
            String p2,
            boolean p3,
            String[] p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$QuestsLoadedBinderCallbacks(this, p0), p1, p2, p4, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.quest.Quests$LoadQuestsResult> p0,
            String p1,
            String p2,
            int[] p3,
            int p4,
            boolean p5)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$QuestsLoadedBinderCallbacks(this, p0), p1, p2, p3, p4, p5);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.request.Requests$UpdateRequestsResult> p0,
            String p1,
            String p2,
            String[] p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RequestsUpdatedBinderCallbacks(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LeaderboardMetadataResult> p0,
            String p1,
            boolean p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardsLoadedBinderCallback(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult> p0,
            String p1,
            byte[] p2,
            String p3,
            com.google.android.gms.games.multiplayer.ParticipantResult[] p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchUpdatedBinderCallbacks(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult> p0,
            String p1,
            byte[] p2,
            com.google.android.gms.games.multiplayer.ParticipantResult[] p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchUpdatedBinderCallbacks(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.request.Requests$SendRequestResult> p0,
            String p1,
            String[] p2,
            int p3,
            byte[] p4,
            int p5)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RequestSentBinderCallbacks(this, p0), p1, p2, p3, p4, p5);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            boolean p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            boolean p1,
            android.os.Bundle p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$ContactSettingsUpdatedBinderCallback(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.event.Events$LoadEventsResult> p0,
            boolean p1,
            String[] p2)
    {
      try
      {
        this.c.b();
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$EventsLoadedBinderCallback(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.quest.Quests$LoadQuestsResult> p0,
            int[] p1,
            int p2,
            boolean p3)
    {
      try
      {
        this.c.b();
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$QuestsLoadedBinderCallbacks(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            String[] p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(com.google.android.gms.games.multiplayer.OnInvitationReceivedListener p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$InvitationReceivedBinderCallback(this, p0), this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(com.google.android.gms.games.multiplayer.realtime.RoomConfig p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RoomBinderCallbacks(this, p0.a(), p0.c(), p0.d()), this.p, p0.e(), p0.f(), p0.g(), p0.h(), this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p0, String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$RoomBinderCallbacks(this, p0), p1);
        this.J();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(
            com.google.android.gms.games.multiplayer.turnbased.OnTurnBasedMatchUpdateReceivedListener p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$MatchUpdateReceivedBinderCallback(this, p0), this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(com.google.android.gms.games.quest.QuestUpdateListener p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).d(new com.google.android.gms.games.internal.GamesClientImpl$QuestUpdateBinderCallback(this, p0), this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(com.google.android.gms.games.request.OnRequestReceivedListener p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$RequestReceivedBinderCallback(this, p0), this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void a(com.google.android.gms.games.snapshot.Snapshot p0)
    {
      com.google.android.gms.drive.Contents v2;
      v2 = p0.b();
      hn.b(v2, "Must provide a previously opened Snapshot");
      p0.c();
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(v2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    protected final void a(com.google.android.gms.internal.hj p0, com.google.android.gms.internal.hc$e p1)
 throws android.os.RemoteException {
      String v3;
      android.os.Bundle v4;
      v3 = (this.E().getResources().getConfiguration()).locale.toString();
      v4 = new android.os.Bundle();
      v4.putBoolean("com.google.android.gms.games.key.isHeadless", this.r);
      v4.putBoolean("com.google.android.gms.games.key.showConnectingPopup", this.n);
      v4.putInt("com.google.android.gms.games.key.connectingPopupGravity", this.o);
      v4.putBoolean("com.google.android.gms.games.key.retryingSignIn", this.t);
      v4.putInt("com.google.android.gms.games.key.sdkVariant", this.s);
      v4.putString("com.google.android.gms.games.key.forceResolveAccountKey", this.u);
      p0.a(p1, 5077000, this.E().getPackageName(), this.h, this.F(), this.g, this.l.c(), v3, v4);
    }

    public final void a(String p0, int p1)
    {
      this.c.a(p0, p1);
    }

    protected final void a(String[] p0)
    {
      int v2;
      int v3;
      boolean v4;
      String v5;
      boolean v6;
      Object[] v7;
      Object[] v8;
      v2 = 0;
      v3 = 0;
      v4 = false;
      while ( v2 < p0.length )
      {
        v5 = p0[v2];
        if ( v5.equals("https://www.googleapis.com/auth/games") )
        {
          v4 = true;
        }
        else if ( v5.equals("https://www.googleapis.com/auth/games.firstparty") )
        {
          v3 = 1;
        }
        ++v2;
      }
      if ( v3 != 0 )
      {
        v6 = !v4;
        v7 = new Object[2];
        v7[0] = "https://www.googleapis.com/auth/games";
        v7[1] = "https://www.googleapis.com/auth/games.firstparty";
        hn.a(v6, "Cannot have both %s and %s!", v7);
      }
      else
      {
        v8 = new Object[1];
        v8[0] = "https://www.googleapis.com/auth/games";
        hn.a(v4, "Games APIs requires %s to function.", v8);
      }
    }

    public final android.content.Intent b(int p0, int p1, boolean p2)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).b(p0, p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final void b()
 throws android.os.RemoteException {
      com.google.android.gms.games.internal.IGamesService v1;
      this.m = false;
      if ( this.c() )
      {
        try
        {
          v1 = (com.google.android.gms.games.internal.IGamesService)this.H();
          v1.c();
          this.c.b();
          v1.a(this.q);
        }
        catch ( android.os.RemoteException e )
        {
          GamesLog.j("GamesClientImpl", "Failed to notify client disconnect.");
        }
      }
      this.J();
      super.b();
    }

    public final void b(int p0)
    {
      this.l.b(p0);
    }

    public final void b(com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0)
    {
      try
      {
        this.c.b();
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$SignOutCompleteBinderCallbacks(this, p0));
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            int p1,
            boolean p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult> p0,
            String p1)
    {
      com.google.android.gms.games.internal.IGamesCallbacks v3;
      if ( p0 != null )
        v3 = new com.google.android.gms.games.internal.GamesClientImpl$AchievementUpdatedBinderCallback(this, p0);
      else
        v3 = null;
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(v3, p1, this.l.c(), this.l.b());
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult> p0,
            String p1,
            int p2)
    {
      com.google.android.gms.games.internal.IGamesCallbacks v4 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( p0 != null )
            {
            v4 = new com.google.android.gms.games.internal.GamesClientImpl$AchievementUpdatedBinderCallback(this, p0);
            { _pc = 2; continue _sm; }
            }
            v4 = null;
            _pc = 1;
            continue _sm;
          case 1:
            try
            {
            ((com.google.android.gms.games.internal.IGamesService)this.H()).b(v4, p1, p2, this.l.c(), this.l.b());
            return;
            }
            catch ( android.os.RemoteException e )
            {
            GamesLog.j("GamesClientImpl", "service died");
            return;
            }
            


          case 2:
            _pc = 1;
            continue _sm;
        }
      }
}

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> p0,
            String p1,
            int p2,
            int p3,
            int p4,
            boolean p5)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardScoresLoadedBinderCallback(this, p0), p1, p2, p3, p4, p5);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult> p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$ExtendedGamesLoadedBinderCallback(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.quest.Quests$ClaimMilestoneResult> p0,
            String p1,
            String p2)
    {
      try
      {
        this.c.b();
        ((com.google.android.gms.games.internal.IGamesService)this.H()).f(new com.google.android.gms.games.internal.GamesClientImpl$QuestMilestoneClaimBinderCallbacks(this, p0, p2), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LoadScoresResult> p0,
            String p1,
            String p2,
            int p3,
            int p4,
            int p5,
            boolean p6)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardScoresLoadedBinderCallback(this, p0), p1, p2, p3, p4, p5, p6);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.achievement.Achievements$LoadAchievementsResult> p0,
            String p1,
            String p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$AchievementsLoadedBinderCallback(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.snapshot.Snapshots$OpenSnapshotResult> p0,
            String p1,
            boolean p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).e(new com.google.android.gms.games.internal.GamesClientImpl$SnapshotOpenedBinderCallbacks(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LeaderboardMetadataResult> p0,
            boolean p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardsLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.quest.Quests$LoadQuestsResult> p0,
            boolean p1,
            String[] p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$QuestsLoadedBinderCallbacks(this, p0), p2, p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.request.Requests$UpdateRequestsResult> p0,
            String[] p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RequestsUpdatedBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(com.google.android.gms.games.multiplayer.realtime.RoomConfig p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RoomBinderCallbacks(this, p0.a(), p0.c(), p0.d()), this.p, p0.b(), p0.h(), this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(String p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).f(p0);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void b(String p0, int p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(p0, p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final com.google.android.gms.games.multiplayer.realtime.RealTimeSocket c(String p0)
    {
      com.google.android.gms.games.multiplayer.realtime.RealTimeSocket v2;
      if ( p0 == null || !ParticipantUtils.bn(p0) )
        throw new IllegalArgumentException("Bad participant ID");
      v2 = (com.google.android.gms.games.multiplayer.realtime.RealTimeSocket)this.i.get(p0);
      if ( v2 == null || v2.c() )
        return this.e(p0);
      return v2;
    }

    public final void c(int p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadOwnerCoverPhotoUrisResult> p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).j(new com.google.android.gms.games.internal.GamesClientImpl$OwnerCoverPhotoUrisLoadedBinderCallback(this, p0));
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            int p1,
            boolean p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.achievement.Achievements$UpdateAchievementResult> p0,
            String p1)
    {
      com.google.android.gms.games.internal.IGamesCallbacks v3;
      if ( p0 != null )
        v3 = new com.google.android.gms.games.internal.GamesClientImpl$AchievementUpdatedBinderCallback(this, p0);
      else
        v3 = null;
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(v3, p1, this.l.c(), this.l.b());
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadXpStreamResult> p0,
            String p1,
            int p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$PlayerXpStreamLoadedBinderCallback(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult> p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).e(new com.google.android.gms.games.internal.GamesClientImpl$ExtendedGamesLoadedBinderCallback(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult> p0,
            String p1,
            String p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).d(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchInitiatedBinderCallbacks(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.snapshot.Snapshots$LoadSnapshotsResult> p0,
            String p1,
            String p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$SnapshotsLoadedBinderCallbacks(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.leaderboard.Leaderboards$LeaderboardMetadataResult> p0,
            String p1,
            boolean p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).d(new com.google.android.gms.games.internal.GamesClientImpl$LeaderboardsLoadedBinderCallback(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.achievement.Achievements$LoadAchievementsResult> p0,
            boolean p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$AchievementsLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.request.Requests$UpdateRequestsResult> p0,
            String[] p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$RequestsUpdatedBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void c(String p0, int p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(p0, p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final android.content.Intent d(String p0)
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).i(p0);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final void d(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.internal.game.Acls$LoadAclResult> p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).h(new com.google.android.gms.games.internal.GamesClientImpl$NotifyAclLoadedBinderCallback(this, p0));
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void d(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            int p1,
            boolean p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).e(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void d(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).l(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchInitiatedBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void d(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadXpStreamResult> p0,
            String p1,
            int p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$PlayerXpStreamLoadedBinderCallback(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void d(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult> p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).f(new com.google.android.gms.games.internal.GamesClientImpl$ExtendedGamesLoadedBinderCallback(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void d(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult> p0,
            String p1,
            String p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).e(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchInitiatedBinderCallbacks(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void d(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Notifications$GameMuteStatusChangeResult> p0,
            String p1,
            boolean p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$GameMuteStatusChangedBinderCallback(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void d(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.event.Events$LoadEventsResult> p0,
            boolean p1)
    {
      try
      {
        this.c.b();
        ((com.google.android.gms.games.internal.IGamesService)this.H()).f(new com.google.android.gms.games.internal.GamesClientImpl$EventsLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final android.os.Bundle d_()
    {
      android.os.Bundle v1;
      try
      {
        v1 = ((com.google.android.gms.games.internal.IGamesService)this.H()).b();
        if ( v1 != null )
          v1.setClassLoader(com.google.android.gms.games.internal.GamesClientImpl.class.getClassLoader());
        return v1;
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    protected final String e()
    {
      return "com.google.android.gms.games.internal.IGamesService";
    }

    public final void e(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Notifications$ContactSettingLoadResult> p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).e(new com.google.android.gms.games.internal.GamesClientImpl$ContactSettingsLoadedBinderCallback(this, p0), false);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void e(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            int p1,
            boolean p2,
            boolean p3)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).d(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void e(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).m(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchInitiatedBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void e(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.Invitations$LoadInvitationsResult> p0,
            String p1,
            int p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$InvitationsLoadedBinderCallback(this, p0), p1, p2, false);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void e(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult> p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(new com.google.android.gms.games.internal.GamesClientImpl$ExtendedGamesLoadedBinderCallback(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void e(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.snapshot.Snapshots$LoadSnapshotsResult> p0,
            boolean p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).d(new com.google.android.gms.games.internal.GamesClientImpl$SnapshotsLoadedBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    protected final String f()
    {
      return "com.google.android.gms.games.service.START";
    }

    public final void f(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Notifications$InboxCountResult> p0)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).t(new com.google.android.gms.games.internal.GamesClientImpl$InboxCountsLoadedBinderCallback(this, p0), null);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void f(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LeaveMatchResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).o(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchLeftBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void f(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.request.Requests$LoadRequestSummariesResult> p0,
            String p1,
            int p2)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).a(new com.google.android.gms.games.internal.GamesClientImpl$RequestSummariesLoadedBinderCallbacks(this, p0), p1, p2);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void f(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void f(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Notifications$ContactSettingLoadResult> p0,
            boolean p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).e(new com.google.android.gms.games.internal.GamesClientImpl$ContactSettingsLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final String g()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).d();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final void g(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$CancelMatchResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).n(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchCanceledBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void g(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadPlayersResult> p0,
            String p1,
            int p2,
            boolean p3,
            boolean p4)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(new com.google.android.gms.games.internal.GamesClientImpl$PlayersLoadedBinderCallback(this, p0), p1, null, p2, p3, p4);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final String h()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).e();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final void h(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LoadMatchResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).p(new com.google.android.gms.games.internal.GamesClientImpl$TurnBasedMatchLoadedBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final com.google.android.gms.games.Player i()
    {
      com.google.android.gms.games.PlayerBuffer v1;
      this.G();
      synchronized ( this )
      {
        if ( this.j == null )
        {
          try
          {
            v1 = new com.google.android.gms.games.PlayerBuffer(((com.google.android.gms.games.internal.IGamesService)this.H()).f());
            try
            {
              if ( v1.b() > 0 )
                this.j = (com.google.android.gms.games.PlayerEntity)v1.a(0).h();
            }
            finally
            {
              v1.c();
            }
          }
          catch ( android.os.RemoteException e )
          {
            GamesLog.j("GamesClientImpl", "service died");
          }
        }
        return (com.google.android.gms.games.Player)this.j;
      }
    }

    public final void i(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.quest.Quests$AcceptQuestResult> p0,
            String p1)
    {
      try
      {
        this.c.b();
        ((com.google.android.gms.games.internal.IGamesService)this.H()).u(new com.google.android.gms.games.internal.GamesClientImpl$QuestAcceptedBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final com.google.android.gms.games.Game j()
    {
      com.google.android.gms.games.GameBuffer v1;
      this.G();
      synchronized ( this )
      {
        if ( this.k == null )
        {
          try
          {
            v1 = new com.google.android.gms.games.GameBuffer(((com.google.android.gms.games.internal.IGamesService)this.H()).h());
            try
            {
              if ( v1.b() > 0 )
                this.k = (com.google.android.gms.games.GameEntity)v1.a(0).h();
            }
            finally
            {
              v1.c();
            }
          }
          catch ( android.os.RemoteException e )
          {
            GamesLog.j("GamesClientImpl", "service died");
          }
        }
        return (com.google.android.gms.games.Game)this.k;
      }
    }

    public final void j(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.snapshot.Snapshots$DeleteSnapshotResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).r(new com.google.android.gms.games.internal.GamesClientImpl$SnapshotDeletedBinderCallbacks(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final android.content.Intent k()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).k();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final void k(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).e(new com.google.android.gms.games.internal.GamesClientImpl$ExtendedGamesLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final android.content.Intent l()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).l();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final void l(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadGameInstancesResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).f(new com.google.android.gms.games.internal.GamesClientImpl$GameInstancesLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final android.content.Intent m()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).m();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final void m(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.GamesMetadata$LoadGameSearchSuggestionsResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).q(new com.google.android.gms.games.internal.GamesClientImpl$GameSearchSuggestionsLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final android.content.Intent n()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).n();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final void n(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Players$LoadXpForGameCategoriesResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).s(new com.google.android.gms.games.internal.GamesClientImpl$PlayerXpForGameCategoriesLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void o()
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).b(this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void o(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.multiplayer.Invitations$LoadInvitationsResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).k(new com.google.android.gms.games.internal.GamesClientImpl$InvitationsLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void p()
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).c(this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void p(
            com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).j(new com.google.android.gms.games.internal.GamesClientImpl$NotifyAclUpdatedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void q()
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).e(this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void q(
            com.google.android.gms.common.api.a$d<com.google.android.gms.games.Notifications$GameMuteStatusLoadResult> p0,
            String p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).i(new com.google.android.gms.games.internal.GamesClientImpl$GameMuteStatusLoadedBinderCallback(this, p0), p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final void r()
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.H()).d(this.q);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

    public final android.content.Intent s()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).o();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final android.content.Intent t()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).p();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final int u()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).r();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return 4368;
      }
    }

    public final String v()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).a();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final int w()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).i();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return -1;
      }
    }

    public final android.content.Intent x()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).u();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return null;
      }
    }

    public final int y()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).s();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return -1;
      }
    }

    public final int z()
    {
      try
      {
        return ((com.google.android.gms.games.internal.IGamesService)this.H()).t();
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
        return -1;
      }
    }

}
