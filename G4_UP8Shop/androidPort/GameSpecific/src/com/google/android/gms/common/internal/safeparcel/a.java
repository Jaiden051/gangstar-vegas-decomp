// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.internal.safeparcel;

import android.os.Bundle;
import android.os.Parcel;
public class a {
    // Methods
    public static int A(android.os.Parcel p0)
    {
      return p0.readInt();
    }

    public static String[] A(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      String[] StringArray;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      StringArray = p0.createStringArray();
      p0.setDataPosition(v2 + v3);
      return StringArray;
    }

    public static int B(android.os.Parcel p0)
    {
      int v1;
      int v2;
      int v3;
      int v4;
      v1 = A(p0);
      v2 = a(p0, v1);
      v3 = p0.dataPosition();
      if ( ar(v1) != 20293 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Expected object header. Got 0x"
                                                                      + Integer.toHexString(v1), p0);
      v4 = v3 + v2;
      if ( v3 + v2 < v3 || v4 > p0.dataSize() )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Size read is invalid start=" + v3 + " end=" + v4, p0);
      return v3 + v2;
    }

    public static java.util.ArrayList<String> B(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      java.util.ArrayList StringArrayList;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      StringArrayList = p0.createStringArrayList();
      p0.setDataPosition(v2 + v3);
      return StringArrayList;
    }

    public static android.os.Parcel C(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      android.os.Parcel v4;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      v4 = Parcel.obtain();
      v4.appendFrom(p0, v3, v2);
      p0.setDataPosition(v2 + v3);
      return v4;
    }

    public static android.os.Parcel[] D(android.os.Parcel p0, int p1)
    {
      android.os.Parcel[] v2;
      int v3;
      int v4;
      int Int;
      android.os.Parcel[] v7;
      int i;
      int v9;
      int v10;
      android.os.Parcel v11; // RETVAL
    
      v2 = null;
      v3 = a(p0, p1);
      v4 = p0.dataPosition();
      if ( v3 != 0 )
      {
        Int = p0.readInt();
        v7 = new android.os.Parcel[Int];
        for ( i = 0; i < Int; ++i )
        {
          v9 = p0.readInt();
          if ( v9 != 0 )
          {
            v10 = p0.dataPosition();
            v11 = Parcel.obtain();
            v11.appendFrom(p0, v10, v9);
            v7[i] = v11;
            p0.setDataPosition(v9 + v10);
          }
          else
          {
            v7[i] = null;
          }
        }
        p0.setDataPosition(v4 + v3);
        return (android.os.Parcel[])v7;
      }
      return (android.os.Parcel[])v2;
    }

    public static int a(android.os.Parcel p0, int p1)
    {
      if ( (p1 & 0xFFFF0000) == 0xFFFF0000 )
        return p0.readInt();
      else
        return (p1 >> 16) & 0xFFFF;
    }

    public static <T extends android.os.Parcelable> T a(
            android.os.Parcel p0,
            int p1,
            android.os.Parcelable.Creator<T> p2)
    {
      int v3;
      int v4;
      android.os.Parcelable v5;
      v3 = a(p0, p1);
      v4 = p0.dataPosition();
      if ( v3 == 0 )
        return null;
      v5 = (android.os.Parcelable)p2.createFromParcel(p0);
      p0.setDataPosition(v3 + v4);
      return (T)v5;
    }

    private static void a(android.os.Parcel p0, int p1, int p2)
    {
      int v3;
      v3 = a(p0, p1);
      if ( v3 != p2 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Expected size "
                                                                      + p2
                                                                      + " got "
                                                                      + v3
                                                                      + " (0x"
                                                                      + Integer.toHexString(v3)
                                                                      + ")", p0);
    }

    private static void a(android.os.Parcel p0, int p1, int p2, int p3)
    {
      if ( p2 != p3 )
        throw new com.google.android.gms.common.internal.safeparcel.a$a("Expected size "
                                                                      + p3
                                                                      + " got "
                                                                      + p2
                                                                      + " (0x"
                                                                      + Integer.toHexString(p2)
                                                                      + ")", p0);
    }

    public static void a(android.os.Parcel p0, int p1, java.util.List p2, ClassLoader p3)
    {
      int v4;
      int v5; // RETVAL
    
      v4 = a(p0, p1);
      v5 = p0.dataPosition();
      if ( v4 != 0 )
      {
        p0.readList(p2, p3);
        p0.setDataPosition(v4 + v5);
      }
    }

    public static int ar(int p0)
    {
      return p0 & 0xFFFF;
    }

    public static void b(android.os.Parcel p0, int p1)
    {
      p0.setDataPosition(a(p0, p1) + p0.dataPosition());
    }

    public static <T> T[] b(android.os.Parcel p0, int p1, android.os.Parcelable.Creator<T> p2)
    {
      int v3;
      int v4;
      Object[] TypedArray;
      v3 = a(p0, p1);
      v4 = p0.dataPosition();
      if ( v3 == 0 )
        return null;
      TypedArray = p0.createTypedArray(p2);
      p0.setDataPosition(v3 + v4);
      return (T[])TypedArray;
    }

    public static <T> java.util.ArrayList<T> c(android.os.Parcel p0, int p1, android.os.Parcelable.Creator<T> p2)
    {
      int v3;
      int v4;
      java.util.ArrayList TypedArrayList;
      v3 = a(p0, p1);
      v4 = p0.dataPosition();
      if ( v3 == 0 )
        return null;
      TypedArrayList = p0.createTypedArrayList(p2);
      p0.setDataPosition(v3 + v4);
      return TypedArrayList;
    }

