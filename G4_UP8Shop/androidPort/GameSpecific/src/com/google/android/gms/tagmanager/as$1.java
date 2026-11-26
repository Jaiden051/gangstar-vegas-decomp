// Decompiled from classes.dex (SourceFile: as$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class as$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.tagmanager.ar a;
    final long b;
    final java.lang.String c;
    final com.google.android.gms.tagmanager.as d;

    // Methods
    as$1(com.google.android.gms.tagmanager.as p0, com.google.android.gms.tagmanager.ar p1, long p2, String p4)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p4;
    
    }

    public void run()
    {
      com.google.android.gms.tagmanager.cx v1;
      if ( as.a(this.d) == null )
      {
        v1 = cx.mL();
        v1.a(as.b(this.d), this.a);
        as.a(this.d, v1.b());
      }
      as.a(this.d).a(this.b, this.c);
    }

}
