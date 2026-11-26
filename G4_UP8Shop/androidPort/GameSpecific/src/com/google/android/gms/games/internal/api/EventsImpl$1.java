// Decompiled from classes.dex (SourceFile: EventsImpl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class EventsImpl$1 extends com.google.android.gms.games.internal.api.EventsImpl$LoadImpl {
    // Fields
    final boolean a;
    final java.lang.String[] b;
    final com.google.android.gms.games.internal.api.EventsImpl c;

    // Methods
    EventsImpl$1(com.google.android.gms.games.internal.api.EventsImpl p0, boolean p1, String[] p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

    /* bridge */ public final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

}
