// Decompiled from classes.dex (SourceFile: ao.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.security.MessageDigest;
class ao extends com.google.android.gms.tagmanager.aj {
    // Fields
    private static final java.lang.String a;
    private static final java.lang.String b;
    private static final java.lang.String c;
    private static final java.lang.String d;

    // Methods
    static
    {
      a = com.google.android.gms.internal.a.G.toString();
      b = com.google.android.gms.internal.b.n.toString();
      c = com.google.android.gms.internal.b.e.toString();
      d = com.google.android.gms.internal.b.aM.toString();
    }

    public ao()
    {
      super(a, new String[] { b });
    }

    private static byte[] c(String p0, byte[] p1)
 throws java.security.NoSuchAlgorithmException {
      java.security.MessageDigest Instance; // RETVAL
    
      Instance = MessageDigest.getInstance(p0);
      Instance.update(p1);
      return Instance.digest();
    }

    public final com.google.android.gms.internal.d$a a(java.util.Map<String, com.google.android.gms.internal.d$a> p0)
    {
      com.google.android.gms.internal.d$a v2;
      String v5;
      com.google.android.gms.internal.d$a v6;
      String v7;
      com.google.android.gms.internal.d$a v8;
      String v9;
      byte[] Bytes;
      java.security.MessageDigest Instance; // RETVAL
    
      v2 = (com.google.android.gms.internal.d$a)p0.get(b);
      if ( v2 != null && v2 != dh.mY() )
      {
        v5 = dh.j(v2);
        v6 = (com.google.android.gms.internal.d$a)p0.get(c);
        if ( v6 != null )
          v7 = dh.j(v6);
        else
          v7 = "MD5";
        v8 = (com.google.android.gms.internal.d$a)p0.get(d);
        if ( v8 != null )
          v9 = dh.j(v8);
        else
          v9 = "text";
        if ( "text".equals(v9) )
        {
          Bytes = v5.getBytes();
        }
        else
        {
          if ( !"base16".equals(v9) )
          {
            bh.A("Hash: unknown input format: " + v9);
            return dh.mY();
          }
          Bytes = j.bE(v5);
        }
        try
        {
          Instance = MessageDigest.getInstance(v7);
          Instance.update(Bytes);
          return dh.r(j.d(Instance.digest()));
        }
        catch ( java.security.NoSuchAlgorithmException e )
        {
          bh.A("Hash: unknown algorithm: " + v7);
          return dh.mY();
        }
      }
      else
      {
        return dh.mY();
      }
    }

    public final boolean a()
    {
      return true;
    }

}
