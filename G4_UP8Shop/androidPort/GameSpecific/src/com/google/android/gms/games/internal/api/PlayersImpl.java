// Decompiled from classes.dex (SourceFile: PlayersImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class PlayersImpl implements com.google.android.gms.games.Players {
    // Methods
    public PlayersImpl()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.Players$LoadPlayersResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.PlayersImpl$4(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.Players$LoadPlayersResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            boolean p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.PlayersImpl$3(this, p1, p2));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.Players$LoadPlayersResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            String p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.PlayersImpl$1(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.Players$LoadPlayersResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.PlayersImpl$9(this, p1));
    }

    public final String a(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).h();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.Players$LoadPlayersResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.PlayersImpl$6(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.Players$LoadPlayersResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0,
            int p1,
            boolean p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.PlayersImpl$5(this, p1, p2));
    }

    public final com.google.android.gms.games.Player b(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).i();
    }

    public final android.content.Intent c(com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).s();
    }

}
