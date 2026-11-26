// Decompiled from classes.dex (SourceFile: EventsImpl$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class EventsImpl$3 extends com.google.android.gms.games.internal.api.EventsImpl$UpdateImpl {
    // Fields
    final java.lang.String a;
    final int b;
    final com.google.android.gms.games.internal.api.EventsImpl c;

    // Methods
    EventsImpl$3(com.google.android.gms.games.internal.api.EventsImpl p0, String p1, int p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a(this.a, this.b);
    }

    /* bridge */ public final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a(this.a, this.b);
    }

}