    public static boolean c(android.os.Parcel p0, int p1)
    {
      a(p0, p1, 4);
      return p0.readInt() != 0;
    }

    public static Boolean d(android.os.Parcel p0, int p1)
    {
      int v2; // RETVAL
    
      v2 = a(p0, p1);
      if ( v2 == 0 )
        return null;
      a(p0, p1, v2, 4);
      return Boolean.valueOf(p0.readInt() != 0);
    }

    public static byte e(android.os.Parcel p0, int p1)
    {
      a(p0, p1, 4);
      return (byte)p0.readInt();
    }

    public static short f(android.os.Parcel p0, int p1)
    {
      a(p0, p1, 4);
      return (short)p0.readInt();
    }

    public static int g(android.os.Parcel p0, int p1)
    {
      a(p0, p1, 4);
      return p0.readInt();
    }

    public static Integer h(android.os.Parcel p0, int p1)
    {
      int v2; // RETVAL
    
      v2 = a(p0, p1);
      if ( v2 == 0 )
        return null;
      a(p0, p1, v2, 4);
      return Integer.valueOf(p0.readInt());
    }

    public static long i(android.os.Parcel p0, int p1)
    {
      a(p0, p1, 8);
      return p0.readLong();
    }

    public static Long j(android.os.Parcel p0, int p1)
    {
      int v2; // RETVAL
    
      v2 = a(p0, p1);
      if ( v2 == 0 )
        return null;
      a(p0, p1, v2, 8);
      return Long.valueOf(p0.readLong());
    }

    public static java.math.BigInteger k(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      byte[] ByteArray; // RETVAL
    
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      ByteArray = p0.createByteArray();
      p0.setDataPosition(v2 + v3);
      return new java.math.BigInteger(ByteArray);
    }

    public static float l(android.os.Parcel p0, int p1)
    {
      a(p0, p1, 4);
      return p0.readFloat();
    }

    public static double m(android.os.Parcel p0, int p1)
    {
      a(p0, p1, 8);
      return p0.readDouble();
    }

    public static java.math.BigDecimal n(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      byte[] ByteArray;
      int Int; // RETVAL
    
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      ByteArray = p0.createByteArray();
      Int = p0.readInt();
      p0.setDataPosition(v2 + v3);
      return new java.math.BigDecimal(new java.math.BigInteger(ByteArray), Int);
    }

    public static String o(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      String String;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      String = p0.readString();
      p0.setDataPosition(v2 + v3);
      return String;
    }

    public static android.os.IBinder p(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      android.os.IBinder StrongBinder;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      StrongBinder = p0.readStrongBinder();
      p0.setDataPosition(v2 + v3);
      return StrongBinder;
    }

    public static android.os.Bundle q(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      android.os.Bundle Bundle;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      Bundle = p0.readBundle();
      p0.setDataPosition(v2 + v3);
      return Bundle;
    }

    public static byte[] r(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      byte[] ByteArray;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      ByteArray = p0.createByteArray();
      p0.setDataPosition(v2 + v3);
      return (byte[])ByteArray;
    }

    public static byte[][] s(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      byte[][] v4;
      int Int;
      int i;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      Int = p0.readInt();
      v4 = new byte[Int][];
      for ( i = 0; i < Int; ++i )
        v4[i] = p0.createByteArray();
      p0.setDataPosition(v3 + v2);
      return (byte[][])v4;
    }

    public static boolean[] t(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      boolean[] BooleanArray;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      BooleanArray = p0.createBooleanArray();
      p0.setDataPosition(v2 + v3);
      return BooleanArray;
    }

    public static int[] u(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      int[] IntArray;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      IntArray = p0.createIntArray();
      p0.setDataPosition(v2 + v3);
      return (int[])IntArray;
    }

    public static long[] v(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      long[] LongArray;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      LongArray = p0.createLongArray();
      p0.setDataPosition(v2 + v3);
      return (long[])LongArray;
    }

    public static java.math.BigInteger[] w(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      java.math.BigInteger[] v4;
      int Int;
      int i;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      Int = p0.readInt();
      v4 = new java.math.BigInteger[Int];
      for ( i = 0; i < Int; ++i )
        v4[i] = new java.math.BigInteger(p0.createByteArray());
      p0.setDataPosition(v3 + v2);
      return (java.math.BigInteger[])v4;
    }

    public static float[] x(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      float[] FloatArray;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      FloatArray = p0.createFloatArray();
      p0.setDataPosition(v2 + v3);
      return (float[])FloatArray;
    }

    public static double[] y(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      double[] DoubleArray;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      DoubleArray = p0.createDoubleArray();
      p0.setDataPosition(v2 + v3);
      return (double[])DoubleArray;
    }

    public static java.math.BigDecimal[] z(android.os.Parcel p0, int p1)
    {
      int v2;
      int v3;
      java.math.BigDecimal[] v4;
      int Int;
      int i;
      v2 = a(p0, p1);
      v3 = p0.dataPosition();
      if ( v2 == 0 )
        return null;
      Int = p0.readInt();
      v4 = new java.math.BigDecimal[Int];
      for ( i = 0; i < Int; ++i )
        v4[i] = new java.math.BigDecimal(new java.math.BigInteger(p0.createByteArray()), p0.readInt());
      p0.setDataPosition(v3 + v2);
      return (java.math.BigDecimal[])v4;
    }

}
