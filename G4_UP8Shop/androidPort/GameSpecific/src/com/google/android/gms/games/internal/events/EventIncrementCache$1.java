// Decompiled from classes.dex (SourceFile: EventIncrementCache$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.events;

class EventIncrementCache$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.games.internal.events.EventIncrementCache a;

    // Methods
    EventIncrementCache$1(com.google.android.gms.games.internal.events.EventIncrementCache p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      EventIncrementCache.a(this.a);
    }

}
