// Decompiled from classes.dex (SourceFile: GamesClientImpl$MatchUpdateReceivedBinderCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$MatchUpdateReceivedBinderCallback extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.games.multiplayer.turnbased.OnTurnBasedMatchUpdateReceivedListener b;

    // Methods
    GamesClientImpl$MatchUpdateReceivedBinderCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.turnbased.OnTurnBasedMatchUpdateReceivedListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void c(String p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$MatchRemovedCallback(this.a, this.b, p0));
    }

    public final void r(com.google.android.gms.common.data.DataHolder p0)
    {
      com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer v2;
      com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch v3;
      v2 = new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer(p0);
      v3 = null;
      try
      {
        if ( v2.b() > 0 )
          v3 = (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)v2.b(0)).h();
      }
      finally
      {
        v2.c();
      }
      if ( v3 != null )
        this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$MatchUpdateReceivedCallback(this.a, this.b, v3));
    }

}
