// Decompiled from classes.dex (SourceFile: s$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class s$1 extends com.google.android.gms.drive.internal.s$d {
    // Fields
    final int a;
    final com.google.android.gms.drive.DriveFile$DownloadProgressListener b;
    final com.google.android.gms.drive.internal.s c;

    // Methods
    s$1(
            com.google.android.gms.drive.internal.s p0,
            int p1,
            com.google.android.gms.drive.DriveFile$DownloadProgressListener p2)
    {
      super(p0, 0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.OpenContentsRequest(this.c.a(), this.a), new com.google.android.gms.drive.internal.s$c((com.google.android.gms.common.api.a$d)this, this.b));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.OpenContentsRequest(this.c.a(), this.a), new com.google.android.gms.drive.internal.s$c((com.google.android.gms.common.api.a$d)this, this.b));
    }

}
