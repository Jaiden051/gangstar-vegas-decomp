// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.io.File;
public abstract class j extends com.google.android.gms.internal.i {
    // Fields
    static boolean d;
    private static java.lang.reflect.Method e;
    private static java.lang.reflect.Method f;
    private static java.lang.reflect.Method g;
    private static java.lang.reflect.Method h;
    private static java.lang.reflect.Method i;
    private static java.lang.reflect.Method j;
    private static java.lang.String k;
    private static long l;
    private static com.google.android.gms.internal.p m;

    // Methods
    static
    {
      l = 0;
      d = false;
    }

    protected j(android.content.Context p0, com.google.android.gms.internal.n p1, com.google.android.gms.internal.o p2)
    {
      super(p0, p1, p2);
    }

    static String a(android.content.Context p0, com.google.android.gms.internal.n p1)
 throws com.google.android.gms.internal.j$a {
      Object[] v2;
      java.nio.ByteBuffer v3;
      if ( g == null )
        throw new com.google.android.gms.internal.j$a();
      try
      {
        v2 = new Object[1];
        v2[0] = p0;
        v3 = (java.nio.ByteBuffer)g.invoke(null, v2);
        if ( v3 == null )
          throw new com.google.android.gms.internal.j$a();
        return p1.a(v3.array(), true);
      }
      catch ( IllegalAccessException v4 )
      {
        throw new com.google.android.gms.internal.j$a(v4);
      }
      catch ( java.lang.reflect.InvocationTargetException v6 )
      {
        throw new com.google.android.gms.internal.j$a(v6);
      }
    }

    static java.util.ArrayList<Long> a(android.view.MotionEvent p0, android.util.DisplayMetrics p1)
 throws com.google.android.gms.internal.j$a {
      java.lang.reflect.Method v2;
      Object[] v3;
      v2 = h;
      if ( v2 == null || p0 == null )
        throw new com.google.android.gms.internal.j$a();
      try
      {
        v3 = new Object[2];
        v3[0] = p0;
        v3[1] = p1;
        return (java.util.ArrayList)h.invoke(null, v3);
      }
      catch ( IllegalAccessException v6 )
      {
        throw new com.google.android.gms.internal.j$a(v6);
      }
      catch ( java.lang.reflect.InvocationTargetException v7 )
      {
        throw new com.google.android.gms.internal.j$a(v7);
      }
    }

    protected static synchronized void a(String p0, android.content.Context p1, com.google.android.gms.internal.n p2)
 throws java.io.IOException, com.google.android.gms.common.GooglePlayServicesNotAvailableException, InterruptedException {
      if ( !d )
      {
        try
        {
          m = new com.google.android.gms.internal.p(p2, null);
          k = p0;
          e(p1);
          l = w().longValue();
          d = true;
        }
        catch ( com.google.android.gms.internal.j$a e )
        {
        }
        catch ( UnsupportedOperationException e )
        {
        }
        finally
        {
        }
      }
    }

    static String b(android.content.Context p0, com.google.android.gms.internal.n p1)
 throws com.google.android.gms.internal.j$a {
      Object[] v2;
      java.nio.ByteBuffer v3;
      if ( j == null )
        throw new com.google.android.gms.internal.j$a();
      try
      {
        v2 = new Object[1];
        v2[0] = p0;
        v3 = (java.nio.ByteBuffer)j.invoke(null, v2);
        if ( v3 == null )
          throw new com.google.android.gms.internal.j$a();
        return p1.a(v3.array(), true);
      }
      catch ( IllegalAccessException v4 )
      {
        throw new com.google.android.gms.internal.j$a(v4);
      }
      catch ( java.lang.reflect.InvocationTargetException v6 )
      {
        throw new com.google.android.gms.internal.j$a(v6);
      }
    }

    private static String b(byte[] p0, String p1)
 throws com.google.android.gms.internal.j$a {
      try
      {
        return new String(m.a(p0, p1), "UTF-8");
      }
      catch ( com.google.android.gms.internal.p$a v4 )
      {
        throw new com.google.android.gms.internal.j$a(v4);
      }
      catch ( java.io.UnsupportedEncodingException v5 )
      {
        throw new com.google.android.gms.internal.j$a(v5);
      }
    }

