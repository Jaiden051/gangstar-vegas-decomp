// Decompiled from classes.dex (SourceFile: ah$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class ah$1 extends com.google.android.gms.wearable.internal.d {
    // Fields
    final com.google.android.gms.wearable.internal.ah a;

    // Methods
    ah$1(com.google.android.gms.wearable.internal.ah p0)
    {
      super();
      this.a = p0;
    
    }

    private void a(com.google.android.gms.wearable.internal.au p0)
 throws android.os.RemoteException {
      p0.b((com.google.android.gms.common.api.a$d)this);
    }

    private static com.google.android.gms.wearable.NodeApi$GetLocalNodeResult av(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.wearable.NodeApi$GetLocalNodeResult)new com.google.android.gms.wearable.internal.ah$b(p0, null);
    }

    /* synthetic */ protected final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.wearable.internal.ah$b(p0, null);
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.au)p0).b((com.google.android.gms.common.api.a$d)this);
    }

}
