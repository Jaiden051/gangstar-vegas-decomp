// Decompiled from classes.dex (SourceFile: gi$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

class gi$1 extends com.google.android.gms.internal.gn$a {
    // Fields
    final com.google.android.gms.internal.gi a;

    // Methods
    gi$1(com.google.android.gms.internal.gi p0)
    {
      super();
      this.a = p0;
    
    }

    private void b(long p0, int p2)
 throws android.os.RemoteException {
      com.google.android.gms.internal.gi a;
      java.util.Map v4; // RETVAL
      Object v5;
      com.google.android.gms.common.api.a$d v6;
      a = this.a;
      v4 = gi.h(a);
      v5 = v4;
      synchronized ( v5 )
      {
        v6 = (com.google.android.gms.common.api.a$d)gi.h(this.a).remove(Long.valueOf(p0));
        com.gameloft.android.DecompRT.monitorExit(v5);
      }
      if ( v6 != null )
        v6.a(new com.google.android.gms.common.api.Status(p2));
    }

    private boolean f(int p0)
 throws android.os.RemoteException {
      Object v2; // RETVAL
      Object v3;
      boolean v4;
      v2 = gi.eh();
      v3 = v2;
      synchronized ( v3 )
      {
        if ( gi.i(this.a) != null )
        {
          gi.i(this.a).a(new com.google.android.gms.common.api.Status(p0));
          gi.b(this.a, (String)null);
          v4 = true;
          com.gameloft.android.DecompRT.monitorExit(v3);
        }
        else
        {
          com.gameloft.android.DecompRT.monitorExit(v3);
          return false;
        }
        return v4;
      }
    }

    public final void a()
    {
      gi.ef().b("Deprecated callback: \"onStatusreceived\"", new Object[0]);
    }

    public final void a(int p0)
    {
      com.google.android.gms.internal.go v2;
      Object[] v3;
      v2 = gi.ef();
      v3 = new Object[1];
      v3[0] = Integer.valueOf(p0);
      v2.b("ICastDeviceControllerListener.onDisconnected: %d", v3);
      gi.a(this.a, false);
      gi.b(this.a).set(false);
      gi.a(this.a, (com.google.android.gms.internal.gf)null);
      if ( p0 != 0 )
        this.a.d(2);
    }

    public final void a(long p0)
 throws android.os.RemoteException {
      this.b(p0, 0);
    }

    public final void a(long p0, int p2)
 throws android.os.RemoteException {
      this.b(p0, p2);
    }

    public final void a(com.google.android.gms.cast.ApplicationMetadata p0, String p1, String p2, boolean p3)
 throws android.os.RemoteException {
      Object v5; // RETVAL
      Object v6;
      gi.a(this.a, p0);
      gi.a(this.a, p0.b());
      gi.b(this.a, p2);
      v5 = gi.eg();
      v6 = v5;
      synchronized ( v6 )
      {
        if ( gi.c(this.a) != null )
        {
          gi.c(this.a).a(new com.google.android.gms.internal.gi$a(new com.google.android.gms.common.api.Status(0), p0, p1, p2, p3));
          gi.a(this.a, (com.google.android.gms.internal.gf)null);
        }
        com.gameloft.android.DecompRT.monitorExit(v6);
      }
    }

    public final void a(com.google.android.gms.internal.gf p0)
    {
      gi.ef().b("onApplicationStatusChanged", new Object[0]);
      gi.e(this.a).post((Runnable)new com.google.android.gms.internal.gi$1$3(this, p0));
    }

    public final void a(com.google.android.gms.internal.gk p0)
    {
      gi.ef().b("onDeviceStatusChanged", new Object[0]);
      gi.e(this.a).post((Runnable)new com.google.android.gms.internal.gi$1$2(this, p0));
    }

    public final void a(String p0, String p1)
    {
      Object[] v3;
      v3 = new Object[2];
      v3[0] = p0;
      v3[1] = p1;
      gi.ef().b("Receive (type=text, ns=%s) %s", v3);
      gi.e(this.a).post((Runnable)new com.google.android.gms.internal.gi$1$4(this, p0, p1));
    }

    public final void a(String p0, byte[] p1)
    {
      com.google.android.gms.internal.go v3;
      Object[] v4;
      v3 = gi.ef();
      v4 = new Object[2];
      v4[0] = p0;
      v4[1] = Integer.valueOf(p1.length);
      v3.b("IGNORING: Receive (type=binary, ns=%s) <%d bytes>", v4);
    }

    public final void b(int p0)
 throws android.os.RemoteException {
      Object v2; // RETVAL
      Object v3;
      v2 = gi.eg();
      v3 = v2;
      synchronized ( v3 )
      {
        if ( gi.c(this.a) != null )
        {
          gi.c(this.a).a(new com.google.android.gms.internal.gi$a(new com.google.android.gms.common.api.Status(p0)));
          gi.a(this.a, (com.google.android.gms.internal.gf)null);
        }
        com.gameloft.android.DecompRT.monitorExit(v3);
      }
    }

    public final void c(int p0)
 throws android.os.RemoteException {
      this.f(p0);
    }

    public final void d(int p0)
 throws android.os.RemoteException {
      this.f(p0);
    }

    public final void e(int p0)
 throws android.os.RemoteException {
      gi.a(this.a, (com.google.android.gms.internal.gf)null);
      gi.b(this.a, (String)null);
      this.f(p0);
      if ( gi.d(this.a) != null )
        gi.e(this.a).post((Runnable)new com.google.android.gms.internal.gi$1$1(this, p0));
    }

}
