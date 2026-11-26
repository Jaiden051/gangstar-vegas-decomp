// Decompiled from classes.dex (SourceFile: PlayersImpl$18.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class PlayersImpl$18 extends com.google.android.gms.games.internal.api.PlayersImpl$LoadPlayersImpl {
    // Fields
    java.lang.String a;
    int b;
    boolean c;

    // Methods
    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

}
