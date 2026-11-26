// Decompiled from classes.dex (SourceFile: PlayersImpl$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class PlayersImpl$4 extends com.google.android.gms.games.internal.api.PlayersImpl$LoadPlayersImpl {
    // Fields
    final int a;
    final com.google.android.gms.games.internal.api.PlayersImpl b;

    // Methods
    PlayersImpl$4(com.google.android.gms.games.internal.api.PlayersImpl p0, int p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, true, false);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, true, false);
    }

}
