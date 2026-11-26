// Decompiled from classes.dex (SourceFile: en$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class en$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.en a;

    // Methods
    en$1(com.google.android.gms.internal.en p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try {
      en.a(this.a, Thread.currentThread());
      this.a.a();
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
