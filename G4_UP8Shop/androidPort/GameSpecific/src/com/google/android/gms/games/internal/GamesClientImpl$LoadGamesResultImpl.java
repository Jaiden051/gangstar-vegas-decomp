// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadGamesResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadGamesResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.GamesMetadata$LoadGamesResult {
    // Fields
    private final com.google.android.gms.games.GameBuffer c;

    // Methods
    GamesClientImpl$LoadGamesResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.GameBuffer(p0);
    }

    public final com.google.android.gms.games.GameBuffer b()
    {
      return this.c;
    }

}
