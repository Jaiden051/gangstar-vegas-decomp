// Decompiled from classes.dex (SourceFile: ContainerHelpers.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.util;

class ContainerHelpers {
    // Fields
    static final int[] a;
    static final long[] b;
    static final java.lang.Object[] c;

    // Methods
    static
    {
      a = new int[0];
      b = new long[0];
      c = new Object[0];
    }

    ContainerHelpers()
    {
      super();
    }

    static int binarySearch(int[] p0, int p1, int p2)
    {
      int v3;
      int v4;
      int v5;
      int v6;
      v3 = p1 - 1;
      v4 = 0;
      while ( v4 <= v3 )
      {
        v5 = (v4 + v3) >>> 1;
        v6 = p0[v5];
        if ( v6 >= p2 )
        {
          if ( v6 <= p2 )
            return v5;
          v3 = v5 - 1;
        }
        else
        {
          v4 = v5 + 1;
        }
      }
      return ~v4;
    }

    static int binarySearch(long[] p0, int p1, long p2)
    {
      int v3;
      int v4;
      int v5;
      long v6;
      v3 = p1 - 1;
      v4 = 0;
      while ( v4 <= v3 )
      {
        v5 = (v4 + v3) >>> 1;
        v6 = p0[v5];
        if ( v6 >= p2 )
        {
          if ( v6 <= p2 )
            return v5;
          v3 = v5 - 1;
        }
        else
        {
          v4 = v5 + 1;
        }
      }
      return ~v4;
    }

    public static boolean equal(Object p0, Object p1)
    {
      return p0 == p1 || p0 != null && p0.equals(p1);
    }

    public static int idealByteArraySize(int p0)
    {
      int i;
      for ( i = 4; i < 32; ++i )
      {
        if ( p0 <= (1 << (byte)i) - 12 )
          return (1 << (byte)i) - 12;
      }
      return p0;
    }

    public static int idealIntArraySize(int p0)
    {
      return idealByteArraySize(4 * p0) / 4;
    }

    public static int idealLongArraySize(int p0)
    {
      return idealByteArraySize(8 * p0) / 8;
    }

}
