// Decompiled from classes.dex (SourceFile: kg$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class kg$1 extends com.google.android.gms.internal.kg$d {
    // Fields
    android.net.Uri a;
    android.os.Bundle b;

    // Methods
    private static com.google.android.gms.panorama.PanoramaApi$a aj(com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.panorama.PanoramaApi$a)new com.google.android.gms.internal.kd(p0, null, 0);
    }

    /* synthetic */ protected final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.internal.kd(p0, null, 0);
    }

    protected final void a(android.content.Context p0, com.google.android.gms.internal.kf p1)
 throws android.os.RemoteException {
      kg.b(p0, p1, new com.google.android.gms.internal.kg$a((com.google.android.gms.common.api.a$d)this), this.a, this.b);
    }

}
