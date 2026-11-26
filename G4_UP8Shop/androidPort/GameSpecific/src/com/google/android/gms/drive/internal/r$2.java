// Decompiled from classes.dex (SourceFile: r$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class r$2 extends com.google.android.gms.drive.internal.p$j {
    // Fields
    final com.google.android.gms.drive.DriveId a;
    final int b;
    final com.google.android.gms.drive.internal.x c;
    final com.google.android.gms.drive.internal.r d;

    // Methods
    r$2(
            com.google.android.gms.drive.internal.r p0,
            com.google.android.gms.drive.DriveId p1,
            int p2,
            com.google.android.gms.drive.internal.x p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.RemoveEventListenerRequest(this.a, this.b), this.c, null, new com.google.android.gms.drive.internal.aw((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.RemoveEventListenerRequest(this.a, this.b), this.c, null, new com.google.android.gms.drive.internal.aw((com.google.android.gms.common.api.a$d)this));
    }

}
