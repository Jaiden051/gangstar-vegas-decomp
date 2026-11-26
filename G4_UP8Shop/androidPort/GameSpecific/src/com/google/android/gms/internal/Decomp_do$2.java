// Decompiled from classes.dex (SourceFile: Decomp_do$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class Decomp_do$2 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.eg a;
    final com.google.android.gms.internal.Decomp_do b;

    // Methods
    Decomp_do$2(com.google.android.gms.internal.Decomp_do p0, com.google.android.gms.internal.eg p1)
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
        Decomp_do.b(this.b).a(this.a);
        com.gameloft.android.DecompRT.monitorExit(v2);
      }
    }

}
