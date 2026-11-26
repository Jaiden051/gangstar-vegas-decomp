// Decompiled from classes.dex (SourceFile: GamesMetadataImpl$LoadGamesImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class GamesMetadataImpl$LoadGamesImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected GamesMetadataImpl$LoadGamesImpl()
    {
      super();
    }

    /* synthetic */ GamesMetadataImpl$LoadGamesImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.GamesMetadata$LoadGamesResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.GamesMetadata$LoadGamesResult)new com.google.android.gms.games.internal.api.GamesMetadataImpl$LoadGamesImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.GamesMetadataImpl$LoadGamesImpl$1(this, p0);
    }

}
