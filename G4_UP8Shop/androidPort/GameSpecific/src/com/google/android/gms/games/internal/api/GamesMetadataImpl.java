// Decompiled from classes.dex (SourceFile: GamesMetadataImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class GamesMetadataImpl implements com.google.android.gms.games.GamesMetadata {
    // Methods
    public GamesMetadataImpl()
    {
      super();
    }

    public final com.google.android.gms.games.Game a(
            com.google.android.gms.common.api.GoogleApiClient p0)
    {
      return Games.c(p0).j();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.GamesMetadata$LoadGamesResult> b(
            com.google.android.gms.common.api.GoogleApiClient p0)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.GamesMetadataImpl$1(this));
    }

}
