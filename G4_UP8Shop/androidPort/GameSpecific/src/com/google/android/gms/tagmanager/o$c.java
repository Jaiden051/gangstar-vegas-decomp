// Decompiled from classes.dex (SourceFile: o$c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import com.google.android.gms.common.api.Status;
class o$c implements com.google.android.gms.tagmanager.bg {
    // Fields
    final com.google.android.gms.tagmanager.o a;

    // Methods
    private o$c(com.google.android.gms.tagmanager.o p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ o$c(com.google.android.gms.tagmanager.o p0, int p1)
    {
      this(p0);
    }

    private void a(com.google.android.gms.internal.c$j p0)
 throws android.os.RemoteException, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.tagmanager.o a;
      a = this.a;
      synchronized ( a )
      {
        if ( p0.b == null )
        {
          if ( o.c(this.a).b == null )
          {
            bh.A("Current resource is null; network resource is also null");
            o.a(this.a, 3600000);
            return;
          }
          p0.b = o.c(this.a).b;
        }
        o.a(this.a, p0, o.a(this.a).a(), false);
        bh.C("setting refresh time to current time: " + o.d(this.a));
        if ( !o.e(this.a) )
          o.a(this.a, p0);
        return;
      }
    }

    public final void a()
    {
      ;
    }

    /* synthetic */ public final void a(Object p0)
 throws android.os.RemoteException, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.internal.c$j v2;
      com.google.android.gms.tagmanager.o a;
      v2 = (com.google.android.gms.internal.c$j)p0;
      a = this.a;
      synchronized ( a )
      {
        if ( v2.b == null )
        {
          if ( o.c(this.a).b == null )
          {
            bh.A("Current resource is null; network resource is also null");
            o.a(this.a, 3600000);
            return;
          }
          v2.b = o.c(this.a).b;
        }
        o.a(this.a, v2, o.a(this.a).a(), false);
        bh.C("setting refresh time to current time: " + o.d(this.a));
        if ( !o.e(this.a) )
          o.a(this.a, v2);
        return;
      }
    }

    public final void b()
 throws android.os.RemoteException {
      if ( o.f(this.a) != null )
        this.a.a((com.google.android.gms.common.api.Result)o.f(this.a));
      else
        this.a.a((com.google.android.gms.common.api.Result)this.a.b(Status.d));
      o.a(this.a, 3600000);
    }

}
