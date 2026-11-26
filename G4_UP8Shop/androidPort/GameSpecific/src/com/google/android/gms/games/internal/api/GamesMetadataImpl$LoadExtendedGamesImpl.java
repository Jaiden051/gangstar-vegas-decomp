// Decompiled from classes.dex (SourceFile: GamesMetadataImpl$LoadExtendedGamesImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class GamesMetadataImpl$LoadExtendedGamesImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected GamesMetadataImpl$LoadExtendedGamesImpl()
    {
      super();
    }

    private com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult)new com.google.android.gms.games.internal.api.GamesMetadataImpl$LoadExtendedGamesImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.GamesMetadataImpl$LoadExtendedGamesImpl$1(this, p0);
    }

}
