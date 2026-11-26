// Decompiled from classes.dex (SourceFile: c$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

class c$4 implements com.google.android.gms.common.api.GoogleApiClient$OnConnectionFailedListener {
    // Fields
    final com.google.android.gms.common.api.Api$b a;
    final com.google.android.gms.common.api.c b;

    // Methods
    c$4(com.google.android.gms.common.api.c p0, com.google.android.gms.common.api.Api$b p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void a(com.google.android.gms.common.ConnectionResult p0)
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      c.a(this.b).lock();
      try
      {
        if ( c.h(this.b) == null || this.a.a() < c.i(this.b) )
        {
          c.a(this.b, p0);
          c.c(this.b, this.a.a());
        }
        c.d(this.b);
      }
      finally
      {
        c.a(this.b).unlock();
      }
    }

}
