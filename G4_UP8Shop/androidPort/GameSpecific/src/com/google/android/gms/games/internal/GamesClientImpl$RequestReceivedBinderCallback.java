// Decompiled from classes.dex (SourceFile: GamesClientImpl$RequestReceivedBinderCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$RequestReceivedBinderCallback extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.games.request.OnRequestReceivedListener b;

    // Methods
    GamesClientImpl$RequestReceivedBinderCallback(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.request.OnRequestReceivedListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void b(String p0)
    {
      this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$RequestRemovedCallback(this.a, this.b, p0));
    }

    public final void m(com.google.android.gms.common.data.DataHolder p0)
    {
      com.google.android.gms.games.request.GameRequestBuffer v2;
      com.google.android.gms.games.request.GameRequest v3;
      v2 = new com.google.android.gms.games.request.GameRequestBuffer(p0);
      v3 = null;
      try
      {
        if ( v2.b() > 0 )
          v3 = (com.google.android.gms.games.request.GameRequest)((com.google.android.gms.games.request.GameRequest)v2.b(0)).h();
      }
      finally
      {
        v2.c();
      }
      if ( v3 != null )
        this.a.a(new com.google.android.gms.games.internal.GamesClientImpl$RequestReceivedCallback(this.a, this.b, v3));
    }

}
