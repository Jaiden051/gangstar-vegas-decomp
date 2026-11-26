// Decompiled from classes.dex (SourceFile: u$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class u$1 extends com.google.android.gms.drive.internal.q {
    // Fields
    final com.google.android.gms.drive.Contents a;
    final com.google.android.gms.drive.MetadataChangeSet b;
    final int c;
    final boolean d;
    final java.lang.String e;
    final com.google.android.gms.drive.internal.u f;

    // Methods
    u$1(
            com.google.android.gms.drive.internal.u p0,
            com.google.android.gms.drive.Contents p1,
            com.google.android.gms.drive.MetadataChangeSet p2,
            int p3,
            boolean p4,
            String p5)
    {
      super();
      this.f = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p5;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      if ( this.a != null )
        this.a.c();
      p0.g().a(new com.google.android.gms.drive.internal.CreateFileRequest(this.f.a(), this.b.b(), this.a, this.c, this.d, this.e), new com.google.android.gms.drive.internal.u$a((com.google.android.gms.common.api.a$d)this));
    }

    private static com.google.android.gms.drive.DriveFolder$DriveFileResult s(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.drive.DriveFolder$DriveFileResult)new com.google.android.gms.drive.internal.u$d(p0, null);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.drive.internal.u$d(p0, null);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      com.google.android.gms.drive.internal.r v2;
      v2 = (com.google.android.gms.drive.internal.r)p0;
      if ( this.a != null )
        this.a.c();
      v2.g().a(new com.google.android.gms.drive.internal.CreateFileRequest(this.f.a(), this.b.b(), this.a, this.c, this.d, this.e), new com.google.android.gms.drive.internal.u$a((com.google.android.gms.common.api.a$d)this));
    }

}
