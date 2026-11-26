// Decompiled from classes.dex (SourceFile: GamesClientImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

class GamesClientImpl$1 extends com.google.android.gms.games.internal.events.EventIncrementManager {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;

    // Methods
    GamesClientImpl$1(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      super();
      this.a = p0;
    
    }

    public final com.google.android.gms.games.internal.events.EventIncrementCache a()
    {
      return new com.google.android.gms.games.internal.GamesClientImpl$GameClientEventIncrementCache(this.a);
    }

}
