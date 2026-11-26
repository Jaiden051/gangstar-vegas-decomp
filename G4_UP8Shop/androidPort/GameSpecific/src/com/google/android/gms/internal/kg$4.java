// Decompiled from classes.dex (SourceFile: kg$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

final class kg$4 extends com.google.android.gms.internal.ke$a {
    // Fields
    final android.content.Context a;
    final android.net.Uri b;
    final com.google.android.gms.internal.ke c;

    // Methods
    kg$4(android.content.Context p0, android.net.Uri p1, com.google.android.gms.internal.ke p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void a(int p0, android.os.Bundle p1, int p2, android.content.Intent p3)
 throws android.os.RemoteException {
      kg.b(this.a, this.b);
      this.c.a(p0, p1, p2, p3);
    }

}
