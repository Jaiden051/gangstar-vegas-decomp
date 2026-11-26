// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadPlayersResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadPlayersResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.Players$LoadPlayersResult {
    // Fields
    private final com.google.android.gms.games.PlayerBuffer c;

    // Methods
    GamesClientImpl$LoadPlayersResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      this.c = new com.google.android.gms.games.PlayerBuffer(p0);
    }

    public final com.google.android.gms.games.PlayerBuffer b()
    {
      return this.c;
    }

}
