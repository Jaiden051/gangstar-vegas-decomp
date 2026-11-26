// Decompiled from classes.dex (SourceFile: EventsImpl$LoadImpl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

abstract class EventsImpl$LoadImpl extends com.google.android.gms.games.Games$BaseGamesApiMethodImpl {
    // Methods
    protected EventsImpl$LoadImpl()
    {
      super();
    }

    /* synthetic */ EventsImpl$LoadImpl(int p0)
    {
      this();
    }

    private com.google.android.gms.games.event.Events$LoadEventsResult b(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.games.event.Events$LoadEventsResult)new com.google.android.gms.games.internal.api.EventsImpl$LoadImpl$1(this, p0);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.games.internal.api.EventsImpl$LoadImpl$1(this, p0);
    }

}
