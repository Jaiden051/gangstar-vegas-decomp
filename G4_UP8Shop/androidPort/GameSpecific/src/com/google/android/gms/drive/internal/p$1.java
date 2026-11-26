// Decompiled from classes.dex (SourceFile: p$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class p$1 extends com.google.android.gms.drive.internal.p$i {
    // Fields
    final com.google.android.gms.drive.query.Query a;
    final com.google.android.gms.drive.internal.p b;

    // Methods
    p$1(com.google.android.gms.drive.internal.p p0, com.google.android.gms.drive.query.Query p1)
    {
      super(p0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.QueryRequest(this.a), new com.google.android.gms.drive.internal.p$h((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.QueryRequest(this.a), new com.google.android.gms.drive.internal.p$h((com.google.android.gms.common.api.a$d)this));
    }

}
