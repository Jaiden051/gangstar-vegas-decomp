// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.nio.ByteBuffer;
import javax.crypto.Cipher;
public class p {
    // Fields
    private final com.google.android.gms.internal.n a;
    private final java.security.SecureRandom b;

    // Methods
    public p(com.google.android.gms.internal.n p0, java.security.SecureRandom p1)
    {
      super();
      this.a = p0;
      this.b = null;
    }

    static void c(byte[] p0)
    {
      int i;
      for ( i = 0; i < p0.length; ++i )
        p0[i] = (byte)(p0[i] ^ 0x44);
    }

    public final byte[] a(String p0)
 throws com.google.android.gms.internal.p$a {
      byte[] v2; // RETVAL
      byte[] v4;
      try
      {
        v2 = this.a.a(p0, false);
        if ( v2.length != 32 )
          throw new com.google.android.gms.internal.p$a(this);
        v4 = new byte[16];
        ByteBuffer.wrap(v2, 4, 16).get(v4);
        c(v4);
        return (byte[])v4;
      }
      catch ( IllegalArgumentException v3 )
      {
        throw new com.google.android.gms.internal.p$a(this, v3);
      }
    }

    public final byte[] a(byte[] p0, String p1)
 throws com.google.android.gms.internal.p$a {
      byte[] v3; // RETVAL
      byte[] v4;
      java.nio.ByteBuffer v6;
      byte[] v7;
      byte[] v8;
      javax.crypto.Cipher Instance; // RETVAL
    
      if ( p0.length != 16 )
        throw new com.google.android.gms.internal.p$a(this);
      try
      {
        v3 = this.a.a(p1, false);
        v4 = v3;
        if ( v3.length <= 16 )
          throw new com.google.android.gms.internal.p$a(this);
        v6 = ByteBuffer.allocate(v3.length);
        v6.put(v4);
        v6.flip();
        v7 = new byte[16];
        v8 = new byte[(v4.length - 16)];
        v6.get(v7);
        v6.get(v8);
        Instance = Cipher.getInstance("AES/CBC/PKCS5Padding");
        Instance.init(2, new javax.crypto.spec.SecretKeySpec(p0, "AES"), new javax.crypto.spec.IvParameterSpec(v7));
        return Instance.doFinal(v8);
      }
      catch ( java.security.NoSuchAlgorithmException v5 )
      {
        throw new com.google.android.gms.internal.p$a(this, v5);
      }
      catch ( java.security.InvalidKeyException v11 )
      {
        throw new com.google.android.gms.internal.p$a(this, v11);
      }
      catch ( javax.crypto.IllegalBlockSizeException v12 )
      {
        throw new com.google.android.gms.internal.p$a(this, v12);
      }
      catch ( javax.crypto.NoSuchPaddingException v13 )
      {
        throw new com.google.android.gms.internal.p$a(this, v13);
      }
      catch ( javax.crypto.BadPaddingException v14 )
      {
        throw new com.google.android.gms.internal.p$a(this, v14);
      }
      catch ( java.security.InvalidAlgorithmParameterException v15 )
      {
        throw new com.google.android.gms.internal.p$a(this, v15);
      }
      catch ( IllegalArgumentException v16 )
      {
        throw new com.google.android.gms.internal.p$a(this, v16);
      }
    }

}
