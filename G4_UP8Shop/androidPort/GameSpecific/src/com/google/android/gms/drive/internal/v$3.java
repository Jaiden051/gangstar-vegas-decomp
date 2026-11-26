// Decompiled from classes.dex (SourceFile: v$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class v$3 extends com.google.android.gms.drive.internal.v$f {
    // Fields
    final com.google.android.gms.drive.MetadataChangeSet a;
    final com.google.android.gms.drive.internal.v b;

    // Methods
    v$3(com.google.android.gms.drive.internal.v p0, com.google.android.gms.drive.MetadataChangeSet p1)
    {
      super(p0, 0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.UpdateMetadataRequest(this.b.a, this.a.b()), new com.google.android.gms.drive.internal.v$d((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.UpdateMetadataRequest(this.b.a, this.a.b()), new com.google.android.gms.drive.internal.v$d((com.google.android.gms.common.api.a$d)this));
    }

}
