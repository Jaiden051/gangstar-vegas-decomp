// Decompiled from classes.dex (SourceFile: PlayersImpl$LoadXpStreamResultImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class PlayersImpl$LoadXpStreamResultImpl$1 implements com.google.android.gms.games.Players$LoadXpStreamResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.PlayersImpl$LoadXpStreamResultImpl b;

    // Methods
    PlayersImpl$LoadXpStreamResultImpl$1(
            com.google.android.gms.games.internal.api.PlayersImpl$LoadXpStreamResultImpl p0,
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

}
