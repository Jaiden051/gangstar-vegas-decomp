// Decompiled from classes.dex (SourceFile: GamesClientImpl$TurnBasedMatchInitiatedBinderCallbacks.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal;

import com.google.android.gms.internal.hn;
final class GamesClientImpl$TurnBasedMatchInitiatedBinderCallbacks extends com.google.android.gms.games.internal.AbstractGamesCallbacks {
    // Fields
    final com.google.android.gms.games.internal.GamesClientImpl a;
    private final com.google.android.gms.common.api.a$d b;

    // Methods
    public GamesClientImpl$TurnBasedMatchInitiatedBinderCallbacks(
            com.google.android.gms.games.internal.GamesClientImpl p0,
            com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.a = p0;
      this.b = (com.google.android.gms.common.api.a$d)hn.b(p1, "Holder must not be null");
    
    }

    public final void o(
            com.google.android.gms.common.data.DataHolder p0)
 throws android.os.RemoteException {
      this.b.a(new com.google.android.gms.games.internal.GamesClientImpl$InitiateMatchResultImpl(p0));
    }

}
