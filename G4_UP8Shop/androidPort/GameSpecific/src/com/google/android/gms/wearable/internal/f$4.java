// Decompiled from classes.dex (SourceFile: f$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import com.google.android.gms.common.data.DataHolder;
class f$4 extends com.google.android.gms.wearable.internal.d {
    // Fields
    final android.net.Uri a;
    final com.google.android.gms.wearable.internal.f b;

    // Methods
    f$4(com.google.android.gms.wearable.internal.f p0, android.net.Uri p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.wearable.internal.au p0)
 throws android.os.RemoteException {
      p0.b((com.google.android.gms.common.api.a$d)this, this.a);
    }

    private static com.google.android.gms.wearable.DataItemBuffer ar(com.google.android.gms.common.api.Status p0)
    {
      return new com.google.android.gms.wearable.DataItemBuffer(DataHolder.af(p0.g()));
    }

    /* synthetic */ protected final com.google.android.gms.common.api.Result a(
            com.google.android.gms.common.api.Status p0)
    {
      return (com.google.android.gms.common.api.Result)new com.google.android.gms.wearable.DataItemBuffer(DataHolder.af(p0.g()));
    }

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.au)p0).b((com.google.android.gms.common.api.a$d)this, this.a);
    }

}
