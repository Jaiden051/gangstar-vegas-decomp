// Decompiled from classes.dex (SourceFile: GamesMetadataImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class GamesMetadataImpl$1 extends com.google.android.gms.games.internal.api.GamesMetadataImpl$LoadGamesImpl {
    // Fields
    final com.google.android.gms.games.internal.api.GamesMetadataImpl a;

    // Methods
    GamesMetadataImpl$1(com.google.android.gms.games.internal.api.GamesMetadataImpl p0)
    {
      super(0);
      this.a = p0;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this);
    }

}
