// Decompiled from classes.dex (SourceFile: lr$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.api.Status;
class lr$2 extends com.google.android.gms.wallet.Wallet$b {
    // Fields
    final com.google.android.gms.wallet.MaskedWalletRequest a;
    final int b;
    final com.google.android.gms.internal.lr c;

    // Methods
    lr$2(com.google.android.gms.internal.lr p0, com.google.android.gms.wallet.MaskedWalletRequest p1, int p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.internal.ls p0)
 throws android.os.RemoteException {
      p0.a(this.a, this.b);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.ls)p0).a(this.a, this.b);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

}
