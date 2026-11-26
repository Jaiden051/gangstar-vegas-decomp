// Decompiled from classes.dex (SourceFile: cb$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class cb$3 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.cb a;

    // Methods
    cb$3(com.google.android.gms.internal.cb p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      try
      {
        cb.a(this.a).e();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdLoaded.", v1);
      }
    }

}
