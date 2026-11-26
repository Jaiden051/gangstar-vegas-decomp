// Decompiled from classes.dex (SourceFile: dk.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.net.URLEncoder;
class dk {
    // Methods
    private static com.google.android.gms.tagmanager.by<com.google.android.gms.internal.d$a> a(
            com.google.android.gms.tagmanager.by<com.google.android.gms.internal.d$a> p0)
    {
      try
      {
        return new com.google.android.gms.tagmanager.by(dh.r(cv(dh.j((com.google.android.gms.internal.d$a)p0.a()))), p0.b());
      }
      catch ( java.io.UnsupportedEncodingException v2 )
      {
        bh.b("Escape URI: unsupported encoding", v2);
      }
      return p0;
    }

    private static com.google.android.gms.tagmanager.by<com.google.android.gms.internal.d$a> a(
            com.google.android.gms.tagmanager.by<com.google.android.gms.internal.d$a> p0,
            int p1)
    {
      if ( q((com.google.android.gms.internal.d$a)p0.a()) )
      {
        if ( p1 == 12 )
          return a(p0);
        else
          bh.A("Unsupported Value Escaping: " + p1);
      }
      else
      {
        bh.A("Escaping can only be applied to strings.");
      }
      return p0;
    }

    static com.google.android.gms.tagmanager.by<com.google.android.gms.internal.d$a> a(
            com.google.android.gms.tagmanager.by<com.google.android.gms.internal.d$a> p0,
            int[] p1)
    {
      int v2;
      int i;
      v2 = p1.length;
      for ( i = 0; i < v2; ++i )
        p0 = a(p0, p1[i]);
      return p0;
    }

    static String cv(String p0)
 throws java.io.UnsupportedEncodingException {
      return URLEncoder.encode(p0, "UTF-8").replaceAll("\\+", "%20");
    }

    private static boolean q(com.google.android.gms.internal.d$a p0)
    {
      return dh.o(p0) instanceof String;
    }

}
