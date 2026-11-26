// Decompiled from classes.dex (SourceFile: kn$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class kn$2 extends com.google.android.gms.internal.kn$a {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.internal.kn b;

    // Methods
    kn$2(com.google.android.gms.internal.kn p0, String p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.plus.internal.e p0)
 throws android.os.RemoteException {
      this.a(p0.a((com.google.android.gms.common.api.a$d)this, this.a));
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      this.a(((com.google.android.gms.plus.internal.e)p0).a((com.google.android.gms.common.api.a$d)this, this.a));
    }

}
