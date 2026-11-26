// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.internal.safeparcel;

public class b {
    // Methods
    public static int C(android.os.Parcel p0)
    {
      return E(p0, 20293);
    }

    private static int E(android.os.Parcel p0, int p1)
    {
      p0.writeInt(p1 | 0xFFFF0000);
      p0.writeInt(0);
      return p0.dataPosition();
    }

    private static void F(android.os.Parcel p0, int p1)
    {
      int v2; // RETVAL
    
      v2 = p0.dataPosition();
      p0.setDataPosition(p1 - 4);
      p0.writeInt(v2 - p1);
      p0.setDataPosition(v2);
    }

    public static void G(android.os.Parcel p0, int p1)
    {
      F(p0, p1);
    }

    public static void a(android.os.Parcel p0, int p1, byte p2)
    {
      b(p0, p1, 4);
      p0.writeInt(p2);
    }

    public static void a(android.os.Parcel p0, int p1, double p2)
    {
      b(p0, p1, 8);
      p0.writeDouble(p2);
    }

    public static void a(android.os.Parcel p0, int p1, float p2)
    {
      b(p0, p1, 4);
      p0.writeFloat(p2);
    }

    public static void a(android.os.Parcel p0, int p1, long p2)
    {
      b(p0, p1, 8);
      p0.writeLong(p2);
    }

    public static void a(android.os.Parcel p0, int p1, android.os.Bundle p2, boolean p3)
    {
      int v4; // RETVAL
    
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.writeBundle(p2);
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, android.os.IBinder p2, boolean p3)
    {
      int v4; // RETVAL
    
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.writeStrongBinder(p2);
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, android.os.Parcel p2, boolean p3)
    {
      int v4;
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.appendFrom(p2, 0, p2.dataSize());
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, android.os.Parcelable p2, int p3, boolean p4)
    {
      int v5; // RETVAL
    
      if ( p2 != null )
      {
        v5 = E(p0, p1);
        p2.writeToParcel(p0, p3);
        F(p0, v5);
      }
      else if ( p4 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, Boolean p2, boolean p3)
    {
      if ( p2 != null )
      {
        b(p0, p1, 4);
        p0.writeInt(com.gameloft.android.DecompRT.b2i(p2.booleanValue()));
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, Integer p2, boolean p3)
    {
      if ( p2 != null )
      {
        b(p0, p1, 4);
        p0.writeInt(p2.intValue());
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, Long p2, boolean p3)
    {
      if ( p2 != null )
      {
        b(p0, p1, 8);
        p0.writeLong(p2.longValue());
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, String p2, boolean p3)
    {
      int v4; // RETVAL
    
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.writeString(p2);
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, java.util.List<String> p2, boolean p3)
    {
      int v4; // RETVAL
    
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.writeStringList(p2);
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, short p2)
    {
      b(p0, p1, 4);
      p0.writeInt(p2);
    }

    public static void a(android.os.Parcel p0, int p1, boolean p2)
    {
      b(p0, p1, 4);
      p0.writeInt(com.gameloft.android.DecompRT.b2i(p2));
    }

    public static void a(android.os.Parcel p0, int p1, byte[] p2, boolean p3)
    {
      int v4; // RETVAL
    
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.writeByteArray(p2);
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, int[] p2, boolean p3)
    {
      int v4; // RETVAL
    
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.writeIntArray(p2);
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static <T extends android.os.Parcelable> void a(android.os.Parcel p0, int p1, T[] p2, int p3, boolean p4)
    {
      int v5; // RETVAL
      int v6;
      int i;
      android.os.Parcelable v8;
      if ( p2 != null )
      {
        v5 = E(p0, p1);
        v6 = p2.length;
        p0.writeInt(v6);
        for ( i = 0; i < v6; ++i )
        {
          v8 = p2[i];
          if ( v8 != null )
            a(p0, v8, p3);
          else
            p0.writeInt(0);
        }
        F(p0, v5);
      }
      else if ( p4 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, String[] p2, boolean p3)
    {
      int v4; // RETVAL
    
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.writeStringArray(p2);
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void a(android.os.Parcel p0, int p1, byte[][] p2, boolean p3)
    {
      int v4;
      int v5; // RETVAL
      int v6;
      v4 = 0;
      if ( p2 != null )
      {
        v5 = E(p0, p1);
        v6 = p2.length;
        p0.writeInt(v6);
        while ( v4 < v6 )
          p0.writeByteArray((byte[])p2[v4++]);
        F(p0, v5);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    private static <T extends android.os.Parcelable> void a(android.os.Parcel p0, T p1, int p2)
    {
      int v3;
      int v4;
      int v5; // RETVAL
    
      v3 = p0.dataPosition();
      p0.writeInt(1);
      v4 = p0.dataPosition();
      p1.writeToParcel(p0, p2);
      v5 = p0.dataPosition();
      p0.setDataPosition(v3);
      p0.writeInt(v5 - v4);
      p0.setDataPosition(v5);
    }

    private static void b(android.os.Parcel p0, int p1, int p2)
    {
      if ( p2 < 0xFFFF )
      {
        p0.writeInt((p2 << 16) | p1);
      }
      else
      {
        p0.writeInt(p1 | 0xFFFF0000);
        p0.writeInt(p2);
      }
    }

    public static <T extends android.os.Parcelable> void b(
            android.os.Parcel p0,
            int p1,
            java.util.List<T> p2,
            boolean p3)
    {
      int v4;
      int v5;
      int i;
      android.os.Parcelable v7;
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        v5 = p2.size();
        p0.writeInt(v5);
        for ( i = 0; i < v5; ++i )
        {
          v7 = (android.os.Parcelable)p2.get(i);
          if ( v7 != null )
            a(p0, v7, 0);
          else
            p0.writeInt(0);
        }
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

    public static void c(android.os.Parcel p0, int p1, int p2)
    {
      b(p0, p1, 4);
      p0.writeInt(p2);
    }

    public static void c(android.os.Parcel p0, int p1, java.util.List p2, boolean p3)
    {
      int v4; // RETVAL
    
      if ( p2 != null )
      {
        v4 = E(p0, p1);
        p0.writeList(p2);
        F(p0, v4);
      }
      else if ( p3 )
      {
        b(p0, p1, 0);
      }
    }

}
