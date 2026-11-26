// Decompiled from classes.dex (SourceFile: cq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import com.google.android.gms.internal.c$h;
class cq {
    // Methods
    private static com.google.android.gms.internal.d$a a(
            int p0,
            com.google.android.gms.internal.c$f p1,
            com.google.android.gms.internal.d$a[] p2,
            java.util.Set<Integer> p3)
 throws com.google.android.gms.tagmanager.cq$g {
      int v4;
      com.google.android.gms.internal.d$a v5;
      com.google.android.gms.internal.d$a v8;
      com.google.android.gms.internal.c$h v9;
      int[] b;
      int v11;
      int v12;
      com.google.android.gms.internal.c$h v13; // RETVAL
      com.google.android.gms.internal.c$h v14;
      int[] c;
      int v16;
      int v17;
      int v18;
      int[] d;
      int v20;
      int v21;
      com.google.android.gms.internal.c$h v22; // RETVAL
      int[] f;
      int v24;
      int v25;
      v4 = 0;
      if ( p3.contains(Integer.valueOf(p0)) )
        cd("Value cycle detected.  Current value reference: " + p0 + ".  Previous value references: " + p3 + ".");
      v5 = (com.google.android.gms.internal.d$a)a(p1.c, p0, "values");
      if ( p2[p0] != null )
        return p2[p0];
      v8 = null;
      p3.add(Integer.valueOf(p0));
      switch ( v5.a )
      {
        case 1:
        case 5:
        case 6:
        case 8:
          v8 = v5;
          break;
        case 2:
          v9 = h(v5);
          v8 = g(v5);
          v8.c = new com.google.android.gms.internal.d$a[v9.b.length];
          b = v9.b;
          v11 = b.length;
          v12 = 0;
          while ( v4 < v11 )
            v8.c[v12++] = cq.a(b[v4++], p1, p2, p3);
          break;
        case 3:
          v8 = g(v5);
          v13 = h(v5);
          v14 = v13;
          if ( v13.c.length != v13.d.length )
            cd("Uneven map keys (" + v13.c.length + ") and map values (" + v13.d.length + ")");
          v8.d = new com.google.android.gms.internal.d$a[v14.c.length];
          v8.e = new com.google.android.gms.internal.d$a[v14.c.length];
          c = v14.c;
          v16 = c.length;
          v17 = 0;
          v18 = 0;
          while ( v17 < v16 )
            v8.d[v18++] = cq.a(c[v17++], p1, p2, p3);
          d = v14.d;
          v20 = d.length;
          v21 = 0;
          while ( v4 < v20 )
            v8.e[v21++] = cq.a(d[v4++], p1, p2, p3);
          break;
        case 4:
          v8 = g(v5);
          v8.f = dh.j(cq.a(h(v5).g, p1, p2, p3));
          break;
        case 7:
          v8 = g(v5);
          v22 = h(v5);
          v8.j = new com.google.android.gms.internal.d$a[v22.f.length];
          f = v22.f;
          v24 = f.length;
          v25 = 0;
          while ( v4 < v24 )
            v8.j[v25++] = cq.a(f[v4++], p1, p2, p3);
          break;
        default:
          break;
      }
      if ( v8 == null )
        cd("Invalid value: " + v5);
      p2[p0] = v8;
      p3.remove(Integer.valueOf(p0));
      return v8;
    }

    private static com.google.android.gms.tagmanager.cq$a a(
            com.google.android.gms.internal.c$b p0,
            com.google.android.gms.internal.c$f p1,
            com.google.android.gms.internal.d$a[] p2,
            int p3)
 throws com.google.android.gms.tagmanager.cq$g {
      com.google.android.gms.tagmanager.cq$b v4;
      int[] a;
      int v6;
      int i;
      com.google.android.gms.internal.c$e v8;
      String v9;
      com.google.android.gms.internal.d$a v10;
      v4 = cq$a.mi();
      a = p0.a;
      v6 = a.length;
      for ( i = 0; i < v6; ++i )
      {
        v8 = (com.google.android.gms.internal.c$e)cq.a(p1.d, Integer.valueOf(a[i]).intValue(), "properties");
        v9 = (String)cq.a(p1.b, v8.a, "keys");
        v10 = (com.google.android.gms.internal.d$a)cq.a(p2, v8.b, "values");
        if ( com.google.android.gms.internal.b.bG.toString().equals(v9) )
          v4.a(v10);
        else
          v4.a(v9, v10);
      }
      return v4.a();
    }

