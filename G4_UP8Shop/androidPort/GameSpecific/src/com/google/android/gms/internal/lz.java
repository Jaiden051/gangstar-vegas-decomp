// Decompiled from classes.dex (SourceFile: lz.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class lz {
    // Fields
    private final byte[] a;
    private int b;
    private int c;
    private int d;
    private int e;
    private int f;
    private int g;
    private int h;
    private int i;
    private int j;

    // Methods
    private lz(byte[] p0, int p1, int p2)
    {
      super();
      this.g = 0x7FFFFFFF;
      this.i = 64;
      this.j = 0x4000000;
      this.a = (byte[])p0;
      this.b = p1;
      this.c = p1 + p2;
      this.e = p1;
    }

    public static long A(long p0)
    {
      return (p0 >>> 1) ^ -(p0 & 1);
    }

    public static com.google.android.gms.internal.lz a(byte[] p0, int p1, int p2)
    {
      return new com.google.android.gms.internal.lz(p0, p1, p2);
    }

    public static int ew(int p0)
    {
      return (p0 >>> 1) ^ -(p0 & 1);
    }

    private byte[] f(int p0)
 throws com.google.android.gms.internal.me {
      byte[] v2;
      if ( p0 < 0 )
        throw me.nO();
      if ( this.e + p0 > this.g )
      {
        this.g(this.g - this.e);
        throw me.nN();
      }
      if ( p0 > this.c - this.e )
        throw me.nN();
      v2 = new byte[p0];
      System.arraycopy(this.a, this.e, v2, 0, p0);
      this.e += p0;
      return (byte[])v2;
    }

    private void g(int p0)
 throws com.google.android.gms.internal.me {
      if ( p0 < 0 )
        throw me.nO();
      if ( this.e + p0 > this.g )
      {
        this.g(this.g - this.e);
        throw me.nN();
      }
      if ( p0 > this.c - this.e )
        throw me.nN();
      this.e += p0;
    }

    private void n()
 throws com.google.android.gms.internal.me {
      int v1; // RETVAL
    
      do
        v1 = this.a();
      while ( v1 != 0 && this.b(v1) );
    }

    private long o()
 throws com.google.android.gms.internal.me {
      int v1;
      long v2;
      byte v3; // RETVAL
    
      v1 = 0;
      v2 = 0;
      while ( true )
      {
        if ( v1 >= 64 )
          throw me.nP();
        v3 = this.t();
        v2 |= (long)(v3 & 0x7F) << v1;
        if ( (v3 & 0x80) == 0 )
          break;
        v1 += 7;
      }
      return v2;
    }

    private int p()
 throws com.google.android.gms.internal.me {
      return (int)this.t()
           | ((int)this.t() << 8)
           | ((int)this.t() << 16)
           | (this.t() << 24);
    }

    public static com.google.android.gms.internal.lz p(byte[] p0)
    {
      return a(p0, 0, p0.length);
    }

    private long q()
 throws com.google.android.gms.internal.me {
      return ((this.t() & 0xFFL) << 8)
           | this.t() & 0xFFL
           | ((this.t() & 0xFFL) << 16)
           | ((this.t() & 0xFFL) << 24)
           | ((this.t() & 0xFFL) << 32)
           | ((this.t() & 0xFFL) << 40)
           | ((this.t() & 0xFFL) << 48)
           | ((long)this.t() << 56);
    }

    private void r()
    {
      int c;
      this.c += this.d;
      c = this.c;
      if ( c <= this.g )
      {
        this.d = 0;
      }
      else
      {
        this.d = c - this.g;
        this.c -= this.d;
      }
    }

    private boolean s()
    {
      return this.e == this.c;
    }

    private byte t()
 throws com.google.android.gms.internal.me {
      int e;
      if ( this.e == this.c )
        throw me.nN();
      e = this.e;
      this.e = e + 1;
      return this.a[e];
    }

    public final int a()
 throws com.google.android.gms.internal.me {
      int v1;
      v1 = 0;
      if ( this.e == this.c )
      {
        this.f = 0;
      }
      else
      {
        this.f = this.k();
        if ( this.f == 0 )
          throw me.nQ();
        return this.f;
      }
      return v1;
    }

    public final void a(int p0)
 throws com.google.android.gms.internal.me {
      if ( this.f != p0 )
        throw me.nR();
    }

    public final void a(com.google.android.gms.internal.mf p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v2; // RETVAL
      int v3;
      v2 = this.k();
      if ( this.h >= this.i )
        throw me.nT();
      v3 = this.c(v2);
      ++this.h;
      p0.a(this);
      this.a(0);
      --this.h;
      this.d(v3);
    }

    public final void a(com.google.android.gms.internal.mf p0, int p1)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      if ( this.h >= this.i )
        throw me.nT();
      ++this.h;
      p0.a(this);
      this.a(mi.u(p1, 4));
      --this.h;
    }

    public final byte[] a(int p0, int p1)
    {
      byte[] v3;
      if ( p1 == 0 )
        return mi.h;
      v3 = new byte[p1];
      System.arraycopy(this.a, this.b + p0, v3, 0, p1);
      return (byte[])v3;
    }

    public final double b()
 throws com.google.android.gms.internal.me {
      return Double.longBitsToDouble(this.q());
    }

    public final boolean b(int p0)
 throws com.google.android.gms.internal.me {
      boolean v2;
      int v4; // RETVAL
    
      v2 = true;
      switch ( mi.eN(p0) )
      {
        case 0:
          this.k();
          break;
        case 1:
          this.q();
          break;
        case 2:
          this.g(this.k());
          break;
        case 3:
          do
            v4 = this.a();
          while ( v4 != 0 && this.b(v4) );
          this.a(mi.u(mi.eO(p0), 4));
          break;
        case 4:
          v2 = false;
          break;
        case 5:
          this.p();
          break;
        default:
          throw me.nS();
      }
      return v2;
    }

    public final float c()
 throws com.google.android.gms.internal.me {
      return Float.intBitsToFloat(this.p());
    }

    public final int c(int p0)
 throws com.google.android.gms.internal.me {
      int v2;
      int g;
      if ( p0 < 0 )
        throw me.nO();
      v2 = this.e + p0;
      g = this.g;
      if ( v2 > g )
        throw me.nN();
      this.g = v2;
      this.r();
      return g;
    }

    public final long d()
 throws com.google.android.gms.internal.me {
      return this.o();
    }

    public final void d(int p0)
    {
      this.g = p0;
      this.r();
    }

    public final int e()
 throws com.google.android.gms.internal.me {
      return this.k();
    }

    public final void e(int p0)
    {
      if ( p0 > this.e - this.b )
        throw new IllegalArgumentException("Position " + p0 + " is beyond current " + (this.e - this.b));
      if ( p0 < 0 )
        throw new IllegalArgumentException("Bad position " + p0);
      this.e = this.b + p0;
    }

    public final boolean f()
 throws com.google.android.gms.internal.me {
      return this.k() != 0;
    }

    public final String g()
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      int v1; // RETVAL
      String v2;
      v1 = this.k();
      if ( v1 > this.c - this.e || v1 <= 0 )
        return new String(this.f(v1), "UTF-8");
      v2 = new String(this.a, this.e, v1, "UTF-8");
      this.e += v1;
      return v2;
    }

    public final byte[] h()
 throws com.google.android.gms.internal.me {
      int v1; // RETVAL
      byte[] v2;
      v1 = this.k();
      if ( v1 > this.c - this.e || v1 <= 0 )
        return this.f(v1);
      v2 = new byte[v1];
      System.arraycopy(this.a, this.e, v2, 0, v1);
      this.e += v1;
      return (byte[])v2;
    }

    public final int i()
 throws com.google.android.gms.internal.me {
      return ew(this.k());
    }

    public final long j()
 throws com.google.android.gms.internal.me {
      return A(this.o());
    }

    public final int k()
 throws com.google.android.gms.internal.me {
      int v1;
      int v3;
      byte v4; // RETVAL
      int v5;
      byte v6; // RETVAL
      int v7;
      byte v8; // RETVAL
      byte v9;
      byte v10; // RETVAL
      int i;
      v1 = this.t();
      if ( v1 < 0 )
      {
        v3 = v1 & 0x7F;
        v4 = this.t();
        if ( v4 < 0 )
        {
          v5 = v3 | ((v4 & 0x7F) << 7);
          v6 = this.t();
          if ( v6 < 0 )
          {
            v7 = v5 | ((v6 & 0x7F) << 14);
            v8 = this.t();
            v9 = v8;
            if ( v8 < 0 )
            {
              v10 = this.t();
              v1 = v7 | ((v9 & 0x7F) << 21) | (v10 << 28);
              if ( v10 < 0 )
              {
                for ( i = 0; ; ++i )
                {
                  if ( i >= 5 )
                    throw me.nP();
                  if ( this.t() >= 0 )
                    break;
                }
              }
            }
            else
            {
              return v7 | (v8 << 21);
            }
          }
          else
          {
            return v5 | (v6 << 14);
          }
        }
        else
        {
          return v3 | (v4 << 7);
        }
      }
      return v1;
    }

    public final int l()
    {
      if ( this.g == 0x7FFFFFFF )
        return -1;
      else
        return this.g - this.e;
    }

    public final int m()
    {
      return this.e - this.b;
    }

}
