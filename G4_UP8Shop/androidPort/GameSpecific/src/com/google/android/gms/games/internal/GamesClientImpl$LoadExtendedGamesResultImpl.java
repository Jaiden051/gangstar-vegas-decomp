// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadExtendedGamesResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadExtendedGamesResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.GamesMetadata$LoadExtendedGamesResult {
    // Fields
    private final com.google.android.gms.games.internal.game.ExtendedGameBuffer c;

    // Methods
    GamesClientImpl$LoadExtendedGamesResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.internal.game.ExtendedGameBuffer(p0);
    }

}
