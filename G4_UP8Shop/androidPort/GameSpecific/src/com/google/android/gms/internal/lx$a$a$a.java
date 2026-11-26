// Decompiled from classes.dex (SourceFile: lx$a$a$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
public final class lx$a$a$a extends com.google.android.gms.internal.mb {
    // Fields
    public byte[] a;
    public java.lang.String b;
    public double c;
    public float d;
    public long e;
    public int f;
    public int g;
    public boolean h;
    public com.google.android.gms.internal.lx$a[] i;
    public com.google.android.gms.internal.lx$a$a[] j;
    public java.lang.String[] k;
    public long[] l;
    public float[] m;
    public long n;

    // Methods
    public lx$a$a$a()
    {
      super();
      this.a = mi.h;
      this.b = "";
      this.c = 0.0;
      this.d = 0.0f;
      this.e = 0;
      this.f = 0;
      this.g = 0;
      this.h = false;
      this.i = lx$a.nr();
      this.j = lx$a$a.nt();
      this.k = mi.f;
      this.l = mi.b;
      this.m = mi.c;
      this.n = 0;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.lx$a$a$a b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      com.google.android.gms.internal.lx$a[] v6;
      int v7; // RETVAL
      int v8;
      com.google.android.gms.internal.lx$a$a[] v9;
      int v10; // RETVAL
      int v11;
      String[] v12;
      int v13; // RETVAL
      int v14;
      long[] v15;
      int v16;
      int v17;
      int v18;
      int v19;
      long[] v20;
      int v21; // RETVAL
      int v22;
      float[] v23;
      int v24;
      int v25;
      int v26;
      int v27;
      float[] v28;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            this.a = p0.h();
            continue;
          case 18:
            this.b = p0.g();
            continue;
          case 25:
            this.c = p0.b();
            continue;
          case 37:
            this.d = p0.c();
            continue;
          case 40:
            this.e = p0.d();
            continue;
          case 48:
            this.f = p0.e();
            continue;
          case 56:
            this.g = p0.i();
            continue;
          case 64:
            this.h = p0.f();
            continue;
          case 74:
            v4 = mi.b(p0, 74);
            if ( this.i != null )
              v5 = this.i.length;
            else
              v5 = 0;
            v6 = new com.google.android.gms.internal.lx$a[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.i, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = new com.google.android.gms.internal.lx$a();
              p0.a(v6[v5]);
              p0.a();
              ++v5;
            }
            v6[v5] = new com.google.android.gms.internal.lx$a();
            p0.a(v6[v5]);
            this.i = (com.google.android.gms.internal.lx$a[])v6;
            continue;
          case 82:
            v7 = mi.b(p0, 82);
            if ( this.j != null )
              v8 = this.j.length;
            else
              v8 = 0;
            v9 = new com.google.android.gms.internal.lx$a$a[(v7 + v8)];
            if ( v8 != 0 )
              System.arraycopy(this.j, 0, v9, 0, v8);
            while ( v8 < v9.length - 1 )
            {
              v9[v8] = new com.google.android.gms.internal.lx$a$a();
              p0.a(v9[v8]);
              p0.a();
              ++v8;
            }
            v9[v8] = new com.google.android.gms.internal.lx$a$a();
            p0.a(v9[v8]);
            this.j = (com.google.android.gms.internal.lx$a$a[])v9;
            continue;
          case 90:
            v10 = mi.b(p0, 90);
            if ( this.k != null )
              v11 = this.k.length;
            else
              v11 = 0;
            v12 = new String[(v10 + v11)];
            if ( v11 != 0 )
              System.arraycopy(this.k, 0, v12, 0, v11);
            while ( v11 < v12.length - 1 )
            {
              v12[v11] = p0.g();
              p0.a();
              ++v11;
            }
            v12[v11] = p0.g();
            this.k = v12;
            continue;
          case 96:
            v13 = mi.b(p0, 96);
            if ( this.l != null )
              v14 = this.l.length;
            else
              v14 = 0;
            v15 = new long[(v13 + v14)];
            if ( v14 != 0 )
              System.arraycopy(this.l, 0, v15, 0, v14);
            while ( v14 < v15.length - 1 )
            {
              v15[v14] = p0.d();
              p0.a();
              ++v14;
            }
            v15[v14] = p0.d();
            this.l = (long[])v15;
            continue;
          case 98:
            v16 = p0.c(p0.k());
            v17 = p0.m();
            v18 = 0;
            while ( p0.l() > 0 )
            {
              p0.d();
              ++v18;
            }
            p0.e(v17);
            if ( this.l != null )
              v19 = this.l.length;
            else
              v19 = 0;
            v20 = new long[(v18 + v19)];
            if ( v19 != 0 )
              System.arraycopy(this.l, 0, v20, 0, v19);
            while ( v19 < v20.length )
              v20[v19++] = p0.d();
            this.l = (long[])v20;
            p0.d(v16);
            continue;
          case 104:
            this.n = p0.d();
            continue;
          case 114:
            v24 = p0.k();
            v25 = p0.c(v24);
            v26 = v24 / 4;
            if ( this.m != null )
              v27 = this.m.length;
            else
              v27 = 0;
            v28 = new float[(v26 + v27)];
            if ( v27 != 0 )
              System.arraycopy(this.m, 0, v28, 0, v27);
            while ( v27 < v28.length )
              v28[v27++] = p0.c();
            this.m = (float[])v28;
            p0.d(v25);
            continue;
          case 117:
            v21 = mi.b(p0, 117);
            if ( this.m != null )
              v22 = this.m.length;
            else
              v22 = 0;
            v23 = new float[(v21 + v22)];
            if ( v22 != 0 )
              System.arraycopy(this.m, 0, v23, 0, v22);
            while ( v22 < v23.length - 1 )
            {
              v23[v22] = p0.c();
              p0.a();
              ++v22;
            }
            v23[v22] = p0.c();
            this.m = (float[])v23;
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

    private com.google.android.gms.internal.lx$a$a$a d()
    {
      this.a = mi.h;
      this.b = "";
      this.c = 0.0;
      this.d = 0.0f;
      this.e = 0;
      this.f = 0;
      this.g = 0;
      this.h = false;
      this.i = lx$a.nr();
      this.j = lx$a$a.nt();
      this.k = mi.f;
      this.l = mi.b;
      this.m = mi.c;
      this.n = 0;
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
      com.google.android.gms.internal.lx$a v5;
      int v6;
      int j;
      com.google.android.gms.internal.lx$a$a v8;
      int v9;
      int v10;
      int v11;
      String v12;
      int v13;
      v1 = 0;
      v2 = super.a();
      if ( !Arrays.equals(this.a, mi.h) )
        v2 += ma.b(1, this.a);
      if ( !this.b.equals("") )
        v2 += ma.h(2, this.b);
      if ( Double.doubleToLongBits(this.c) != Double.doubleToLongBits(0.0) )
        v2 += ma.b(3, this.c);
      if ( Float.floatToIntBits(this.d) != Float.floatToIntBits(0.0f) )
        v2 += ma.c(4, this.d);
      if ( this.e != 0 )
        v2 += ma.d(5, this.e);
      if ( this.f != 0 )
        v2 += ma.r(6, this.f);
      if ( this.g != 0 )
        v2 += ma.s(7, this.g);
      if ( this.h )
        v2 += ma.b(8, this.h);
      if ( this.i != null && this.i.length > 0 )
      {
        v3 = v2;
        for ( i = 0; i < this.i.length; ++i )
        {
          v5 = this.i[i];
          if ( v5 != null )
            v3 += ma.b(9, v5);
        }
        v2 = v3;
      }
      if ( this.j != null && this.j.length > 0 )
      {
        v6 = v2;
        for ( j = 0; j < this.j.length; ++j )
        {
          v8 = this.j[j];
          if ( v8 != null )
            v6 += ma.b(10, v8);
        }
        v2 = v6;
      }
      if ( this.k != null && this.k.length > 0 )
      {
        v9 = 0;
        v10 = 0;
        v11 = 0;
        while ( v9 < this.k.length )
        {
          v12 = this.k[v9];
          if ( v12 != null )
          {
            ++v11;
            v10 += ma.cz(v12);
          }
          ++v9;
        }
        v2 += v10 + v11;
      }
      if ( this.l != null && this.l.length > 0 )
      {
        v13 = 0;
        while ( v1 < this.l.length )
          v13 += ma.D(this.l[v1++]);
        v2 += v13 + this.l.length;
      }
      if ( this.n != 0 )
        v2 += ma.d(13, this.n);
      if ( this.m != null && this.m.length > 0 )
        v2 += 4 * this.m.length + this.m.length;
      return v2;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      com.google.android.gms.internal.lx$a[] v6;
      int v7; // RETVAL
      int v8;
      com.google.android.gms.internal.lx$a$a[] v9;
      int v10; // RETVAL
      int v11;
      String[] v12;
      int v13; // RETVAL
      int v14;
      long[] v15;
      int v16;
      int v17;
      int v18;
      int v19;
      long[] v20;
      int v21; // RETVAL
      int v22;
      float[] v23;
      int v24;
      int v25;
      int v26;
      int v27;
      float[] v28;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            this.a = p0.h();
            continue;
          case 18:
            this.b = p0.g();
            continue;
          case 25:
            this.c = p0.b();
            continue;
          case 37:
            this.d = p0.c();
            continue;
          case 40:
            this.e = p0.d();
            continue;
          case 48:
            this.f = p0.e();
            continue;
          case 56:
            this.g = p0.i();
            continue;
          case 64:
            this.h = p0.f();
            continue;
          case 74:
            v4 = mi.b(p0, 74);
            if ( this.i != null )
              v5 = this.i.length;
            else
              v5 = 0;
            v6 = new com.google.android.gms.internal.lx$a[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.i, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = new com.google.android.gms.internal.lx$a();
              p0.a(v6[v5]);
              p0.a();
              ++v5;
            }
            v6[v5] = new com.google.android.gms.internal.lx$a();
            p0.a(v6[v5]);
            this.i = (com.google.android.gms.internal.lx$a[])v6;
            continue;
          case 82:
            v7 = mi.b(p0, 82);
            if ( this.j != null )
              v8 = this.j.length;
            else
              v8 = 0;
            v9 = new com.google.android.gms.internal.lx$a$a[(v7 + v8)];
            if ( v8 != 0 )
              System.arraycopy(this.j, 0, v9, 0, v8);
            while ( v8 < v9.length - 1 )
            {
              v9[v8] = new com.google.android.gms.internal.lx$a$a();
              p0.a(v9[v8]);
              p0.a();
              ++v8;
            }
            v9[v8] = new com.google.android.gms.internal.lx$a$a();
            p0.a(v9[v8]);
            this.j = (com.google.android.gms.internal.lx$a$a[])v9;
            continue;
          case 90:
            v10 = mi.b(p0, 90);
            if ( this.k != null )
              v11 = this.k.length;
            else
              v11 = 0;
            v12 = new String[(v10 + v11)];
            if ( v11 != 0 )
              System.arraycopy(this.k, 0, v12, 0, v11);
            while ( v11 < v12.length - 1 )
            {
              v12[v11] = p0.g();
              p0.a();
              ++v11;
            }
            v12[v11] = p0.g();
            this.k = v12;
            continue;
          case 96:
            v13 = mi.b(p0, 96);
            if ( this.l != null )
              v14 = this.l.length;
            else
              v14 = 0;
            v15 = new long[(v13 + v14)];
            if ( v14 != 0 )
              System.arraycopy(this.l, 0, v15, 0, v14);
            while ( v14 < v15.length - 1 )
            {
              v15[v14] = p0.d();
              p0.a();
              ++v14;
            }
            v15[v14] = p0.d();
            this.l = (long[])v15;
            continue;
          case 98:
            v16 = p0.c(p0.k());
            v17 = p0.m();
            v18 = 0;
            while ( p0.l() > 0 )
            {
              p0.d();
              ++v18;
            }
            p0.e(v17);
            if ( this.l != null )
              v19 = this.l.length;
            else
              v19 = 0;
            v20 = new long[(v18 + v19)];
            if ( v19 != 0 )
              System.arraycopy(this.l, 0, v20, 0, v19);
            while ( v19 < v20.length )
              v20[v19++] = p0.d();
            this.l = (long[])v20;
            p0.d(v16);
            continue;
          case 104:
            this.n = p0.d();
            continue;
          case 114:
            v24 = p0.k();
            v25 = p0.c(v24);
            v26 = v24 / 4;
            if ( this.m != null )
              v27 = this.m.length;
            else
              v27 = 0;
            v28 = new float[(v26 + v27)];
            if ( v27 != 0 )
              System.arraycopy(this.m, 0, v28, 0, v27);
            while ( v27 < v28.length )
              v28[v27++] = p0.c();
            this.m = (float[])v28;
            p0.d(v25);
            continue;
          case 117:
            v21 = mi.b(p0, 117);
            if ( this.m != null )
              v22 = this.m.length;
            else
              v22 = 0;
            v23 = new float[(v21 + v22)];
            if ( v22 != 0 )
              System.arraycopy(this.m, 0, v23, 0, v22);
            while ( v22 < v23.length - 1 )
            {
              v23[v22] = p0.c();
              p0.a();
              ++v22;
            }
            v23[v22] = p0.c();
            this.m = (float[])v23;
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
      int v2;
      int i;
      com.google.android.gms.internal.lx$a v4;
      int j;
      com.google.android.gms.internal.lx$a$a v6;
      int k;
      String v8;
      int m;
      v2 = 0;
      if ( !Arrays.equals(this.a, mi.h) )
        p0.a(1, this.a);
      if ( !this.b.equals("") )
        p0.a(2, this.b);
      if ( Double.doubleToLongBits(this.c) != Double.doubleToLongBits(0.0) )
        p0.a(3, this.c);
      if ( Float.floatToIntBits(this.d) != Float.floatToIntBits(0.0f) )
        p0.a(4, this.d);
      if ( this.e != 0 )
        p0.a(5, this.e);
      if ( this.f != 0 )
        p0.a(6, this.f);
      if ( this.g != 0 )
        p0.b(7, this.g);
      if ( this.h )
        p0.a(8, this.h);
      if ( this.i != null && this.i.length > 0 )
      {
        for ( i = 0; i < this.i.length; ++i )
        {
          v4 = this.i[i];
          if ( v4 != null )
            p0.a(9, v4);
        }
      }
      if ( this.j != null && this.j.length > 0 )
      {
        for ( j = 0; j < this.j.length; ++j )
        {
          v6 = this.j[j];
          if ( v6 != null )
            p0.a(10, v6);
        }
      }
      if ( this.k != null && this.k.length > 0 )
      {
        for ( k = 0; k < this.k.length; ++k )
        {
          v8 = this.k[k];
          if ( v8 != null )
            p0.a(11, v8);
        }
      }
      if ( this.l != null && this.l.length > 0 )
      {
        for ( m = 0; m < this.l.length; ++m )
          p0.a(12, this.l[m]);
      }
      if ( this.n != 0 )
        p0.a(13, this.n);
      if ( this.m != null && this.m.length > 0 )
      {
        while ( v2 < this.m.length )
          p0.a(14, Float.intBitsToFloat(Float.floatToRawIntBits(this.m[v2++])));
      }
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.lx$a$a$a v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.lx$a$a$a )
        {
          v4 = (com.google.android.gms.internal.lx$a$a$a)p0;
          if ( Arrays.equals(this.a, v4.a) )
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
            if ( Double.doubleToLongBits(this.c) == Double.doubleToLongBits(v4.c) )
            {
              if ( Float.floatToIntBits(this.d) == Float.floatToIntBits(v4.d) )
              {
                if ( this.e == v4.e )
                {
                  if ( this.f == v4.f )
                  {
                    if ( this.g == v4.g )
                    {
                      if ( this.h == v4.h )
                      {
                        if ( md.equals(this.i, v4.i) )
                        {
                          if ( md.equals(this.j, v4.j) )
                          {
                            if ( md.equals(this.k, v4.k) )
                            {
                              if ( md.equals(this.l, v4.l) )
                              {
                                if ( md.equals(this.m, v4.m) )
                                {
                                  if ( this.n == v4.n )
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
      long v4; // RETVAL
      int v5;
      int v6;
      int v7;
      v1 = 0;
      v2 = 31 * (Arrays.hashCode(this.a) + 527);
      if ( this.b != null )
        v3 = this.b.hashCode();
      else
        v3 = 0;
      v4 = Double.doubleToLongBits(this.c);
      v5 = (int)(31
               * (31
                * (31
                 * (31 * (31 * (31 * (v3 + v2) + (v4 ^ com.gameloft.android.DecompRT.hi32(v4))) + Float.floatToIntBits(this.d))
                  + (this.e ^ com.gameloft.android.DecompRT.hi32(this.e)))
                 + this.f)
                + this.g));
      if ( this.h )
        v6 = 1231;
      else
        v6 = 1237;
      v7 = (int)(31
               * (31
                * (31
                 * (31 * (31 * (31 * (31 * (v6 + v5) + md.hashCode(this.i)) + md.hashCode(this.j)) + md.hashCode(this.k))
                  + md.hashCode(this.l))
                 + md.hashCode(this.m))
                + (this.n ^ com.gameloft.android.DecompRT.hi32(this.n))));
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v7 + v1;
    }

}
