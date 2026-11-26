// Decompiled from classes.dex (SourceFile: GamesClientImpl$GameMuteStatusLoadResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$GameMuteStatusLoadResultImpl implements com.google.android.gms.games.Notifications$GameMuteStatusLoadResult {
    // Fields
    private final com.google.android.gms.common.api.Status a;
    private final java.lang.String b;
    private final boolean c;

    // Methods
    public GamesClientImpl$GameMuteStatusLoadResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super();
      try
      {
        this.a = new com.google.android.gms.common.api.Status(p0.e());
        if ( p0.g() > 0 )
        {
          this.b = p0.c("external_game_id", 0, 0);
          this.c = p0.d("muted", 0, 0);
          return;
        }
        this.b = null;
        this.c = false;
      }
      finally
      {
        p0.i();
      }
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

}
