// Decompiled from classes.dex (SourceFile: Base64.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.billing.common;

public class Base64 {
    // Fields
    public static boolean a;
    public static boolean b;
    static final boolean c;
    private static byte d;
    private static byte e;
    private static final byte[] f;
    private static final byte[] g;
    private static final byte[] h;
    private static final byte[] i;
    private static byte j;
    private static byte k;

    // Methods
    static
    {
      c = !com.gameloft.android.GAND.GloftGGSS.billing.common.Base64.class.desiredAssertionStatus();
      f = new byte[]
          {
            65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98,
            99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
            122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 43, 47
          };
      g = new byte[]
          {
            65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 97, 98,
            99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
            122, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 45, 95
          };
      h = new byte[] { 0 };
      i = new byte[] { 0 };
    }

    private Base64()
    {
      super();
    }

    public static byte[] decode(String p0)
 throws com.gameloft.android.GAND.GloftGGSS.billing.common.a {
      byte[] Bytes; // RETVAL
    
      Bytes = p0.getBytes();
      return decode(Bytes, 0, Bytes.length);
    }

    public static byte[] decode(byte[] p0)
 throws com.gameloft.android.GAND.GloftGGSS.billing.common.a {
      return decode(p0, 0, p0.length);
    }

    public static byte[] decode(byte[] p0, int p1, int p2)
 throws com.gameloft.android.GAND.GloftGGSS.billing.common.a {
      return decode(p0, p1, p2, h);
    }

    public static byte[] decode(byte[] p0, int p1, int p2, byte[] p3)
 throws com.gameloft.android.GAND.GloftGGSS.billing.common.a {
      byte[] v4;
      byte[] v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      byte[] v15;
      v4 = new byte[(3 * p2 / 4 + 2)];
      v5 = new byte[4];
      v6 = 0;
      v7 = 0;
      v8 = 0;
      while ( v6 < p2 )
      {
        v9 = p0[v6 + p1] & 0x7F;
        v10 = p3[v9];
        if ( v10 < -5 )
          throw new com.gameloft.android.GAND.GloftGGSS.billing.common.a("Bad Base64 input character at "
                                                                       + v6
                                                                       + ": "
                                                                       + p0[v6 + p1]
                                                                       + "(decimal)");
        if ( v10 < -1 )
        {
          v13 = v7;
          v14 = v8;
        }
        else
        {
          if ( v9 == 61 )
          {
            v11 = p2 - v6;
            v12 = p0[p2 - 1 + p1] & 0x7F;
            if ( v7 == 0 || v7 == 1 )
              throw new com.gameloft.android.GAND.GloftGGSS.billing.common.a("invalid padding byte '=' at byte offset " + v6);
            if ( v7 == 3 && v11 > 2 || v7 == 4 && v11 > 1 )
              throw new com.gameloft.android.GAND.GloftGGSS.billing.common.a("padding byte '=' falsely signals end of encoded" +
                                                                             " value at offset "
                                                                           + v6);
            if ( v12 != 61 && v12 != 10 )
              throw new com.gameloft.android.GAND.GloftGGSS.billing.common.a("encoded value has invalid trailing byte");
            break;
          }
          v13 = v7 + 1;
          v5[v7] = (byte)v9;
          if ( v7 == 3 )
          {
            v14 = decode4to3(v5, 0, v4, v8, p3) + v8;
            v13 = 0;
          }
          else
          {
            v14 = v8;
          }
        }
        ++v6;
        v8 = v14;
        v7 = v13;
      }
      if ( v7 != 0 )
      {
        if ( v7 == 1 )
          throw new com.gameloft.android.GAND.GloftGGSS.billing.common.a("single trailing character at offset " + (p2 - 1));
        v5[v7] = 61;
        v8 += decode4to3(v5, 0, v4, v8, p3);
      }
      v15 = new byte[v8];
      System.arraycopy(v4, 0, v15, 0, v8);
      return (byte[])v15;
    }

    private static int decode4to3(byte[] p0, int p1, byte[] p2, int p3, byte[] p4)
    {
      int v7;
      int v8;
      if ( p0[p1 + 2] == 61 )
      {
        p2[p3] = (byte)(((p4[p0[p1]] << 18) & 0x3FFFFFF | (p4[p0[p1 + 1]] << 12) & 0xFFFFF) >>> 16);
        return 1;
      }
      else if ( p0[p1 + 3] == 61 )
      {
        v7 = (p4[p0[p1]] << 18) & 0x3FFFFFF | (p4[p0[p1 + 1]] << 12) & 0xFFFFF | (p4[p0[p1 + 2]] << 6) & 0x3FFF;
        p2[p3] = (byte)((v7) >> 16);
        p2[p3 + 1] = (byte)((v7) >> 8);
        return 2;
      }
      else
      {
        v8 = (p4[p0[p1]] << 18) & 0x3FFFFFF
           | (p4[p0[p1 + 1]] << 12) & 0xFFFFF
           | (p4[p0[p1 + 2]] << 6) & 0x3FFF
           | (int)p4[p0[p1 + 3]];
        p2[p3] = (byte)((v8) >> 16);
        p2[p3 + 1] = (byte)((v8) >> 8);
        p2[p3 + 2] = (byte)v8;
        return 3;
      }
    }

