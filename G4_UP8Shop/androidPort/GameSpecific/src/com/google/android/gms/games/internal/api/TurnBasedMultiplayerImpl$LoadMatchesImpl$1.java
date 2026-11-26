// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$LoadMatchesImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class TurnBasedMultiplayerImpl$LoadMatchesImpl$1 implements com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LoadMatchesResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$LoadMatchesImpl b;

    // Methods
    TurnBasedMultiplayerImpl$LoadMatchesImpl$1(
            com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$LoadMatchesImpl p0,
            com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.games.multiplayer.turnbased.LoadMatchesResponse b()
    {
      return new com.google.android.gms.games.multiplayer.turnbased.LoadMatchesResponse(new android.os.Bundle());
    }

    public final void d()
    {
      ;
    }

}
