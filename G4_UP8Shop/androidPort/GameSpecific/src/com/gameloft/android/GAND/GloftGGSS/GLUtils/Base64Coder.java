// Decompiled from classes.dex (SourceFile: Base64Coder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import android.util.Base64;
public class Base64Coder {
    // Fields
    private static final java.lang.String a;
    private static final char[] b;
    private static final byte[] c;

    // Methods
    static
    {
      int v0;
      int v1;
      int v2;
      int v3;
      int v4;
      int i;
      v0 = 0;
      a = System.getProperty("line.separator");
      b = new char[64];
      v1 = 65;
      v2 = 0;
      while ( v1 <= 90 )
      {
        b[v2] = (char)v1;
        v1 = (char)(v1 + 1);
        ++v2;
      }
      v3 = 97;
      while ( v3 <= 122 )
      {
        b[v2] = (char)v3;
        v3 = (char)(v3 + 1);
        ++v2;
      }
      v4 = 48;
      while ( v4 <= 57 )
      {
        b[v2] = (char)v4;
        v4 = (char)(v4 + 1);
        ++v2;
      }
      b[v2] = (char)0x2B;
      b[v2 + 1] = (char)0x2F;
      c = new byte[128];
      for ( i = 0; i < c.length; ++i )
        c[i] = (byte)-1;
      while ( v0 < 64 )
      {
        c[b[v0]] = (byte)v0;
        ++v0;
      }
    }

    private Base64Coder()
    {
      super();
    }

    public static byte[] decode(String p0)
    {
      return decode(p0.toCharArray());
    }

    public static byte[] decode(char[] p0)
    {
      return decode(p0, 0, p0.length);
    }

    public static byte[] decode(char[] p0, int p1, int p2)
    {
      int v3;
      byte[] v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      byte v18;
      int v19;
      byte v20;
      int v21;
      int v22;
      if ( p2 % 4 != 0 )
        throw new IllegalArgumentException("Length of Base64 encoded input string is not a multiple of 4.");
      while ( p2 > 0 && p0[p1 + p2 - 1] == 61 )
        --p2;
      v3 = 3 * p2 / 4;
      v4 = new byte[v3];
      v5 = p1 + p2;
      v6 = 0;
      while ( p1 < v5 )
      {
        v7 = p0[p1];
        v8 = p1 + 2;
        v9 = p0[p1 + 1];
        if ( p1 + 2 >= v5 )
        {
          v10 = 65;
        }
        else
        {
          v10 = p0[v8];
          v8 = p1 + 3;
        }
        if ( v8 >= v5 )
        {
          v13 = v8;
          v12 = 65;
        }
        else
        {
          v11 = v8 + 1;
          v12 = p0[v8];
          v13 = v11;
        }
        if ( v7 > 127 || v9 > 127 || v10 > 127 || v12 > 127 )
          throw new IllegalArgumentException("Illegal character in Base64 encoded data.");
        v14 = c[v7];
        v15 = c[v9];
        v16 = c[v10];
        v17 = c[v12];
        if ( v14 < 0 || v15 < 0 || v16 < 0 || v17 < 0 )
          throw new IllegalArgumentException("Illegal character in Base64 encoded data.");
        v18 = (byte)((4 * v14) | (v15 >>> 4));
        v19 = (16 * (v15 & 0xF)) | (v16 >>> 2);
        v20 = (byte)(((v16 & 3) << 6) | v17);
        v4[v6] = v18;
        if ( v6 + 1 >= v3 )
        {
          v21 = v6 + 1;
        }
        else
        {
          v21 = v6 + 2;
          v4[v6 + 1] = (byte)v19;
        }
        if ( v21 >= v3 )
        {
          v22 = v21;
        }
        else
        {
          v22 = v21 + 1;
          v4[v21] = v20;
        }
        p1 = v13;
        v6 = v22;
      }
      return (byte[])v4;
    }

    public static byte[] decodeLines(String p0)
    {
      char[] v1;
      int v2;
      int v3;
      char v4; // RETVAL
    
      v1 = new char[p0.length()];
      v2 = 0;
      v3 = 0;
      while ( v2 < p0.length() )
      {
        v4 = p0.charAt(v2);
        if ( v4 != 32 && v4 != 13 && v4 != 10 && v4 != 9 )
          v1[v3++] = v4;
        ++v2;
      }
      return decode(v1, 0, v3);
    }

    public static String decodeString(String p0)
    {
      return new String(decode(p0));
    }

    public static char[] encode(byte[] p0)
    {
      return encode(p0, 0, p0.length);
    }

    public static char[] encode(byte[] p0, int p1)
    {
      return encode(p0, 0, p1);
    }

    public static char[] encode(byte[] p0, int p1, int p2)
    {
      int v3;
      char[] v4;
      int v5;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int v17;
      char v18;
      char v19;
      v3 = (4 * p2 + 2) / 3;
      v4 = new char[(4 * ((p2 + 2) / 3))];
      v5 = p1 + p2;
      v6 = 0;
      while ( p1 < v5 )
      {
        v7 = p1 + 1;
        v8 = p0[p1] & 0xFF;
        if ( p1 + 1 >= v5 )
        {
          v9 = 0;
        }
        else
        {
          v9 = p0[v7] & 0xFF;
          v7 = p1 + 2;
        }
        if ( v7 >= v5 )
        {
          v10 = v7;
          v11 = 0;
        }
        else
        {
          v10 = v7 + 1;
          v11 = p0[v7] & 0xFF;
        }
        v12 = v8 >>> 2;
        v13 = (16 * (v8 & 3)) | (v9 >>> 4);
        v14 = (4 * (v9 & 0xF)) | (v11 >>> 6);
        v15 = v11 & 0x3F;
        v16 = v6 + 1;
        v4[v6] = b[v12];
        v17 = v6 + 2;
        v4[v16] = b[v13];
        if ( v17 >= v3 )
          v18 = 61;
        else
          v18 = b[v14];
        v4[v17] = v18;
        if ( v17 + 1 >= v3 )
          v19 = 61;
        else
          v19 = b[v15];
        v4[v17 + 1] = v19;
        p1 = v10;
        v6 = v17 + 2;
      }
      return (char[])v4;
    }

    public static String encodeLines(byte[] p0)
    {
      return encodeLines(p0, 0, p0.length, 76, a);
    }

    public static String encodeLines(byte[] p0, int p1, int p2, int p3, String p4)
    {
      int v5;
      StringBuilder v6;
      int i;
      int v8;
      v5 = 3 * p3 / 4;
      if ( v5 <= 0 )
        throw new IllegalArgumentException();
      v6 = new StringBuilder((p2 + v5 - 1) / v5 * p4.length() + 4 * ((p2 + 2) / 3));
      for ( i = 0; i < p2; i += v8 )
      {
        v8 = Math.min(p2 - i, v5);
        v6.append(encode(p0, p1 + i, v8));
        v6.append(p4);
      }
      return v6.toString();
    }

    public static String encodeString(String p0)
    {
      return new String(encode(p0.getBytes()));
    }

}
