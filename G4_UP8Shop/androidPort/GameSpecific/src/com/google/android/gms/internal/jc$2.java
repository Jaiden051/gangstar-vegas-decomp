// Decompiled from classes.dex (SourceFile: jc$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.api.Status;
class jc$2 extends com.google.android.gms.internal.jc$a {
    // Fields
    final com.google.android.gms.location.LocationRequest a;
    final com.google.android.gms.location.LocationListener b;
    final android.os.Looper c;
    final com.google.android.gms.internal.jc d;

    // Methods
    jc$2(
            com.google.android.gms.internal.jc p0,
            com.google.android.gms.location.LocationRequest p1,
            com.google.android.gms.location.LocationListener p2,
            android.os.Looper p3)
    {
      super(0);
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    private void a(com.google.android.gms.internal.jh p0)
 throws android.os.RemoteException {
      p0.a(this.a, this.b, this.c);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.jh)p0).a(this.a, this.b, this.c);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

}
