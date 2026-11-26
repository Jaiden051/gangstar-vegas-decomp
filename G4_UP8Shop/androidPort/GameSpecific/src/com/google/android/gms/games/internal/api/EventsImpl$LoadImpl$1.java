// Decompiled from classes.dex (SourceFile: EventsImpl$LoadImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

import com.google.android.gms.common.data.DataHolder;
class EventsImpl$LoadImpl$1 implements com.google.android.gms.games.event.Events$LoadEventsResult {
    // Fields
    final com.google.android.gms.common.api.Status a;
    final com.google.android.gms.games.internal.api.EventsImpl$LoadImpl b;

    // Methods
    EventsImpl$LoadImpl$1(com.google.android.gms.games.internal.api.EventsImpl$LoadImpl p0, com.google.android.gms.common.api.Status p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final com.google.android.gms.common.api.Status D_()
    {
      return this.a;
    }

    public final com.google.android.gms.games.event.EventBuffer b()
    {
      return new com.google.android.gms.games.event.EventBuffer(DataHolder.af(14));
    }

    public final void d()
    {
      ;
    }

}
