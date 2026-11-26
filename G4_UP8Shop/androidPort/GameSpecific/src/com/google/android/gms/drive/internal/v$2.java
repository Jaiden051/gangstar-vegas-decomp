// Decompiled from classes.dex (SourceFile: v$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.drive.internal;

class v$2 extends com.google.android.gms.drive.internal.v$c {
    // Fields
    final com.google.android.gms.drive.internal.v a;

    // Methods
    v$2(com.google.android.gms.drive.internal.v p0)
    {
      super(p0, 0);
      this.a = p0;
    
    }

    private void a(com.google.android.gms.drive.internal.r p0)
 throws android.os.RemoteException {
      p0.g().a(new com.google.android.gms.drive.internal.ListParentsRequest(this.a.a), new com.google.android.gms.drive.internal.v$b((com.google.android.gms.common.api.a$d)this));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.drive.internal.r)p0).g().a(new com.google.android.gms.drive.internal.ListParentsRequest(this.a.a), new com.google.android.gms.drive.internal.v$b((com.google.android.gms.common.api.a$d)this));
    }

}
