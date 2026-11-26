// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class TurnBasedMultiplayerImpl implements com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer {
    // Methods
    public TurnBasedMultiplayerImpl()
    {
      super();
    }

    public final android.content.Intent a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).m();
    }

    public final android.content.Intent a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            int p2)
    {
      return Games.c(p0).a(p1, p2, true);
    }

    public final android.content.Intent a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            int p2,
            boolean p3)
    {
      return Games.c(p0).a(p1, p2, p3);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LoadMatchesResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            int[] p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$9(this, 0, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchConfig p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$1(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LeaveMatchResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            String p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$7(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            byte[] p2,
            String p3)
 throws android.os.RemoteException {
      return this.a(p0, p1, p2, p3, (com.google.android.gms.games.multiplayer.ParticipantResult[])null);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            byte[] p2,
            String p3,
            java.util.List<com.google.android.gms.games.multiplayer.ParticipantResult> p4)
 throws android.os.RemoteException {
      com.google.android.gms.games.multiplayer.ParticipantResult[] v6;
      if ( p4 != null )
        v6 = (com.google.android.gms.games.multiplayer.ParticipantResult[])p4.toArray(new com.google.android.gms.games.multiplayer.ParticipantResult[p4.size()]);
      else
        v6 = null;
      return this.a(p0, p1, p2, p3, v6);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            byte[] p2,
            String p3,
            com.google.android.gms.games.multiplayer.ParticipantResult[] p4)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$4(this, p1, p2, p3, p4));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            byte[] p2,
            java.util.List<com.google.android.gms.games.multiplayer.ParticipantResult> p3)
 throws android.os.RemoteException {
      com.google.android.gms.games.multiplayer.ParticipantResult[] v5;
      if ( p3 != null )
        v5 = (com.google.android.gms.games.multiplayer.ParticipantResult[])p3.toArray(new com.google.android.gms.games.multiplayer.ParticipantResult[p3.size()]);
      else
        v5 = null;
      return this.a(p0, p1, p2, v5);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1,
            byte[] p2,
            com.google.android.gms.games.multiplayer.ParticipantResult[] p3)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$5(this, p1, p2, p3));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LoadMatchesResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int[] p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$9(this, 0, p1));
    }

    public final void a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            com.google.android.gms.games.multiplayer.turnbased.OnTurnBasedMatchUpdateReceivedListener p1)
    {
      Games.c(p0).a(p1);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$InitiateMatchResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$3(this, p1));
    }

    public final void b(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      Games.c(p0).p();
    }

    public final int c(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).w();
    }

    public final void c(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
    {
      Games.c(p0).c(p1, 1);
    }

    public final void d(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
    {
      Games.c(p0).b(p1, 1);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$UpdateMatchResult> e(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return this.a(p0, p1, (byte[])null, (com.google.android.gms.games.multiplayer.ParticipantResult[])null);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LeaveMatchResult> f(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$6(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$CancelMatchResult> g(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.b(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$8(this, p1, p1));
    }

    public final void h(com.google.android.gms.common.api.GoogleApiClient p0, String p1)
    {
      Games.c(p0).b(p1);
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LoadMatchResult> i(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$10(this, p1));
    }

}
