// Decompiled from classes.dex (SourceFile: Encoder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

public class Encoder {
    // Methods
    public Encoder()
    {
      super();
    }

    public static String Blob2String(String p0)
    {
      byte[] Bytes;
      int v4;
      int v5;
      byte[] v6;
      int i;
      int v8;
      int j;
      byte KeyFromChar; // RETVAL
    
      if ( p0 == null )
        return null;
      Bytes = p0.getBytes();
      v4 = 8;
      v5 = 6 * p0.length() / 8 + 1;
      v6 = new byte[v5];
      for ( i = 0; i < v5; ++i )
        v6[i] = 0;
      v8 = 0;
      for ( j = 0; j < p0.length(); ++j )
      {
        KeyFromChar = SSEncDec_GetKeyFromChar(Bytes[j]);
        v6[v8] = (byte)(v6[v8] | (KeyFromChar << (8 - (byte)v4)));
        if ( v4 <= 6 )
        {
          if ( v8 < v5 - 2 )
          {
            ++v8;
            v6[v8] = (byte)((KeyFromChar >> v4) | v6[v8]);
            v4 += 2;
          }
        }
        else
        {
          v4 -= 6;
        }
      }
      return new String((byte[])v6, 0, v5).trim();
    }

    private static byte SSEncDec_GetCharFromKeyByIndex(byte p0)
    {
      if ( p0 >= 26 )
      {
        if ( p0 >= 52 )
        {
          if ( p0 >= 62 )
          {
            if ( p0 == 62 )
              return (byte)95;
            else
              return (byte)45;
          }
          else
          {
            return (byte)(p0 - 4);
          }
        }
        else
        {
          return (byte)(p0 + 39);
        }
      }
      else
      {
        return (byte)(p0 + 97);
      }
    }

    private static byte SSEncDec_GetKeyFromChar(byte p0)
    {
      if ( p0 == 45 )
      {
        return (byte)63;
      }
      else if ( p0 == 95 )
      {
        return (byte)62;
      }
      else if ( p0 >= 58 )
      {
        if ( p0 >= 91 )
          return (byte)(p0 - 97);
        else
          return (byte)(p0 - 39);
      }
      else
      {
        return (byte)(p0 + 4);
      }
    }

    public static String String2Blob(String p0)
    {
      byte[] Bytes;
      int v2;
      int v3;
      byte[] v4;
      int i;
      int v6;
      int v7;
      int v8;
      int v9;
      int v10;
      int v11;
      Bytes = p0.getBytes();
      v2 = 8 * p0.length() / 6;
      if ( 8 * p0.length() % 6 != 0 )
        v3 = v2 + 2;
      else
        v3 = v2 + 1;
      v4 = new byte[v3];
      for ( i = 0; i < v3; ++i )
        v4[i] = 0;
      v9 = 8;
      v11 = 0;
      v10 = 0;
      while ( v10 < p0.length() )
      {
        v6 = (int)((Bytes[v10] & 0x7F) >> (8 - (byte)v9));
        if ( v9 >= 6 )
        {
          v9 -= 6;
        }
        else
        {
          v7 = v10 + 1;
          if ( v10 + 1 < p0.length() )
          {
            v8 = (int)((Bytes[v7] << v9) | v6);
            v9 += 2;
            v6 = v8;
          }
          v10 = v7;
        }
        v4[v11++] = SSEncDec_GetCharFromKeyByIndex((byte)(v6 & 0x3F));
      }
      return new String((byte[])v4, 0, v11);
    }

}
