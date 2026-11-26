// Decompiled from classes.dex (SourceFile: s$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

import com.google.android.gms.common.api.Status;
class s$c extends com.google.android.gms.drive.internal.c {
    // Fields
    private final com.google.android.gms.common.api.a$d a;
    private final com.google.android.gms.drive.DriveFile$DownloadProgressListener b;

    // Methods
    public s$c(
            com.google.android.gms.common.api.a$d<com.google.android.gms.drive.DriveApi$ContentsResult> p0,
            com.google.android.gms.drive.DriveFile$DownloadProgressListener p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    public final void a(com.google.android.gms.common.api.Status p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$a(p0, null));
    }

    public final void a(com.google.android.gms.drive.internal.OnContentsResponse p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.drive.internal.p$a(Status.a, p0.a()));
    }

    public final void a(com.google.android.gms.drive.internal.OnDownloadProgressResponse p0)
    {
      if ( this.b != null )
      {
        p0.a();
        p0.b();
        this.b.a();
      }
    }

}
