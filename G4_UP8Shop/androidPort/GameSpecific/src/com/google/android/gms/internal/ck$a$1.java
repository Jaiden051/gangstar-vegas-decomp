// Decompiled from classes.dex (SourceFile: ck$a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class ck$a$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.ck a;
    final com.google.android.gms.internal.ck$a b;
    private final java.lang.ref.WeakReference c;

    // Methods
    ck$a$1(com.google.android.gms.internal.ck$a p0, com.google.android.gms.internal.ck p1)
    {
      super();
      this.b = p0;
      this.a = p1;
      this.c = new java.lang.ref.WeakReference(this.a);
    
    }

    public void run()
    {
      com.google.android.gms.internal.ck v1;
      v1 = (com.google.android.gms.internal.ck)this.c.get();
      if ( !ck$a.a(this.b) && v1 != null )
      {
        v1.e();
        this.b.b();
      }
    }

}
