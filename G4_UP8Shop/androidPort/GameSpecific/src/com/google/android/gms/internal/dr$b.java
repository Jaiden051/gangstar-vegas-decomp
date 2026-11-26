// Decompiled from classes.dex (SourceFile: dr$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class dr$b extends com.google.android.gms.internal.dr implements com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks, com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener {
    // Fields
    private final com.google.android.gms.internal.dq$a a;
    private final com.google.android.gms.internal.ds b;
    private final java.lang.Object c;

    // Methods
    public dr$b(android.content.Context p0, com.google.android.gms.internal.dt p1, com.google.android.gms.internal.dq$a p2)
 throws android.os.RemoteException {
      super(p1, p2);
      this.c = new Object();
      this.a = p2;
      this.b = new com.google.android.gms.internal.ds(p0, (com.google.android.gms.common.GooglePlayServicesClient$ConnectionCallbacks)this, (com.google.android.gms.common.GooglePlayServicesClient$OnConnectionFailedListener)this, p1.k.d);
      this.b.a();
    }

    public final void a(com.google.android.gms.common.ConnectionResult p0)
 throws com.google.android.gms.internal.Decomp_do$a {
      this.a.a(new com.google.android.gms.internal.dv(0));
    }

    public final void b()
    {
      ev.z("Disconnected from remote ad request service.");
    }

    public final void c()
 throws android.os.RemoteException {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( this.b.c() || this.b.D() )
          this.b.b();
      }
    }

    public final com.google.android.gms.internal.dx d()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        try
        {
          return this.b.g();
        }
        catch ( IllegalStateException e )
        {
          return null;
        }
      }
    }

    public final void z_()
    {
      this.e();
    }

}
