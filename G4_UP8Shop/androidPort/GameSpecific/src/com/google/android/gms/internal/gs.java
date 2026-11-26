// Decompiled from classes.dex (SourceFile: gs.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
public final class gs {
    // Fields
    public static final java.lang.Object a;
    private static final com.google.android.gms.internal.go f;
    private long b;
    private long c;
    private long d;
    private com.google.android.gms.internal.gr e;

    // Methods
    static
    {
      f = new com.google.android.gms.internal.go("RequestTracker");
      a = new Object();
    }

    public gs(long p0)
    {
      super();
      this.b = p0;
      this.c = -1;
      this.d = 0;
    }

    private void c()
    {
      this.c = -1;
      this.e = null;
      this.d = 0;
    }

    public final void a()
    {
      Object v1;
      v1 = a;
      synchronized ( v1 )
      {
        if ( this.c != -1 )
          this.c();
      }
    }

    public final void a(long p0, com.google.android.gms.internal.gr p2)
 throws android.os.RemoteException {
      Object v3;
      com.google.android.gms.internal.gr e;
      v3 = a;
      synchronized ( v3 )
      {
        e = this.e;
        this.c = p0;
        this.e = p2;
        this.d = SystemClock.elapsedRealtime();
      }
      if ( e != null )
        e.a();
    }

    public final boolean a(long p0)
    {
      Object v2;
      v2 = a;
      synchronized ( v2 )
      {
        return this.c != -1 && this.c == p0;
      }
    }

    public final boolean a(long p0, int p2)
 throws android.os.RemoteException {
      return this.a(p0, p2, null);
    }

    public final boolean a(long p0, int p2, org.json.JSONObject p3)
 throws android.os.RemoteException {
      boolean v4;
      com.google.android.gms.internal.gr e;
      Object v6;
      Object[] v7;
      v4 = true;
      e = null;
      v6 = a;
      synchronized ( v6 )
      {
        if ( this.c == -1 || this.c != p0 )
        {
          v4 = false;
        }
        else
        {
          v7 = new Object[1];
          v7[0] = Long.valueOf(this.c);
          f.b("request %d completed", v7);
          e = this.e;
          this.c();
        }
      }
      if ( e != null )
        e.a(p2, p3);
      return v4;
    }

    public final boolean b()
    {
      Object v1;
      v1 = a;
      synchronized ( v1 )
      {
        return this.c != -1;
      }
    }

    public final boolean b(long p0, int p2)
 throws android.os.RemoteException {
      boolean v3;
      int v4;
      Object v5;
      Object[] v6;
      com.google.android.gms.internal.gr e;
      v3 = true;
      v4 = 0;
      v5 = a;
      synchronized ( v5 )
      {
        if ( this.c == -1 || p0 - this.d < this.b )
        {
          v3 = false;
          e = null;
        }
        else
        {
          v6 = new Object[1];
          v6[0] = Long.valueOf(this.c);
          f.b("request %d timed out", v6);
          e = this.e;
          this.c();
        }
      }
      if ( e != null )
        e.a(3, null);
      return v3;
    }

}
