// Decompiled from classes.dex (SourceFile: c$b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$b extends com.google.android.gms.internal.mb {
    // Fields
    private static volatile com.google.android.gms.internal.c$b[] f;
    public int[] a;
    public int b;
    public int c;
    public boolean d;
    public boolean e;

    // Methods
    public c$b()
    {
      super();
      this.a = mi.a;
      this.b = 0;
      this.c = 0;
      this.d = false;
      this.e = false;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$b b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      int[] v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int[] v11;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            this.e = p0.f();
            continue;
          case 16:
            this.b = p0.e();
            continue;
          case 24:
            v4 = mi.b(p0, 24);
            if ( this.a != null )
              v5 = this.a.length;
            else
              v5 = 0;
            v6 = new int[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.a, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = p0.e();
              p0.a();
              ++v5;
            }
            v6[v5] = p0.e();
            this.a = (int[])v6;
            continue;
          case 26:
            v7 = p0.c(p0.k());
            v8 = p0.m();
            v9 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v9;
            }
            p0.e(v8);
            if ( this.a != null )
              v10 = this.a.length;
            else
              v10 = 0;
            v11 = new int[(v9 + v10)];
            if ( v10 != 0 )
              System.arraycopy(this.a, 0, v11, 0, v10);
            while ( v10 < v11.length )
              v11[v10++] = p0.e();
            this.a = (int[])v11;
            p0.d(v7);
            continue;
          case 32:
            this.c = p0.e();
            continue;
          case 48:
            this.d = p0.f();
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

    public static com.google.android.gms.internal.c$b[] d()
    {
      com.google.android.gms.internal.c$b[] v0;
      Object v1;
      com.google.android.gms.internal.c$b[] v2;
      v0 = f;
      if ( v0 != null )
        return f;
      v1 = md.a;
      synchronized ( v1 )
      {
        v2 = f;
        if ( v2 == null )
          f = new com.google.android.gms.internal.c$b[0];
        return f;
      }
    }

    private com.google.android.gms.internal.c$b e()
    {
      this.a = mi.a;
      this.b = 0;
      this.c = 0;
      this.d = false;
      this.e = false;
      this.r = null;
      this.s = -1;
      return this;
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      int v2;
      int v3;
      int i;
      int v5;
      v1 = 0;
      v2 = super.a();
      if ( this.e )
        v2 += ma.b(1, this.e);
      v3 = ma.r(2, this.b) + v2;
      if ( this.a != null && this.a.length > 0 )
      {
        for ( i = 0; i < this.a.length; ++i )
          v1 += ma.eE(this.a[i]);
        v5 = v3 + v1 + this.a.length;
      }
      else
      {
        v5 = v3;
      }
      if ( this.c != 0 )
        v5 += ma.r(4, this.c);
      if ( this.d )
        v5 += ma.b(6, this.d);
      return v5;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      int[] v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int[] v11;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            this.e = p0.f();
            continue;
          case 16:
            this.b = p0.e();
            continue;
          case 24:
            v4 = mi.b(p0, 24);
            if ( this.a != null )
              v5 = this.a.length;
            else
              v5 = 0;
            v6 = new int[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.a, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = p0.e();
              p0.a();
              ++v5;
            }
            v6[v5] = p0.e();
            this.a = (int[])v6;
            continue;
          case 26:
            v7 = p0.c(p0.k());
            v8 = p0.m();
            v9 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v9;
            }
            p0.e(v8);
            if ( this.a != null )
              v10 = this.a.length;
            else
              v10 = 0;
            v11 = new int[(v9 + v10)];
            if ( v10 != 0 )
              System.arraycopy(this.a, 0, v11, 0, v10);
            while ( v10 < v11.length )
              v11[v10++] = p0.e();
            this.a = (int[])v11;
            p0.d(v7);
            continue;
          case 32:
            this.c = p0.e();
            continue;
          case 48:
            this.d = p0.f();
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
      int i;
      if ( this.e )
        p0.a(1, this.e);
      p0.a(2, this.b);
      if ( this.a != null && this.a.length > 0 )
      {
        for ( i = 0; i < this.a.length; ++i )
          p0.a(3, this.a[i]);
      }
      if ( this.c != 0 )
        p0.a(4, this.c);
      if ( this.d )
        p0.a(6, this.d);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$b v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$b )
        {
          v4 = (com.google.android.gms.internal.c$b)p0;
          if ( md.equals(this.a, v4.a) )
          {
            if ( this.b == v4.b )
            {
              if ( this.c == v4.c )
              {
                if ( this.d == v4.d )
                {
                  if ( this.e == v4.e )
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
      v1 = 1231;
      v2 = 31 * (31 * (31 * (md.hashCode(this.a) + 527) + this.b) + this.c);
      if ( this.d )
        v3 = 1231;
      else
        v3 = 1237;
      v4 = 31 * (v3 + v2);
      if ( !this.e )
        v1 = 1237;
      v5 = 31 * (v4 + v1);
      if ( this.r != null && !this.r.isEmpty() )
        v6 = this.r.hashCode();
      else
        v6 = 0;
      return v6 + v5;
    }

}
