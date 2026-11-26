// Decompiled from classes.dex (SourceFile: km$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class km$2 extends com.google.android.gms.internal.km$a {
    // Fields
    final int a;
    final java.lang.String b;
    final android.net.Uri c;
    final java.lang.String d;
    final java.lang.String e;
    final com.google.android.gms.internal.km f;

    // Methods
    km$2(com.google.android.gms.internal.km p0, int p1, String p2, android.net.Uri p3, String p4, String p5)
    {
      super(0);
      this.f = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
    
    }

    private void a(com.google.android.gms.plus.internal.e p0)
 throws android.os.RemoteException {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d, this.e);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.plus.internal.e)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c, this.d, this.e);
    }

}
