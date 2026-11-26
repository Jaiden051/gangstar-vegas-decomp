// Decompiled from classes.dex (SourceFile: GamesClientImpl$RealTimeReliableMessageBinderCallbacks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

final class GamesClientImpl$RealTimeReliableMessageBinderCallbacks extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback a;
    final com.google.android.gms.games.internal.GamesClientImpl b;

    // Methods
    public GamesClientImpl$RealTimeReliableMessageBinderCallbacks(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.games.multiplayer.realtime.RealTimeMultiplayer$ReliableMessageSentCallback p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(int p0, int p1, String p2)
    {
      this.b.a(new com.google.android.gms.games.internal.GamesClientImpl$RealTimeMessageSentCallback(this.b, this.a, p0, p1, p2));
    }

}
