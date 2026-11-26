// Decompiled from classes.dex (SourceFile: au$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class au$6 extends com.google.android.gms.wearable.internal.a {
    // Fields
    final com.google.android.gms.common.api.a$d a;
    final com.google.android.gms.wearable.internal.au b;

    // Methods
    au$6(com.google.android.gms.wearable.internal.au p0, com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.wearable.internal.t p0)
 throws android.os.RemoteException {
      java.util.ArrayList v2;
      v2 = new java.util.ArrayList();
      v2.addAll(p0.c);
      this.a.a(new com.google.android.gms.wearable.internal.ah$a(new com.google.android.gms.common.api.Status(p0.b), v2));
    }

}
