// Decompiled from classes.dex (SourceFile: PlayersImpl$LoadPlayersImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.common.data.DataHolder;
class PlayersImpl$LoadPlayersImpl$1 implements com.google.android.gms.games.Players$LoadPlayersResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.PlayersImpl$LoadPlayersImpl b;

    // Methods
    PlayersImpl$LoadPlayersImpl$1(
            com.google.android.gms.games.internal.api.PlayersImpl$LoadPlayersImpl p0,
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

    public final com.google.android.gms.games.PlayerBuffer b()
    {
      return new com.google.android.gms.games.PlayerBuffer(DataHolder.af(14));
    }

    public final void d()
    {
      ;
    }

}
