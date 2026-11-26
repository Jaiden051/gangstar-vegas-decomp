// Decompiled from classes.dex (SourceFile: dr.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class dr extends com.google.android.gms.internal.en {
    // Fields
    private final com.google.android.gms.internal.dt a;
    private final com.google.android.gms.internal.dq$a b;

    // Methods
    public dr(com.google.android.gms.internal.dt p0, com.google.android.gms.internal.dq$a p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    }

    private static com.google.android.gms.internal.dv a(
            com.google.android.gms.internal.dx p0,
            com.google.android.gms.internal.dt p1)
    {
      com.google.android.gms.internal.dv v2;
      v2 = null;
      try
      {
        return p0.a(p1);
      }
      catch ( android.os.RemoteException v4 )
      {
        ev.c("Could not fetch ad response from ad request service.", v4);
        return v2;
      }
      catch ( NullPointerException v5 )
      {
        ev.c("Could not fetch ad response from ad request service due to an Exception.", v5);
        return v2;
      }
      catch ( SecurityException v6 )
      {
        ev.c("Could not fetch ad response from ad request service due to an Exception.", v6);
      }
      return v2;
    }

    public final void A_()
 throws android.os.RemoteException {
      this.c();
    }

    public final void a()
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      com.google.android.gms.internal.dx v1; // RETVAL
      com.google.android.gms.internal.dv v2 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            try
            {
            v1 = this.d();
            if ( v1 == null )
            {
            v2 = new com.google.android.gms.internal.dv(0);
            { _pc = 1; continue _sm; }
            }
            v2 = a(v1, this.a);
            if ( v2 == null )
            v2 = new com.google.android.gms.internal.dv(0);
            }
            finally
            {
            this.c();
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            this.b.a(v2);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    public abstract void c() throws android.os.RemoteException;

    public abstract com.google.android.gms.internal.dx d();

}
