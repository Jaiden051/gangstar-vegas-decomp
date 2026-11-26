// Decompiled from classes.dex (SourceFile: EventIncrementCache.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.games.internal.events;

public abstract class EventIncrementCache {
    // Fields
    private android.os.Handler a;
    final java.lang.Object b;
    private boolean c;
    private java.util.HashMap d;
    private int e;

    // Methods
    public EventIncrementCache(android.os.Looper p0, int p1)
    {
      super();
      this.b = new Object();
      this.a = new android.os.Handler(p0);
      this.d = new java.util.HashMap();
      this.e = 1000;
    }

    /* synthetic */ static void a(com.google.android.gms.games.internal.events.EventIncrementCache p0)
    {
      Object b;
      b = p0.b;
      synchronized ( b )
      {
        p0.c = false;
        p0.a();
      }
    }

    private void b()
    {
      Object b;
      b = this.b;
      synchronized ( b )
      {
        this.c = false;
        this.a();
      }
    }

    public final void a()
    {
      Object b;
      java.util.Iterator v2;
      java.util.Map.Entry v3;
      b = this.b;
      synchronized ( b )
      {
        v2 = this.d.entrySet().iterator();
        while ( v2.hasNext() )
        {
          v3 = (java.util.Map.Entry)v2.next();
          this.a((String)v3.getKey(), ((java.util.concurrent.atomic.AtomicInteger)v3.getValue()).get());
        }
        this.d.clear();
      }
    }

    protected abstract void a(java.lang.String p0, int p1);

    public final void b(String p0, int p1)
    {
      Object b;
      java.util.concurrent.atomic.AtomicInteger v4;
      b = this.b;
      synchronized ( b )
      {
        if ( !this.c )
        {
          this.c = true;
          this.a.postDelayed((Runnable)new com.google.android.gms.games.internal.events.EventIncrementCache$1(this), this.e);
        }
        v4 = (java.util.concurrent.atomic.AtomicInteger)this.d.get(p0);
        if ( v4 == null )
        {
          v4 = new java.util.concurrent.atomic.AtomicInteger();
          this.d.put(p0, v4);
        }
        v4.addAndGet(p1);
      }
    }

}
