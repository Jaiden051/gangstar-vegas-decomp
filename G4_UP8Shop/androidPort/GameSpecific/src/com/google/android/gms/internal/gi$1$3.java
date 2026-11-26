// Decompiled from classes.dex (SourceFile: gi$1$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class gi$1$3 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.gf a;
    final com.google.android.gms.internal.gi$1 b;

    // Methods
    gi$1$3(com.google.android.gms.internal.gi$1 p0, com.google.android.gms.internal.gf p1)
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
