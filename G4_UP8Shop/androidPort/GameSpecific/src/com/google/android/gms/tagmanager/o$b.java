// Decompiled from classes.dex (SourceFile: o$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class o$b implements com.google.android.gms.tagmanager.bg {
    // Fields
    final com.google.android.gms.tagmanager.o a;

    // Methods
    private o$b(com.google.android.gms.tagmanager.o p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ o$b(com.google.android.gms.tagmanager.o p0, int p1)
    {
      this(p0);
    }

    private void a(com.google.android.gms.internal.lf$a p0)
 throws android.os.RemoteException, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.internal.c$j c;
      com.google.android.gms.internal.c$f b;
      if ( p0.c != null )
      {
        c = p0.c;
      }
      else
      {
        b = p0.b;
        c = new com.google.android.gms.internal.c$j();
        c.b = b;
        c.a = null;
        c.c = b.l;
      }
      o.a(this.a, c, p0.a, true);
    }

    public final void a()
    {
      ;
    }

    /* synthetic */ public final void a(Object p0)
 throws android.os.RemoteException, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      com.google.android.gms.internal.lf$a v2;
      com.google.android.gms.internal.c$j c;
      com.google.android.gms.internal.c$f b;
      v2 = (com.google.android.gms.internal.lf$a)p0;
      if ( v2.c != null )
      {
        c = v2.c;
      }
      else
      {
        b = v2.b;
        c = new com.google.android.gms.internal.c$j();
        c.b = b;
        c.a = null;
        c.c = b.l;
      }
      o.a(this.a, c, v2.a, true);
    }

    public final void b()
    {
      if ( !o.b(this.a) )
        o.a(this.a, 0);
    }

}
