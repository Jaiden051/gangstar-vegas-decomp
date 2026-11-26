// Decompiled from classes.dex (SourceFile: z$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class z$1 implements java.lang.Runnable {
    // Fields
    final com.google.android.gms.internal.v a;
    final com.google.android.gms.internal.z b;
    private final java.lang.ref.WeakReference c;

    // Methods
    z$1(com.google.android.gms.internal.z p0, com.google.android.gms.internal.v p1)
    {
      super();
      this.b = p0;
      this.a = p1;
      this.c = new java.lang.ref.WeakReference(this.a);
    
    }

    public void run()
    {
      com.google.android.gms.internal.v v1;
      z.a(this.b, false);
      v1 = (com.google.android.gms.internal.v)this.c.get();
      if ( v1 != null )
        v1.b(z.a(this.b));
    }

}
