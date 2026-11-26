// Decompiled from classes.dex (SourceFile: gi$1$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.cast.Cast$Listener;
import com.google.android.gms.cast.Cast;
class gi$1$1 implements java.lang.Runnable {
    // Fields
    final int a;
    final com.google.android.gms.internal.gi$1 b;

    // Methods
    gi$1$1(com.google.android.gms.internal.gi$1 p0, int p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      if ( gi.d(this.b.a) != null )
      {
        gi.d(this.b.a);
        Cast$Listener.onApplicationDisconnected$13462e();
      }
    }

}
