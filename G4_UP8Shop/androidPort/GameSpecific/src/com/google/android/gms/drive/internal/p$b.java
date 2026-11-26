// Decompiled from classes.dex (SourceFile: p$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.common.api.Status;
class p$b extends com.google.android.gms.drive.internal.c {
    // Fields
    private final com.google.android.gms.common.api.a$d a;

    // Methods
    public p$b(com.google.android.gms.common.api.a$d<com.google.android.gms.drive.DriveApi$DriveIdResult> p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$c(p0, null));
    }

    public final void a(com.google.android.gms.drive.internal.OnDriveIdResponse p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$c(Status.a, p0.a()));
    }

    public final void a(com.google.android.gms.drive.internal.OnMetadataResponse p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$c(Status.a, new com.google.android.gms.drive.internal.l(p0.a()).a()));
    }

}
