// Decompiled from classes.dex (SourceFile: db.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
import android.util.Base64;
import java.security.KeyFactory;
import java.security.Signature;
public class db {
    // Methods
    public static boolean a(java.security.PublicKey p0, String p1, String p2)
    {
      boolean v3;
      java.security.Signature Instance;
      v3 = false;
      try
      {
        Instance = Signature.getInstance("SHA1withRSA");
        Instance.initVerify(p0);
        Instance.update(p1.getBytes());
        if ( Instance.verify(Base64.decode(p2, 0)) )
          return true;
        else
          ev.A("Signature verification failed.");
        return v3;
      }
      catch ( java.security.NoSuchAlgorithmException e )
      {
        ev.A("NoSuchAlgorithmException.");
        return v3;
      }
      catch ( java.security.InvalidKeyException e )
      {
        ev.A("Invalid key specification.");
        return v3;
      }
      catch ( java.security.SignatureException e )
      {
        ev.A("Signature exception.");
      }
      return v3;
    }

    public static boolean b(String p0, String p1, String p2)
    {
      if ( !TextUtils.isEmpty(p1) && !TextUtils.isEmpty(p0) && !TextUtils.isEmpty(p2) )
        return a(r(p0), p1, p2);
      ev.A("Purchase verification failed: missing data.");
      return false;
    }

    public static java.security.PublicKey r(String p0)
    {
      try
      {
        return KeyFactory.getInstance("RSA").generatePublic(new java.security.spec.X509EncodedKeySpec(Base64.decode(p0, 0)));
      }
      catch ( java.security.NoSuchAlgorithmException v2 )
      {
        throw new RuntimeException(v2);
      }
      catch ( java.security.spec.InvalidKeySpecException v3 )
      {
        ev.A("Invalid key specification.");
        throw new IllegalArgumentException(v3);
      }
    }

}
