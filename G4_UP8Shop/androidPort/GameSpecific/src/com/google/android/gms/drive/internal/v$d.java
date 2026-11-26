// Decompiled from classes.dex (SourceFile: v$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.common.api.Status;
class v$d extends com.google.android.gms.drive.internal.c {
    // Fields
    private final com.google.android.gms.common.api.a$d a;

    // Methods
    public v$d(com.google.android.gms.common.api.a$d<com.google.android.gms.drive.DriveResource$MetadataResult> p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.v$e(p0, null));
    }

    public final void a(com.google.android.gms.drive.internal.OnMetadataResponse p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.v$e(Status.a, new com.google.android.gms.drive.internal.l(p0.a())));
    }

}
