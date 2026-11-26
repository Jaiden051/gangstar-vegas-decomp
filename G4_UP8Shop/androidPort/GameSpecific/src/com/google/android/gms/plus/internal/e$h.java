// Decompiled from classes.dex (SourceFile: e$h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.plus.internal;

final class e$h extends com.google.android.gms.internal.hc$b {
    // Fields
    final com.google.android.gms.plus.internal.e a;
    private final com.google.android.gms.common.api.Status b;

    // Methods
    public e$h(
            com.google.android.gms.plus.internal.e p0,
            com.google.android.gms.common.api.a$d p1,
            com.google.android.gms.common.api.Status p2)
    {
      super(p0, p1);
      this.a = p0;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0)
 throws android.os.RemoteException {
      this.a.b();
      if ( p0 != null )
        p0.a(this.b);
    }

    protected final void a()
    {
      ;
    }

    /* synthetic */ protected final void a(Object p0)
 throws android.os.RemoteException {
      com.google.android.gms.common.api.a$d v2;
      v2 = (com.google.android.gms.common.api.a$d)p0;
      this.a.b();
      if ( v2 != null )
        v2.a(this.b);
    }

}
