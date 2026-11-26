// Decompiled from classes.dex (SourceFile: av.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.util.Log;
final class av {
    // Fields
    private static final java.lang.String a;
    private static boolean b;
    private static volatile boolean c;
    private static volatile boolean d;
    private static volatile com.amazon.device.associates.ar e;
    private static volatile com.amazon.device.associates.ar f;
    private static volatile com.amazon.device.associates.bg g;
    private static volatile com.amazon.device.associates.at h;
    private static volatile com.amazon.device.associates.at i;

    // Methods
    static
    {
      a = com.amazon.device.associates.av.class.getSimpleName();
      b = false;
      c = false;
      d = false;
      e = null;
      f = null;
      g = null;
      h = null;
      i = null;
    }

    av()
    {
      super();
    }

    static com.amazon.device.associates.ar a()
    {
      com.amazon.device.associates.ar v0;
      Object v1;
      com.amazon.device.associates.ar v2;
      v0 = e;
      if ( v0 == null )
      {
        v1 = com.amazon.device.associates.av.class;
        synchronized ( v1 )
        {
          v2 = e;
          e = (com.amazon.device.associates.ar)a(com.amazon.device.associates.ar.class, v2, false);
          return e;
        }
      }
      return e;
    }

    private static <T> T a(Class<T> p0, T p1, boolean p2)
    {
      com.amazon.device.associates.at v3;
      if ( p1 != null )
        return p1;
      try
      {
        e();
        if ( p2 )
          v3 = i;
        else
          v3 = h;
        if ( v3 != null )
          return v3.a(p0).newInstance();
        return p1;
      }
      catch ( Exception v5 )
      {
        Log.e(a, "error getting instance for " + p0, v5);
      }
      return p1;
    }

    static void a(boolean p0)
    {
      b = p0;
    }

    static com.amazon.device.associates.ar b()
    {
      com.amazon.device.associates.ar v0;
      Object v1;
      com.amazon.device.associates.ar v2;
      v0 = f;
      if ( v0 == null )
      {
        v1 = com.amazon.device.associates.av.class;
        synchronized ( v1 )
        {
          v2 = f;
          f = (com.amazon.device.associates.ar)a(com.amazon.device.associates.ar.class, v2, true);
          return f;
        }
      }
      return f;
    }

    static com.amazon.device.associates.bg c()
    {
      com.amazon.device.associates.bg v0;
      Object v1;
      com.amazon.device.associates.bg v2;
      v0 = g;
      if ( v0 == null )
      {
        v1 = com.amazon.device.associates.av.class;
        synchronized ( v1 )
        {
          v2 = g;
          g = (com.amazon.device.associates.bg)a(com.amazon.device.associates.bg.class, v2, false);
          return g;
        }
      }
      return g;
    }

    static boolean d()
    {
      Object v3;
      if ( !d )
      {
        v3 = com.amazon.device.associates.av.class;
        synchronized ( v3 )
        {
          if ( d )
            return c;
          try
          {
            com.amazon.device.associates.av.class.getClassLoader().loadClass("com.amazon.android.Kiwi");
            c = true;
          }
          catch ( Throwable e )
          {
            c = false;
          }
        }
        d = true;
        com.gameloft.android.DecompRT.monitorExit(v3);
        return c;
      }
      return c;
    }

    private static void e()
    {
      Object v0 = null;
      com.amazon.device.associates.at v1;
      Object v2;
      com.amazon.device.associates.at v3;
      v1 = h;
      try
      {
        if ( v1 == null )
        {
          v2 = com.amazon.device.associates.av.class;
          com.gameloft.android.DecompRT.monitorEnter(v2);
          v3 = h;
          if ( v3 == null )
          {
            if ( d() )
            {
              h = (com.amazon.device.associates.at)new com.amazon.device.associates.w();
              i = (com.amazon.device.associates.at)new com.amazon.device.associates.k();
              x.a((com.amazon.device.associates.bl)new com.amazon.device.associates.v());
            }
            else if ( b )
            {
              h = (com.amazon.device.associates.at)new com.amazon.device.associates.q();
              i = (com.amazon.device.associates.at)new com.amazon.device.associates.k();
              x.a((com.amazon.device.associates.bl)new com.amazon.device.associates.ai());
            }
            else
            {
              h = (com.amazon.device.associates.at)new com.amazon.device.associates.k();
              i = null;
            }
          }
          com.gameloft.android.DecompRT.monitorExit(v2);
        }
        return;
      }
      catch ( Throwable v4 )
      {
        com.gameloft.android.DecompRT.monitorExit(v0);
        throw v4;
      }
    }

}
