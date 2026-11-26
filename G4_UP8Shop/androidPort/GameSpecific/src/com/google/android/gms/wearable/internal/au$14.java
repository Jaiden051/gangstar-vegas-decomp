// Decompiled from classes.dex (SourceFile: au$14.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class au$14 extends com.google.android.gms.wearable.internal.a {
    // Fields
    final com.google.android.gms.common.api.a$d a;
    final com.google.android.gms.wearable.internal.au b;

    // Methods
    au$14(com.google.android.gms.wearable.internal.au p0, com.google.android.gms.common.api.a$d p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.common.data.DataHolder p0)
 throws android.os.RemoteException {
      this.a.a(new com.google.android.gms.wearable.DataItemBuffer(p0));
    }

}
