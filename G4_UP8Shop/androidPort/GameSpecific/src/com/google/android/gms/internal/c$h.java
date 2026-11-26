// Decompiled from classes.dex (SourceFile: c$h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$h extends com.google.android.gms.internal.mb {
    // Fields
    public static final com.google.android.gms.internal.mc a;
    private static final com.google.android.gms.internal.c$h[] i;
    public int[] b;
    public int[] c;
    public int[] d;
    public int e;
    public int[] f;
    public int g;
    public int h;

    // Methods
    static
    {
      a = mc.a(11, com.google.android.gms.internal.c$h.class, 810);
      i = new com.google.android.gms.internal.c$h[0];
    }

    public c$h()
    {
      super();
      this.b = mi.a;
      this.c = mi.a;
      this.d = mi.a;
      this.e = 0;
      this.f = mi.a;
      this.g = 0;
      this.h = 0;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$h b(com.google.android.gms.internal.lz p0)
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
      int v12; // RETVAL
      int v13;
      int[] v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int[] v19;
      int v20; // RETVAL
      int v21;
      int[] v22;
      int v23;
      int v24;
      int v25;
      int v26;
      int[] v27;
      int v28; // RETVAL
      int v29;
      int[] v30;
      int v31;
      int v32;
      int v33;
      int v34;
      int[] v35;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            v4 = mi.b(p0, 8);
            if ( this.b != null )
              v5 = this.b.length;
            else
              v5 = 0;
            v6 = new int[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.b, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = p0.e();
              p0.a();
              ++v5;
            }
            v6[v5] = p0.e();
            this.b = (int[])v6;
            continue;
          case 10:
            v7 = p0.c(p0.k());
            v8 = p0.m();
            v9 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v9;
            }
            p0.e(v8);
            if ( this.b != null )
              v10 = this.b.length;
            else
              v10 = 0;
            v11 = new int[(v9 + v10)];
            if ( v10 != 0 )
              System.arraycopy(this.b, 0, v11, 0, v10);
            while ( v10 < v11.length )
              v11[v10++] = p0.e();
            this.b = (int[])v11;
            p0.d(v7);
            continue;
          case 16:
            v12 = mi.b(p0, 16);
            if ( this.c != null )
              v13 = this.c.length;
            else
              v13 = 0;
            v14 = new int[(v12 + v13)];
            if ( v13 != 0 )
              System.arraycopy(this.c, 0, v14, 0, v13);
            while ( v13 < v14.length - 1 )
            {
              v14[v13] = p0.e();
              p0.a();
              ++v13;
            }
            v14[v13] = p0.e();
            this.c = (int[])v14;
            continue;
          case 18:
            v15 = p0.c(p0.k());
            v16 = p0.m();
            v17 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v17;
            }
            p0.e(v16);
            if ( this.c != null )
              v18 = this.c.length;
            else
              v18 = 0;
            v19 = new int[(v17 + v18)];
            if ( v18 != 0 )
              System.arraycopy(this.c, 0, v19, 0, v18);
            while ( v18 < v19.length )
              v19[v18++] = p0.e();
            this.c = (int[])v19;
            p0.d(v15);
            continue;
          case 24:
            v20 = mi.b(p0, 24);
            if ( this.d != null )
              v21 = this.d.length;
            else
              v21 = 0;
            v22 = new int[(v20 + v21)];
            if ( v21 != 0 )
              System.arraycopy(this.d, 0, v22, 0, v21);
            while ( v21 < v22.length - 1 )
            {
              v22[v21] = p0.e();
              p0.a();
              ++v21;
            }
            v22[v21] = p0.e();
            this.d = (int[])v22;
            continue;
          case 26:
            v23 = p0.c(p0.k());
            v24 = p0.m();
            v25 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v25;
            }
            p0.e(v24);
            if ( this.d != null )
              v26 = this.d.length;
            else
              v26 = 0;
            v27 = new int[(v25 + v26)];
            if ( v26 != 0 )
              System.arraycopy(this.d, 0, v27, 0, v26);
            while ( v26 < v27.length )
              v27[v26++] = p0.e();
            this.d = (int[])v27;
            p0.d(v23);
            continue;
          case 32:
            this.e = p0.e();
            continue;
          case 40:
            v28 = mi.b(p0, 40);
            if ( this.f != null )
              v29 = this.f.length;
            else
              v29 = 0;
            v30 = new int[(v28 + v29)];
            if ( v29 != 0 )
              System.arraycopy(this.f, 0, v30, 0, v29);
            while ( v29 < v30.length - 1 )
            {
              v30[v29] = p0.e();
              p0.a();
              ++v29;
            }
            v30[v29] = p0.e();
            this.f = (int[])v30;
            continue;
          case 42:
            v31 = p0.c(p0.k());
            v32 = p0.m();
            v33 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v33;
            }
            p0.e(v32);
            if ( this.f != null )
              v34 = this.f.length;
            else
              v34 = 0;
            v35 = new int[(v33 + v34)];
            if ( v34 != 0 )
              System.arraycopy(this.f, 0, v35, 0, v34);
            while ( v34 < v35.length )
              v35[v34++] = p0.e();
            this.f = (int[])v35;
            p0.d(v31);
            continue;
          case 48:
            this.g = p0.e();
            continue;
          case 56:
            this.h = p0.e();
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

    private com.google.android.gms.internal.c$h d()
    {
      this.b = mi.a;
      this.c = mi.a;
      this.d = mi.a;
      this.e = 0;
      this.f = mi.a;
      this.g = 0;
      this.h = 0;
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
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      v1 = 0;
      v2 = super.a();
      v3 = v2;
      if ( this.b != null && this.b.length > 0 )
      {
        v4 = 0;
        v5 = 0;
        while ( v4 < this.b.length )
          v5 += ma.eE(this.b[v4++]);
        v6 = v3 + v5 + this.b.length;
      }
      else
      {
        v6 = v2;
      }
      if ( this.c != null && this.c.length > 0 )
      {
        v7 = 0;
        v8 = 0;
        while ( v7 < this.c.length )
          v8 += ma.eE(this.c[v7++]);
        v6 += v8 + this.c.length;
      }
      if ( this.d != null && this.d.length > 0 )
      {
        v9 = 0;
        v10 = 0;
        while ( v9 < this.d.length )
          v10 += ma.eE(this.d[v9++]);
        v6 += v10 + this.d.length;
      }
      if ( this.e != 0 )
        v6 += ma.r(4, this.e);
      if ( this.f != null && this.f.length > 0 )
      {
        v11 = 0;
        while ( v1 < this.f.length )
          v11 += ma.eE(this.f[v1++]);
        v6 += v11 + this.f.length;
      }
      if ( this.g != 0 )
        v6 += ma.r(6, this.g);
      if ( this.h != 0 )
        v6 += ma.r(7, this.h);
      return v6;
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
      int v12; // RETVAL
      int v13;
      int[] v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int[] v19;
      int v20; // RETVAL
      int v21;
      int[] v22;
      int v23;
      int v24;
      int v25;
      int v26;
      int[] v27;
      int v28; // RETVAL
      int v29;
      int[] v30;
      int v31;
      int v32;
      int v33;
      int v34;
      int[] v35;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            v4 = mi.b(p0, 8);
            if ( this.b != null )
              v5 = this.b.length;
            else
              v5 = 0;
            v6 = new int[(v4 + v5)];
            if ( v5 != 0 )
              System.arraycopy(this.b, 0, v6, 0, v5);
            while ( v5 < v6.length - 1 )
            {
              v6[v5] = p0.e();
              p0.a();
              ++v5;
            }
            v6[v5] = p0.e();
            this.b = (int[])v6;
            continue;
          case 10:
            v7 = p0.c(p0.k());
            v8 = p0.m();
            v9 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v9;
            }
            p0.e(v8);
            if ( this.b != null )
              v10 = this.b.length;
            else
              v10 = 0;
            v11 = new int[(v9 + v10)];
            if ( v10 != 0 )
              System.arraycopy(this.b, 0, v11, 0, v10);
            while ( v10 < v11.length )
              v11[v10++] = p0.e();
            this.b = (int[])v11;
            p0.d(v7);
            continue;
          case 16:
            v12 = mi.b(p0, 16);
            if ( this.c != null )
              v13 = this.c.length;
            else
              v13 = 0;
            v14 = new int[(v12 + v13)];
            if ( v13 != 0 )
              System.arraycopy(this.c, 0, v14, 0, v13);
            while ( v13 < v14.length - 1 )
            {
              v14[v13] = p0.e();
              p0.a();
              ++v13;
            }
            v14[v13] = p0.e();
            this.c = (int[])v14;
            continue;
          case 18:
            v15 = p0.c(p0.k());
            v16 = p0.m();
            v17 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v17;
            }
            p0.e(v16);
            if ( this.c != null )
              v18 = this.c.length;
            else
              v18 = 0;
            v19 = new int[(v17 + v18)];
            if ( v18 != 0 )
              System.arraycopy(this.c, 0, v19, 0, v18);
            while ( v18 < v19.length )
              v19[v18++] = p0.e();
            this.c = (int[])v19;
            p0.d(v15);
            continue;
          case 24:
            v20 = mi.b(p0, 24);
            if ( this.d != null )
              v21 = this.d.length;
            else
              v21 = 0;
            v22 = new int[(v20 + v21)];
            if ( v21 != 0 )
              System.arraycopy(this.d, 0, v22, 0, v21);
            while ( v21 < v22.length - 1 )
            {
              v22[v21] = p0.e();
              p0.a();
              ++v21;
            }
            v22[v21] = p0.e();
            this.d = (int[])v22;
            continue;
          case 26:
            v23 = p0.c(p0.k());
            v24 = p0.m();
            v25 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v25;
            }
            p0.e(v24);
            if ( this.d != null )
              v26 = this.d.length;
            else
              v26 = 0;
            v27 = new int[(v25 + v26)];
            if ( v26 != 0 )
              System.arraycopy(this.d, 0, v27, 0, v26);
            while ( v26 < v27.length )
              v27[v26++] = p0.e();
            this.d = (int[])v27;
            p0.d(v23);
            continue;
          case 32:
            this.e = p0.e();
            continue;
          case 40:
            v28 = mi.b(p0, 40);
            if ( this.f != null )
              v29 = this.f.length;
            else
              v29 = 0;
            v30 = new int[(v28 + v29)];
            if ( v29 != 0 )
              System.arraycopy(this.f, 0, v30, 0, v29);
            while ( v29 < v30.length - 1 )
            {
              v30[v29] = p0.e();
              p0.a();
              ++v29;
            }
            v30[v29] = p0.e();
            this.f = (int[])v30;
            continue;
          case 42:
            v31 = p0.c(p0.k());
            v32 = p0.m();
            v33 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v33;
            }
            p0.e(v32);
            if ( this.f != null )
              v34 = this.f.length;
            else
              v34 = 0;
            v35 = new int[(v33 + v34)];
            if ( v34 != 0 )
              System.arraycopy(this.f, 0, v35, 0, v34);
            while ( v34 < v35.length )
              v35[v34++] = p0.e();
            this.f = (int[])v35;
            p0.d(v31);
            continue;
          case 48:
            this.g = p0.e();
            continue;
          case 56:
            this.h = p0.e();
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
      int j;
      int k;
      v2 = 0;
      if ( this.b != null && this.b.length > 0 )
      {
        for ( i = 0; i < this.b.length; ++i )
          p0.a(1, this.b[i]);
      }
      if ( this.c != null && this.c.length > 0 )
      {
        for ( j = 0; j < this.c.length; ++j )
          p0.a(2, this.c[j]);
      }
      if ( this.d != null && this.d.length > 0 )
      {
        for ( k = 0; k < this.d.length; ++k )
          p0.a(3, this.d[k]);
      }
      if ( this.e != 0 )
        p0.a(4, this.e);
      if ( this.f != null && this.f.length > 0 )
      {
        while ( v2 < this.f.length )
          p0.a(5, this.f[v2++]);
      }
      if ( this.g != 0 )
        p0.a(6, this.g);
      if ( this.h != 0 )
        p0.a(7, this.h);
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$h v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$h )
        {
          v4 = (com.google.android.gms.internal.c$h)p0;
          if ( md.equals(this.b, v4.b) )
          {
            if ( md.equals(this.c, v4.c) )
            {
              if ( md.equals(this.d, v4.d) )
              {
                if ( this.e == v4.e )
                {
                  if ( md.equals(this.f, v4.f) )
                  {
                    if ( this.g == v4.g )
                    {
                      if ( this.h == v4.h )
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
      return v2;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      v1 = 31
         * (31
          * (31
           * (31 * (31 * (31 * (31 * (md.hashCode(this.b) + 527) + md.hashCode(this.c)) + md.hashCode(this.d)) + this.e)
            + md.hashCode(this.f))
           + this.g)
          + this.h);
      if ( this.r != null && !this.r.isEmpty() )
        v2 = this.r.hashCode();
      else
        v2 = 0;
      return v2 + v1;
    }

}
