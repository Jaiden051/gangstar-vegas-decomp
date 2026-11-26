// Decompiled from classes.dex (SourceFile: GamesMetadataImpl$LoadGameInstancesImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class GamesMetadataImpl$LoadGameInstancesImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected GamesMetadataImpl$LoadGameInstancesImpl()
    {
      super();
    }

    private com.google.android.gms.games.GamesMetadata$LoadGameInstancesResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.GamesMetadata$LoadGameInstancesResult)new com.google.android.gms.games.internal.api.GamesMetadataImpl$LoadGameInstancesImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.GamesMetadataImpl$LoadGameInstancesImpl$1(this, p0);
    }

}
