// Decompiled from classes.dex (SourceFile: Decomp_do$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class Decomp_do$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.Decomp_do a;

    // Methods
    Decomp_do$1(com.google.android.gms.internal.Decomp_do p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      try {
      this.a.A_();
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
