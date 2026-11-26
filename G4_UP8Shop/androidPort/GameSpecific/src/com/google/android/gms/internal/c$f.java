// Decompiled from classes.dex (SourceFile: c$f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$f extends com.google.android.gms.internal.mb {
    // Fields
    public java.lang.String[] a;
    public java.lang.String[] b;
    public com.google.android.gms.internal.d$a[] c;
    public com.google.android.gms.internal.c$e[] d;
    public com.google.android.gms.internal.c$b[] e;
    public com.google.android.gms.internal.c$b[] f;
    public com.google.android.gms.internal.c$b[] g;
    public com.google.android.gms.internal.c$g[] h;
    public java.lang.String i;
    public java.lang.String j;
    public java.lang.String k;
    public java.lang.String l;
    public com.google.android.gms.internal.c$a m;
    public float n;
    public boolean o;
    public java.lang.String[] p;
    public int q;

    // Methods
    public c$f()
    {
      super();
      this.a = mi.f;
      this.b = mi.f;
      this.c = d$a.r();
      this.d = c$e.i();
      this.e = c$b.d();
      this.f = c$b.d();
      this.g = c$b.d();
      this.h = c$g.l();
      this.i = "";
      this.j = "";
      this.k = "0";
      this.l = "";
      this.m = null;
      this.n = 0.0f;
      this.o = false;
      this.p = mi.f;
      this.q = 0;
      this.r = null;
      this.s = -1;
    }

    public static com.google.android.gms.internal.c$f a(byte[] p0)
 throws com.google.android.gms.internal.me {
      return (com.google.android.gms.internal.c$f)mf.a(new com.google.android.gms.internal.c$f(), p0);
    }

    private com.google.android.gms.internal.c$f b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      String[] v6;
      int v7; // RETVAL
      int v8;
      com.google.android.gms.internal.d$a[] v9;
      int v10; // RETVAL
      int v11;
      com.google.android.gms.internal.c$e[] v12;
      int v13; // RETVAL
      int v14;
      com.google.android.gms.internal.c$b[] v15;
      int v16; // RETVAL
      int v17;
      com.google.android.gms.internal.c$b[] v18;
      int v19; // RETVAL
      int v20;
      com.google.android.gms.internal.c$b[] v21;
      int v22; // RETVAL
      int v23;
      com.google.android.gms.internal.c$g[] v24;
      int v25; // RETVAL
      int v26;
      String[] v27;
      int v28; // RETVAL
      int v29;
      String[] v30;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            v4 = mi.b(p0, 10);
            if ( this.b != null )
              v5 = this.b.length;
            else
              v5 = 0;
            v6 = new String[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.b, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = p0.g();
              p0.a();
              ++v5;
            }
            v6[v5] = p0.g();
            this.b = v6;
            continue;
          case 18:
            v7 = mi.b(p0, 18);
            if ( this.c != null )
              v8 = this.c.length;
            else
              v8 = 0;
            v9 = new com.google.android.gms.internal.d$a[(v7 + v8)];
            if ( v8 != 0 )
              System.arraycopy(this.c, 0, v9, 0, v8);
            while ( v8 < v9.length - 1 )
            {
              v9[v8] = new com.google.android.gms.internal.d$a();
              p0.a(v9[v8]);
              p0.a();
              ++v8;
            }
            v9[v8] = new com.google.android.gms.internal.d$a();
            p0.a(v9[v8]);
            this.c = (com.google.android.gms.internal.d$a[])v9;
            continue;
          case 26:
            v10 = mi.b(p0, 26);
            if ( this.d != null )
              v11 = this.d.length;
            else
              v11 = 0;
            v12 = new com.google.android.gms.internal.c$e[(v10 + v11)];
            if ( v11 != 0 )
              System.arraycopy(this.d, 0, v12, 0, v11);
            while ( v11 < v12.length - 1 )
            {
              v12[v11] = new com.google.android.gms.internal.c$e();
              p0.a(v12[v11]);
              p0.a();
              ++v11;
            }
            v12[v11] = new com.google.android.gms.internal.c$e();
            p0.a(v12[v11]);
            this.d = (com.google.android.gms.internal.c$e[])v12;
            continue;
          case 34:
            v13 = mi.b(p0, 34);
            if ( this.e != null )
              v14 = this.e.length;
            else
              v14 = 0;
            v15 = new com.google.android.gms.internal.c$b[(v13 + v14)];
            if ( v14 != 0 )
              System.arraycopy(this.e, 0, v15, 0, v14);
            while ( v14 < v15.length - 1 )
            {
              v15[v14] = new com.google.android.gms.internal.c$b();
              p0.a(v15[v14]);
              p0.a();
              ++v14;
            }
            v15[v14] = new com.google.android.gms.internal.c$b();
            p0.a(v15[v14]);
            this.e = (com.google.android.gms.internal.c$b[])v15;
            continue;
          case 42:
            v16 = mi.b(p0, 42);
            if ( this.f != null )
              v17 = this.f.length;
            else
              v17 = 0;
            v18 = new com.google.android.gms.internal.c$b[(v16 + v17)];
            if ( v17 != 0 )
              System.arraycopy(this.f, 0, v18, 0, v17);
            while ( v17 < v18.length - 1 )
            {
              v18[v17] = new com.google.android.gms.internal.c$b();
              p0.a(v18[v17]);
              p0.a();
              ++v17;
            }
            v18[v17] = new com.google.android.gms.internal.c$b();
            p0.a(v18[v17]);
            this.f = (com.google.android.gms.internal.c$b[])v18;
            continue;
          case 50:
            v19 = mi.b(p0, 50);
            if ( this.g != null )
              v20 = this.g.length;
            else
              v20 = 0;
            v21 = new com.google.android.gms.internal.c$b[(v19 + v20)];
            if ( v20 != 0 )
              System.arraycopy(this.g, 0, v21, 0, v20);
            while ( v20 < v21.length - 1 )
            {
              v21[v20] = new com.google.android.gms.internal.c$b();
              p0.a(v21[v20]);
              p0.a();
              ++v20;
            }
            v21[v20] = new com.google.android.gms.internal.c$b();
            p0.a(v21[v20]);
            this.g = (com.google.android.gms.internal.c$b[])v21;
            continue;
          case 58:
            v22 = mi.b(p0, 58);
            if ( this.h != null )
              v23 = this.h.length;
            else
              v23 = 0;
            v24 = new com.google.android.gms.internal.c$g[(v22 + v23)];
            if ( v23 != 0 )
              System.arraycopy(this.h, 0, v24, 0, v23);
            while ( v23 < v24.length - 1 )
            {
              v24[v23] = new com.google.android.gms.internal.c$g();
              p0.a(v24[v23]);
              p0.a();
              ++v23;
            }
            v24[v23] = new com.google.android.gms.internal.c$g();
            p0.a(v24[v23]);
            this.h = (com.google.android.gms.internal.c$g[])v24;
            continue;
          case 74:
            this.i = p0.g();
            continue;
          case 82:
            this.j = p0.g();
            continue;
          case 98:
            this.k = p0.g();
            continue;
          case 106:
            this.l = p0.g();
            continue;
          case 114:
            if ( this.m == null )
              this.m = new com.google.android.gms.internal.c$a();
            p0.a(this.m);
            continue;
          case 125:
            this.n = p0.c();
            continue;
          case 130:
            v25 = mi.b(p0, 130);
            if ( this.p != null )
              v26 = this.p.length;
            else
              v26 = 0;
            v27 = new String[(v25 + v26)];
            if ( v26 != 0 )
              System.arraycopy(this.p, 0, v27, 0, v26);
            while ( v26 < v27.length - 1 )
            {
              v27[v26] = p0.g();
              p0.a();
              ++v26;
            }
            v27[v26] = p0.g();
            this.p = v27;
            continue;
          case 136:
            this.q = p0.e();
            continue;
          case 144:
            this.o = p0.f();
            continue;
          case 154:
            v28 = mi.b(p0, 154);
            if ( this.a != null )
              v29 = this.a.length;
            else
              v29 = 0;
            v30 = new String[(v28 + v29)];
            if ( v29 != 0 )
              System.arraycopy(this.a, 0, v30, 0, v29);
            while ( v29 < v30.length - 1 )
            {
              v30[v29] = p0.g();
              p0.a();
              ++v29;
            }
            v30[v29] = p0.g();
            this.a = v30;
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

    private com.google.android.gms.internal.c$f d()
    {
      this.a = mi.f;
      this.b = mi.f;
      this.c = d$a.r();
      this.d = c$e.i();
      this.e = c$b.d();
      this.f = c$b.d();
      this.g = c$b.d();
      this.h = c$g.l();
      this.i = "";
      this.j = "";
      this.k = "0";
      this.l = "";
      this.m = null;
      this.n = 0.0f;
      this.o = false;
      this.p = mi.f;
      this.q = 0;
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
      int v5;
      int v6;
      String v7;
      int v8;
      int v9;
      int i;
      com.google.android.gms.internal.d$a v11;
      int v12;
      int j;
      com.google.android.gms.internal.c$e v14;
      int v15;
      int k;
      com.google.android.gms.internal.c$b v17;
      int v18;
      int m;
      com.google.android.gms.internal.c$b v20;
      int v21;
      int n;
      com.google.android.gms.internal.c$b v23;
      int v24;
      int ii;
      com.google.android.gms.internal.c$g v26;
      int v27;
      int v28;
      int v29;
      String v30;
      int v31;
      int v32;
      String v33;
      v1 = 0;
      v2 = super.a();
      v3 = v2;
      if ( this.b != null && this.b.length > 0 )
      {
        v4 = 0;
        v5 = 0;
        v6 = 0;
        while ( v4 < this.b.length )
        {
          v7 = this.b[v4];
          if ( v7 != null )
          {
            ++v6;
            v5 += ma.cz(v7);
          }
          ++v4;
        }
        v8 = v3 + v5 + v6;
      }
      else
      {
        v8 = v2;
      }
      if ( this.c != null && this.c.length > 0 )
      {
        v9 = v8;
        for ( i = 0; i < this.c.length; ++i )
        {
          v11 = this.c[i];
          if ( v11 != null )
            v9 += ma.b(2, v11);
        }
        v8 = v9;
      }
      if ( this.d != null && this.d.length > 0 )
      {
        v12 = v8;
        for ( j = 0; j < this.d.length; ++j )
        {
          v14 = this.d[j];
          if ( v14 != null )
            v12 += ma.b(3, v14);
        }
        v8 = v12;
      }
      if ( this.e != null && this.e.length > 0 )
      {
        v15 = v8;
        for ( k = 0; k < this.e.length; ++k )
        {
          v17 = this.e[k];
          if ( v17 != null )
            v15 += ma.b(4, v17);
        }
        v8 = v15;
      }
      if ( this.f != null && this.f.length > 0 )
      {
        v18 = v8;
        for ( m = 0; m < this.f.length; ++m )
        {
          v20 = this.f[m];
          if ( v20 != null )
            v18 += ma.b(5, v20);
        }
        v8 = v18;
      }
      if ( this.g != null && this.g.length > 0 )
      {
        v21 = v8;
        for ( n = 0; n < this.g.length; ++n )
        {
          v23 = this.g[n];
          if ( v23 != null )
            v21 += ma.b(6, v23);
        }
        v8 = v21;
      }
      if ( this.h != null && this.h.length > 0 )
      {
        v24 = v8;
        for ( ii = 0; ii < this.h.length; ++ii )
        {
          v26 = this.h[ii];
          if ( v26 != null )
            v24 += ma.b(7, v26);
        }
        v8 = v24;
      }
      if ( !this.i.equals("") )
        v8 += ma.h(9, this.i);
      if ( !this.j.equals("") )
        v8 += ma.h(10, this.j);
      if ( !this.k.equals("0") )
        v8 += ma.h(12, this.k);
      if ( !this.l.equals("") )
        v8 += ma.h(13, this.l);
      if ( this.m != null )
        v8 += ma.b(14, this.m);
      if ( Float.floatToIntBits(this.n) != Float.floatToIntBits(0.0f) )
        v8 += ma.c(15, this.n);
      if ( this.p != null && this.p.length > 0 )
      {
        v27 = 0;
        v28 = 0;
        v29 = 0;
        while ( v27 < this.p.length )
        {
          v30 = this.p[v27];
          if ( v30 != null )
          {
            ++v29;
            v28 += ma.cz(v30);
          }
          ++v27;
        }
        v8 += v28 + 2 * v29;
      }
      if ( this.q != 0 )
        v8 += ma.r(17, this.q);
      if ( this.o )
        v8 += ma.b(18, this.o);
      if ( this.a != null && this.a.length > 0 )
      {
        v31 = 0;
        v32 = 0;
        while ( v1 < this.a.length )
        {
          v33 = this.a[v1];
          if ( v33 != null )
          {
            ++v32;
            v31 += ma.cz(v33);
          }
          ++v1;
        }
        v8 += v31 + 2 * v32;
      }
      return v8;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5;
      String[] v6;
      int v7; // RETVAL
      int v8;
      com.google.android.gms.internal.d$a[] v9;
      int v10; // RETVAL
      int v11;
      com.google.android.gms.internal.c$e[] v12;
      int v13; // RETVAL
      int v14;
      com.google.android.gms.internal.c$b[] v15;
      int v16; // RETVAL
      int v17;
      com.google.android.gms.internal.c$b[] v18;
      int v19; // RETVAL
      int v20;
      com.google.android.gms.internal.c$b[] v21;
      int v22; // RETVAL
      int v23;
      com.google.android.gms.internal.c$g[] v24;
      int v25; // RETVAL
      int v26;
      String[] v27;
      int v28; // RETVAL
      int v29;
      String[] v30;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 10:
            v4 = mi.b(p0, 10);
            if ( this.b != null )
              v5 = this.b.length;
            else
              v5 = 0;
            v6 = new String[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.b, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = p0.g();
              p0.a();
              ++v5;
            }
            v6[v5] = p0.g();
            this.b = v6;
            continue;
          case 18:
            v7 = mi.b(p0, 18);
            if ( this.c != null )
              v8 = this.c.length;
            else
              v8 = 0;
            v9 = new com.google.android.gms.internal.d$a[(v7 + v8)];
            if ( v8 != 0 )
              System.arraycopy(this.c, 0, v9, 0, v8);
            while ( v8 < v9.length - 1 )
            {
              v9[v8] = new com.google.android.gms.internal.d$a();
              p0.a(v9[v8]);
              p0.a();
              ++v8;
            }
            v9[v8] = new com.google.android.gms.internal.d$a();
            p0.a(v9[v8]);
            this.c = (com.google.android.gms.internal.d$a[])v9;
            continue;
          case 26:
            v10 = mi.b(p0, 26);
            if ( this.d != null )
              v11 = this.d.length;
            else
              v11 = 0;
            v12 = new com.google.android.gms.internal.c$e[(v10 + v11)];
            if ( v11 != 0 )
              System.arraycopy(this.d, 0, v12, 0, v11);
            while ( v11 < v12.length - 1 )
            {
              v12[v11] = new com.google.android.gms.internal.c$e();
              p0.a(v12[v11]);
              p0.a();
              ++v11;
            }
            v12[v11] = new com.google.android.gms.internal.c$e();
            p0.a(v12[v11]);
            this.d = (com.google.android.gms.internal.c$e[])v12;
            continue;
          case 34:
            v13 = mi.b(p0, 34);
            if ( this.e != null )
              v14 = this.e.length;
            else
              v14 = 0;
            v15 = new com.google.android.gms.internal.c$b[(v13 + v14)];
            if ( v14 != 0 )
              System.arraycopy(this.e, 0, v15, 0, v14);
            while ( v14 < v15.length - 1 )
            {
              v15[v14] = new com.google.android.gms.internal.c$b();
              p0.a(v15[v14]);
              p0.a();
              ++v14;
            }
            v15[v14] = new com.google.android.gms.internal.c$b();
            p0.a(v15[v14]);
            this.e = (com.google.android.gms.internal.c$b[])v15;
            continue;
          case 42:
            v16 = mi.b(p0, 42);
            if ( this.f != null )
              v17 = this.f.length;
            else
              v17 = 0;
            v18 = new com.google.android.gms.internal.c$b[(v16 + v17)];
            if ( v17 != 0 )
              System.arraycopy(this.f, 0, v18, 0, v17);
            while ( v17 < v18.length - 1 )
            {
              v18[v17] = new com.google.android.gms.internal.c$b();
              p0.a(v18[v17]);
              p0.a();
              ++v17;
            }
            v18[v17] = new com.google.android.gms.internal.c$b();
            p0.a(v18[v17]);
            this.f = (com.google.android.gms.internal.c$b[])v18;
            continue;
          case 50:
            v19 = mi.b(p0, 50);
            if ( this.g != null )
              v20 = this.g.length;
            else
              v20 = 0;
            v21 = new com.google.android.gms.internal.c$b[(v19 + v20)];
            if ( v20 != 0 )
              System.arraycopy(this.g, 0, v21, 0, v20);
            while ( v20 < v21.length - 1 )
            {
              v21[v20] = new com.google.android.gms.internal.c$b();
              p0.a(v21[v20]);
              p0.a();
              ++v20;
            }
            v21[v20] = new com.google.android.gms.internal.c$b();
            p0.a(v21[v20]);
            this.g = (com.google.android.gms.internal.c$b[])v21;
            continue;
          case 58:
            v22 = mi.b(p0, 58);
            if ( this.h != null )
              v23 = this.h.length;
            else
              v23 = 0;
            v24 = new com.google.android.gms.internal.c$g[(v22 + v23)];
            if ( v23 != 0 )
              System.arraycopy(this.h, 0, v24, 0, v23);
            while ( v23 < v24.length - 1 )
            {
              v24[v23] = new com.google.android.gms.internal.c$g();
              p0.a(v24[v23]);
              p0.a();
              ++v23;
            }
            v24[v23] = new com.google.android.gms.internal.c$g();
            p0.a(v24[v23]);
            this.h = (com.google.android.gms.internal.c$g[])v24;
            continue;
          case 74:
            this.i = p0.g();
            continue;
          case 82:
            this.j = p0.g();
            continue;
          case 98:
            this.k = p0.g();
            continue;
          case 106:
            this.l = p0.g();
            continue;
          case 114:
            if ( this.m == null )
              this.m = new com.google.android.gms.internal.c$a();
            p0.a(this.m);
            continue;
          case 125:
            this.n = p0.c();
            continue;
          case 130:
            v25 = mi.b(p0, 130);
            if ( this.p != null )
              v26 = this.p.length;
            else
              v26 = 0;
            v27 = new String[(v25 + v26)];
            if ( v26 != 0 )
              System.arraycopy(this.p, 0, v27, 0, v26);
            while ( v26 < v27.length - 1 )
            {
              v27[v26] = p0.g();
              p0.a();
              ++v26;
            }
            v27[v26] = p0.g();
            this.p = v27;
            continue;
          case 136:
            this.q = p0.e();
            continue;
          case 144:
            this.o = p0.f();
            continue;
          case 154:
            v28 = mi.b(p0, 154);
            if ( this.a != null )
              v29 = this.a.length;
            else
              v29 = 0;
            v30 = new String[(v28 + v29)];
            if ( v29 != 0 )
              System.arraycopy(this.a, 0, v30, 0, v29);
            while ( v29 < v30.length - 1 )
            {
              v30[v29] = p0.g();
              p0.a();
              ++v29;
            }
            v30[v29] = p0.g();
            this.a = v30;
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
      String v4;
      int j;
      com.google.android.gms.internal.d$a v6;
      int k;
      com.google.android.gms.internal.c$e v8;
      int m;
      com.google.android.gms.internal.c$b v10;
      int n;
      com.google.android.gms.internal.c$b v12;
      int ii;
      com.google.android.gms.internal.c$b v14;
      int jj;
      com.google.android.gms.internal.c$g v16;
      int kk;
      String v18;
      String v19;
      v2 = 0;
      if ( this.b != null && this.b.length > 0 )
      {
        for ( i = 0; i < this.b.length; ++i )
        {
          v4 = this.b[i];
          if ( v4 != null )
            p0.a(1, v4);
        }
      }
      if ( this.c != null && this.c.length > 0 )
      {
        for ( j = 0; j < this.c.length; ++j )
        {
          v6 = this.c[j];
          if ( v6 != null )
            p0.a(2, v6);
        }
      }
      if ( this.d != null && this.d.length > 0 )
      {
        for ( k = 0; k < this.d.length; ++k )
        {
          v8 = this.d[k];
          if ( v8 != null )
            p0.a(3, v8);
        }
      }
      if ( this.e != null && this.e.length > 0 )
      {
        for ( m = 0; m < this.e.length; ++m )
        {
          v10 = this.e[m];
          if ( v10 != null )
            p0.a(4, v10);
        }
      }
      if ( this.f != null && this.f.length > 0 )
      {
        for ( n = 0; n < this.f.length; ++n )
        {
          v12 = this.f[n];
          if ( v12 != null )
            p0.a(5, v12);
        }
      }
      if ( this.g != null && this.g.length > 0 )
      {
        for ( ii = 0; ii < this.g.length; ++ii )
        {
          v14 = this.g[ii];
          if ( v14 != null )
            p0.a(6, v14);
        }
      }
      if ( this.h != null && this.h.length > 0 )
      {
        for ( jj = 0; jj < this.h.length; ++jj )
        {
          v16 = this.h[jj];
          if ( v16 != null )
            p0.a(7, v16);
        }
      }
      if ( !this.i.equals("") )
        p0.a(9, this.i);
      if ( !this.j.equals("") )
        p0.a(10, this.j);
      if ( !this.k.equals("0") )
        p0.a(12, this.k);
      if ( !this.l.equals("") )
        p0.a(13, this.l);
      if ( this.m != null )
        p0.a(14, this.m);
      if ( Float.floatToIntBits(this.n) != Float.floatToIntBits(0.0f) )
        p0.a(15, this.n);
      if ( this.p != null && this.p.length > 0 )
      {
        for ( kk = 0; kk < this.p.length; ++kk )
        {
          v18 = this.p[kk];
          if ( v18 != null )
            p0.a(16, v18);
        }
      }
      if ( this.q != 0 )
        p0.a(17, this.q);
      if ( this.o )
        p0.a(18, this.o);
      if ( this.a != null && this.a.length > 0 )
      {
        while ( v2 < this.a.length )
        {
          v19 = this.a[v2];
          if ( v19 != null )
            p0.a(19, v19);
          ++v2;
        }
      }
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$f v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$f )
        {
          v4 = (com.google.android.gms.internal.c$f)p0;
          if ( md.equals(this.a, v4.a) )
          {
            if ( md.equals(this.b, v4.b) )
            {
              if ( md.equals(this.c, v4.c) )
              {
                if ( md.equals(this.d, v4.d) )
                {
                  if ( md.equals(this.e, v4.e) )
                  {
                    if ( md.equals(this.f, v4.f) )
                    {
                      if ( md.equals(this.g, v4.g) )
                      {
                        if ( md.equals(this.h, v4.h) )
                        {
                          if ( this.i != null )
                          {
                            if ( !this.i.equals(v4.i) )
                              return false;
                          }
                          else if ( v4.i != null )
                          {
                            return false;
                          }
                          if ( this.j != null )
                          {
                            if ( !this.j.equals(v4.j) )
                              return false;
                          }
                          else if ( v4.j != null )
                          {
                            return false;
                          }
                          if ( this.k != null )
                          {
                            if ( !this.k.equals(v4.k) )
                              return false;
                          }
                          else if ( v4.k != null )
                          {
                            return false;
                          }
                          if ( this.l != null )
                          {
                            if ( !this.l.equals(v4.l) )
                              return false;
                          }
                          else if ( v4.l != null )
                          {
                            return false;
                          }
                          if ( this.m != null )
                          {
                            if ( !this.m.equals(v4.m) )
                              return false;
                          }
                          else if ( v4.m != null )
                          {
                            return false;
                          }
                          if ( Float.floatToIntBits(this.n) == Float.floatToIntBits(v4.n) )
                          {
                            if ( this.o == v4.o )
                            {
                              if ( md.equals(this.p, v4.p) )
                              {
                                if ( this.q == v4.q )
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
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      v1 = 0;
      v2 = 31
         * (31
          * (31
           * (31
            * (31
             * (31 * (31 * (31 * (md.hashCode(this.a) + 527) + md.hashCode(this.b)) + md.hashCode(this.c))
              + md.hashCode(this.d))
             + md.hashCode(this.e))
            + md.hashCode(this.f))
           + md.hashCode(this.g))
          + md.hashCode(this.h));
      if ( this.i != null )
        v3 = this.i.hashCode();
      else
        v3 = 0;
      v4 = 31 * (v3 + v2);
      if ( this.j != null )
        v5 = this.j.hashCode();
      else
        v5 = 0;
      v6 = 31 * (v5 + v4);
      if ( this.k != null )
        v7 = this.k.hashCode();
      else
        v7 = 0;
      v8 = 31 * (v7 + v6);
      if ( this.l != null )
        v9 = this.l.hashCode();
      else
        v9 = 0;
      v10 = 31 * (v9 + v8);
      if ( this.m != null )
        v11 = this.m.hashCode();
      else
        v11 = 0;
      v12 = 31 * (31 * (v11 + v10) + Float.floatToIntBits(this.n));
      if ( this.o )
        v13 = 1231;
      else
        v13 = 1237;
      v14 = 31 * (31 * (31 * (v13 + v12) + md.hashCode(this.p)) + this.q);
      if ( this.r != null && !this.r.isEmpty() )
        v1 = this.r.hashCode();
      return v14 + v1;
    }

}
