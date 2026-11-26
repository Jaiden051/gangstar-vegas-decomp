// Decompiled from classes.dex (SourceFile: jc$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.api.Status;
class jc$3 extends com.google.android.gms.internal.jc$a {
    // Fields
    final com.google.android.gms.location.LocationRequest a;
    final android.app.PendingIntent b;
    final com.google.android.gms.internal.jc c;

    // Methods
    jc$3(
            com.google.android.gms.internal.jc p0,
            com.google.android.gms.location.LocationRequest p1,
            android.app.PendingIntent p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.internal.jh p0)
 throws android.os.RemoteException {
      p0.a(this.a, this.b);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.internal.jh)p0).a(this.a, this.b);
      this.a((com.google.android.gms.common.api.Result)Status.a);
    }

}
