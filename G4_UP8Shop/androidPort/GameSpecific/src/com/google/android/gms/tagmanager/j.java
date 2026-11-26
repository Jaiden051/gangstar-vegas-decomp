// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

class j {
    // Methods
    public static byte[] bE(String p0)
    {
      int v1; // RETVAL
      int v2;
      byte[] v3;
      int i;
      int v5;
      int v6; // RETVAL
      int v7;
      v1 = p0.length();
      v2 = v1;
      if ( v1 % 2 != 0 )
        throw new IllegalArgumentException("purported base16 string has odd number of characters");
      v3 = new byte[(v1 / 2)];
      for ( i = 0; i < v2; i += 2 )
      {
        v5 = Character.digit(p0.charAt(i), 16);
        v6 = Character.digit(p0.charAt(i + 1), 16);
        v7 = v6;
        if ( v5 == -1 || v6 == -1 )
          throw new IllegalArgumentException("purported base16 string has illegal char");
        v3[i / 2] = (byte)(16 * v5 + v7);
      }
      return (byte[])v3;
    }

    public static String d(byte[] p0)
    {
      StringBuilder v1;
      int v2;
      int i;
      byte v4;
      v1 = new StringBuilder();
      v2 = p0.length;
      for ( i = 0; i < v2; ++i )
      {
        v4 = p0[i];
        if ( (v4 & 0xF0) == 0 )
          v1.append("0");
        v1.append(Integer.toHexString(v4 & 0xFF));
      }
      return v1.toString().toUpperCase();
    }

}
