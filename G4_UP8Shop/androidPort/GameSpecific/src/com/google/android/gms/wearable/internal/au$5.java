// Decompiled from classes.dex (SourceFile: au$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class au$5 extends com.google.android.gms.wearable.internal.a {
    // Fields
    final com.google.android.gms.common.api.a$d a;
    final com.google.android.gms.wearable.internal.au b;

    // Methods
    au$5(com.google.android.gms.wearable.internal.au p0, com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.wearable.internal.z p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.wearable.internal.ah$b(new com.google.android.gms.common.api.Status(p0.b), (com.google.android.gms.wearable.Node)p0.c));
    }

}
