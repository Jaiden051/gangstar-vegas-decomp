// Decompiled from classes.dex (SourceFile: em.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
import java.util.Locale;
public final class em {
    // Fields
    private static final java.lang.Object a;
    private static java.lang.String b;

    // Methods
    static
    {
      a = new Object();
    }

    public static String a(android.content.Context p0, String p1, String p2)
    {
      Object v3;
      v3 = a;
      synchronized ( v3 )
      {
        if ( b == null && !TextUtils.isEmpty(p1) )
          b(p0, p1, p2);
        return b;
      }
    }

    private static void b(android.content.Context p0, String p1, String p2)
    {
      ClassLoader ClassLoader;
      Class v4;
      String[] v5;
      java.math.BigInteger v6;
      int i;
      Object[] v8;
      try
      {
        ClassLoader = p0.createPackageContext(p2, 3).getClassLoader();
        v4 = Class.forName("com.google.ads.mediation.MediationAdapter", false, ClassLoader);
        v5 = p1.split(",");
        v6 = new java.math.BigInteger(new byte[1]);
        for ( i = 0; i < v5.length; ++i )
        {
          if ( ep.a(ClassLoader, v4, v5[i]) )
            v6 = v6.setBit(i);
        }
        v8 = new Object[1];
        v8[0] = v6;
        b = String.format(Locale.US, "%X", v8);
      }
      catch ( Throwable e )
      {
        b = "err";
      }
    }

    public static String bK()
    {
      Object v0;
      v0 = a;
      synchronized ( v0 )
      {
        return b;
      }
    }

}
