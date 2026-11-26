// Decompiled from classes.dex (SourceFile: Address$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.identity.intents;

import com.google.android.gms.common.api.Status;
final class Address$2 extends com.google.android.gms.identity.intents.Address$a {
    // Fields
    final com.google.android.gms.identity.intents.UserAddressRequest a;
    final int b;

    // Methods
    Address$2(com.google.android.gms.identity.intents.UserAddressRequest p0, int p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    private void a(com.google.android.gms.internal.ix p0)
 throws android.os.RemoteException {
      p0.a(this.a, this.b);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.ix)p0).a(this.a, this.b);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

}