    private static com.google.android.gms.tagmanager.cq$e a(
            com.google.android.gms.internal.c$g p0,
            java.util.List<com.google.android.gms.tagmanager.cq$a> p1,
            java.util.List<com.google.android.gms.tagmanager.cq$a> p2,
            java.util.List<com.google.android.gms.tagmanager.cq$a> p3,
            com.google.android.gms.internal.c$f p4)
    {
      com.google.android.gms.tagmanager.cq$f v5;
      int[] a;
      int v7;
      int i;
      int[] b;
      int v10;
      int j;
      int[] c;
      int v13;
      int k;
      int[] e;
      int v16;
      int m;
      int[] d;
      int v19;
      int n;
      int[] f;
      int v22;
      int ii;
      int[] g;
      int v25;
      int jj;
      int[] v27;
      int v28;
      int kk;
      int[] h;
      int v31;
      int mm;
      int[] v33;
      int v34;
      int nn;
      v5 = cq$e.mq();
      a = p0.a;
      v7 = a.length;
      for ( i = 0; i < v7; ++i )
        v5.a((com.google.android.gms.tagmanager.cq$a)p3.get(Integer.valueOf(a[i]).intValue()));
      b = p0.b;
      v10 = b.length;
      for ( j = 0; j < v10; ++j )
        v5.b((com.google.android.gms.tagmanager.cq$a)p3.get(Integer.valueOf(b[j]).intValue()));
      c = p0.c;
      v13 = c.length;
      for ( k = 0; k < v13; ++k )
        v5.c((com.google.android.gms.tagmanager.cq$a)p1.get(Integer.valueOf(c[k]).intValue()));
      e = p0.e;
      v16 = e.length;
      for ( m = 0; m < v16; ++m )
        v5.a(p4.c[Integer.valueOf(e[m]).intValue()].b);
      d = p0.d;
      v19 = d.length;
      for ( n = 0; n < v19; ++n )
        v5.d((com.google.android.gms.tagmanager.cq$a)p1.get(Integer.valueOf(d[n]).intValue()));
      f = p0.f;
      v22 = f.length;
      for ( ii = 0; ii < v22; ++ii )
        v5.b(p4.c[Integer.valueOf(f[ii]).intValue()].b);
      g = p0.g;
      v25 = g.length;
      for ( jj = 0; jj < v25; ++jj )
        v5.e((com.google.android.gms.tagmanager.cq$a)p2.get(Integer.valueOf(g[jj]).intValue()));
      v27 = p0.i;
      v28 = v27.length;
      for ( kk = 0; kk < v28; ++kk )
        v5.c(p4.c[Integer.valueOf(v27[kk]).intValue()].b);
      h = p0.h;
      v31 = h.length;
      for ( mm = 0; mm < v31; ++mm )
        v5.f((com.google.android.gms.tagmanager.cq$a)p2.get(Integer.valueOf(h[mm]).intValue()));
      v33 = p0.j;
      v34 = v33.length;
      for ( nn = 0; nn < v34; ++nn )
        v5.d(p4.c[Integer.valueOf(v33[nn]).intValue()].b);
      return v5.a();
    }

    private static <T> T a(T[] p0, int p1, String p2)
 throws com.google.android.gms.tagmanager.cq$g {
      if ( p1 < 0 || p1 >= p0.length )
        cd("Index out of bounds detected: " + p1 + " in " + p2);
      return p0[p1];
    }

    public static com.google.android.gms.tagmanager.cq$c b(com.google.android.gms.internal.c$f p0)
 throws com.google.android.gms.tagmanager.cq$g {
      int v1;
      com.google.android.gms.internal.d$a[] v2;
      int i;
      com.google.android.gms.tagmanager.cq$d v4;
      java.util.List v5;
      int j;
      java.util.List v7;
      int k;
      java.util.List v9;
      int m;
      com.google.android.gms.tagmanager.cq$a v11;
      com.google.android.gms.internal.c$g[] h;
      int v13;
      v1 = 0;
      v2 = new com.google.android.gms.internal.d$a[p0.c.length];
      for ( i = 0; i < p0.c.length; ++i )
        a(i, p0, v2, new java.util.HashSet(0));
      v4 = cq$c.mm();
      v5 = new java.util.ArrayList();
      for ( j = 0; j < p0.f.length; ++j )
        v5.add(a(p0.f[j], p0, v2, j));
      v7 = new java.util.ArrayList();
      for ( k = 0; k < p0.g.length; ++k )
        v7.add(a(p0.g[k], p0, v2, k));
      v9 = new java.util.ArrayList();
      for ( m = 0; m < p0.e.length; ++m )
      {
        v11 = a(p0.e[m], p0, v2, m);
        v4.a(v11);
        v9.add(v11);
      }
      h = p0.h;
      v13 = h.length;
      while ( v1 < v13 )
        v4.a(a(h[v1++], v5, v9, v7, p0));
      v4.a(p0.l);
      v4.a(p0.q);
      return v4.a();
    }

    public static void b(java.io.InputStream p0, java.io.OutputStream p1)
 throws java.io.IOException {
      byte[] i;
      int v3; // RETVAL
    
      for ( i = new byte[1024]; ; p1.write(i, 0, v3) )
      {
        v3 = p0.read(i);
        if ( v3 == -1 )
          break;
      }
    }

    private static void cd(String p0)
 throws com.google.android.gms.tagmanager.cq$g {
      bh.A(p0);
      throw new com.google.android.gms.tagmanager.cq$g(p0);
    }

    public static com.google.android.gms.internal.d$a g(com.google.android.gms.internal.d$a p0)
    {
      com.google.android.gms.internal.d$a v1;
      v1 = new com.google.android.gms.internal.d$a();
      v1.a = p0.a;
      v1.k = (int[])p0.k.clone();
      if ( p0.l )
        v1.l = p0.l;
      return v1;
    }

    private static com.google.android.gms.internal.c$h h(com.google.android.gms.internal.d$a p0)
 throws com.google.android.gms.tagmanager.cq$g {
      if ( (com.google.android.gms.internal.c$h)p0.a(c$h.a) == null )
        cd("Expected a ServingValue and didn't get one. Value is: " + p0);
      return (com.google.android.gms.internal.c$h)p0.a(c$h.a);
    }

}
