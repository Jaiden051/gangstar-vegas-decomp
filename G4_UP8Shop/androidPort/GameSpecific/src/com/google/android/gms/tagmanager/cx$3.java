// Decompiled from classes.dex (SourceFile: cx$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cx$3 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.tagmanager.cx a;

    // Methods
    cx$3(com.google.android.gms.tagmanager.cx p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      cx.e(this.a).a();
    }

}
