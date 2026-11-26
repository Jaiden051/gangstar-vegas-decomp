// Decompiled from classes.dex (SourceFile: GamesClientImpl$SendRequestResultImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$SendRequestResultImpl extends com.google.android.gms.common.api.b implements com.google.android.gms.games.request.Requests$SendRequestResult {
    // Fields
    private final com.google.android.gms.games.request.GameRequest c;

    // Methods
    GamesClientImpl$SendRequestResultImpl(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
      com.google.android.gms.games.request.GameRequestBuffer v2;
      v2 = new com.google.android.gms.games.request.GameRequestBuffer(p0);
      try
      {
        if ( v2.b() > 0 )
        {
          this.c = (com.google.android.gms.games.request.GameRequest)((com.google.android.gms.games.request.GameRequest)v2.b(0)).h();
          return;
        }
        this.c = null;
      }
      finally
      {
        v2.c();
      }
    
    }

}
