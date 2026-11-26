// Decompiled from classes.dex (SourceFile: GamesClientImpl$TurnBasedMatchResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

abstract class GamesClientImpl$TurnBasedMatchResult extends com.google.android.gms.common.api.b {
    // Fields
    final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch c;

    // Methods
    GamesClientImpl$TurnBasedMatchResult(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer v2;
      v2 = new com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatchBuffer(p0);
      try
      {
        if ( v2.b() > 0 )
        {
          this.c = (com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)((com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch)v2.b(0)).h();
          return;
        }
        this.c = null;
      }
      finally
      {
        v2.c();
      }
    
    }

    public final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch b()
    {
      return this.c;
    }

}
