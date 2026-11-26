// Decompiled from classes.dex (SourceFile: ah$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class ah$3 extends com.google.android.gms.wearable.internal.d {
    // Fields
    final com.google.android.gms.wearable.NodeApi$NodeListener a;
    final com.google.android.gms.wearable.internal.ah b;

    // Methods
    ah$3(com.google.android.gms.wearable.internal.ah p0, com.google.android.gms.wearable.NodeApi$NodeListener p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.wearable.internal.au p0)
 throws android.os.RemoteException {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a);
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
      ((com.google.android.gms.wearable.internal.au)p0).a((com.google.android.gms.common.api.a$d)this, this.a);
    }

}
