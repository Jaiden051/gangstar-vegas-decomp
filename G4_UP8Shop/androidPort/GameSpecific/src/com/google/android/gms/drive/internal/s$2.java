// Decompiled from classes.dex (SourceFile: s$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class s$2 extends com.google.android.gms.drive.internal.s$b {
    // Fields
    final com.google.android.gms.drive.Contents a;
    final com.google.android.gms.drive.internal.s b;

    // Methods
    s$2(com.google.android.gms.drive.internal.s p0, com.google.android.gms.drive.Contents p1)
    {
      super(p0, 0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      this.a.c();
      p0.g().a(new com.google.android.gms.drive.internal.CloseContentsRequest(this.a, true), new com.google.android.gms.drive.internal.aw((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      this.a.c();
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.CloseContentsRequest(this.a, true), new com.google.android.gms.drive.internal.aw((com.google.android.gms.common.api.a$d)this));
    }

}
