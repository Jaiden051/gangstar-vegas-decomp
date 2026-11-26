// Decompiled from classes.dex (SourceFile: s$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

class s$2 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.analytics.s a;

    // Methods
    s$2(com.google.android.gms.analytics.s p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      s.a(this.a);
    }

}
