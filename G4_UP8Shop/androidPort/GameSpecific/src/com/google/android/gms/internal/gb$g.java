// Decompiled from classes.dex (SourceFile: gb$g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class gb$g extends com.google.android.gms.internal.ga {
    // Fields
    private final com.google.android.gms.common.api.a$d a;

    // Methods
    public gb$g(com.google.android.gms.common.api.a$d<com.google.android.gms.common.api.Status> p0)
    {
      super();
      this.a = (com.google.android.gms.common.api.a$d)hn.b(p0, "Holder must not be null");
    }

    public final void a()
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.common.api.Status(0));
    }

}
