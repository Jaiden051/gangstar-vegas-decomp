// Decompiled from classes.dex (SourceFile: gi$1$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class gi$1$2 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.gk a;
    final com.google.android.gms.internal.gi$1 b;

    // Methods
    gi$1$2(com.google.android.gms.internal.gi$1 p0, com.google.android.gms.internal.gk p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      gi.a(this.b.a, this.a);
    }

}
