// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.data;

import com.google.android.gms.internal.hl;
import com.google.android.gms.internal.hn;
public abstract class d {
    // Fields
    private int c;
    protected final com.google.android.gms.common.data.DataHolder v_;
    protected int z_;

    // Methods
    public d(com.google.android.gms.common.data.DataHolder p0, int p1)
    {
      super();
      this.v_ = (com.google.android.gms.common.data.DataHolder)hn.f(p0);
      this.a(p1);
    }

    protected final void a(int p0)
    {
      boolean v2;
      v2 = p0 >= 0 && p0 < this.v_.g();
      hn.A(v2);
      this.z_ = p0;
      this.c = this.v_.a(this.z_);
    }

    protected final void a(String p0, android.database.CharArrayBuffer p1)
    {
      this.v_.a(p0, this.z_, this.c, p1);
    }

    public final boolean a(String p0)
    {
      return this.v_.a(p0);
    }

    protected final long b(String p0)
    {
      return this.v_.a(p0, this.z_, this.c);
    }

    protected final int c(String p0)
    {
      return this.v_.b(p0, this.z_, this.c);
    }

    protected final boolean d(String p0)
    {
      return this.v_.d(p0, this.z_, this.c);
    }

    protected final String e(String p0)
    {
      return this.v_.c(p0, this.z_, this.c);
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.google.android.gms.common.data.d v3;
      v2 = false;
      if ( p0 instanceof com.google.android.gms.common.data.d )
      {
        v3 = (com.google.android.gms.common.data.d)p0;
        if ( hl.equal(Integer.valueOf(v3.z_), Integer.valueOf(this.z_))
          && hl.equal(Integer.valueOf(v3.c), Integer.valueOf(this.c)) )
        {
          return v3.v_ == this.v_;
        }
      }
      return v2;
    }

    protected final float f(String p0)
    {
      return this.v_.e(p0, this.z_, this.c);
    }

    protected final byte[] g(String p0)
    {
      return this.v_.f(p0, this.z_, this.c);
    }

    protected final android.net.Uri h(String p0)
    {
      return this.v_.g(p0, this.z_, this.c);
    }

    public int hashCode()
    {
      Object[] v1;
      v1 = new Object[3];
      v1[0] = Integer.valueOf(this.z_);
      v1[1] = Integer.valueOf(this.c);
      v1[2] = this.v_;
      return hl.hashCode(v1);
    }

    protected final int i()
    {
      return this.z_;
    }

    protected final boolean i(String p0)
    {
      return this.v_.h(p0, this.z_, this.c);
    }

    public final boolean i_()
    {
      return !this.v_.h();
    }

}
