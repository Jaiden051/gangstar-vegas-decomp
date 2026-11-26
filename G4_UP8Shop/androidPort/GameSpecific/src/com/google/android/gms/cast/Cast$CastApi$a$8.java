// Decompiled from classes.dex (SourceFile: Cast$CastApi$a$8.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

class Cast$CastApi$a$8 extends com.google.android.gms.cast.Cast$b {
    // Fields
    final com.google.android.gms.cast.Cast$CastApi$a a;

    // Methods
    Cast$CastApi$a$8(com.google.android.gms.cast.Cast$CastApi$a p0)
    {
      super(0);
      this.a = p0;
    
    }

    private void a(com.google.android.gms.internal.gi p0)
 throws android.os.RemoteException {
      try
      {
        p0.a("", (com.google.android.gms.common.api.a$d)this);
      }
      catch ( IllegalStateException e )
      {
        this.a(2001);
      }
    }

    /* bridge */ protected final void a(com.google.android.gms.common.api.Api$a p0)
 throws android.os.RemoteException {
      com.google.android.gms.internal.gi v2;
      v2 = (com.google.android.gms.internal.gi)p0;
      try
      {
        v2.a("", (com.google.android.gms.common.api.a$d)this);
      }
      catch ( IllegalStateException e )
      {
        this.a(2001);
      }
    }

}
