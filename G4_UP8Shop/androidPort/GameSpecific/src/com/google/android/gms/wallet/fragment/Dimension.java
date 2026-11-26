// Decompiled from classes.dex (SourceFile: Dimension.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.wallet.fragment;

import android.util.TypedValue;
public class Dimension {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;

    // Methods
    private Dimension()
    {
      super();
    }

    public static int a(long p0, android.util.DisplayMetrics p2)
    {
      int v2 = 0;
      int v4 = 0;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            _sw_1 = (com.gameloft.android.DecompRT.hi32(p0));
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (1)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (0x80)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (0x81)) ) { _pc = 9; continue _sm; }
            _pc = 10;
            continue _sm;
          case 1:
            v4 = 0;
            _pc = 7;
            continue _sm;
          case 2:
            v4 = 1;
            _pc = 7;
            continue _sm;
          case 3:
            v4 = 2;
            _pc = 7;
            continue _sm;
          case 4:
            v4 = 3;
            _pc = 7;
            continue _sm;
          case 5:
            v4 = 4;
            _pc = 7;
            continue _sm;
          case 6:
            v4 = 4 + 1;
            _pc = 7;
            continue _sm;
          case 7:
            v2 = Math.round(TypedValue.applyDimension(v4, Float.intBitsToFloat((int)p0), p2));
            _pc = 11;
            continue _sm;
          case 8:
            v2 = TypedValue.complexToDimensionPixelSize((int)p0, p2);
            _pc = 11;
            continue _sm;
          case 9:
            v2 = (int)p0;
            _pc = 11;
            continue _sm;
          case 10:
            throw new IllegalStateException("Unexpected unit or type: " + (int)(p0 >> 32));
          case 11:
            return v2;
        }
      }
}

    public static long a(int p0, float p1)
    {
      switch ( p0 )
      {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
          return l(p0, Float.floatToIntBits(p1));
        default:
          throw new IllegalArgumentException("Unrecognized unit: " + p0);
      }
    }

    public static long a(android.util.TypedValue p0)
    {
      long v1;
      switch ( p0.type )
      {
        case 5:
          v1 = l(128, p0.data);
          break;
        case 16:
          v1 = dM(p0.data);
          break;
        default:
          throw new IllegalArgumentException("Unexpected dimension type: " + p0.type);
      }
      return v1;
    }

    public static long dM(int p0)
    {
      if ( p0 >= 0 )
        return a(0, (float)p0);
      if ( p0 != -1 && p0 != -2 )
        throw new IllegalArgumentException("Unexpected dimension value: " + p0);
      return l(129, p0);
    }

    private static long l(int p0, int p1)
    {
      return ((long)p0 << 32) | p1 & 0xFFFFFFFFL;
    }

}
