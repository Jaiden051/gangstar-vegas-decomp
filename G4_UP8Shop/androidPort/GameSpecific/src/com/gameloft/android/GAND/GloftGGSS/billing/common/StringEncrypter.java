// Decompiled from classes.dex (SourceFile: StringEncrypter.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.billing.common;

import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import java.security.SecureRandom;
import javax.crypto.Cipher;
import javax.crypto.KeyGenerator;
public class StringEncrypter {
    // Fields
    static com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter i;
    java.lang.String a;
    javax.crypto.spec.SecretKeySpec b;
    javax.crypto.Cipher c;
    javax.crypto.Cipher d;
    int[] e;
    java.lang.String[] f;
    java.lang.String g;
    int h;
    private final java.lang.String j;

    // Methods
    public StringEncrypter(String p0)
    {
      super();
      this.j = "AES";
      this.e = new int[10];
      this.f = new String[10];
      this.a = p0;
      this.e[0] = -1;
      this.e[1] = -1;
      this.e[2] = -1;
      this.e[3] = -1;
      this.e[4] = -1;
      this.e[5] = -1;
      try
      {
        this.b = new javax.crypto.spec.SecretKeySpec(getRawKey(this.a.getBytes()), "AES");
        this.c = Cipher.getInstance("AES");
        this.c.init(1, this.b);
        this.d = Cipher.getInstance("AES");
        this.d.init(2, this.b);
      }
      catch ( Exception e )
      {
      }
      this.e[6] = -1;
      this.e[7] = -1;
      this.e[8] = -1;
      this.e[9] = -1;
    }

    public StringEncrypter(String p0, String p1)
    {
      super();
      this.j = "AES";
      this.e = new int[10];
      this.f = new String[10];
      this.a = p0;
      this.g = p1;
      this.e[0] = Integer.parseInt(new String("" + p1.charAt(2)));
      this.e[1] = Integer.parseInt(new String("" + p1.charAt(3)));
      this.e[2] = Integer.parseInt(new String("" + p1.charAt(4)));
      this.e[3] = Integer.parseInt(new String("" + p1.charAt(5)));
      this.e[4] = Integer.parseInt(new String("" + p1.charAt(6)));
      this.e[5] = Integer.parseInt(new String("" + p1.charAt(7)));
      try
      {
        this.b = new javax.crypto.spec.SecretKeySpec(getRawKey(this.a.getBytes()), "AES");
        this.c = Cipher.getInstance("AES");
        this.c.init(1, this.b);
        this.d = Cipher.getInstance("AES");
        this.d.init(2, this.b);
      }
      catch ( Exception e )
      {
      }
      this.e[6] = Integer.parseInt(new String("" + p1.charAt(0)));
      this.e[7] = Integer.parseInt(new String("" + p1.charAt(1)));
      this.e[8] = Integer.parseInt(new String("" + p1.charAt(2)) + new String("" + p1.charAt(5)));
      this.e[9] = Integer.parseInt(new String("" + p1.charAt(3)) + new String("" + p1.charAt(7)));
    }

    static String decryptBase64(int p0)
    {
      android.content.Context Context;
      String String; // RETVAL
      String v3;
      String v4;
      Context = SUtils.getContext();
      String = Context.getString(p0);
      v3 = String;
      try
      {
        return new String(Base64.decode(String.getBytes()));
      }
      catch ( Exception v6 )
      {
        try
        {
          v4 = new String(i.d.doFinal(Context.getString(p0).getBytes()));
        }
        catch ( Exception e )
        {
          return "";
        }
      }
      return v4;
    }

    private static byte[] getRawKey(byte[] p0)
 throws java.security.NoSuchAlgorithmException, java.security.NoSuchProviderException {
      javax.crypto.KeyGenerator Instance;
      java.security.SecureRandom v2; // RETVAL
    
      Instance = KeyGenerator.getInstance("AES");
      v2 = SecureRandom.getInstance("SHA1PRNG", "Crypto");
      v2.setSeed(p0);
      Instance.init(128, v2);
      return Instance.generateKey().getEncoded();
    }

    public static String getString(int p0)
    {
      android.content.Context Context; // RETVAL
      android.content.Context v2;
      Context = SUtils.getContext();
      v2 = Context;
      if ( i == null )
        i = new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(Context.getString(2131165344));
      v2.getString(p0);
      return decryptBase64(p0);
    }

    public final String a()
    {
      int v1;
      v1 = this.h % 6;
      return new String(new String("" + this.e[v1]) + (v1 + 1) % 10 + ((v1 + 1) % 10 + 1) % 8);
    }

    public final String a(String p0)
    {
      String v2;
      try
      {
        ++this.h;
        v2 = Base64.encode(this.c.doFinal(p0.getBytes()));
        this.f[this.h - 1] = new String(p0);
        return v2;
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public final String b(String p0)
    {
      String v2;
      try
      {
        ++this.h;
        v2 = new String(this.d.doFinal(Base64.decode(p0)));
        this.f[this.h - 1] = new String(v2);
        return v2;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

}
