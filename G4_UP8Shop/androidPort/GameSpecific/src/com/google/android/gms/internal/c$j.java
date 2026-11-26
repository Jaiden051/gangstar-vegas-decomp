// Decompiled from classes.dex (SourceFile: c$j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$j extends com.google.android.gms.internal.mb {
    // Fields
    public com.google.android.gms.internal.c$i[] a;
    public com.google.android.gms.internal.c$f b;
    public java.lang.String c;

    // Methods
    public c$j()
    {
      super();
      this.a = c$i.o();
      this.b = null;
      this.c = "";
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$j b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      com.google.android.gms.internal.c$i[] v6;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            v4 = mi.b(p0, 10);
            if ( this.a != null )
              v5 = this.a.length;
            else
              v5 = 0;
            v6 = new com.google.android.gms.internal.c$i[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.a, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = new com.google.android.gms.internal.c$i();
              p0.a(v6[v5]);
              p0.a();
              ++v5;
            }
            v6[v5] = new com.google.android.gms.internal.c$i();
            p0.a(v6[v5]);
            this.a = (com.google.android.gms.internal.c$i[])v6;
            continue;
          case 18:
            if ( this.b == null )
              this.b = new com.google.android.gms.internal.c$f();
            p0.a(this.b);
            continue;
          case 26:
            this.c = p0.g();
            continue;
          default:
            if ( this.a(p0, v2) )
              continue;
            break;
        }
        break;
      }
      return this;
    }

    public static com.google.android.gms.internal.c$j b(byte[] p0)
 throws com.google.android.gms.internal.me {
      return (com.google.android.gms.internal.c$j)mf.a(new com.google.android.gms.internal.c$j(), p0);
    }

    private com.google.android.gms.internal.c$j d()
    {
      this.a = c$i.o();
      this.b = null;
      this.c = "";
      this.r = null;
      this.s = -1;
      return this;
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      int i;
      com.google.android.gms.internal.c$i v3;
      v1 = super.a();
      if ( this.a != null && this.a.length > 0 )
      {
        for ( i = 0; i < this.a.length; ++i )
        {
          v3 = this.a[i];
          if ( v3 != null )
            v1 += ma.b(1, v3);
        }
      }
      if ( this.b != null )
        v1 += ma.b(2, this.b);
      if ( !this.c.equals("") )
        v1 += ma.h(3, this.c);
      return v1;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      com.google.android.gms.internal.c$i[] v6;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            v4 = mi.b(p0, 10);
            if ( this.a != null )
              v5 = this.a.length;
            else
              v5 = 0;
            v6 = new com.google.android.gms.internal.c$i[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.a, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = new com.google.android.gms.internal.c$i();
              p0.a(v6[v5]);
              p0.a();
              ++v5;
            }
            v6[v5] = new com.google.android.gms.internal.c$i();
            p0.a(v6[v5]);
            this.a = (com.google.android.gms.internal.c$i[])v6;
            continue;
          case 18:
            if ( this.b == null )
              this.b = new com.google.android.gms.internal.c$f();
            p0.a(this.b);
            continue;
          case 26:
            this.c = p0.g();
            continue;
          default:
            if ( this.a(p0, v2) )
              continue;
            break;
        }
        break;
      }
      return this;
    }

    public final void a(com.google.android.gms.internal.ma p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.ma$a, com.google.android.gms.internal.me {
      int i;
      com.google.android.gms.internal.c$i v3;
      if ( this.a != null && this.a.length > 0 )
      {
        for ( i = 0; i < this.a.length; ++i )
        {
          v3 = this.a[i];
          if ( v3 != null )
            p0.a(1, v3);
        }
      }
      if ( this.b != null )
        p0.a(2, this.b);
      if ( !this.c.equals("") )
        p0.a(3, this.c);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$j v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$j )
        {
          v4 = (com.google.android.gms.internal.c$j)p0;
          if ( md.equals(this.a, v4.a) )
          {
            if ( this.b != null )
            {
              if ( !this.b.equals(v4.b) )
                return false;
            }
            else if ( v4.b != null )
            {
              return false;
            }
            if ( this.c != null )
            {
              if ( !this.c.equals(v4.c) )
                return false;
            }
            else if ( v4.c != null )
            {
              return false;
            }
            if ( this.r != null && !this.r.isEmpty() )
            {
              return this.r.equals(v4.r);
            }
            else if ( v4.r != null && !v4.r.isEmpty() )
            {
              return false;
            }
          }
          else
          {
            return false;
          }
        }
        else
        {
          return false;
        }
      }
      return v2;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      int v3;
      int v4;
      int v5;
      int v6;
      v1 = 0;
      v2 = 31 * (md.hashCode(this.a) + 527);
      if ( this.b != null )
        v3 = this.b.hashCode();
      else
        v3 = 0;
      v4 = 31 * (v3 + v2);
      if ( this.c != null )
        v5 = this.c.hashCode();
      else
        v5 = 0;
      v6 = 31 * (v5 + v4);
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v6 + v1;
    }

}
