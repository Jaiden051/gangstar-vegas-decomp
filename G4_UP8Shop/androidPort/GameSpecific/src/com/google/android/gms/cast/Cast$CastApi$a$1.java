// Decompiled from classes.dex (SourceFile: Cast$CastApi$a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

class Cast$CastApi$a$1 extends com.google.android.gms.cast.Cast$b {
    // Fields
    final java.lang.String a;
    final java.lang.String b;
    final com.google.android.gms.cast.Cast$CastApi$a c;

    // Methods
    Cast$CastApi$a$1(com.google.android.gms.cast.Cast$CastApi$a p0, String p1, String p2)
    {
      super(0);
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    private void a(com.google.android.gms.internal.gi p0)
 throws android.os.RemoteException {
      try
      {
        p0.a(this.a, this.b, (com.google.android.gms.common.api.a$d)this);
      }
      catch ( IllegalArgumentException e )
      {
        this.a(2001);
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
        v2.a(this.a, this.b, (com.google.android.gms.common.api.a$d)this);
      }
      catch ( IllegalArgumentException e )
      {
        this.a(2001);
      }
      catch ( IllegalStateException e )
      {
        this.a(2001);
      }
    }

}
