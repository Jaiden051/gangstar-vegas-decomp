// Decompiled from classes.dex (SourceFile: Cast$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

public abstract class Cast$a extends com.google.android.gms.common.api.a$b {
    // Methods
    public Cast$a()
    {
      super(Cast.d);
    }

    public final void a(int p0)
 throws android.os.RemoteException {
      this.a(this.a(new com.google.android.gms.common.api.Status(2001)));
    }

    public final void a(int p0, String p1)
 throws android.os.RemoteException {
      this.a(this.a(new com.google.android.gms.common.api.Status(2001, p1, null)));
    }

}