    public static byte[] decodeWebSafe(String p0)
 throws com.gameloft.android.GAND.GloftGGSS.billing.common.a {
      byte[] Bytes; // RETVAL
    
      Bytes = p0.getBytes();
      return decodeWebSafe(Bytes, 0, Bytes.length);
    }

    public static byte[] decodeWebSafe(byte[] p0)
 throws com.gameloft.android.GAND.GloftGGSS.billing.common.a {
      return decodeWebSafe(p0, 0, p0.length);
    }

    public static byte[] decodeWebSafe(byte[] p0, int p1, int p2)
 throws com.gameloft.android.GAND.GloftGGSS.billing.common.a {
      return decode(p0, p1, p2, i);
    }

    public static String encode(byte[] p0)
    {
      return encode(p0, 0, p0.length, f, true);
    }

    public static String encode(byte[] p0, int p1, int p2, byte[] p3, boolean p4)
    {
      byte[] v5; // RETVAL
      int i;
      v5 = encode(p0, p1, p2, p3, 0x7FFFFFFF);
      for ( i = v5.length; !p4 && i > 0 && v5[i - 1] == 61; --i )
        ;
      return new String(v5, 0, i);
    }

    public static byte[] encode(byte[] p0, int p1, int p2, byte[] p3, int p4)
    {
      byte[] v5;
      int v6;
      int v7;
      int i;
      int v9;
      int v10;
      v5 = new byte[(4 * ((p2 + 2) / 3) + 4 * ((p2 + 2) / 3) / p4)];
      v6 = 0;
      v7 = 0;
      for ( i = 0; i < p2 - 2; i += 3 )
      {
        v9 = (p0[i + p1] << 16) & 0xFFFFFF | (p0[i + 1 + p1] << 8) & 0xFFFF | (p0[i + 2 + p1] & 0xFF);
        v5[v7] = p3[v9 >>> 18];
        v5[v7 + 1] = p3[(v9 >>> 12) & 0x3F];
        v5[v7 + 2] = p3[(v9 >>> 6) & 0x3F];
        v5[v7 + 3] = p3[v9 & 0x3F];
        v10 = v6 + 4;
        if ( v6 + 4 == p4 )
        {
          v5[v7 + 4] = 10;
          ++v7;
          v10 = 0;
        }
        v7 += 4;
        v6 = v10;
      }
      if ( i < p2 )
      {
        encode3to4(p0, i + p1, p2 - i, v5, v7, p3);
        if ( v6 + 4 == p4 )
        {
          v5[v7 + 4] = 10;
          ++v7;
        }
        v7 += 4;
      }
      if ( !c && v7 != v5.length )
        throw new AssertionError();
      return (byte[])v5;
    }

    private static byte[] encode3to4(byte[] p0, int p1, int p2, byte[] p3, int p4, byte[] p5)
    {
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      v6 = 0;
      if ( p2 <= 0 )
        v7 = 0;
      else
        v7 = (p0[p1] << 16) & 0xFFFFFF;
      if ( p2 <= 1 )
        v8 = 0;
      else
        v8 = (p0[p1 + 1] << 8) & 0xFFFF;
      v9 = v8 | v7;
      if ( p2 > 2 )
        v6 = p0[p1 + 2] & 0xFF;
      v10 = v6 | v9;
      switch ( p2 )
      {
        case 1:
          p3[p4] = p5[v10 >>> 18];
          p3[p4 + 1] = p5[(v10 >>> 12) & 0x3F];
          p3[p4 + 2] = 61;
          p3[p4 + 3] = 61;
          break;
        case 2:
          p3[p4] = p5[v10 >>> 18];
          p3[p4 + 1] = p5[(v10 >>> 12) & 0x3F];
          p3[p4 + 2] = p5[(v10 >>> 6) & 0x3F];
          p3[p4 + 3] = 61;
          break;
        case 3:
          p3[p4] = p5[v10 >>> 18];
          p3[p4 + 1] = p5[(v10 >>> 12) & 0x3F];
          p3[p4 + 2] = p5[(v10 >>> 6) & 0x3F];
          p3[p4 + 3] = p5[v10 & 0x3F];
          break;
        default:
          return (byte[])p3;
      }
      return (byte[])p3;
    }

    public static String encodeWebSafe(byte[] p0, boolean p1)
    {
      return encode(p0, 0, p0.length, g, p1);
    }

}
