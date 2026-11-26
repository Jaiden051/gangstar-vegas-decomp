// Decompiled from classes.dex (SourceFile: f$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

class f$2 extends com.google.android.gms.wearable.internal.d {
    // Fields
    final android.net.Uri a;
    final com.google.android.gms.wearable.internal.f b;

    // Methods
    f$2(com.google.android.gms.wearable.internal.f p0, android.net.Uri p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.wearable.internal.au p0)
 throws android.os.RemoteException {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a);
    }

    private static com.google.android.gms.wearable.DataApi$DataItemResult aq(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.wearable.DataApi$DataItemResult)new com.google.android.gms.wearable.internal.f$a(p0, null);
    }

    /* synthetic */ protected final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.wearable.internal.f$a(p0, null);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.au)p0).a((com.google.android.gms.common.api.a$d)this, this.a);
    }

}
