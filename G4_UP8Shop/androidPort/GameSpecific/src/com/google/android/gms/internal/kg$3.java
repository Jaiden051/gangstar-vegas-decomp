// Decompiled from classes.dex (SourceFile: kg$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class kg$3 extends com.google.android.gms.internal.kg$b {
    // Fields
    final android.net.Uri a;
    final com.google.android.gms.internal.kg b;

    // Methods
    kg$3(com.google.android.gms.internal.kg p0, android.net.Uri p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    protected final void a(android.content.Context p0, com.google.android.gms.internal.kf p1)
 throws android.os.RemoteException {
      kg.b(p0, p1, new com.google.android.gms.internal.kg$c((com.google.android.gms.common.api.a$d)this), this.a, null);
    }

}
