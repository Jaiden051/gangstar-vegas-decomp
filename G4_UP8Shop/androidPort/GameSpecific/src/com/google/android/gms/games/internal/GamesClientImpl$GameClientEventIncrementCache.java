// Decompiled from classes.dex (SourceFile: GamesClientImpl$GameClientEventIncrementCache.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

class GamesClientImpl$GameClientEventIncrementCache extends com.google.android.gms.games.internal.events.EventIncrementCache {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;

    // Methods
    public GamesClientImpl$GameClientEventIncrementCache(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      super(p0.E().getMainLooper(), 1000);
      this.a = p0;
    
    }

    protected final void a(String p0, int p1)
    {
      try
      {
        ((com.google.android.gms.games.internal.IGamesService)this.a.H()).e(p0, p1);
      }
      catch ( android.os.RemoteException e )
      {
        GamesLog.j("GamesClientImpl", "service died");
      }
    }

}
