// Decompiled from classes.dex (SourceFile: kg$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import com.google.android.gms.panorama.Panorama;
abstract class kg$d extends com.google.android.gms.common.api.a$b {
    // Methods
    protected kg$d()
    {
      super(Panorama.a);
    }

    private void a(com.google.android.gms.internal.kh p0)
 throws android.os.RemoteException {
      this.a(p0.E(), (com.google.android.gms.internal.kf)p0.H());
    }

    protected abstract void a(android.content.Context p0, com.google.android.gms.internal.kf p1) throws android.os.RemoteException;

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      com.google.android.gms.internal.kh v2;
      v2 = (com.google.android.gms.internal.kh)p0;
      this.a(v2.E(), (com.google.android.gms.internal.kf)v2.H());
    }

}
