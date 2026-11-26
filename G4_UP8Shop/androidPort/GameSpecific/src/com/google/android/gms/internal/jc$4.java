// Decompiled from classes.dex (SourceFile: jc$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.api.Status;
class jc$4 extends com.google.android.gms.internal.jc$a {
    // Fields
    final com.google.android.gms.location.LocationListener a;
    final com.google.android.gms.internal.jc b;

    // Methods
    jc$4(com.google.android.gms.internal.jc p0, com.google.android.gms.location.LocationListener p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.internal.jh p0)
 throws android.os.RemoteException {
      p0.a(this.a);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.jh)p0).a(this.a);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

}
