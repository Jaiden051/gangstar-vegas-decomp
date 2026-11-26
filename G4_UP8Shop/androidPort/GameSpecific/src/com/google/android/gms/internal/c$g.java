// Decompiled from classes.dex (SourceFile: c$g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class c$g extends com.google.android.gms.internal.mb {
    // Fields
    private static volatile com.google.android.gms.internal.c$g[] k;
    public int[] a;
    public int[] b;
    public int[] c;
    public int[] d;
    public int[] e;
    public int[] f;
    public int[] g;
    public int[] h;
    public int[] i;
    public int[] j;

    // Methods
    public c$g()
    {
      super();
      this.a = mi.a;
      this.b = mi.a;
      this.c = mi.a;
      this.d = mi.a;
      this.e = mi.a;
      this.f = mi.a;
      this.g = mi.a;
      this.h = mi.a;
      this.i = mi.a;
      this.j = mi.a;
      this.r = null;
      this.s = -1;
    }

    private com.google.android.gms.internal.c$g b(com.google.android.gms.internal.lz p0)
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
      int v36; // RETVAL
      int v37;
      int[] v38;
      int v39;
      int v40;
      int v41;
      int v42;
      int[] v43;
      int v44; // RETVAL
      int v45;
      int[] v46;
      int v47;
      int v48;
      int v49;
      int v50;
      int[] v51;
      int v52; // RETVAL
      int v53;
      int[] v54;
      int v55;
      int v56;
      int v57;
      int v58;
      int[] v59;
      int v60; // RETVAL
      int v61;
      int[] v62;
      int v63;
      int v64;
      int v65;
      int v66;
      int[] v67;
      int v68; // RETVAL
      int v69;
      int[] v70;
      int v71;
      int v72;
      int v73;
      int v74;
      int[] v75;
      int v76; // RETVAL
      int v77;
      int[] v78;
      int v79;
      int v80;
      int v81;
      int v82;
      int[] v83;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            v4 = mi.b(p0, 8);
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
          case 16:
            v12 = mi.b(p0, 16);
            if ( this.b != null )
              v13 = this.b.length;
            else
              v13 = 0;
            v14 = new int[(v12 + v13)];
            if ( v13 != 0 )
              System.arraycopy(this.b, 0, v14, 0, v13);
            while ( v13 < v14.length - 1 )
            {
              v14[v13] = p0.e();
              p0.a();
              ++v13;
            }
            v14[v13] = p0.e();
            this.b = (int[])v14;
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
            if ( this.b != null )
              v18 = this.b.length;
            else
              v18 = 0;
            v19 = new int[(v17 + v18)];
            if ( v18 != 0 )
              System.arraycopy(this.b, 0, v19, 0, v18);
            while ( v18 < v19.length )
              v19[v18++] = p0.e();
            this.b = (int[])v19;
            p0.d(v15);
            continue;
          case 24:
            v20 = mi.b(p0, 24);
            if ( this.c != null )
              v21 = this.c.length;
            else
              v21 = 0;
            v22 = new int[(v20 + v21)];
            if ( v21 != 0 )
              System.arraycopy(this.c, 0, v22, 0, v21);
            while ( v21 < v22.length - 1 )
            {
              v22[v21] = p0.e();
              p0.a();
              ++v21;
            }
            v22[v21] = p0.e();
            this.c = (int[])v22;
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
            if ( this.c != null )
              v26 = this.c.length;
            else
              v26 = 0;
            v27 = new int[(v25 + v26)];
            if ( v26 != 0 )
              System.arraycopy(this.c, 0, v27, 0, v26);
            while ( v26 < v27.length )
              v27[v26++] = p0.e();
            this.c = (int[])v27;
            p0.d(v23);
            continue;
          case 32:
            v28 = mi.b(p0, 32);
            if ( this.d != null )
              v29 = this.d.length;
            else
              v29 = 0;
            v30 = new int[(v28 + v29)];
            if ( v29 != 0 )
              System.arraycopy(this.d, 0, v30, 0, v29);
            while ( v29 < v30.length - 1 )
            {
              v30[v29] = p0.e();
              p0.a();
              ++v29;
            }
            v30[v29] = p0.e();
            this.d = (int[])v30;
            continue;
          case 34:
            v31 = p0.c(p0.k());
            v32 = p0.m();
            v33 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v33;
            }
            p0.e(v32);
            if ( this.d != null )
              v34 = this.d.length;
            else
              v34 = 0;
            v35 = new int[(v33 + v34)];
            if ( v34 != 0 )
              System.arraycopy(this.d, 0, v35, 0, v34);
            while ( v34 < v35.length )
              v35[v34++] = p0.e();
            this.d = (int[])v35;
            p0.d(v31);
            continue;
          case 40:
            v36 = mi.b(p0, 40);
            if ( this.e != null )
              v37 = this.e.length;
            else
              v37 = 0;
            v38 = new int[(v36 + v37)];
            if ( v37 != 0 )
              System.arraycopy(this.e, 0, v38, 0, v37);
            while ( v37 < v38.length - 1 )
            {
              v38[v37] = p0.e();
              p0.a();
              ++v37;
            }
            v38[v37] = p0.e();
            this.e = (int[])v38;
            continue;
          case 42:
            v39 = p0.c(p0.k());
            v40 = p0.m();
            v41 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v41;
            }
            p0.e(v40);
            if ( this.e != null )
              v42 = this.e.length;
            else
              v42 = 0;
            v43 = new int[(v41 + v42)];
            if ( v42 != 0 )
              System.arraycopy(this.e, 0, v43, 0, v42);
            while ( v42 < v43.length )
              v43[v42++] = p0.e();
            this.e = (int[])v43;
            p0.d(v39);
            continue;
          case 48:
            v44 = mi.b(p0, 48);
            if ( this.f != null )
              v45 = this.f.length;
            else
              v45 = 0;
            v46 = new int[(v44 + v45)];
            if ( v45 != 0 )
              System.arraycopy(this.f, 0, v46, 0, v45);
            while ( v45 < v46.length - 1 )
            {
              v46[v45] = p0.e();
              p0.a();
              ++v45;
            }
            v46[v45] = p0.e();
            this.f = (int[])v46;
            continue;
          case 50:
            v47 = p0.c(p0.k());
            v48 = p0.m();
            v49 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v49;
            }
            p0.e(v48);
            if ( this.f != null )
              v50 = this.f.length;
            else
              v50 = 0;
            v51 = new int[(v49 + v50)];
            if ( v50 != 0 )
              System.arraycopy(this.f, 0, v51, 0, v50);
            while ( v50 < v51.length )
              v51[v50++] = p0.e();
            this.f = (int[])v51;
            p0.d(v47);
            continue;
          case 56:
            v52 = mi.b(p0, 56);
            if ( this.g != null )
              v53 = this.g.length;
            else
              v53 = 0;
            v54 = new int[(v52 + v53)];
            if ( v53 != 0 )
              System.arraycopy(this.g, 0, v54, 0, v53);
            while ( v53 < v54.length - 1 )
            {
              v54[v53] = p0.e();
              p0.a();
              ++v53;
            }
            v54[v53] = p0.e();
            this.g = (int[])v54;
            continue;
          case 58:
            v55 = p0.c(p0.k());
            v56 = p0.m();
            v57 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v57;
            }
            p0.e(v56);
            if ( this.g != null )
              v58 = this.g.length;
            else
              v58 = 0;
            v59 = new int[(v57 + v58)];
            if ( v58 != 0 )
              System.arraycopy(this.g, 0, v59, 0, v58);
            while ( v58 < v59.length )
              v59[v58++] = p0.e();
            this.g = (int[])v59;
            p0.d(v55);
            continue;
          case 64:
            v60 = mi.b(p0, 64);
            if ( this.h != null )
              v61 = this.h.length;
            else
              v61 = 0;
            v62 = new int[(v60 + v61)];
            if ( v61 != 0 )
              System.arraycopy(this.h, 0, v62, 0, v61);
            while ( v61 < v62.length - 1 )
            {
              v62[v61] = p0.e();
              p0.a();
              ++v61;
            }
            v62[v61] = p0.e();
            this.h = (int[])v62;
            continue;
          case 66:
            v63 = p0.c(p0.k());
            v64 = p0.m();
            v65 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v65;
            }
            p0.e(v64);
            if ( this.h != null )
              v66 = this.h.length;
            else
              v66 = 0;
            v67 = new int[(v65 + v66)];
            if ( v66 != 0 )
              System.arraycopy(this.h, 0, v67, 0, v66);
            while ( v66 < v67.length )
              v67[v66++] = p0.e();
            this.h = (int[])v67;
            p0.d(v63);
            continue;
          case 72:
            v68 = mi.b(p0, 72);
            if ( this.i != null )
              v69 = this.i.length;
            else
              v69 = 0;
            v70 = new int[(v68 + v69)];
            if ( v69 != 0 )
              System.arraycopy(this.i, 0, v70, 0, v69);
            while ( v69 < v70.length - 1 )
            {
              v70[v69] = p0.e();
              p0.a();
              ++v69;
            }
            v70[v69] = p0.e();
            this.i = (int[])v70;
            continue;
          case 74:
            v71 = p0.c(p0.k());
            v72 = p0.m();
            v73 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v73;
            }
            p0.e(v72);
            if ( this.i != null )
              v74 = this.i.length;
            else
              v74 = 0;
            v75 = new int[(v73 + v74)];
            if ( v74 != 0 )
              System.arraycopy(this.i, 0, v75, 0, v74);
            while ( v74 < v75.length )
              v75[v74++] = p0.e();
            this.i = (int[])v75;
            p0.d(v71);
            continue;
          case 80:
            v76 = mi.b(p0, 80);
            if ( this.j != null )
              v77 = this.j.length;
            else
              v77 = 0;
            v78 = new int[(v76 + v77)];
            if ( v77 != 0 )
              System.arraycopy(this.j, 0, v78, 0, v77);
            while ( v77 < v78.length - 1 )
            {
              v78[v77] = p0.e();
              p0.a();
              ++v77;
            }
            v78[v77] = p0.e();
            this.j = (int[])v78;
            continue;
          case 82:
            v79 = p0.c(p0.k());
            v80 = p0.m();
            v81 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v81;
            }
            p0.e(v80);
            if ( this.j != null )
              v82 = this.j.length;
            else
              v82 = 0;
            v83 = new int[(v81 + v82)];
            if ( v82 != 0 )
              System.arraycopy(this.j, 0, v83, 0, v82);
            while ( v82 < v83.length )
              v83[v82++] = p0.e();
            this.j = (int[])v83;
            p0.d(v79);
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

    private com.google.android.gms.internal.c$g d()
    {
      this.a = mi.a;
      this.b = mi.a;
      this.c = mi.a;
      this.d = mi.a;
      this.e = mi.a;
      this.f = mi.a;
      this.g = mi.a;
      this.h = mi.a;
      this.i = mi.a;
      this.j = mi.a;
      this.r = null;
      this.s = -1;
      return this;
    }

    public static com.google.android.gms.internal.c$g[] l()
    {
      com.google.android.gms.internal.c$g[] v0;
      Object v1;
      com.google.android.gms.internal.c$g[] v2;
      v0 = k;
      if ( v0 != null )
        return k;
      v1 = md.a;
      synchronized ( v1 )
      {
        v2 = k;
        if ( v2 == null )
          k = new com.google.android.gms.internal.c$g[0];
        return k;
      }
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
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      int v18;
      int v19;
      int v20;
      int v21;
      int v22;
      int v23;
      v1 = 0;
      v2 = super.a();
      v3 = v2;
      if ( this.a != null && this.a.length > 0 )
      {
        v4 = 0;
        v5 = 0;
        while ( v4 < this.a.length )
          v5 += ma.eE(this.a[v4++]);
        v6 = v3 + v5 + this.a.length;
      }
      else
      {
        v6 = v2;
      }
      if ( this.b != null && this.b.length > 0 )
      {
        v7 = 0;
        v8 = 0;
        while ( v7 < this.b.length )
          v8 += ma.eE(this.b[v7++]);
        v6 += v8 + this.b.length;
      }
      if ( this.c != null && this.c.length > 0 )
      {
        v9 = 0;
        v10 = 0;
        while ( v9 < this.c.length )
          v10 += ma.eE(this.c[v9++]);
        v6 += v10 + this.c.length;
      }
      if ( this.d != null && this.d.length > 0 )
      {
        v11 = 0;
        v12 = 0;
        while ( v11 < this.d.length )
          v12 += ma.eE(this.d[v11++]);
        v6 += v12 + this.d.length;
      }
      if ( this.e != null && this.e.length > 0 )
      {
        v13 = 0;
        v14 = 0;
        while ( v13 < this.e.length )
          v14 += ma.eE(this.e[v13++]);
        v6 += v14 + this.e.length;
      }
      if ( this.f != null && this.f.length > 0 )
      {
        v15 = 0;
        v16 = 0;
        while ( v15 < this.f.length )
          v16 += ma.eE(this.f[v15++]);
        v6 += v16 + this.f.length;
      }
      if ( this.g != null && this.g.length > 0 )
      {
        v17 = 0;
        v18 = 0;
        while ( v17 < this.g.length )
          v18 += ma.eE(this.g[v17++]);
        v6 += v18 + this.g.length;
      }
      if ( this.h != null && this.h.length > 0 )
      {
        v19 = 0;
        v20 = 0;
        while ( v19 < this.h.length )
          v20 += ma.eE(this.h[v19++]);
        v6 += v20 + this.h.length;
      }
      if ( this.i != null && this.i.length > 0 )
      {
        v21 = 0;
        v22 = 0;
        while ( v21 < this.i.length )
          v22 += ma.eE(this.i[v21++]);
        v6 += v22 + this.i.length;
      }
      if ( this.j != null && this.j.length > 0 )
      {
        v23 = 0;
        while ( v1 < this.j.length )
          v23 += ma.eE(this.j[v1++]);
        v6 += v23 + this.j.length;
      }
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
      int v36; // RETVAL
      int v37;
      int[] v38;
      int v39;
      int v40;
      int v41;
      int v42;
      int[] v43;
      int v44; // RETVAL
      int v45;
      int[] v46;
      int v47;
      int v48;
      int v49;
      int v50;
      int[] v51;
      int v52; // RETVAL
      int v53;
      int[] v54;
      int v55;
      int v56;
      int v57;
      int v58;
      int[] v59;
      int v60; // RETVAL
      int v61;
      int[] v62;
      int v63;
      int v64;
      int v65;
      int v66;
      int[] v67;
      int v68; // RETVAL
      int v69;
      int[] v70;
      int v71;
      int v72;
      int v73;
      int v74;
      int[] v75;
      int v76; // RETVAL
      int v77;
      int[] v78;
      int v79;
      int v80;
      int v81;
      int v82;
      int[] v83;
      while ( true )
      {
        v2 = p0.a();
        switch ( v2 )
        {
          case 0:
            return this;
          case 8:
            v4 = mi.b(p0, 8);
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
          case 16:
            v12 = mi.b(p0, 16);
            if ( this.b != null )
              v13 = this.b.length;
            else
              v13 = 0;
            v14 = new int[(v12 + v13)];
            if ( v13 != 0 )
              System.arraycopy(this.b, 0, v14, 0, v13);
            while ( v13 < v14.length - 1 )
            {
              v14[v13] = p0.e();
              p0.a();
              ++v13;
            }
            v14[v13] = p0.e();
            this.b = (int[])v14;
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
            if ( this.b != null )
              v18 = this.b.length;
            else
              v18 = 0;
            v19 = new int[(v17 + v18)];
            if ( v18 != 0 )
              System.arraycopy(this.b, 0, v19, 0, v18);
            while ( v18 < v19.length )
              v19[v18++] = p0.e();
            this.b = (int[])v19;
            p0.d(v15);
            continue;
          case 24:
            v20 = mi.b(p0, 24);
            if ( this.c != null )
              v21 = this.c.length;
            else
              v21 = 0;
            v22 = new int[(v20 + v21)];
            if ( v21 != 0 )
              System.arraycopy(this.c, 0, v22, 0, v21);
            while ( v21 < v22.length - 1 )
            {
              v22[v21] = p0.e();
              p0.a();
              ++v21;
            }
            v22[v21] = p0.e();
            this.c = (int[])v22;
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
            if ( this.c != null )
              v26 = this.c.length;
            else
              v26 = 0;
            v27 = new int[(v25 + v26)];
            if ( v26 != 0 )
              System.arraycopy(this.c, 0, v27, 0, v26);
            while ( v26 < v27.length )
              v27[v26++] = p0.e();
            this.c = (int[])v27;
            p0.d(v23);
            continue;
          case 32:
            v28 = mi.b(p0, 32);
            if ( this.d != null )
              v29 = this.d.length;
            else
              v29 = 0;
            v30 = new int[(v28 + v29)];
            if ( v29 != 0 )
              System.arraycopy(this.d, 0, v30, 0, v29);
            while ( v29 < v30.length - 1 )
            {
              v30[v29] = p0.e();
              p0.a();
              ++v29;
            }
            v30[v29] = p0.e();
            this.d = (int[])v30;
            continue;
          case 34:
            v31 = p0.c(p0.k());
            v32 = p0.m();
            v33 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v33;
            }
            p0.e(v32);
            if ( this.d != null )
              v34 = this.d.length;
            else
              v34 = 0;
            v35 = new int[(v33 + v34)];
            if ( v34 != 0 )
              System.arraycopy(this.d, 0, v35, 0, v34);
            while ( v34 < v35.length )
              v35[v34++] = p0.e();
            this.d = (int[])v35;
            p0.d(v31);
            continue;
          case 40:
            v36 = mi.b(p0, 40);
            if ( this.e != null )
              v37 = this.e.length;
            else
              v37 = 0;
            v38 = new int[(v36 + v37)];
            if ( v37 != 0 )
              System.arraycopy(this.e, 0, v38, 0, v37);
            while ( v37 < v38.length - 1 )
            {
              v38[v37] = p0.e();
              p0.a();
              ++v37;
            }
            v38[v37] = p0.e();
            this.e = (int[])v38;
            continue;
          case 42:
            v39 = p0.c(p0.k());
            v40 = p0.m();
            v41 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v41;
            }
            p0.e(v40);
            if ( this.e != null )
              v42 = this.e.length;
            else
              v42 = 0;
            v43 = new int[(v41 + v42)];
            if ( v42 != 0 )
              System.arraycopy(this.e, 0, v43, 0, v42);
            while ( v42 < v43.length )
              v43[v42++] = p0.e();
            this.e = (int[])v43;
            p0.d(v39);
            continue;
          case 48:
            v44 = mi.b(p0, 48);
            if ( this.f != null )
              v45 = this.f.length;
            else
              v45 = 0;
            v46 = new int[(v44 + v45)];
            if ( v45 != 0 )
              System.arraycopy(this.f, 0, v46, 0, v45);
            while ( v45 < v46.length - 1 )
            {
              v46[v45] = p0.e();
              p0.a();
              ++v45;
            }
            v46[v45] = p0.e();
            this.f = (int[])v46;
            continue;
          case 50:
            v47 = p0.c(p0.k());
            v48 = p0.m();
            v49 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v49;
            }
            p0.e(v48);
            if ( this.f != null )
              v50 = this.f.length;
            else
              v50 = 0;
            v51 = new int[(v49 + v50)];
            if ( v50 != 0 )
              System.arraycopy(this.f, 0, v51, 0, v50);
            while ( v50 < v51.length )
              v51[v50++] = p0.e();
            this.f = (int[])v51;
            p0.d(v47);
            continue;
          case 56:
            v52 = mi.b(p0, 56);
            if ( this.g != null )
              v53 = this.g.length;
            else
              v53 = 0;
            v54 = new int[(v52 + v53)];
            if ( v53 != 0 )
              System.arraycopy(this.g, 0, v54, 0, v53);
            while ( v53 < v54.length - 1 )
            {
              v54[v53] = p0.e();
              p0.a();
              ++v53;
            }
            v54[v53] = p0.e();
            this.g = (int[])v54;
            continue;
          case 58:
            v55 = p0.c(p0.k());
            v56 = p0.m();
            v57 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v57;
            }
            p0.e(v56);
            if ( this.g != null )
              v58 = this.g.length;
            else
              v58 = 0;
            v59 = new int[(v57 + v58)];
            if ( v58 != 0 )
              System.arraycopy(this.g, 0, v59, 0, v58);
            while ( v58 < v59.length )
              v59[v58++] = p0.e();
            this.g = (int[])v59;
            p0.d(v55);
            continue;
          case 64:
            v60 = mi.b(p0, 64);
            if ( this.h != null )
              v61 = this.h.length;
            else
              v61 = 0;
            v62 = new int[(v60 + v61)];
            if ( v61 != 0 )
              System.arraycopy(this.h, 0, v62, 0, v61);
            while ( v61 < v62.length - 1 )
            {
              v62[v61] = p0.e();
              p0.a();
              ++v61;
            }
            v62[v61] = p0.e();
            this.h = (int[])v62;
            continue;
          case 66:
            v63 = p0.c(p0.k());
            v64 = p0.m();
            v65 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v65;
            }
            p0.e(v64);
            if ( this.h != null )
              v66 = this.h.length;
            else
              v66 = 0;
            v67 = new int[(v65 + v66)];
            if ( v66 != 0 )
              System.arraycopy(this.h, 0, v67, 0, v66);
            while ( v66 < v67.length )
              v67[v66++] = p0.e();
            this.h = (int[])v67;
            p0.d(v63);
            continue;
          case 72:
            v68 = mi.b(p0, 72);
            if ( this.i != null )
              v69 = this.i.length;
            else
              v69 = 0;
            v70 = new int[(v68 + v69)];
            if ( v69 != 0 )
              System.arraycopy(this.i, 0, v70, 0, v69);
            while ( v69 < v70.length - 1 )
            {
              v70[v69] = p0.e();
              p0.a();
              ++v69;
            }
            v70[v69] = p0.e();
            this.i = (int[])v70;
            continue;
          case 74:
            v71 = p0.c(p0.k());
            v72 = p0.m();
            v73 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v73;
            }
            p0.e(v72);
            if ( this.i != null )
              v74 = this.i.length;
            else
              v74 = 0;
            v75 = new int[(v73 + v74)];
            if ( v74 != 0 )
              System.arraycopy(this.i, 0, v75, 0, v74);
            while ( v74 < v75.length )
              v75[v74++] = p0.e();
            this.i = (int[])v75;
            p0.d(v71);
            continue;
          case 80:
            v76 = mi.b(p0, 80);
            if ( this.j != null )
              v77 = this.j.length;
            else
              v77 = 0;
            v78 = new int[(v76 + v77)];
            if ( v77 != 0 )
              System.arraycopy(this.j, 0, v78, 0, v77);
            while ( v77 < v78.length - 1 )
            {
              v78[v77] = p0.e();
              p0.a();
              ++v77;
            }
            v78[v77] = p0.e();
            this.j = (int[])v78;
            continue;
          case 82:
            v79 = p0.c(p0.k());
            v80 = p0.m();
            v81 = 0;
            while ( p0.l() > 0 )
            {
              p0.e();
              ++v81;
            }
            p0.e(v80);
            if ( this.j != null )
              v82 = this.j.length;
            else
              v82 = 0;
            v83 = new int[(v81 + v82)];
            if ( v82 != 0 )
              System.arraycopy(this.j, 0, v83, 0, v82);
            while ( v82 < v83.length )
              v83[v82++] = p0.e();
            this.j = (int[])v83;
            p0.d(v79);
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
      int m;
      int n;
      int ii;
      int jj;
      int kk;
      int mm;
      v2 = 0;
      if ( this.a != null && this.a.length > 0 )
      {
        for ( i = 0; i < this.a.length; ++i )
          p0.a(1, this.a[i]);
      }
      if ( this.b != null && this.b.length > 0 )
      {
        for ( j = 0; j < this.b.length; ++j )
          p0.a(2, this.b[j]);
      }
      if ( this.c != null && this.c.length > 0 )
      {
        for ( k = 0; k < this.c.length; ++k )
          p0.a(3, this.c[k]);
      }
      if ( this.d != null && this.d.length > 0 )
      {
        for ( m = 0; m < this.d.length; ++m )
          p0.a(4, this.d[m]);
      }
      if ( this.e != null && this.e.length > 0 )
      {
        for ( n = 0; n < this.e.length; ++n )
          p0.a(5, this.e[n]);
      }
      if ( this.f != null && this.f.length > 0 )
      {
        for ( ii = 0; ii < this.f.length; ++ii )
          p0.a(6, this.f[ii]);
      }
      if ( this.g != null && this.g.length > 0 )
      {
        for ( jj = 0; jj < this.g.length; ++jj )
          p0.a(7, this.g[jj]);
      }
      if ( this.h != null && this.h.length > 0 )
      {
        for ( kk = 0; kk < this.h.length; ++kk )
          p0.a(8, this.h[kk]);
      }
      if ( this.i != null && this.i.length > 0 )
      {
        for ( mm = 0; mm < this.i.length; ++mm )
          p0.a(9, this.i[mm]);
      }
      if ( this.j != null && this.j.length > 0 )
      {
        while ( v2 < this.j.length )
          p0.a(10, this.j[v2++]);
      }
      super.a(p0);
    }

    public final boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.internal.c$g v4;
      v2 = true;
      if ( p0 != this )
      {
        if ( p0 instanceof com.google.android.gms.internal.c$g )
        {
          v4 = (com.google.android.gms.internal.c$g)p0;
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
                          if ( md.equals(this.i, v4.i) )
                          {
                            if ( md.equals(this.j, v4.j) )
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
      return v2;
    }

    public final int hashCode()
    {
      int v1;
      int v2;
      v1 = 31
         * (31
          * (31
           * (31
            * (31
             * (31
              * (31
               * (31 * (31 * (31 * (md.hashCode(this.a) + 527) + md.hashCode(this.b)) + md.hashCode(this.c))
                + md.hashCode(this.d))
               + md.hashCode(this.e))
              + md.hashCode(this.f))
             + md.hashCode(this.g))
            + md.hashCode(this.h))
           + md.hashCode(this.i))
          + md.hashCode(this.j));
      if ( this.r != null && !this.r.isEmpty() )
        v2 = this.r.hashCode();
      else
        v2 = 0;
      return v2 + v1;
    }

}
