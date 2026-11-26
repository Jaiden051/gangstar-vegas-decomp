// Decompiled from classes.dex (SourceFile: ma.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ma {
    // Fields
    private final byte[] a;
    private final int b;
    private int c;

    // Methods
    private ma(byte[] p0, int p1, int p2)
    {
      super();
      this.a = (byte[])p0;
      this.c = p1;
      this.b = p1 + p2;
    }

    public static int D(long p0)
    {
      return G(p0);
    }

    public static int E(long p0)
    {
      return G(I(p0));
    }

    public static int G(long p0)
    {
      if ( (p0 & 0xFFFFFFFFFFFFFF80L) == 0 )
        return 1;
      if ( (p0 & 0xFFFFFFFFFFFFC000L) == 0 )
        return 2;
      if ( (p0 & 0xFFFFFFFFFFE00000L) == 0 )
        return 3;
      if ( (p0 & 0xFFFFFFFFF0000000L) == 0 )
        return 4;
      if ( (p0 & 0xFFFFFFF800000000L) == 0 )
        return 5;
      if ( (p0 & 0xFFFFFC0000000000L) == 0 )
        return 6;
      if ( (p0 & 0xFFFE000000000000L) == 0 )
        return 7;
      if ( (p0 & 0xFF00000000000000L) == 0 )
        return 8;
      if ( p0 < 0 )
        return 10;
      return 9;
    }

    public static long I(long p0)
    {
      return (2 * p0) ^ (p0 >> 63);
    }

    public static int J(boolean p0)
    {
      return 1;
    }

    private void a(byte p0)
 throws com.google.android.gms.internal.ma$a {
      int c;
      if ( this.c == this.b )
        throw new com.google.android.gms.internal.ma$a(this.c, this.b);
      c = this.c;
      this.c = c + 1;
      this.a[c] = p0;
    }

    private void a(double p0)
 throws com.google.android.gms.internal.ma$a {
      long v2;
      v2 = Double.doubleToLongBits(p0);
      this.d((int)v2);
      this.d((int)((v2 >> 8) & 0xFF));
      this.d((int)((v2 >> 16) & 0xFF));
      this.d((int)((v2 >> 24) & 0xFF));
      this.d(com.gameloft.android.DecompRT.hi32(v2) & 0xFF);
      this.d((int)((v2 >> 40) & 0xFF));
      this.d((int)((v2 >> 48) & 0xFF));
      this.d((int)((v2 >> 56) & 0xFF));
    }

    private void a(float p0)
 throws com.google.android.gms.internal.ma$a {
      int v2; // RETVAL
    
      v2 = Float.floatToIntBits(p0);
      this.d(v2 & 0xFF);
      this.d((v2 >> 8) & 0xFF);
      this.d((v2 >> 16) & 0xFF);
      this.d((v2 >> 24) & 0xFF);
    }

    private void a(long p0)
 throws com.google.android.gms.internal.ma$a {
      this.c(p0);
    }

    private void a(com.google.android.gms.internal.mf p0)
 throws com.google.android.gms.internal.ma$a, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      this.a(p0.b());
      p0.a(this);
    }

    private void a(String p0)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.ma$a {
      byte[] Bytes; // RETVAL
    
      Bytes = p0.getBytes("UTF-8");
      this.a(Bytes.length);
      this.a(Bytes);
    }

    private void a(boolean p0)
 throws com.google.android.gms.internal.ma$a {
      this.d(com.gameloft.android.DecompRT.b2i(p0));
    }

    private void a(byte[] p0, int p1, int p2)
 throws com.google.android.gms.internal.ma$a {
      if ( this.b - this.c < p2 )
        throw new com.google.android.gms.internal.ma$a(this.c, this.b);
      System.arraycopy(p0, 0, this.a, this.c, p2);
      this.c += p2;
    }

    public static int b(int p0, double p1)
    {
      return eH(p0) + f(p1);
    }

    public static int b(int p0, com.google.android.gms.internal.mf p1)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      return eH(p0) + c(p1);
    }

    public static int b(int p0, boolean p1)
    {
      return eH(p0) + J(p1);
    }

    public static int b(int p0, byte[] p1)
    {
      return eH(p0) + s(p1);
    }

    public static com.google.android.gms.internal.ma b(byte[] p0, int p1, int p2)
    {
      return new com.google.android.gms.internal.ma(p0, p1, p2);
    }

    private void b(int p0)
 throws com.google.android.gms.internal.ma$a {
      if ( p0 < 0 )
        this.c(p0);
      else
        this.a(p0);
    }

    private void b(long p0)
 throws com.google.android.gms.internal.ma$a {
      this.c(I(p0));
    }

    private void b(byte[] p0)
 throws com.google.android.gms.internal.ma$a {
      this.a(p0.length);
      this.a(p0);
    }

    public static int c(int p0, float p1)
    {
      return eH(p0) + e(p1);
    }

    public static int c(com.google.android.gms.internal.mf p0)
 throws com.google.android.gms.internal.me, java.io.UnsupportedEncodingException {
      int v1;
      v1 = p0.c();
      return v1 + eJ(v1);
    }

    private void c(int p0)
 throws com.google.android.gms.internal.ma$a {
      this.a(eL(p0));
    }

    private void c(int p0, int p1)
 throws com.google.android.gms.internal.ma$a {
      this.a(mi.u(p0, p1));
    }

    private void c(long p0)
 throws com.google.android.gms.internal.ma$a {
      while ( (p0 & 0xFFFFFFFFFFFFFF80L) != 0 )
      {
        this.d((int)(p0 & 0x7F | 0x80));
        p0 = p0 >>> 7;
      }
      this.d((int)p0);
    }

    public static int cz(String p0)
    {
      byte[] Bytes;
      int v2;
      int v3;
      try
      {
        Bytes = p0.getBytes("UTF-8");
        v2 = eJ(Bytes.length);
        v3 = Bytes.length;
        return v3 + v2;
      }
      catch ( java.io.UnsupportedEncodingException e )
      {
        throw new RuntimeException("UTF-8 not supported.");
      }
    }

    public static int d(int p0, long p1)
    {
      return eH(p0) + D(p1);
    }

    private void d(int p0)
 throws com.google.android.gms.internal.ma$a {
      int c;
      if ( this.c == this.b )
        throw new com.google.android.gms.internal.ma$a(this.c, this.b);
      c = this.c;
      this.c = c + 1;
      this.a[c] = (byte)p0;
    }

    private void d(long p0)
 throws com.google.android.gms.internal.ma$a {
      this.d((int)p0);
      this.d((int)((p0 >> 8) & 0xFF));
      this.d((int)((p0 >> 16) & 0xFF));
      this.d((int)((p0 >> 24) & 0xFF));
      this.d(com.gameloft.android.DecompRT.hi32(p0) & 0xFF);
      this.d((int)((p0 >> 40) & 0xFF));
      this.d((int)((p0 >> 48) & 0xFF));
      this.d((int)((p0 >> 56) & 0xFF));
    }

    public static int e(float p0)
    {
      return 4;
    }

    public static int e(int p0, long p1)
    {
      return eH(p0) + E(p1);
    }

    private void e(int p0)
 throws com.google.android.gms.internal.ma$a {
      this.d(p0 & 0xFF);
      this.d((p0 >> 8) & 0xFF);
      this.d((p0 >> 16) & 0xFF);
      this.d((p0 >> 24) & 0xFF);
    }

    public static int eE(int p0)
    {
      if ( p0 < 0 )
        return 10;
      else
        return eJ(p0);
    }

    public static int eF(int p0)
    {
      return eJ(eL(p0));
    }

    public static int eH(int p0)
    {
      return eJ(mi.u(p0, 0));
    }

    public static int eJ(int p0)
    {
      if ( (p0 & 0xFFFFFF80) == 0 )
        return 1;
      if ( (p0 & 0xFFFFC000) == 0 )
        return 2;
      if ( (p0 & 0xFFE00000) == 0 )
        return 3;
      if ( (p0 & 0xF0000000) != 0 )
        return 5;
      return 4;
    }

    public static int eL(int p0)
    {
      return (2 * p0) ^ (p0 >> 31);
    }

    public static int f(double p0)
    {
      return 8;
    }

    public static int h(int p0, String p1)
    {
      return eH(p0) + cz(p1);
    }

    public static com.google.android.gms.internal.ma q(byte[] p0)
    {
      return b(p0, 0, p0.length);
    }

    public static int r(int p0, int p1)
    {
      return eH(p0) + eE(p1);
    }

    public static int s(int p0, int p1)
    {
      return eH(p0) + eF(p1);
    }

    public static int s(byte[] p0)
    {
      return eJ(p0.length) + p0.length;
    }

    public final int a()
    {
      return this.b - this.c;
    }

    public final void a(int p0)
 throws com.google.android.gms.internal.ma$a {
      while ( (p0 & 0xFFFFFF80) != 0 )
      {
        this.d(p0 & 0x7F | 0x80);
        p0 = p0 >>> 7;
      }
      this.d(p0);
    }

    public final void a(int p0, double p1)
 throws com.google.android.gms.internal.ma$a {
      long v3;
      this.c(3, 1);
      v3 = Double.doubleToLongBits(p1);
      this.d((int)v3);
      this.d((int)((v3 >> 8) & 0xFF));
      this.d((int)((v3 >> 16) & 0xFF));
      this.d((int)((v3 >> 24) & 0xFF));
      this.d(com.gameloft.android.DecompRT.hi32(v3) & 0xFF);
      this.d((int)((v3 >> 40) & 0xFF));
      this.d((int)((v3 >> 48) & 0xFF));
      this.d((int)((v3 >> 56) & 0xFF));
    }

    public final void a(int p0, float p1)
 throws com.google.android.gms.internal.ma$a {
      int v3; // RETVAL
    
      this.c(p0, 5);
      v3 = Float.floatToIntBits(p1);
      this.d(v3 & 0xFF);
      this.d((v3 >> 8) & 0xFF);
      this.d((v3 >> 16) & 0xFF);
      this.d((v3 >> 24) & 0xFF);
    }

    public final void a(int p0, int p1)
 throws com.google.android.gms.internal.ma$a {
      this.c(p0, 0);
      if ( p1 < 0 )
        this.c(p1);
      else
        this.a(p1);
    }

    public final void a(int p0, long p1)
 throws com.google.android.gms.internal.ma$a {
      this.c(p0, 0);
      this.c(p1);
    }

    public final void a(int p0, com.google.android.gms.internal.mf p1)
 throws com.google.android.gms.internal.ma$a, java.io.UnsupportedEncodingException, com.google.android.gms.internal.me {
      this.c(p0, 2);
      this.a(p1.b());
      p1.a(this);
    }

    public final void a(int p0, String p1)
 throws java.io.UnsupportedEncodingException, com.google.android.gms.internal.ma$a {
      byte[] Bytes; // RETVAL
    
      this.c(p0, 2);
      Bytes = p1.getBytes("UTF-8");
      this.a(Bytes.length);
      this.a(Bytes);
    }

    public final void a(int p0, boolean p1)
 throws com.google.android.gms.internal.ma$a {
      this.c(p0, 0);
      this.d(com.gameloft.android.DecompRT.b2i(p1));
    }

    public final void a(int p0, byte[] p1)
 throws com.google.android.gms.internal.ma$a {
      this.c(1, 2);
      this.a(p1.length);
      this.a(p1);
    }

    public final void a(byte[] p0)
 throws com.google.android.gms.internal.ma$a {
      int v2;
      v2 = p0.length;
      if ( this.b - this.c < v2 )
        throw new com.google.android.gms.internal.ma$a(this.c, this.b);
      System.arraycopy(p0, 0, this.a, this.c, v2);
      this.c += v2;
    }

    public final void b()
    {
      if ( this.a() != 0 )
        throw new IllegalStateException("Did not write as much data as expected.");
    }

    public final void b(int p0, int p1)
 throws com.google.android.gms.internal.ma$a {
      this.c(7, 0);
      this.a(eL(p1));
    }

    public final void b(int p0, long p1)
 throws com.google.android.gms.internal.ma$a {
      this.c(p0, 0);
      this.c(I(p1));
    }

}
