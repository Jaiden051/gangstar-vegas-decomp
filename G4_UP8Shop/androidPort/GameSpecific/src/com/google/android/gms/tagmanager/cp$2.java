// Decompiled from classes.dex (SourceFile: cp$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class cp$2 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.lf$a a;
    final com.google.android.gms.tagmanager.cp b;

    // Methods
    cp$2(com.google.android.gms.tagmanager.cp p0, com.google.android.gms.internal.lf$a p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      this.b.b(this.a);
    }

}
