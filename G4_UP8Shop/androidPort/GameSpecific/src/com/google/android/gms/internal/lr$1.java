// Decompiled from classes.dex (SourceFile: lr$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.api.Status;
class lr$1 extends com.google.android.gms.wallet.Wallet$b {
    // Fields
    final int a;
    final com.google.android.gms.internal.lr b;

    // Methods
    lr$1(com.google.android.gms.internal.lr p0, int p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.internal.ls p0)
 throws android.os.RemoteException {
      p0.a(this.a);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.ls)p0).a(this.a);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

}
