// Decompiled from classes.dex (SourceFile: ct$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ct$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.cw a;
    final android.content.Intent b;
    final com.google.android.gms.internal.ct c;

    // Methods
    ct$1(com.google.android.gms.internal.ct p0, com.google.android.gms.internal.cw p1, android.content.Intent p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public void run()
    {
      try
      {
        if ( ct.a(this.c).a(this.a.b, this.b) )
          ct.c(this.c).a(new com.google.android.gms.internal.cx(ct.b(this.c), this.a.c, true, -1, this.b, this.a));
        else
          ct.c(this.c).a(new com.google.android.gms.internal.cx(ct.b(this.c), this.a.c, false, -1, this.b, this.a));
      }
      catch ( android.os.RemoteException e )
      {
        ev.D("Fail to verify and dispatch pending transaction");
      }
    }

}
