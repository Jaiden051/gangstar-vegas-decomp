// Decompiled from classes.dex (SourceFile: bl$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class bl$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.br a;
    final com.google.android.gms.internal.bl b;

    // Methods
    bl$1(com.google.android.gms.internal.bl p0, com.google.android.gms.internal.br p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      try
      {
        this.a.c.c();
      }
      catch ( android.os.RemoteException v1 )
      {
        ev.c("Could not destroy mediation adapter.", v1);
      }
    }

}
