// Decompiled from classes.dex (SourceFile: fz$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class fz$2 extends com.google.android.gms.internal.fz$d {
    // Fields
    final java.lang.String a;
    final com.google.android.gms.internal.fs[] b;
    final com.google.android.gms.internal.fz c;

    // Methods
    fz$2(com.google.android.gms.internal.fz p0, String p1, com.google.android.gms.internal.fs[] p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = (com.google.android.gms.internal.fs[])p2;
    
    }

    protected final void a(com.google.android.gms.internal.fv p0)
 throws android.os.RemoteException {
      p0.a(new com.google.android.gms.internal.fz$e((com.google.android.gms.common.api.a$d)this), this.a, this.b);
    }

}
