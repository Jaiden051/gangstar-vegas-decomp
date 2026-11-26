// Decompiled from classes.dex (SourceFile: bp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class bp extends com.google.android.gms.internal.bw$a {
    // Fields
    private final java.lang.Object a;
    private com.google.android.gms.internal.br$a b;
    private com.google.android.gms.internal.bo c;

    // Methods
    public bp()
    {
      super();
      this.a = new Object();
    }

    public final void a()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( this.c != null )
          this.c.j();
      }
    }

    public final void a(int p0)
    {
      Object a;
      int v3;
      a = this.a;
      synchronized ( a )
      {
        if ( this.b != null )
        {
          if ( p0 == 3 )
            v3 = 1;
          else
            v3 = 2;
          this.b.a(v3);
          this.b = null;
        }
      }
    }

    public final void a(com.google.android.gms.internal.bo p0)
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.c = p0;
      }
    }

    public final void a(com.google.android.gms.internal.br$a p0)
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        this.b = p0;
      }
    }

    public final void b()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( this.c != null )
          this.c.k();
      }
    }

    public final void c()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( this.c != null )
          this.c.l();
      }
    }

    public final void d()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( this.c != null )
          this.c.m();
      }
    }

    public final void e()
    {
      Object a;
      a = this.a;
      synchronized ( a )
      {
        if ( this.b != null )
        {
          this.b.a(0);
          this.b = null;
        }
        else if ( this.c != null )
        {
          this.c.n();
        }
        return;
      }
    }

}
