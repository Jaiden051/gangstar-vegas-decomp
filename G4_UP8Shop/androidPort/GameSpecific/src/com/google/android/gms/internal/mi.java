// Decompiled from classes.dex (SourceFile: mi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class mi {
    // Fields
    public static final int[] a;
    public static final long[] b;
    public static final float[] c;
    public static final double[] d;
    public static final boolean[] e;
    public static final java.lang.String[] f;
    public static final byte[][] g;
    public static final byte[] h;

    // Methods
    static
    {
      a = new int[0];
      b = new long[0];
      c = new float[0];
      d = new double[0];
      e = new boolean[0];
      f = new String[0];
      g = new byte[0][];
      h = new byte[0];
    }

    public static final int b(com.google.android.gms.internal.lz p0, int p1)
 throws com.google.android.gms.internal.me {
      int v2;
      int v3;
      v2 = 1;
      v3 = p0.m();
      p0.b(p1);
      while ( p0.l() > 0 && p0.a() == p1 )
      {
        p0.b(p1);
        ++v2;
      }
      p0.e(v3);
      return v2;
    }

    static int eN(int p0)
    {
      return p0 & 7;
    }

    public static int eO(int p0)
    {
      return p0 >>> 3;
    }

    static int u(int p0, int p1)
    {
      return (8 * p0) | p1;
    }

}
