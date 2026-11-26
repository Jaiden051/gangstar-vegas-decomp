// Decompiled from classes.dex (SourceFile: u$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.common.api.Status;
class u$b extends com.google.android.gms.drive.internal.c {
    // Fields
    private final com.google.android.gms.common.api.a$d a;

    // Methods
    public u$b(com.google.android.gms.common.api.a$d<com.google.android.gms.drive.DriveFolder$DriveFolderResult> p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.u$e(p0, null));
    }

    public final void a(com.google.android.gms.drive.internal.OnDriveIdResponse p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.u$e(Status.a, (com.google.android.gms.drive.DriveFolder)new com.google.android.gms.drive.internal.u(p0.a())));
    }

}
