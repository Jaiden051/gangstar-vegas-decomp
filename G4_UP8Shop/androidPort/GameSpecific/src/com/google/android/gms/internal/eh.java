// Decompiled from classes.dex (SourceFile: eh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.os.SystemClock;
public class eh {
    // Fields
    private final com.google.android.gms.internal.ei a;
    private final java.util.LinkedList b;
    private final java.lang.Object c;
    private final java.lang.String d;
    private final java.lang.String e;
    private long f;
    private long g;
    private boolean h;
    private long i;
    private long j;
    private long k;
    private long l;

    // Methods
    private eh(com.google.android.gms.internal.ei p0, String p1, String p2)
    {
      super();
      this.c = new Object();
      this.f = -1;
      this.g = -1;
      this.h = false;
      this.i = -1;
      this.j = 0;
      this.k = -1;
      this.l = -1;
      this.a = p0;
      this.d = p1;
      this.e = p2;
      this.b = new java.util.LinkedList();
    }

    public eh(String p0, String p1)
    {
      this(ei.bC(), p0, p1);
    }

    public final void a()
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( this.l != -1 && this.g == -1 )
        {
          this.g = SystemClock.elapsedRealtime();
          this.a.a(this);
        }
        ei.bF().c();
      }
    }

    public final void a(long p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        this.l = p0;
        if ( this.l != -1 )
          this.a.a(this);
      }
    }

    public final void a(com.google.android.gms.internal.aj p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        this.k = SystemClock.elapsedRealtime();
        ei.bF().a(p0, this.k);
      }
    }

    public final void a(boolean p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( this.l != -1 )
        {
          this.i = SystemClock.elapsedRealtime();
          if ( !p0 )
          {
            this.g = this.i;
            this.a.a(this);
          }
        }
      }
    }

    public final void b()
    {
      Object c;
      com.google.android.gms.internal.eh$a v2;
      c = this.c;
      synchronized ( c )
      {
        if ( this.l != -1 )
        {
          v2 = new com.google.android.gms.internal.eh$a();
          v2.c();
          this.b.add(v2);
          ++this.j;
          ei.bF().b();
          this.a.a(this);
        }
      }
    }

    public final void b(long p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( this.l != -1 )
        {
          this.f = p0;
          this.a.a(this);
        }
      }
    }

    public final void b(boolean p0)
    {
      Object c;
      c = this.c;
      synchronized ( c )
      {
        if ( this.l != -1 )
        {
          this.h = p0;
          this.a.a(this);
        }
      }
    }

    public final void c()
    {
      Object c;
      com.google.android.gms.internal.eh$a v2;
      c = this.c;
      synchronized ( c )
      {
        if ( this.l != -1 && !this.b.isEmpty() )
        {
          v2 = (com.google.android.gms.internal.eh$a)this.b.getLast();
          if ( v2.a() == -1 )
          {
            v2.b();
            this.a.a(this);
          }
        }
      }
    }

    public final android.os.Bundle d()
    {
      Object c;
      android.os.Bundle v2;
      java.util.ArrayList v3;
      java.util.Iterator i;
      c = this.c;
      synchronized ( c )
      {
        v2 = new android.os.Bundle();
        v2.putString("seqnum", this.d);
        v2.putString("slotid", this.e);
        v2.putBoolean("ismediation", this.h);
        v2.putLong("treq", this.k);
        v2.putLong("tresponse", this.l);
        v2.putLong("timp", this.g);
        v2.putLong("tload", this.i);
        v2.putLong("pcc", this.j);
        v2.putLong("tfetch", this.f);
        v3 = new java.util.ArrayList();
        for ( i = this.b.iterator(); i.hasNext(); v3.add(((com.google.android.gms.internal.eh$a)i.next()).d()) )
          ;
        v2.putParcelableArrayList("tclick", v3);
        return v2;
      }
    }

}
