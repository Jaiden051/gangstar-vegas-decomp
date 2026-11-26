// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$LeaveMatchImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class TurnBasedMultiplayerImpl$LeaveMatchImpl$1 implements com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LeaveMatchResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$LeaveMatchImpl b;

    // Methods
    TurnBasedMultiplayerImpl$LeaveMatchImpl$1(
            com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$LeaveMatchImpl p0,
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

    public final com.google.android.gms.games.multiplayer.turnbased.TurnBasedMatch b()
    {
      return null;
    }

}
