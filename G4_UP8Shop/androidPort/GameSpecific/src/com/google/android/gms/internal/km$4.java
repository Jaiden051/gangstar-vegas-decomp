// Decompiled from classes.dex (SourceFile: km$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.api.Status;
class km$4 extends com.google.android.gms.internal.km$b {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.internal.km b;

    // Methods
    km$4(com.google.android.gms.internal.km p0, String p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.plus.internal.e p0)
 throws android.os.RemoteException {
      p0.a(this.a);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.plus.internal.e)p0).a(this.a);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

}
