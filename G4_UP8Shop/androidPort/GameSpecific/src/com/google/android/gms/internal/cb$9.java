// Decompiled from classes.dex (SourceFile: cb$9.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class cb$9 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.cb a;

    // Methods
    cb$9(com.google.android.gms.internal.cb p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      try
      {
        cb.a(this.a).b();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdClosed.", v1);
      }
    }

}
