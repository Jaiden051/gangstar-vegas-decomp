// Decompiled from classes.dex (SourceFile: ae$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class ae$1 extends com.google.android.gms.wearable.internal.d {
    // Fields
    final java.lang.String a;
    final java.lang.String b;
    final byte[] c;
    final com.google.android.gms.wearable.internal.ae d;

    // Methods
    ae$1(com.google.android.gms.wearable.internal.ae p0, String p1, String p2, byte[] p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = (byte[])p3;
    
    }

    private void a(com.google.android.gms.wearable.internal.au p0)
 throws android.os.RemoteException {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

    private static com.google.android.gms.wearable.MessageApi$SendMessageResult au(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.wearable.MessageApi$SendMessageResult)new com.google.android.gms.wearable.internal.ae$a(p0, -1);
    }

    /* synthetic */ protected final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.wearable.internal.ae$a(p0, -1);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.au)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b, this.c);
    }

}
