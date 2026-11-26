// Decompiled from classes.dex (SourceFile: gp$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
class gp$a implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.gp a;

    // Methods
    private gp$a(com.google.android.gms.internal.gp p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ gp$a(com.google.android.gms.internal.gp p0, int p1)
    {
      this(p0);
    }

    public void run()
    {
      try {
      boolean v1;
      long v2;
      java.util.Iterator i;
      Object v4;
      java.util.Iterator v5;
      int v6;
      v1 = false;
      gp.a(this.a, false);
      v2 = SystemClock.elapsedRealtime();
      for ( i = gp.a(this.a).iterator(); i.hasNext(); ((com.google.android.gms.internal.gs)i.next()).b(v2, 3) )
        ;
      v4 = gs.a;
      synchronized ( v4 )
      {
        v5 = gp.a(this.a).iterator();
        while ( v5.hasNext() )
        {
          v6 = ((com.google.android.gms.internal.gs)v5.next()).b() || v1 ? 1 : 0;
          v1 = v6 != 0;
        }
      }
      gp.b(this.a, v1);
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
