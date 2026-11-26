// Decompiled from classes.dex (SourceFile: PlayersImpl$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class PlayersImpl$3 extends com.google.android.gms.games.internal.api.PlayersImpl$LoadPlayersImpl {
    // Fields
    final int a;
    final boolean b;
    final com.google.android.gms.games.internal.api.PlayersImpl c;

    // Methods
    PlayersImpl$3(com.google.android.gms.games.internal.api.PlayersImpl p0, int p1, boolean p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, false, this.b);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, false, this.b);
    }

}
