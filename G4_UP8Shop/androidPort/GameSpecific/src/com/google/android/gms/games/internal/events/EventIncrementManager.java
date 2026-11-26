// Decompiled from classes.dex (SourceFile: EventIncrementManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.events;

public abstract class EventIncrementManager {
    // Fields
    private final java.util.concurrent.atomic.AtomicReference a;

    // Methods
    public EventIncrementManager()
    {
      super();
      this.a = new java.util.concurrent.atomic.AtomicReference();
    }

    protected abstract com.google.android.gms.games.internal.events.EventIncrementCache a();

    public final void a(String p0, int p1)
    {
      com.google.android.gms.games.internal.events.EventIncrementCache v3;
      v3 = (com.google.android.gms.games.internal.events.EventIncrementCache)this.a.get();
      if ( v3 == null )
      {
        v3 = this.a();
        if ( !this.a.compareAndSet(null, v3) )
          v3 = (com.google.android.gms.games.internal.events.EventIncrementCache)this.a.get();
      }
      v3.b(p0, p1);
    }

    public final void b()
    {
      com.google.android.gms.games.internal.events.EventIncrementCache v1;
      v1 = (com.google.android.gms.games.internal.events.EventIncrementCache)this.a.get();
      if ( v1 != null )
        v1.a();
    }

}
