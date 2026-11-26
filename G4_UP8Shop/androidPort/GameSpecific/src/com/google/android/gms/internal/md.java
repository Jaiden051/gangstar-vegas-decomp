// Decompiled from classes.dex (SourceFile: md.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
public final class md {
    // Fields
    public static final java.lang.Object a;

    // Methods
    static
    {
      a = new Object();
    }

    public static boolean equals(float[] p0, float[] p1)
    {
      if ( p0 != null && p0.length != 0 )
        return Arrays.equals(p0, p1);
      else
        return p1 == null || p1.length == 0;
    }

    public static boolean equals(int[] p0, int[] p1)
    {
      if ( p0 != null && p0.length != 0 )
        return Arrays.equals(p0, p1);
      else
        return p1 == null || p1.length == 0;
    }

    public static boolean equals(long[] p0, long[] p1)
    {
      if ( p0 != null && p0.length != 0 )
        return Arrays.equals(p0, p1);
      else
        return p1 == null || p1.length == 0;
    }

    public static boolean equals(Object[] p0, Object[] p1)
    {
      boolean v2;
      int v3;
      int v4;
      int v5;
      int i;
      int j;
      v2 = false;
      if ( p0 != null )
        v3 = p0.length;
      else
        v3 = 0;
      if ( p1 != null )
        v4 = p1.length;
      else
        v4 = 0;
      v5 = 0;
      for ( i = 0; ; ++i )
      {
        while ( i < v3 && p0[i] == null )
          ++i;
        for ( j = v5; j < v4 && p1[j] == null; ++j )
          ;
        if ( i >= v3 && j >= v4 )
          break;
        if ( i >= v3 != j >= v4 || !p0[i].equals(p1[j]) )
          return v2;
        v5 = j + 1;
      }
      return true;
    }

    public static int hashCode(float[] p0)
    {
      if ( p0 != null && p0.length != 0 )
        return Arrays.hashCode(p0);
      else
        return 0;
    }

    public static int hashCode(int[] p0)
    {
      if ( p0 != null && p0.length != 0 )
        return Arrays.hashCode(p0);
      else
        return 0;
    }

    public static int hashCode(long[] p0)
    {
      if ( p0 != null && p0.length != 0 )
        return Arrays.hashCode(p0);
      else
        return 0;
    }

    public static int hashCode(Object[] p0)
    {
      int v1;
      int v2;
      int i;
      Object v4;
      v1 = 0;
      if ( p0 != null )
        v2 = p0.length;
      else
        v2 = 0;
      for ( i = 0; i < v2; ++i )
      {
        v4 = p0[i];
        if ( v4 != null )
          v1 = 31 * v1 + v4.hashCode();
      }
      return v1;
    }

}
