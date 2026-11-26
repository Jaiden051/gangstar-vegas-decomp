// Decompiled from classes.dex (SourceFile: cb$10.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class cb$10 implements java.lang.Runnable {
    // Fields
    final com.google.ads.AdRequest$ErrorCode a;
    final com.google.android.gms.internal.cb b;

    // Methods
    cb$10(com.google.android.gms.internal.cb p0, com.google.ads.AdRequest$ErrorCode p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      try
      {
        cb.a(this.b).a(cc.a(this.a));
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdFailedToLoad.", v1);
      }
    }

}
