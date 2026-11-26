// Decompiled from classes.dex (SourceFile: DefReader.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.billing.common;

import com.gameloft.android.GAND.GloftGGSS.iab.InAppBilling;
import java.security.MessageDigest;
import javax.crypto.Cipher;
public class DefReader {
    // Fields
    private static com.gameloft.android.GAND.GloftGGSS.billing.common.DefReader a;
    private final java.lang.String b;

    // Methods
    static
    {
      a = null;
    }

    public DefReader()
    {
      super();
      this.b = "AES";
    }

    private String a(String p0, String p1)
    {
      javax.crypto.spec.SecretKeySpec v3;
      javax.crypto.Cipher Instance;
      try
      {
        v3 = new javax.crypto.spec.SecretKeySpec(hf16(p1).getBytes(), "AES");
        Instance = Cipher.getInstance("AES");
        Instance.init(2, v3);
        return new String(Instance.doFinal(Base64.decode(p0)));
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    private byte[] a(String p0)
    {
      return hf16(p0).getBytes();
    }

    public static com.gameloft.android.GAND.GloftGGSS.billing.common.DefReader getInstance()
    {
      if ( a == null )
        a = new com.gameloft.android.GAND.GloftGGSS.billing.common.DefReader();
      return a;
    }

    private static String hf16(String p0)
    {
      StringBuffer v1;
      java.security.MessageDigest Instance;
      byte[] v3;
      int i;
      v1 = new StringBuffer();
      try
      {
        Instance = MessageDigest.getInstance(InAppBilling.a(0, 190));
        Instance.reset();
        Instance.update(p0.getBytes("UTF-8"));
        v3 = Instance.digest();
        for ( i = 0; i < v3.length; ++i )
          v1.append(Integer.toString((int)v3[i] + 256, 16).substring(1));
        return v1.toString().substring(0, 16);
      }
      catch ( Exception e )
      {
      }
      return v1.toString().substring(0, 16);
    }

}
