// Decompiled from classes.dex (SourceFile: u$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class u$2 extends com.google.android.gms.drive.internal.u$c {
    // Fields
    final com.google.android.gms.drive.MetadataChangeSet a;
    final com.google.android.gms.drive.internal.u b;

    // Methods
    u$2(com.google.android.gms.drive.internal.u p0, com.google.android.gms.drive.MetadataChangeSet p1)
    {
      super(p0, 0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.CreateFolderRequest(this.b.a(), this.a.b()), new com.google.android.gms.drive.internal.u$b((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.CreateFolderRequest(this.b.a(), this.a.b()), new com.google.android.gms.drive.internal.u$b((com.google.android.gms.common.api.a$d)this));
    }

}
