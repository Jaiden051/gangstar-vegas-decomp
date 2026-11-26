// Decompiled from classes.dex (SourceFile: jb$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.common.api.Status;
class jb$1 extends com.google.android.gms.internal.jb$a {
    // Fields
    final long a;
    final android.app.PendingIntent b;
    final com.google.android.gms.internal.jb c;

    // Methods
    jb$1(com.google.android.gms.internal.jb p0, long p1, android.app.PendingIntent p3)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p3;
    
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
