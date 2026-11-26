// Decompiled from classes.dex (SourceFile: dy$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class dy$1 implements java.lang.Runnable {
    // Fields
    final android.content.Context a;
    final com.google.android.gms.internal.dt b;
    final com.google.android.gms.internal.ea c;
    final com.google.android.gms.internal.ez$a d;
    final java.lang.String e;

    // Methods
    dy$1(
            android.content.Context p0,
            com.google.android.gms.internal.dt p1,
            com.google.android.gms.internal.ea p2,
            com.google.android.gms.internal.ez$a p3,
            String p4)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
    
    }

    public final void run()
    {
      com.google.android.gms.internal.ey v1;
      com.google.android.gms.internal.ez v2; // RETVAL
    
      v1 = ey.a(this.a, new com.google.android.gms.internal.am(), false, false, null, this.b.k);
      v1.setWillNotDraw(true);
      this.c.a(v1);
      v2 = v1.f();
      v2.a("/invalidRequest", this.c.a);
      v2.a("/loadAdURL", this.c.b);
      v2.a("/log", bc.g);
      v2.a(this.d);
      ev.z("Loading the JS library.");
      v1.loadUrl(this.e);
    }

}
