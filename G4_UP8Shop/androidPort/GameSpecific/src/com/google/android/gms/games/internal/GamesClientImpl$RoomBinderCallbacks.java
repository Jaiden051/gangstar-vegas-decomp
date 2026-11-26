// Decompiled from classes.dex (SourceFile: GamesClientImpl$RoomBinderCallbacks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.internal.hn;
final class GamesClientImpl$RoomBinderCallbacks extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener b;
    private final com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener c;
    private final com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener d;

    // Methods
    public GamesClientImpl$RoomBinderCallbacks(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p1)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener)hn.b(p1, "Callbacks must not be null");
      this.c = null;
      this.d = null;
    
    }

    public GamesClientImpl$RoomBinderCallbacks(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener p1,
            com.google.android.gms.games.multiplayer.realtime.RoomStatusUpdateListener p2,
            com.google.android.gms.games.multiplayer.realtime.RealTimeMessageReceivedListener p3)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.games.multiplayer.realtime.RoomUpdateListener)hn.b(p1, "Callbacks must not be null");
      this.c = p2;
      this.d = p3;
    
    }

    public final void a(com.google.android.gms.common.data.DataHolder p0, String[] p1)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$PeerInvitedToRoomCallback(this.a, this.c, p0, p1));
    }

    public final void a(
            com.google.android.gms.games.multiplayer.realtime.RealTimeMessage p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$MessageReceivedCallback(this.a, this.d, p0));
    }

    public final void b(com.google.android.gms.common.data.DataHolder p0, String[] p1)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$PeerJoinedRoomCallback(this.a, this.c, p0, p1));
    }

    public final void c(com.google.android.gms.common.data.DataHolder p0, String[] p1)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$PeerLeftRoomCallback(this.a, this.c, p0, p1));
    }

    public final void d(int p0, String p1)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$LeftRoomCallback(this.a, this.b, p0, p1));
    }

    public final void d(com.google.android.gms.common.data.DataHolder p0, String[] p1)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$PeerDeclinedCallback(this.a, this.c, p0, p1));
    }

    public final void d(String p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$P2PConnectedCallback(this.a, this.c, p0));
    }

    public final void e(com.google.android.gms.common.data.DataHolder p0, String[] p1)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$PeerConnectedCallback(this.a, this.c, p0, p1));
    }

    public final void e(String p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$P2PDisconnectedCallback(this.a, this.c, p0));
    }

    public final void f(com.google.android.gms.common.data.DataHolder p0, String[] p1)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$PeerDisconnectedCallback(this.a, this.c, p0, p1));
    }

    public final void s(com.google.android.gms.common.data.DataHolder p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$RoomCreatedCallback(this.a, this.b, p0));
    }

    public final void t(com.google.android.gms.common.data.DataHolder p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$JoinedRoomCallback(this.a, this.b, p0));
    }

    public final void u(com.google.android.gms.common.data.DataHolder p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$RoomConnectingCallback(this.a, this.c, p0));
    }

    public final void v(com.google.android.gms.common.data.DataHolder p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$RoomAutoMatchingCallback(this.a, this.c, p0));
    }

    public final void w(com.google.android.gms.common.data.DataHolder p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$RoomConnectedCallback(this.a, this.b, p0));
    }

    public final void x(com.google.android.gms.common.data.DataHolder p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$ConnectedToRoomCallback(this.a, this.c, p0));
    }

    public final void y(com.google.android.gms.common.data.DataHolder p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$DisconnectedFromRoomCallback(this.a, this.c, p0));
    }

}
