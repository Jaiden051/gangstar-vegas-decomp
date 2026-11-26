// Decompiled from classes.dex (SourceFile: ac.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ac implements com.google.android.gms.internal.ae {
    // Fields
    private final java.lang.Object a;
    private java.util.WeakHashMap b;
    private java.util.ArrayList c;

    // Methods
    public ac()
    {
      super();
      this.a = new Object();
      this.b = new java.util.WeakHashMap();
      this.c = new java.util.ArrayList();
    }

    private boolean b(com.google.android.gms.internal.eg p0)
    {
      Object a;
      com.google.android.gms.internal.ad v3;
      a = this.a;
      synchronized ( a )
      {
        v3 = (com.google.android.gms.internal.ad)this.b.get(p0);
        return v3 != null && v3.d();
      }
    }

    public final com.google.android.gms.internal.ad a(
            com.google.android.gms.internal.am p0,
            com.google.android.gms.internal.eg p1)
    {
      Object a;
      com.google.android.gms.internal.ad v4;
      a = this.a;
      synchronized ( a )
      {
        if ( this.b(p1) )
          return (com.google.android.gms.internal.ad)this.b.get(p1);
        v4 = new com.google.android.gms.internal.ad(p0, p1);
        v4.a((com.google.android.gms.internal.ae)this);
        this.b.put(p1, v4);
        this.c.add(v4);
        return v4;
      }
    }

    public final void a()
    {
      Object a;
      java.util.Iterator i;
      a = this.a;
      synchronized ( a )
      {
        for ( i = this.c.iterator(); i.hasNext(); ((com.google.android.gms.internal.ad)i.next()).e() )
          ;
      }
    }

    public final void a(com.google.android.gms.internal.ad p0)
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( !p0.d() )
          this.c.remove(p0);
      }
    }

    public final void a(com.google.android.gms.internal.eg p0)
    {
      Object a;
      com.google.android.gms.internal.ad v3;
      a = this.a;
      synchronized ( a )
      {
        v3 = (com.google.android.gms.internal.ad)this.b.get(p0);
        if ( v3 != null )
          v3.b();
      }
    }

    public final void b()
    {
      Object a;
      java.util.Iterator i;
      a = this.a;
      synchronized ( a )
      {
        for ( i = this.c.iterator(); i.hasNext(); ((com.google.android.gms.internal.ad)i.next()).f() )
          ;
      }
    }

    public final void c()
    {
      Object a;
      java.util.Iterator i;
      a = this.a;
      synchronized ( a )
      {
        for ( i = this.c.iterator(); i.hasNext(); ((com.google.android.gms.internal.ad)i.next()).g() )
          ;
      }
    }

}
