// Decompiled from classes.dex (SourceFile: GamesClientImpl$CancelMatchResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$CancelMatchResultImpl implements com.google.android.gms.games.multiplayer.turnbased.TurnBasedMultiplayer$CancelMatchResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final java.lang.String b;

    // Methods
    GamesClientImpl$CancelMatchResultImpl(com.google.android.gms.common.api.Status p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final String b()
    {
      return this.b;
    }

}
