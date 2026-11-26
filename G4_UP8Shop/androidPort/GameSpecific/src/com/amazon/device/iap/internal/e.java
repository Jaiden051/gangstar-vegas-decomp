// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.iap.internal;

import android.util.Log;
public final class e {
    // Fields
    private static final java.lang.String a;
    private static volatile boolean b;
    private static volatile boolean c;
    private static volatile com.amazon.device.iap.internal.iap_c d;
    private static volatile com.amazon.device.iap.internal.iap_a e;
    private static volatile com.amazon.device.iap.internal.iap_b f;

    // Methods
    static
    {
      a = com.amazon.device.iap.internal.e.class.getName();
    }

    public e()
    {
      super();
    }

    private static <T> T a(Class<T> p0)
    {
      Object v1;
      v1 = null;
      try
      {
        return d().a(p0).newInstance();
      }
      catch ( Exception v3 )
      {
        Log.e(a, "error getting instance for " + p0, v3);
      }
      return (T)v1;
    }

    public static boolean a()
    {
      Object v3;
      if ( !c )
      {
        v3 = com.amazon.device.iap.internal.e.class;
        synchronized ( v3 )
        {
          if ( c )
            return b;
          try
          {
            com.amazon.device.iap.internal.e.class.getClassLoader().loadClass("com.amazon.android.Kiwi");
            b = false;
          }
          catch ( Throwable e )
          {
            b = true;
          }
        }
        c = true;
        com.gameloft.android.DecompRT.monitorExit(v3);
        return b;
      }
      return b;
    }

    public static com.amazon.device.iap.internal.iap_c b()
    {
      com.amazon.device.iap.internal.iap_c v0;
      Object v1;
      com.amazon.device.iap.internal.iap_c v2;
      v0 = d;
      if ( v0 != null )
        return d;
      v1 = com.amazon.device.iap.internal.e.class;
      synchronized ( v1 )
      {
        v2 = d;
        if ( v2 == null )
          d = (com.amazon.device.iap.internal.iap_c)a(com.amazon.device.iap.internal.iap_c.class);
        return d;
      }
    }

    public static com.amazon.device.iap.internal.iap_a c()
    {
      com.amazon.device.iap.internal.iap_a v0;
      Object v1;
      com.amazon.device.iap.internal.iap_a v2;
      v0 = e;
      if ( v0 != null )
        return e;
      v1 = com.amazon.device.iap.internal.e.class;
      synchronized ( v1 )
      {
        v2 = e;
        if ( v2 == null )
          e = (com.amazon.device.iap.internal.iap_a)a(com.amazon.device.iap.internal.iap_a.class);
        return e;
      }
    }

    private static com.amazon.device.iap.internal.iap_b d()
    {
      com.amazon.device.iap.internal.iap_b v0;
      Object v1;
      com.amazon.device.iap.internal.iap_b v2;
      v0 = f;
      if ( v0 != null )
        return f;
      v1 = com.amazon.device.iap.internal.e.class;
      synchronized ( v1 )
      {
        v2 = f;
        if ( v2 == null )
        {
          if ( a() )
            f = (com.amazon.device.iap.internal.iap_b)new com.amazon.device.iap.internal.a.d();
          else
            f = (com.amazon.device.iap.internal.iap_b)new com.amazon.device.iap.internal.b.b_g();
        }
        return f;
      }
    }

}
