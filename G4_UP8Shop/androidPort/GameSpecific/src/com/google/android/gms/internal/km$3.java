// Decompiled from classes.dex (SourceFile: km$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class km$3 extends com.google.android.gms.internal.km$c {
    // Fields
    final com.google.android.gms.plus.model.moments.Moment a;
    final com.google.android.gms.internal.km b;

    // Methods
    km$3(com.google.android.gms.internal.km p0, com.google.android.gms.plus.model.moments.Moment p1)
    {
      super(0);
      this.b = p0;
      this.a = p1;
    
    }

    private void a(com.google.android.gms.plus.internal.e p0)
 throws android.os.RemoteException {
      p0.a((com.google.android.gms.common.api.a$d)this, this.a);
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      ((com.google.android.gms.plus.internal.e)p0).a((com.google.android.gms.common.api.a$d)this, this.a);
    }

}
