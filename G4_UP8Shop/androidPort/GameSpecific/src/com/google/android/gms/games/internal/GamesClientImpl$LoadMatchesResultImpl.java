// Decompiled from classes.dex (SourceFile: GamesClientImpl$LoadMatchesResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$LoadMatchesResultImpl implements com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$LoadMatchesResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final com.google.android.gms.games.multiplayer.turnbased.LoadMatchesResponse b;

    // Methods
    GamesClientImpl$LoadMatchesResultImpl(com.google.android.gms.common.api.Status p0, android.os.Bundle p1)
    {
      super();
      this.a = p0;
      this.b = new com.google.android.gms.games.multiplayer.turnbased.LoadMatchesResponse(p1);
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.games.multiplayer.turnbased.LoadMatchesResponse b()
    {
      return this.b;
    }

    public final void d()
    {
      this.b.a();
    }

}
