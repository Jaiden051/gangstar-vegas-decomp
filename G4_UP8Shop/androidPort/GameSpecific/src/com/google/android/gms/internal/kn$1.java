// Decompiled from classes.dex (SourceFile: kn$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class kn$1 extends com.google.android.gms.internal.kn$a {
    // Fields
    final int a;
    final java.lang.String b;
    final com.google.android.gms.internal.kn c;

    // Methods
    kn$1(com.google.android.gms.internal.kn p0, int p1, String p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.plus.internal.e p0)
 throws android.os.RemoteException {
      this.a(p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b));
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      this.a(((com.google.android.gms.plus.internal.e)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b));
    }

}
