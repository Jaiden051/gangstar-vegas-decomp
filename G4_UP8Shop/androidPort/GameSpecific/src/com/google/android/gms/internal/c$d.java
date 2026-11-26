// Decompiled from classes.dex (SourceFile: c$d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$d extends com.google.android.gms.internal.mb {
    // Fields
    public com.google.android.gms.internal.d$a[] a;
    public com.google.android.gms.internal.d$a[] b;
    public com.google.android.gms.internal.c$c[] c;

    // Methods
    public c$d()
    {
      super();
      this.a = d$a.r();
      this.b = d$a.r();
      this.c = c$c.f();
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$d b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      com.google.android.gms.internal.d$a[] v6;
      int v7; // RETVAL
      int v8;
      com.google.android.gms.internal.d$a[] v9;
      int v10; // RETVAL
      int v11;
      com.google.android.gms.internal.c$c[] v12;
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
            v6 = new com.google.android.gms.internal.d$a[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.a, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = new com.google.android.gms.internal.d$a();
              p0.a(v6[v5]);
              p0.a();
              ++v5;
            }
            v6[v5] = new com.google.android.gms.internal.d$a();
            p0.a(v6[v5]);
            this.a = (com.google.android.gms.internal.d$a[])v6;
            continue;
          case 18:
            v7 = mi.b(p0, 18);
            if ( this.b != null )
              v8 = this.b.length;
            else
              v8 = 0;
            v9 = new com.google.android.gms.internal.d$a[(v7 + v8)];
            if ( v8 != 0 )
              System.arraycopy(this.b, 0, v9, 0, v8);
            while ( v8 < v9.length - 1 )
            {
              v9[v8] = new com.google.android.gms.internal.d$a();
              p0.a(v9[v8]);
              p0.a();
              ++v8;
            }
            v9[v8] = new com.google.android.gms.internal.d$a();
            p0.a(v9[v8]);
            this.b = (com.google.android.gms.internal.d$a[])v9;
            continue;
          case 26:
            v10 = mi.b(p0, 26);
            if ( this.c != null )
              v11 = this.c.length;
            else
              v11 = 0;
            v12 = new com.google.android.gms.internal.c$c[(v10 + v11)];
            if ( v11 != 0 )
              System.arraycopy(this.c, 0, v12, 0, v11);
            while ( v11 < v12.length - 1 )
            {
              v12[v11] = new com.google.android.gms.internal.c$c();
              p0.a(v12[v11]);
              p0.a();
              ++v11;
            }
            v12[v11] = new com.google.android.gms.internal.c$c();
            p0.a(v12[v11]);
            this.c = (com.google.android.gms.internal.c$c[])v12;
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

    private com.google.android.gms.internal.c$d d()
    {
      this.a = d$a.r();
      this.b = d$a.r();
      this.c = c$c.f();
      this.r = null;
      this.s = -1;
      return this;
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      int v2; // RETVAL
      int v3;
      int v4;
      int i;
      com.google.android.gms.internal.d$a v6;
      int v7;
      int j;
      com.google.android.gms.internal.d$a v9;
      com.google.android.gms.internal.c$c v10;
      v1 = 0;
      v2 = super.a();
      v3 = v2;
      if ( this.a != null && this.a.length > 0 )
      {
        v4 = v2;
        for ( i = 0; i < this.a.length; ++i )
        {
          v6 = this.a[i];
          if ( v6 != null )
            v4 += ma.b(1, v6);
        }
        v3 = v4;
      }
      if ( this.b != null && this.b.length > 0 )
      {
        v7 = v3;
        for ( j = 0; j < this.b.length; ++j )
        {
          v9 = this.b[j];
          if ( v9 != null )
            v7 += ma.b(2, v9);
        }
        v3 = v7;
      }
      if ( this.c != null && this.c.length > 0 )
      {
        while ( v1 < this.c.length )
        {
          v10 = this.c[v1];
          if ( v10 != null )
            v3 += ma.b(3, v10);
          ++v1;
        }
      }
      return v3;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      com.google.android.gms.internal.d$a[] v6;
      int v7; // RETVAL
      int v8;
      com.google.android.gms.internal.d$a[] v9;
      int v10; // RETVAL
      int v11;
      com.google.android.gms.internal.c$c[] v12;
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
            v6 = new com.google.android.gms.internal.d$a[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.a, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = new com.google.android.gms.internal.d$a();
              p0.a(v6[v5]);
              p0.a();
              ++v5;
            }
            v6[v5] = new com.google.android.gms.internal.d$a();
            p0.a(v6[v5]);
            this.a = (com.google.android.gms.internal.d$a[])v6;
            continue;
          case 18:
            v7 = mi.b(p0, 18);
            if ( this.b != null )
              v8 = this.b.length;
            else
              v8 = 0;
            v9 = new com.google.android.gms.internal.d$a[(v7 + v8)];
            if ( v8 != 0 )
              System.arraycopy(this.b, 0, v9, 0, v8);
            while ( v8 < v9.length - 1 )
            {
              v9[v8] = new com.google.android.gms.internal.d$a();
              p0.a(v9[v8]);
              p0.a();
              ++v8;
            }
            v9[v8] = new com.google.android.gms.internal.d$a();
            p0.a(v9[v8]);
            this.b = (com.google.android.gms.internal.d$a[])v9;
            continue;
          case 26:
            v10 = mi.b(p0, 26);
            if ( this.c != null )
              v11 = this.c.length;
            else
              v11 = 0;
            v12 = new com.google.android.gms.internal.c$c[(v10 + v11)];
            if ( v11 != 0 )
              System.arraycopy(this.c, 0, v12, 0, v11);
            while ( v11 < v12.length - 1 )
            {
              v12[v11] = new com.google.android.gms.internal.c$c();
              p0.a(v12[v11]);
              p0.a();
              ++v11;
            }
            v12[v11] = new com.google.android.gms.internal.c$c();
            p0.a(v12[v11]);
            this.c = (com.google.android.gms.internal.c$c[])v12;
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
 throws com.google.android.gms.internal.ma$a, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      int v2;
      int i;
      com.google.android.gms.internal.d$a v4;
      int j;
      com.google.android.gms.internal.d$a v6;
      com.google.android.gms.internal.c$c v7;
      v2 = 0;
      if ( this.a != null && this.a.length > 0 )
      {
        for ( i = 0; i < this.a.length; ++i )
        {
          v4 = this.a[i];
          if ( v4 != null )
            p0.a(1, v4);
        }
      }
      if ( this.b != null && this.b.length > 0 )
      {
        for ( j = 0; j < this.b.length; ++j )
        {
          v6 = this.b[j];
          if ( v6 != null )
            p0.a(2, v6);
        }
      }
      if ( this.c != null && this.c.length > 0 )
      {
        while ( v2 < this.c.length )
        {
          v7 = this.c[v2];
          if ( v7 != null )
            p0.a(3, v7);
          ++v2;
        }
      }
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$d v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$d )
        {
          v4 = (com.google.android.gms.internal.c$d)p0;
          if ( md.equals(this.a, v4.a) )
          {
            if ( md.equals(this.b, v4.b) )
            {
              if ( md.equals(this.c, v4.c) )
              {
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
      v1 = 31 * (31 * (31 * (md.hashCode(this.a) + 527) + md.hashCode(this.b)) + md.hashCode(this.c));
      if ( this.r != null && !this.r.isEmpty() )
        v2 = this.r.hashCode();
      else
        v2 = 0;
      return v2 + v1;
    }

}
