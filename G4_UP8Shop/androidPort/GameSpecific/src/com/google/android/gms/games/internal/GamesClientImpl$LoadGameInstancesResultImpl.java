// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadGameInstancesResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadGameInstancesResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.GamesMetadata$LoadGameInstancesResult {
    // Fields
    private final com.google.android.gms.games.internal.game.GameInstanceBuffer c;

    // Methods
    GamesClientImpl$LoadGameInstancesResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.internal.game.GameInstanceBuffer(p0);
    }

}
