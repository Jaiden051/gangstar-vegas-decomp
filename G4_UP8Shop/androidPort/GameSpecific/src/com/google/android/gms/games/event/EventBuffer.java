// Decompiled from classes.dex (SourceFile: EventBuffer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.event;

public final class EventBuffer extends com.google.android.gms.common.data.DataBuffer {
    // Methods
    public EventBuffer(com.google.android.gms.common.data.DataHolder p0)
    {
      super(p0);
    }

    private com.google.android.gms.games.event.Event a(int p0)
    {
      return (com.google.android.gms.games.event.Event)new com.google.android.gms.games.event.EventRef(this.a, p0);
    }

    /* synthetic */ public final Object b(int p0)
    {
      return new com.google.android.gms.games.event.EventRef(this.a, p0);
    }

}
