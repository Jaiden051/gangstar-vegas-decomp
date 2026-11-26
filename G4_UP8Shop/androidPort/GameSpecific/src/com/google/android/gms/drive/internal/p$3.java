// Decompiled from classes.dex (SourceFile: p$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class p$3 extends com.google.android.gms.drive.internal.p$j {
    // Fields
    final com.google.android.gms.drive.Contents a;
    final com.google.android.gms.drive.internal.p b;

    // Methods
    p$3(com.google.android.gms.drive.internal.p p0, com.google.android.gms.drive.Contents p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.CloseContentsRequest(this.a, false), new com.google.android.gms.drive.internal.aw((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.CloseContentsRequest(this.a, false), new com.google.android.gms.drive.internal.aw((com.google.android.gms.common.api.a$d)this));
    }

}
