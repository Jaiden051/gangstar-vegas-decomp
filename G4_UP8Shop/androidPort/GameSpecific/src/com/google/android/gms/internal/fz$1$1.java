// Decompiled from classes.dex (SourceFile: fz$1$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class fz$1$1 extends com.google.android.gms.internal.fx {
    // Fields
    final com.google.android.gms.internal.fz$1 b;

    // Methods
    fz$1$1(com.google.android.gms.internal.fz$1 p0, com.google.android.gms.common.api.a$d p1)
    {
      super(p1);
      this.b = p0;
    
    }

    public final void a(com.google.android.gms.common.api.Status p0, android.os.ParcelFileDescriptor p1)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.internal.fz$b(p0, p1));
    }

}
