// Decompiled from classes.dex (SourceFile: GamesClientImpl$GameMuteStatusChangeResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$GameMuteStatusChangeResultImpl implements com.google.android.gms.games.Notifications$GameMuteStatusChangeResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final java.lang.String b;
    private final boolean c;

    // Methods
    public GamesClientImpl$GameMuteStatusChangeResultImpl(int p0, String p1, boolean p2)
    {
      super();
      this.a = new com.google.android.gms.common.api.Status(p0);
      this.b = p1;
      this.c = p2;
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

}
