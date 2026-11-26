// Decompiled from classes.dex (SourceFile: mb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public abstract class mb<M extends com.google.android.gms.internal.mb<M>> extends com.google.android.gms.internal.mf {
    // Fields
    protected java.util.List r;

    // Methods
    public mb()
    {
      super();
    }

    protected int a()
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      int v2;
      int v3;
      com.google.android.gms.internal.mh v4;
      if ( this.r != null )
        v1 = this.r.size();
      else
        v1 = 0;
      v2 = 0;
      v3 = 0;
      while ( v2 < v1 )
      {
        v4 = (com.google.android.gms.internal.mh)this.r.get(v2);
        v3 += ma.eJ(v4.a) + v4.b.length;
        ++v2;
      }
      return v3;
    }

    public final <T> T a(com.google.android.gms.internal.mc<M, T> p0)
    {
      return (T)p0.a(this.r);
    }

    public void a(com.google.android.gms.internal.ma p0)
 throws com.google.android.gms.internal.ma$a, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      int v2;
      int i;
      com.google.android.gms.internal.mh v4;
      if ( this.r != null )
        v2 = this.r.size();
      else
        v2 = 0;
      for ( i = 0; i < v2; ++i )
      {
        v4 = (com.google.android.gms.internal.mh)this.r.get(i);
        p0.a(v4.a);
        p0.a(v4.b);
      }
    }

    protected final boolean a(com.google.android.gms.internal.lz p0, int p1)
 throws com.google.android.gms.internal.me {
      int v3;
      v3 = p0.m();
      if ( !p0.b(p1) )
        return false;
      if ( this.r == null )
        this.r = new java.util.ArrayList();
      this.r.add(new com.google.android.gms.internal.mh(p1, p0.a(v3, p0.m() - v3)));
      return true;
    }

}
