// Decompiled from classes.dex (SourceFile: EventsImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.games.Games;
public final class EventsImpl implements com.google.android.gms.games.event.Events {
    // Methods
    public EventsImpl()
    {
      super();
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.event.Events$LoadEventsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.EventsImpl$2(this, p1));
    }

    public final com.google.android.gms.common.api.PendingResult<com.google.android.gms.games.event.Events$LoadEventsResult> a(
            com.google.android.gms.common.api.GoogleApiClient p0,
            boolean p1,
            String[] p2)
 throws android.os.RemoteException {
      return (com.google.android.gms.common.api.PendingResult)p0.a(new com.google.android.gms.games.internal.api.EventsImpl$1(this, p1, p2));
    }

    public final void a(com.google.android.gms.common.api.GoogleApiClient p0, String p1, int p2)
 throws android.os.RemoteException {
      com.google.android.gms.games.internal.GamesClientImpl v4;
      v4 = Games.d(p0);
      if ( v4.c() )
        v4.a(p1, p2);
      else
        p0.b(new com.google.android.gms.games.internal.api.EventsImpl$3(this, p1, p2));
    }

}
