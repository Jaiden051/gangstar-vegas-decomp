// Decompiled from classes.dex (SourceFile: s$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class s$3 extends com.google.android.gms.drive.internal.s$a {
    // Fields
    final com.google.android.gms.drive.Contents a;
    final com.google.android.gms.drive.MetadataChangeSet b;
    final com.google.android.gms.drive.internal.s c;

    // Methods
    s$3(
            com.google.android.gms.drive.internal.s p0,
            com.google.android.gms.drive.Contents p1,
            com.google.android.gms.drive.MetadataChangeSet p2)
    {
      super(p0, 0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      this.a.c();
      p0.g().a(new com.google.android.gms.drive.internal.CloseContentsAndUpdateMetadataRequest(this.c.a, this.b.b(), this.a, false, null), new com.google.android.gms.drive.internal.aw((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      this.a.c();
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.CloseContentsAndUpdateMetadataRequest(this.c.a, this.b.b(), this.a, false, null), new com.google.android.gms.drive.internal.aw((com.google.android.gms.common.api.a$d)this));
    }

}
