// Decompiled from classes.dex (SourceFile: cb$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class cb$7 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.cb a;

    // Methods
    cb$7(com.google.android.gms.internal.cb p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      try
      {
        cb.a(this.a).d();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not call onAdOpened.", v1);
      }
    }

}
