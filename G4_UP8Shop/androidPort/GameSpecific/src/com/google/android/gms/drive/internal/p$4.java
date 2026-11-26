// Decompiled from classes.dex (SourceFile: p$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.drive.DriveId;
class p$4 extends com.google.android.gms.drive.internal.p$d {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.drive.internal.p b;

    // Methods
    p$4(com.google.android.gms.drive.internal.p p0, String p1)
    {
      super(p0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.GetMetadataRequest(DriveId.aL(this.a)), new com.google.android.gms.drive.internal.p$b((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.GetMetadataRequest(DriveId.aL(this.a)), new com.google.android.gms.drive.internal.p$b((com.google.android.gms.common.api.a$d)this));
    }

}