    static String d(android.content.Context p0)
 throws com.google.android.gms.internal.j$a {
      Object[] v1;
      String v2;
      if ( i == null )
        throw new com.google.android.gms.internal.j$a();
      try
      {
        v1 = new Object[1];
        v1[0] = p0;
        v2 = (String)i.invoke(null, v1);
        if ( v2 == null )
          throw new com.google.android.gms.internal.j$a();
        return v2;
      }
      catch ( IllegalAccessException v3 )
      {
        throw new com.google.android.gms.internal.j$a(v3);
      }
      catch ( java.lang.reflect.InvocationTargetException v4 )
      {
        throw new com.google.android.gms.internal.j$a(v4);
      }
    }

    private static void e(android.content.Context p0)
 throws com.google.android.gms.internal.j$a, java.io.IOException, com.google.android.gms.common.GooglePlayServicesNotAvailableException, InterruptedException {
      byte[] v1;
      byte[] v2;
      java.io.File CacheDir;
      java.io.File TempFile;
      java.io.FileOutputStream v6;
      dalvik.system.DexClassLoader v7;
      Class Class;
      Class v9;
      Class v10;
      Class v11;
      Class v12;
      Class v13;
      Class[] v14;
      Class[] v15;
      Class[] v16;
      Class[] v17;
      String Name;
      try
      {
        v1 = m.a(r.getKey());
        v2 = m.a(v1, r.A());
        CacheDir = p0.getCacheDir();
        if ( CacheDir == null )
        {
          CacheDir = p0.getDir("dex", 0);
          if ( CacheDir == null )
            throw new com.google.android.gms.internal.j$a();
        }
        TempFile = File.createTempFile("ads", ".jar", CacheDir);
        v6 = new java.io.FileOutputStream(TempFile);
        v6.write(v2, 0, v2.length);
        v6.close();
        v7 = new dalvik.system.DexClassLoader(TempFile.getAbsolutePath(), CacheDir.getAbsolutePath(), null, p0.getClassLoader());
        Class = v7.loadClass(b(v1, r.B()));
        v9 = v7.loadClass(b(v1, r.H()));
        v10 = v7.loadClass(b(v1, r.F()));
        v11 = v7.loadClass(b(v1, r.L()));
        v12 = v7.loadClass(b(v1, r.D()));
        v13 = v7.loadClass(b(v1, r.J()));
        e = Class.getMethod(b(v1, r.C()), new Class[0]);
        f = v9.getMethod(b(v1, r.I()), new Class[0]);
        v14 = new Class[1];
        v14[0] = android.content.Context.class;
        g = v10.getMethod(b(v1, r.G()), v14);
        v15 = new Class[2];
        v15[0] = android.view.MotionEvent.class;
        v15[1] = android.util.DisplayMetrics.class;
        h = v11.getMethod(b(v1, r.M()), v15);
        v16 = new Class[1];
        v16[0] = android.content.Context.class;
        i = v12.getMethod(b(v1, r.E()), v16);
        v17 = new Class[1];
        v17[0] = android.content.Context.class;
        j = v13.getMethod(b(v1, r.K()), v17);
        Name = TempFile.getName();
        TempFile.delete();
        new java.io.File(CacheDir, Name.replace(".jar", ".dex")).delete();
      }
      catch ( java.io.FileNotFoundException v4 )
      {
        throw new com.google.android.gms.internal.j$a(v4);
      }
      catch ( java.io.IOException v19 )
      {
        throw new com.google.android.gms.internal.j$a(v19);
      }
      catch ( ClassNotFoundException v20 )
      {
        throw new com.google.android.gms.internal.j$a(v20);
      }
      catch ( com.google.android.gms.internal.p$a v21 )
      {
        throw new com.google.android.gms.internal.j$a(v21);
      }
      catch ( NoSuchMethodException v22 )
      {
        throw new com.google.android.gms.internal.j$a(v22);
      }
      catch ( NullPointerException v23 )
      {
        throw new com.google.android.gms.internal.j$a(v23);
      }
    }

    static String v()
 throws com.google.android.gms.internal.j$a {
      if ( k == null )
        throw new com.google.android.gms.internal.j$a();
      return k;
    }

