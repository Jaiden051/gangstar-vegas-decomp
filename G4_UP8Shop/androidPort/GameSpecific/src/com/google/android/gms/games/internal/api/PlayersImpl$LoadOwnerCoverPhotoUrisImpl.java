// Decompiled from classes.dex (SourceFile: PlayersImpl$LoadOwnerCoverPhotoUrisImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class PlayersImpl$LoadOwnerCoverPhotoUrisImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected PlayersImpl$LoadOwnerCoverPhotoUrisImpl()
    {
      super();
    }

    private com.google.android.gms.games.Players$LoadOwnerCoverPhotoUrisResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.Players$LoadOwnerCoverPhotoUrisResult)new com.google.android.gms.games.internal.api.PlayersImpl$LoadOwnerCoverPhotoUrisImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.PlayersImpl$LoadOwnerCoverPhotoUrisImpl$1(this, p0);
    }

}
