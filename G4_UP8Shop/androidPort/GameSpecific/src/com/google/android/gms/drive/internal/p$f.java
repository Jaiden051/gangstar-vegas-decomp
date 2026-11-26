// Decompiled from classes.dex (SourceFile: p$f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.common.api.Status;
class p$f extends com.google.android.gms.drive.internal.c {
    // Fields
    private final com.google.android.gms.common.api.a$d a;

    // Methods
    public p$f(com.google.android.gms.common.api.a$d<com.google.android.gms.drive.DriveApi$ContentsResult> p0)
    {
      super();
      this.a = p0;
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$a(p0, null));
    }

    public final void a(com.google.android.gms.drive.internal.OnContentsResponse p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$a(Status.a, p0.a()));
    }

}
