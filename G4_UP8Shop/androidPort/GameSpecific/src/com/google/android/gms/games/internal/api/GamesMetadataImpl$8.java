// Decompiled from classes.dex (SourceFile: GamesMetadataImpl$8.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class GamesMetadataImpl$8 extends com.google.android.gms.games.internal.api.GamesMetadataImpl$LoadExtendedGamesImpl {
    // Fields
    int a;
    int b;
    boolean c;
    boolean d;

    // Methods
    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d);
    }

}
