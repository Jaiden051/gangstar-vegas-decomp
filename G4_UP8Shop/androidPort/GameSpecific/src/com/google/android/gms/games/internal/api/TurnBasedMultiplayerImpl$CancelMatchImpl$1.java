// Decompiled from classes.dex (SourceFile: TurnBasedMultiplayerImpl$CancelMatchImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class TurnBasedMultiplayerImpl$CancelMatchImpl$1 implements com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$CancelMatchResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$CancelMatchImpl b;

    // Methods
    TurnBasedMultiplayerImpl$CancelMatchImpl$1(
            com.google.android.gms.games.internal.api.TurnBasedMultiplayerImpl$CancelMatchImpl p0,
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

    public final String b()
    {
      return TurnBasedMultiplayerImpl$CancelMatchImpl.a(this.b);
    }

}
