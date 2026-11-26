// Decompiled from classes.dex (SourceFile: ih.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class ih {
    // Methods
    public static void a(StringBuilder p0, double[] p1)
    {
      int v2;
      int i;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        if ( i != 0 )
          p0.append(",");
        p0.append(Double.toString(Double.longBitsToDouble(Double.doubleToRawLongBits(p1[i]))));
      }
    }

    public static void a(StringBuilder p0, float[] p1)
    {
      int v2;
      int i;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        if ( i != 0 )
          p0.append(",");
        p0.append(Float.toString(Float.intBitsToFloat(Float.floatToRawIntBits(p1[i]))));
      }
    }

    public static void a(StringBuilder p0, int[] p1)
    {
      int v2;
      int i;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        if ( i != 0 )
          p0.append(",");
        p0.append(Integer.toString(p1[i]));
      }
    }

    public static void a(StringBuilder p0, long[] p1)
    {
      int v2;
      int i;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        if ( i != 0 )
          p0.append(",");
        p0.append(Long.toString(p1[i]));
      }
    }

    public static <T> void a(StringBuilder p0, T[] p1)
    {
      int v2;
      int i;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        if ( i != 0 )
          p0.append(",");
        p0.append(p1[i].toString());
      }
    }

    public static void a(StringBuilder p0, String[] p1)
    {
      int v2;
      int i;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        if ( i != 0 )
          p0.append(",");
        p0.append("\"").append(p1[i]).append("\"");
      }
    }

    public static void a(StringBuilder p0, boolean[] p1)
    {
      int v2;
      int i;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
      {
        if ( i != 0 )
          p0.append(",");
        p0.append(Boolean.toString(p1[i]));
      }
    }

    public static <T> java.util.ArrayList<T> fV()
    {
      return new java.util.ArrayList();
    }

}
