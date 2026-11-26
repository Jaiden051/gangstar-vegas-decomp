// Decompiled from classes.dex (SourceFile: EventsImpl$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.api;

class EventsImpl$2 extends com.google.android.gms.games.internal.api.EventsImpl$LoadImpl {
    // Fields
    final boolean a;
    final com.google.android.gms.games.internal.api.EventsImpl b;

    // Methods
    EventsImpl$2(com.google.android.gms.games.internal.api.EventsImpl p0, boolean p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    protected void a(com.google.android.gms.games.internal.GamesClientImpl p0)
    {
      p0.d((com.google.android.gms.common.api.a$d)this, this.a);
    }

    /* synthetic */ public final void a(com.google.android.gms.common.api.Api$a p0)
    {
      ((com.google.android.gms.games.internal.GamesClientImpl)p0).d((com.google.android.gms.common.api.a$d)this, this.a);
    }

}
