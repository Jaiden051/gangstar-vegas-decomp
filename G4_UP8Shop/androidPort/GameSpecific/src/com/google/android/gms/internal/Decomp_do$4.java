// Decompiled from classes.dex (SourceFile: Decomp_do$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class Decomp_do$4 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.dp a;
    final com.google.android.gms.internal.Decomp_do b;

    // Methods
    Decomp_do$4(com.google.android.gms.internal.Decomp_do p0, com.google.android.gms.internal.dp p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      Object v1; // RETVAL
      Object v2;
      v1 = Decomp_do.a(this.b);
      v2 = v1;
      synchronized ( v2 )
      {
        if ( Decomp_do.c(this.b).e == -2 )
        {
          Decomp_do.d(this.b).f().a((com.google.android.gms.internal.ez$a)this.b);
          this.a.a(Decomp_do.c(this.b));
        }
        com.gameloft.android.DecompRT.monitorExit(v2);
        return;
      }
    }

}