    static Long w()
 throws com.google.android.gms.internal.j$a {
      java.lang.reflect.Method v0;
      v0 = e;
      if ( v0 == null )
        throw new com.google.android.gms.internal.j$a();
      try
      {
        return (Long)e.invoke(null, new Object[0]);
      }
      catch ( IllegalAccessException v3 )
      {
        throw new com.google.android.gms.internal.j$a(v3);
      }
      catch ( java.lang.reflect.InvocationTargetException v4 )
      {
        throw new com.google.android.gms.internal.j$a(v4);
      }
    }

    static String x()
 throws com.google.android.gms.internal.j$a {
      java.lang.reflect.Method v0;
      v0 = f;
      if ( v0 == null )
        throw new com.google.android.gms.internal.j$a();
      try
      {
        return (String)f.invoke(null, new Object[0]);
      }
      catch ( IllegalAccessException v3 )
      {
        throw new com.google.android.gms.internal.j$a(v3);
      }
      catch ( java.lang.reflect.InvocationTargetException v4 )
      {
        throw new com.google.android.gms.internal.j$a(v4);
      }
    }

    protected void b(android.content.Context p0)
 throws InterruptedException, com.google.android.gms.internal.ma$a {
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              try
              {
              this.a(1, x());
              }
              catch ( com.google.android.gms.internal.j$a e )
              {
              }
              catch ( java.io.IOException e )
              {
              { _pc = 3; continue _sm; }
              }
              
              try
              {
              this.a(2, v());
              }
              catch ( com.google.android.gms.internal.j$a e )
              {
              }
              catch ( java.io.IOException e )
              {
              { _pc = 3; continue _sm; }
              }
              
              try
              {
              this.a(25, w().longValue());
              }
              catch ( com.google.android.gms.internal.j$a e )
              {
              }
              catch ( java.io.IOException e )
              {
              { _pc = 3; continue _sm; }
              }
              
              _ehCatchPc = 1;
              this.a(24, d(p0));
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof com.google.android.gms.internal.j$a) ) { _pc = 2; continue _sm; }
              _pc = 5;
              continue _sm;
            case 2:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 4; continue _sm; }
              _pc = 3;
              continue _sm;
            case 3:
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    protected final void c(android.content.Context p0)
    {
      long v2 = 0L; // RETVAL
      java.util.ArrayList v3 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              try
              {
              this.a(2, v());
              }
              catch ( com.google.android.gms.internal.j$a e )
              {
              }
              catch ( java.io.IOException e )
              {
              { _pc = 3; continue _sm; }
              }
              
              try
              {
              this.a(1, x());
              }
              catch ( com.google.android.gms.internal.j$a e )
              {
              }
              catch ( java.io.IOException e )
              {
              { _pc = 3; continue _sm; }
              }
              
              try
              {
              v2 = w().longValue();
              this.a(25, v2);
              if ( l != 0 )
              {
              this.a(17, v2 - l);
              this.a(23, l);
              }
              }
              catch ( com.google.android.gms.internal.j$a e )
              {
              }
              catch ( java.io.IOException e )
              {
              { _pc = 3; continue _sm; }
              }
              
              try
              {
              v3 = a(this.a, this.b);
              this.a(14, ((Long)v3.get(0)).longValue());
              this.a(15, ((Long)v3.get(1)).longValue());
              if ( v3.size() >= 3 )
              this.a(16, ((Long)v3.get(2)).longValue());
              }
              catch ( com.google.android.gms.internal.j$a e )
              {
              }
              catch ( java.io.IOException e )
              {
              { _pc = 3; continue _sm; }
              }
              
              try
              {
              this.a(27, a(p0, this.c));
              }
              catch ( com.google.android.gms.internal.j$a e )
              {
              }
              catch ( java.io.IOException e )
              {
              { _pc = 3; continue _sm; }
              }
              
              _ehCatchPc = 1;
              this.a(29, b(p0, this.c));
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof com.google.android.gms.internal.j$a) ) { _pc = 2; continue _sm; }
              _pc = 5;
              continue _sm;
            case 2:
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 4; continue _sm; }
              _pc = 3;
              continue _sm;
            case 3:
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              return;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

}
