// Decompiled from classes.dex (SourceFile: p$h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.common.api.Status;
class p$h extends com.google.android.gms.drive.internal.c {
    // Fields
    private final com.google.android.gms.common.api.a$d a;

    // Methods
    public p$h(com.google.android.gms.common.api.a$d<com.google.android.gms.drive.DriveApi$MetadataBufferResult> p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$e(p0, null, false));
    }

    public final void a(com.google.android.gms.drive.internal.OnListEntriesResponse p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$e(Status.a, new com.google.android.gms.drive.MetadataBuffer(p0.a(), null), p0.b()));
    }

}
