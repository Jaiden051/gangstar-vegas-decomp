// Decompiled from classes.dex (SourceFile: f$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wearable.internal;

import com.google.android.gms.common.data.DataHolder;
class f$3 extends com.google.android.gms.wearable.internal.d {
    // Fields
    final com.google.android.gms.wearable.internal.f a;

    // Methods
    f$3(com.google.android.gms.wearable.internal.f p0)
    {
      super();
      this.a = p0;
    
    }

    private void a(com.google.android.gms.wearable.internal.au p0)
 throws android.os.RemoteException {
      p0.a((com.google.android.gms.common.api.a$d)this);
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

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.wearable.internal.au)p0).a((com.google.android.gms.common.api.a$d)this);
    }

}
