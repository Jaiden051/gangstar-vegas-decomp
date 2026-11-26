// Decompiled from classes.dex (SourceFile: gb$e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class gb$e extends com.google.android.gms.internal.ga {
    // Fields
    private final com.google.android.gms.common.api.a$d a;

    // Methods
    public gb$e(com.google.android.gms.common.api.a$d<com.google.android.gms.appstate.AppStateManager$StateResult> p0)
    {
      super();
      this.a = (com.google.android.gms.common.api.a$d)hn.b(p0, "Result holder must not be null");
    }

    public final void a(int p0, com.google.android.gms.common.data.DataHolder p1)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.internal.gb$f(p0, p1));
    }

}
