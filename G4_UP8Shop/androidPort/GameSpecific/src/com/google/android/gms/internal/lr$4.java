// Decompiled from classes.dex (SourceFile: lr$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.api.Status;
class lr$4 extends com.google.android.gms.wallet.Wallet$b {
    // Fields
    final java.lang.String a;
    final java.lang.String b;
    final int c;
    final com.google.android.gms.internal.lr d;

    // Methods
    lr$4(com.google.android.gms.internal.lr p0, String p1, String p2, int p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    private void a(com.google.android.gms.internal.ls p0)
 throws android.os.RemoteException {
      p0.a(this.a, this.b, this.c);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.ls)p0).a(this.a, this.b, this.c);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

}
