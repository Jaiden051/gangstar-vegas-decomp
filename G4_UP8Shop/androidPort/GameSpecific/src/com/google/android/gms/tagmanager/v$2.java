// Decompiled from classes.dex (SourceFile: v$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class v$2 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.tagmanager.DataLayer$c$a a;
    final com.google.android.gms.tagmanager.v b;

    // Methods
    v$2(com.google.android.gms.tagmanager.v p0, com.google.android.gms.tagmanager.DataLayer$c$a p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      try {
      this.a.a(v.a(this.b));
      } catch (Throwable _sdkEx) { throw new RuntimeException(_sdkEx); }
    }

}
