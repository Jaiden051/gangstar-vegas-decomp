// Decompiled from classes.dex (SourceFile: Encrypter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import javax.crypto.Cipher;
public class Encrypter {
    // Fields
    private static java.lang.String a;

    // Methods
    static
    {
      a = getValue();
    }

    private Encrypter()
    {
      super();
    }

    public static String PadString(String p0)
    {
      int v1;
      StringBuffer v2;
      v1 = 16 - p0.length() % 16;
      if ( v1 > 0 && v1 < 16 )
      {
        v2 = new StringBuffer(p0.length() + v1);
        v2.insert(0, p0);
        while ( v1 > 0 )
        {
          v2.append(" ");
          --v1;
        }
        return v2.toString();
      }
      return p0;
    }

    public static String crypt(String p0)
    {
      byte[] v1;
      String v2;
      javax.crypto.spec.SecretKeySpec v3;
      javax.crypto.Cipher Instance;
      v1 = null;
      try
      {
        v2 = PadString(p0);
        v3 = new javax.crypto.spec.SecretKeySpec(Base64Coder.decodeLines(a), "ECB");
        Instance = Cipher.getInstance("AES/ECB/PKCS5Padding");
        Instance.init(1, v3);
        v1 = Instance.doFinal(v2.getBytes());
        return new String(Base64Coder.encode(v1));
      }
      catch ( Exception e )
      {
      }
      return new String(Base64Coder.encode(v1));
    }

    public static String decrypt(String p0)
    {
      byte[] v1;
      javax.crypto.spec.SecretKeySpec v2;
      javax.crypto.Cipher Instance;
      v1 = null;
      try
      {
        v2 = new javax.crypto.spec.SecretKeySpec(Base64Coder.decodeLines(a), "ECB");
        Instance = Cipher.getInstance("AES/ECB/PKCS5Padding");
        Instance.init(2, v2);
        v1 = Instance.doFinal(Base64Coder.decodeLines(p0));
        return new String(v1);
      }
      catch ( Exception e )
      {
      }
      return new String(v1);
    }

    private static String getValue()
    {
      byte[] v0;
      byte[] v1;
      int i;
      v0 = new byte[25];
      v1 = new byte[]
           {
             -48, -37, 4, 31, -39, -27, 52, -36, 41, 13, -32, 32, -35, 20, 5, 11, -8, -33, -5, -9, 5, -6, -4, 0, 0
           };
      v0[0] = 118;
      for ( i = 1; i < 24; ++i )
        v0[i] = (byte)(v0[i - 1] + v1[i]);
      return new String((byte[])v0, 0, 24);
    }

}
