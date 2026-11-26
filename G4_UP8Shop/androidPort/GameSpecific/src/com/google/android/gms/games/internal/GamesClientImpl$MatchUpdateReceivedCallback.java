// Decompiled from classes.dex (SourceFile: GamesClientImpl$MatchUpdateReceivedCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$MatchUpdateReceivedCallback extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch b;

    // Methods
    GamesClientImpl$MatchUpdateReceivedCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.turnbased.OnTurnBasedMatchUpdateReceivedListener p1,
            com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch p2)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
    
    }

    private void a(
            com.google.android.gms.games.multiplayer.turnbased.OnTurnBasedMatchUpdateReceivedListener p0)
    {
      p0.a();
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ protected final void a(Object p0)
    {
      ((com.google.android.gms.games.multiplayer.turnbased.OnTurnBasedMatchUpdateReceivedListener)p0).a();
    }

}
