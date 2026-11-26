// Decompiled from classes.dex (SourceFile: ae$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class ae$2 extends com.google.android.gms.wearable.internal.d {
    // Fields
    final com.google.android.gms.wearable.MessageApi$MessageListener a;
    final android.content.IntentFilter[] b;
    final com.google.android.gms.wearable.internal.ae c;

    // Methods
    ae$2(
            com.google.android.gms.wearable.internal.ae p0,
            com.google.android.gms.wearable.MessageApi$MessageListener p1,
            android.content.IntentFilter[] p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = (android.content.IntentFilter[])p2;
    
    }

    private void a(com.google.android.gms.wearable.internal.au p0)
 throws android.os.RemoteException {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

    private static com.google.android.gms.common.api.Status d$7da21aff()
    {
      return new com.google.android.gms.common.api.Status(13);
    }

    /* synthetic */ public final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.common.api.Status(13);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.au)p0).a((com.google.android.gms.common.api.a$d)this, this.a, this.b);
    }

}
