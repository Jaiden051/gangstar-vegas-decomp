// Decompiled from classes.dex (SourceFile: p$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class p$2 extends com.google.android.gms.drive.internal.p$g {
    // Fields
    final com.google.android.gms.drive.internal.p a;

    // Methods
    p$2(com.google.android.gms.drive.internal.p p0)
    {
      super(p0);
      this.a = p0;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.CreateContentsRequest(), new com.google.android.gms.drive.internal.p$f((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.CreateContentsRequest(), new com.google.android.gms.drive.internal.p$f((com.google.android.gms.common.api.a$d)this));
    }

}
