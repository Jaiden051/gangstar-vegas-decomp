// Decompiled from classes.dex (SourceFile: v$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class v$3 implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.tagmanager.v b;

    // Methods
    v$3(com.google.android.gms.tagmanager.v p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      v.a(this.b, this.a);
    }

}
