// Decompiled from classes.dex (SourceFile: d$a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class d$a extends com.google.android.gms.internal.mb {
    // Fields
    private static volatile com.google.android.gms.internal.d$a[] m;
    public int a;
    public java.lang.String b;
    public com.google.android.gms.internal.d$a[] c;
    public com.google.android.gms.internal.d$a[] d;
    public com.google.android.gms.internal.d$a[] e;
    public java.lang.String f;
    public java.lang.String g;
    public long h;
    public boolean i;
    public com.google.android.gms.internal.d$a[] j;
    public int[] k;
    public boolean l;

    // Methods
    public d$a()
    {
      super();
      this.a = 1;
      this.b = "";
      this.c = r();
      this.d = r();
      this.e = r();
      this.f = "";
      this.g = "";
      this.h = 0;
      this.i = false;
      this.j = r();
      this.k = mi.a;
      this.l = false;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.d$a b(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5; // RETVAL
      int v6;
      com.google.android.gms.internal.d$a[] v7;
      int v8; // RETVAL
      int v9;
      com.google.android.gms.internal.d$a[] v10;
      int v11; // RETVAL
      int v12;
      com.google.android.gms.internal.d$a[] v13;
      int v14;
      int[] v15;
      int v16;
      int v17;
      int v18; // RETVAL
      int v19;
      int v20;
      int[] v21;
      int v22;
      int v23;
      int v24;
      int v25;
      int[] v26;
      int v27; // RETVAL
      int v28; // RETVAL
      int v29;
      com.google.android.gms.internal.d$a[] v30;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            v4 = p0.e();
            switch ( v4 )
            {
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
                this.a = v4;
                break;
              default:
                continue;
            }
            continue;
          case 18:
            this.b = p0.g();
            continue;
          case 26:
            v5 = mi.b(p0, 26);
            if ( this.c != null )
              v6 = this.c.length;
            else
              v6 = 0;
            v7 = new com.google.android.gms.internal.d$a[(v5 + v6)];
            if ( v6 != 0 )
              System.arraycopy(this.c, 0, v7, 0, v6);
            while ( v6 < v7.length - 1 )
            {
              v7[v6] = new com.google.android.gms.internal.d$a();
              p0.a(v7[v6]);
              p0.a();
              ++v6;
            }
            v7[v6] = new com.google.android.gms.internal.d$a();
            p0.a(v7[v6]);
            this.c = (com.google.android.gms.internal.d$a[])v7;
            continue;
          case 34:
            v8 = mi.b(p0, 34);
            if ( this.d != null )
              v9 = this.d.length;
            else
              v9 = 0;
            v10 = new com.google.android.gms.internal.d$a[(v8 + v9)];
            if ( v9 != 0 )
              System.arraycopy(this.d, 0, v10, 0, v9);
            while ( v9 < v10.length - 1 )
            {
              v10[v9] = new com.google.android.gms.internal.d$a();
              p0.a(v10[v9]);
              p0.a();
              ++v9;
            }
            v10[v9] = new com.google.android.gms.internal.d$a();
            p0.a(v10[v9]);
            this.d = (com.google.android.gms.internal.d$a[])v10;
            continue;
          case 42:
            v11 = mi.b(p0, 42);
            if ( this.e != null )
              v12 = this.e.length;
            else
              v12 = 0;
            v13 = new com.google.android.gms.internal.d$a[(v11 + v12)];
            if ( v12 != 0 )
              System.arraycopy(this.e, 0, v13, 0, v12);
            while ( v12 < v13.length - 1 )
            {
              v13[v12] = new com.google.android.gms.internal.d$a();
              p0.a(v13[v12]);
              p0.a();
              ++v12;
            }
            v13[v12] = new com.google.android.gms.internal.d$a();
            p0.a(v13[v12]);
            this.e = (com.google.android.gms.internal.d$a[])v13;
            continue;
          case 50:
            this.f = p0.g();
            continue;
          case 58:
            this.g = p0.g();
            continue;
          case 64:
            this.h = p0.d();
            continue;
          case 72:
            this.l = p0.f();
            continue;
          case 80:
            v14 = mi.b(p0, 80);
            v15 = new int[v14];
            v16 = 0;
            v17 = 0;
            while ( v16 < v14 )
            {
              if ( v16 != 0 )
                p0.a();
              v18 = p0.e();
              switch ( v18 )
              {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                  v19 = v17 + 1;
                  v15[v17] = v18;
                  break;
                default:
                  v19 = v17;
                  break;
              }
              ++v16;
              v17 = v19;
            }
            if ( v17 != 0 )
            {
              if ( this.k != null )
                v20 = this.k.length;
              else
                v20 = 0;
              if ( v20 != 0 || v17 != v15.length )
              {
                v21 = new int[(v20 + v17)];
                if ( v20 != 0 )
                  System.arraycopy(this.k, 0, v21, 0, v20);
                System.arraycopy(v15, 0, v21, v20, v17);
                this.k = v21;
              }
              else
              {
                this.k = v15;
              }
            }
            continue;
          case 82:
            v22 = p0.c(p0.k());
            v23 = p0.m();
            v24 = 0;
            while ( p0.l() > 0 )
            {
              switch ( p0.e() )
              {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                  ++v24;
                  break;
                default:
                  continue;
              }
            }
            if ( v24 != 0 )
            {
              p0.e(v23);
              if ( this.k != null )
                v25 = this.k.length;
              else
                v25 = 0;
              v26 = new int[(v24 + v25)];
              if ( v25 != 0 )
                System.arraycopy(this.k, 0, v26, 0, v25);
              while ( p0.l() > 0 )
              {
                v27 = p0.e();
                switch ( v27 )
                {
                  case 1:
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 11:
                  case 12:
                  case 13:
                  case 14:
                  case 15:
                  case 16:
                  case 17:
                    v26[v25++] = v27;
                    break;
                  default:
                    continue;
                }
              }
              this.k = v26;
            }
            p0.d(v22);
            continue;
          case 90:
            v28 = mi.b(p0, 90);
            if ( this.j != null )
              v29 = this.j.length;
            else
              v29 = 0;
            v30 = new com.google.android.gms.internal.d$a[(v28 + v29)];
            if ( v29 != 0 )
              System.arraycopy(this.j, 0, v30, 0, v29);
            while ( v29 < v30.length - 1 )
            {
              v30[v29] = new com.google.android.gms.internal.d$a();
              p0.a(v30[v29]);
              p0.a();
              ++v29;
            }
            v30[v29] = new com.google.android.gms.internal.d$a();
            p0.a(v30[v29]);
            this.j = (com.google.android.gms.internal.d$a[])v30;
            continue;
          case 96:
            this.i = p0.f();
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

    private com.google.android.gms.internal.d$a d()
    {
      this.a = 1;
      this.b = "";
      this.c = r();
      this.d = r();
      this.e = r();
      this.f = "";
      this.g = "";
      this.h = 0;
      this.i = false;
      this.j = r();
      this.k = mi.a;
      this.l = false;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.internal.d$a[] r()
    {
      com.google.android.gms.internal.d$a[] v0;
      Object v1;
      com.google.android.gms.internal.d$a[] v2;
      v0 = m;
      if ( v0 != null )
        return m;
      v1 = md.a;
      synchronized ( v1 )
      {
        v2 = m;
        if ( v2 == null )
          m = new com.google.android.gms.internal.d$a[0];
        return m;
      }
    }

    protected final int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      int v2;
      int v3;
      int i;
      com.google.android.gms.internal.d$a v5;
      int v6;
      int j;
      com.google.android.gms.internal.d$a v8;
      int v9;
      int k;
      com.google.android.gms.internal.d$a v11;
      int v12;
      int v13;
      com.google.android.gms.internal.d$a v14;
      v1 = 0;
      v2 = super.a() + ma.r(1, this.a);
      if ( !this.b.equals("") )
        v2 += ma.h(2, this.b);
      if ( this.c != null && this.c.length > 0 )
      {
        v3 = v2;
        for ( i = 0; i < this.c.length; ++i )
        {
          v5 = this.c[i];
          if ( v5 != null )
            v3 += ma.b(3, v5);
        }
        v2 = v3;
      }
      if ( this.d != null && this.d.length > 0 )
      {
        v6 = v2;
        for ( j = 0; j < this.d.length; ++j )
        {
          v8 = this.d[j];
          if ( v8 != null )
            v6 += ma.b(4, v8);
        }
        v2 = v6;
      }
      if ( this.e != null && this.e.length > 0 )
      {
        v9 = v2;
        for ( k = 0; k < this.e.length; ++k )
        {
          v11 = this.e[k];
          if ( v11 != null )
            v9 += ma.b(5, v11);
        }
        v2 = v9;
      }
      if ( !this.f.equals("") )
        v2 += ma.h(6, this.f);
      if ( !this.g.equals("") )
        v2 += ma.h(7, this.g);
      if ( this.h != 0 )
        v2 += ma.d(8, this.h);
      if ( this.l )
        v2 += ma.b(9, this.l);
      if ( this.k != null && this.k.length > 0 )
      {
        v12 = 0;
        v13 = 0;
        while ( v12 < this.k.length )
          v13 += ma.eE(this.k[v12++]);
        v2 += v13 + this.k.length;
      }
      if ( this.j != null && this.j.length > 0 )
      {
        while ( v1 < this.j.length )
        {
          v14 = this.j[v1];
          if ( v14 != null )
            v2 += ma.b(11, v14);
          ++v1;
        }
      }
      if ( this.i )
        v2 += ma.b(12, this.i);
      return v2;
    }

    /* synthetic */ public final com.google.android.gms.internal.mf a(com.google.android.gms.internal.lz p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v4; // RETVAL
      int v5; // RETVAL
      int v6;
      com.google.android.gms.internal.d$a[] v7;
      int v8; // RETVAL
      int v9;
      com.google.android.gms.internal.d$a[] v10;
      int v11; // RETVAL
      int v12;
      com.google.android.gms.internal.d$a[] v13;
      int v14;
      int[] v15;
      int v16;
      int v17;
      int v18; // RETVAL
      int v19;
      int v20;
      int[] v21;
      int v22;
      int v23;
      int v24;
      int v25;
      int[] v26;
      int v27; // RETVAL
      int v28; // RETVAL
      int v29;
      com.google.android.gms.internal.d$a[] v30;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            v4 = p0.e();
            switch ( v4 )
            {
              case 1:
              case 2:
              case 3:
              case 4:
              case 5:
              case 6:
              case 7:
              case 8:
                this.a = v4;
                break;
              default:
                continue;
            }
            continue;
          case 18:
            this.b = p0.g();
            continue;
          case 26:
            v5 = mi.b(p0, 26);
            if ( this.c != null )
              v6 = this.c.length;
            else
              v6 = 0;
            v7 = new com.google.android.gms.internal.d$a[(v5 + v6)];
            if ( v6 != 0 )
              System.arraycopy(this.c, 0, v7, 0, v6);
            while ( v6 < v7.length - 1 )
            {
              v7[v6] = new com.google.android.gms.internal.d$a();
              p0.a(v7[v6]);
              p0.a();
              ++v6;
            }
            v7[v6] = new com.google.android.gms.internal.d$a();
            p0.a(v7[v6]);
            this.c = (com.google.android.gms.internal.d$a[])v7;
            continue;
          case 34:
            v8 = mi.b(p0, 34);
            if ( this.d != null )
              v9 = this.d.length;
            else
              v9 = 0;
            v10 = new com.google.android.gms.internal.d$a[(v8 + v9)];
            if ( v9 != 0 )
              System.arraycopy(this.d, 0, v10, 0, v9);
            while ( v9 < v10.length - 1 )
            {
              v10[v9] = new com.google.android.gms.internal.d$a();
              p0.a(v10[v9]);
              p0.a();
              ++v9;
            }
            v10[v9] = new com.google.android.gms.internal.d$a();
            p0.a(v10[v9]);
            this.d = (com.google.android.gms.internal.d$a[])v10;
            continue;
          case 42:
            v11 = mi.b(p0, 42);
            if ( this.e != null )
              v12 = this.e.length;
            else
              v12 = 0;
            v13 = new com.google.android.gms.internal.d$a[(v11 + v12)];
            if ( v12 != 0 )
              System.arraycopy(this.e, 0, v13, 0, v12);
            while ( v12 < v13.length - 1 )
            {
              v13[v12] = new com.google.android.gms.internal.d$a();
              p0.a(v13[v12]);
              p0.a();
              ++v12;
            }
            v13[v12] = new com.google.android.gms.internal.d$a();
            p0.a(v13[v12]);
            this.e = (com.google.android.gms.internal.d$a[])v13;
            continue;
          case 50:
            this.f = p0.g();
            continue;
          case 58:
            this.g = p0.g();
            continue;
          case 64:
            this.h = p0.d();
            continue;
          case 72:
            this.l = p0.f();
            continue;
          case 80:
            v14 = mi.b(p0, 80);
            v15 = new int[v14];
            v16 = 0;
            v17 = 0;
            while ( v16 < v14 )
            {
              if ( v16 != 0 )
                p0.a();
              v18 = p0.e();
              switch ( v18 )
              {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                  v19 = v17 + 1;
                  v15[v17] = v18;
                  break;
                default:
                  v19 = v17;
                  break;
              }
              ++v16;
              v17 = v19;
            }
            if ( v17 != 0 )
            {
              if ( this.k != null )
                v20 = this.k.length;
              else
                v20 = 0;
              if ( v20 != 0 || v17 != v15.length )
              {
                v21 = new int[(v20 + v17)];
                if ( v20 != 0 )
                  System.arraycopy(this.k, 0, v21, 0, v20);
                System.arraycopy(v15, 0, v21, v20, v17);
                this.k = v21;
              }
              else
              {
                this.k = v15;
              }
            }
            continue;
          case 82:
            v22 = p0.c(p0.k());
            v23 = p0.m();
            v24 = 0;
            while ( p0.l() > 0 )
            {
              switch ( p0.e() )
              {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                case 14:
                case 15:
                case 16:
                case 17:
                  ++v24;
                  break;
                default:
                  continue;
              }
            }
            if ( v24 != 0 )
            {
              p0.e(v23);
              if ( this.k != null )
                v25 = this.k.length;
              else
                v25 = 0;
              v26 = new int[(v24 + v25)];
              if ( v25 != 0 )
                System.arraycopy(this.k, 0, v26, 0, v25);
              while ( p0.l() > 0 )
              {
                v27 = p0.e();
                switch ( v27 )
                {
                  case 1:
                  case 2:
                  case 3:
                  case 4:
                  case 5:
                  case 6:
                  case 7:
                  case 8:
                  case 9:
                  case 10:
                  case 11:
                  case 12:
                  case 13:
                  case 14:
                  case 15:
                  case 16:
                  case 17:
                    v26[v25++] = v27;
                    break;
                  default:
                    continue;
                }
              }
              this.k = v26;
            }
            p0.d(v22);
            continue;
          case 90:
            v28 = mi.b(p0, 90);
            if ( this.j != null )
              v29 = this.j.length;
            else
              v29 = 0;
            v30 = new com.google.android.gms.internal.d$a[(v28 + v29)];
            if ( v29 != 0 )
              System.arraycopy(this.j, 0, v30, 0, v29);
            while ( v29 < v30.length - 1 )
            {
              v30[v29] = new com.google.android.gms.internal.d$a();
              p0.a(v30[v29]);
              p0.a();
              ++v29;
            }
            v30[v29] = new com.google.android.gms.internal.d$a();
            p0.a(v30[v29]);
            this.j = (com.google.android.gms.internal.d$a[])v30;
            continue;
          case 96:
            this.i = p0.f();
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
      com.google.android.gms.internal.d$a v4;
      int j;
      com.google.android.gms.internal.d$a v6;
      int k;
      com.google.android.gms.internal.d$a v8;
      int m;
      com.google.android.gms.internal.d$a v10;
      v2 = 0;
      p0.a(1, this.a);
      if ( !this.b.equals("") )
        p0.a(2, this.b);
      if ( this.c != null && this.c.length > 0 )
      {
        for ( i = 0; i < this.c.length; ++i )
        {
          v4 = this.c[i];
          if ( v4 != null )
            p0.a(3, v4);
        }
      }
      if ( this.d != null && this.d.length > 0 )
      {
        for ( j = 0; j < this.d.length; ++j )
        {
          v6 = this.d[j];
          if ( v6 != null )
            p0.a(4, v6);
        }
      }
      if ( this.e != null && this.e.length > 0 )
      {
        for ( k = 0; k < this.e.length; ++k )
        {
          v8 = this.e[k];
          if ( v8 != null )
            p0.a(5, v8);
        }
      }
      if ( !this.f.equals("") )
        p0.a(6, this.f);
      if ( !this.g.equals("") )
        p0.a(7, this.g);
      if ( this.h != 0 )
        p0.a(8, this.h);
      if ( this.l )
        p0.a(9, this.l);
      if ( this.k != null && this.k.length > 0 )
      {
        for ( m = 0; m < this.k.length; ++m )
          p0.a(10, this.k[m]);
      }
      if ( this.j != null && this.j.length > 0 )
      {
        while ( v2 < this.j.length )
        {
          v10 = this.j[v2];
          if ( v10 != null )
            p0.a(11, v10);
          ++v2;
        }
      }
      if ( this.i )
        p0.a(12, this.i);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.d$a v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.d$a )
        {
          v4 = (com.google.android.gms.internal.d$a)p0;
          if ( this.a == v4.a )
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
            if ( md.equals(this.c, v4.c) )
            {
              if ( md.equals(this.d, v4.d) )
              {
                if ( md.equals(this.e, v4.e) )
                {
                  if ( this.f != null )
                  {
                    if ( !this.f.equals(v4.f) )
                      return false;
                  }
                  else if ( v4.f != null )
                  {
                    return false;
                  }
                  if ( this.g != null )
                  {
                    if ( !this.g.equals(v4.g) )
                      return false;
                  }
                  else if ( v4.g != null )
                  {
                    return false;
                  }
                  if ( this.h == v4.h )
                  {
                    if ( this.i == v4.i )
                    {
                      if ( md.equals(this.j, v4.j) )
                      {
                        if ( md.equals(this.k, v4.k) )
                        {
                          if ( this.l == v4.l )
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
      v1 = 1231;
      v2 = 0;
      v3 = 31 * (this.a + 527);
      if ( this.b != null )
        v4 = this.b.hashCode();
      else
        v4 = 0;
      v5 = 31 * (31 * (31 * (31 * (v4 + v3) + md.hashCode(this.c)) + md.hashCode(this.d)) + md.hashCode(this.e));
      if ( this.f != null )
        v6 = this.f.hashCode();
      else
        v6 = 0;
      v7 = 31 * (v6 + v5);
      if ( this.g != null )
        v8 = this.g.hashCode();
      else
        v8 = 0;
      v9 = (int)(31 * (31 * (v8 + v7) + (this.h ^ com.gameloft.android.DecompRT.hi32(this.h))));
      if ( this.i )
        v10 = 1231;
      else
        v10 = 1237;
      v11 = 31 * (31 * (31 * (v10 + v9) + md.hashCode(this.j)) + md.hashCode(this.k));
      if ( !this.l )
        v1 = 1237;
      v12 = 31 * (v11 + v1);
      if ( this.r != null && !this.r.isEmpty() )
        v2 = this.r.hashCode();
      return v12 + v2;
    }

}
