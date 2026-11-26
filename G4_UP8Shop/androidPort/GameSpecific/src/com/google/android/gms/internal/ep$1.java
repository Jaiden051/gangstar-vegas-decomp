// Decompiled from classes.dex (SourceFile: ep$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class ep$1 implements java.lang.Runnable {
    // Fields
    final android.content.Context a;

    // Methods
    ep$1(android.content.Context p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      Object v1; // RETVAL
      Object v2;
      v1 = ep.bP();
      v2 = v1;
      synchronized ( v2 )
      {
        ep.w(ep.n(this.a));
        ep.bP().notifyAll();
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

}
