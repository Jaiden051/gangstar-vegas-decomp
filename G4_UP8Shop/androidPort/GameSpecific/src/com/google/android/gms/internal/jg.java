// Decompiled from classes.dex (SourceFile: jg.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.Looper;
public class jg {
    // Fields
    private final com.google.android.gms.internal.jk a;
    private final android.content.Context b;
    private android.content.ContentProviderClient c;
    private boolean d;
    private java.util.HashMap e;

    // Methods
    public jg(android.content.Context p0, com.google.android.gms.internal.jk<com.google.android.gms.internal.jf> p1)
    {
      super();
      this.c = null;
      this.d = false;
      this.e = new java.util.HashMap();
      this.b = p0;
      this.a = p1;
    }

    public final android.location.Location a()
    {
      this.a.a();
      try
      {
        return ((com.google.android.gms.internal.jf)this.a.b()).a(this.b.getPackageName());
      }
      catch ( android.os.RemoteException v2 )
      {
        throw new IllegalStateException(v2);
      }
    }

    public final void a(android.app.PendingIntent p0)
 throws android.os.RemoteException {
      this.a.a();
      ((com.google.android.gms.internal.jf)this.a.b()).b(p0);
    }

    public final void a(android.location.Location p0)
 throws android.os.RemoteException {
      this.a.a();
      ((com.google.android.gms.internal.jf)this.a.b()).a(p0);
    }

    public final void a(com.google.android.gms.location.LocationListener p0)
 throws android.os.RemoteException {
      java.util.HashMap e;
      com.google.android.gms.internal.jg$b v3;
      this.a.a();
      hn.b(p0, "Invalid null listener");
      e = this.e;
      synchronized ( e )
      {
        v3 = (com.google.android.gms.internal.jg$b)this.e.remove(p0);
        if ( this.c != null && this.e.isEmpty() )
        {
          this.c.release();
          this.c = null;
        }
        if ( v3 != null )
        {
          v3.a();
          ((com.google.android.gms.internal.jf)this.a.b()).a(v3);
        }
      }
    }

    public final void a(com.google.android.gms.location.LocationRequest p0, android.app.PendingIntent p1)
 throws android.os.RemoteException {
      this.a.a();
      ((com.google.android.gms.internal.jf)this.a.b()).a(p0, p1);
    }

    public final void a(
            com.google.android.gms.location.LocationRequest p0,
            com.google.android.gms.location.LocationListener p1,
            android.os.Looper p2)
 throws android.os.RemoteException {
      java.util.HashMap e;
      com.google.android.gms.internal.jg$b v5;
      com.google.android.gms.location.a v6;
      this.a.a();
      if ( p2 == null )
        hn.b(Looper.myLooper(), "Can't create handler inside thread that has not called Looper.prepare()");
      e = this.e;
      synchronized ( e )
      {
        v5 = (com.google.android.gms.internal.jg$b)this.e.get(p1);
        if ( v5 != null )
          v6 = v5;
        else
          v6 = new com.google.android.gms.internal.jg$b(p1, p2);
        this.e.put(p1, v6);
        ((com.google.android.gms.internal.jf)this.a.b()).a(p0, v6, this.b.getPackageName());
      }
    }

    public final void a(boolean p0)
 throws android.os.RemoteException {
      this.a.a();
      ((com.google.android.gms.internal.jf)this.a.b()).a(p0);
      this.d = p0;
    }

    public final void b()
    {
      java.util.HashMap e;
      java.util.Iterator v2;
      com.google.android.gms.location.a v3;
      try
      {
        e = this.e;
        synchronized ( e )
        {
          v2 = this.e.values().iterator();
          while ( v2.hasNext() )
          {
            v3 = (com.google.android.gms.internal.jg$b)v2.next();
            if ( v3 != null )
              ((com.google.android.gms.internal.jf)this.a.b()).a(v3);
          }
          this.e.clear();
          return;
        }
      }
      catch ( android.os.RemoteException v5 )
      {
        throw new IllegalStateException(v5);
      }
    }

    public final void c()
    {
      if ( this.d )
      {
        try
        {
          this.a(false);
        }
        catch ( android.os.RemoteException v1 )
        {
          throw new IllegalStateException(v1);
        }
      }
    }

}
