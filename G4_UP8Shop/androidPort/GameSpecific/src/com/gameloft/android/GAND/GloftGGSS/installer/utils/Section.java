// Decompiled from classes.dex (SourceFile: Section.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
import com.gameloft.android.GAND.GloftGGSS.installer.Utils;
public class Section extends java.lang.Thread {
    // Fields
    public static long a;
    private static java.lang.Object e;
    private static java.lang.Object f;
    private final int b;
    private final int c;
    private final int d;
    private java.lang.Thread g;
    private java.io.RandomAccessFile h;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient i;
    private boolean j;
    private boolean k;
    private long l;
    private long m;
    private long n;
    private int o;
    private int p;
    private int q;
    private java.lang.String r;
    private java.lang.String s;
    private java.util.Vector t;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.o u;
    private java.util.zip.ZipEntry v;
    private byte[] w;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.b x;

    // Methods
    static
    {
      e = new Object();
      f = new Object();
    }

    public Section(com.gameloft.android.GAND.GloftGGSS.installer.utils.Section p0)
    {
      super();
      this.b = 3;
      this.c = 3000;
      this.d = 0x8000;
      this.g = null;
      this.h = null;
      this.i = null;
      this.j = false;
      this.k = false;
      this.l = 0;
      this.m = 0;
      this.n = 0;
      this.o = 0;
      this.p = 0;
      this.q = 0;
      this.r = "";
      this.s = "";
      this.t = null;
      this.w = null;
      this.r = p0.r;
      this.s = p0.s;
      this.n = p0.n;
      this.o = p0.o;
      this.t = p0.t;
      this.q = p0.q + 1;
      this.p = p0.p;
      this.j = false;
      this.k = false;
      this.l = p0.e();
    }

    public Section(
            String p0,
            String p1,
            java.util.Vector<com.gameloft.android.GAND.GloftGGSS.installer.utils.i> p2,
            long p3,
            int p5)
    {
      super();
      this.b = 3;
      this.c = 3000;
      this.d = 0x8000;
      this.g = null;
      this.h = null;
      this.i = null;
      this.j = false;
      this.k = false;
      this.l = 0;
      this.m = 0;
      this.n = 0;
      this.o = 0;
      this.p = 0;
      this.q = 0;
      this.r = "";
      this.s = "";
      this.t = null;
      this.w = null;
      this.r = p0;
      this.s = p1;
      this.n = p3;
      this.o = p5;
      this.t = p2;
      this.q = 0;
      this.j = false;
      this.k = false;
    }

    /* synthetic */ static Object access$000()
    {
      return f;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.installer.utils.b access$100(
            com.gameloft.android.GAND.GloftGGSS.installer.utils.Section p0)
    {
      return p0.x;
    }

    private static java.io.RandomAccessFile getOutputStream(String p0, int p1)
    {
      java.io.File v2;
      String Parent;
      java.io.File v4;
      java.io.File v5;
      java.io.RandomAccessFile v6;
      try
      {
        v2 = new java.io.File(p0);
        if ( p0.endsWith("/") )
          Parent = p0;
        else
          Parent = v2.getParent();
        if ( Parent != null )
        {
          v4 = new java.io.File(Parent);
          if ( !v4.exists() )
            v4.mkdirs();
          v5 = new java.io.File(Parent + "/.nomedia");
          if ( !v5.exists() )
            v5.createNewFile();
        }
        if ( p0.endsWith("/") )
          return null;
        v6 = new java.io.RandomAccessFile(v2, "rw");
        if ( p1 > 0 )
        {
          if ( !v2.exists() && v6.length() < (long)p1 << 21 )
            v6.setLength((long)p1 << 21);
          v6.seek((long)(p1 - 1) << 21);
        }
        return v6;
      }
      catch ( Exception e )
      {
        GameInstaller.addErrorNumber(564);
      }
      return null;
    }

    private void h()
    {
      java.io.InputStream v1 = null;
      java.io.InputStream v2 = null;
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
              _ehCatchPc = 16;
              this.i = new com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient();
              _ehCatchPc = 7;
              if ( this.p >= this.t.size() )
              v1 = null;
              else
              v1 = this.i.a(this.r, ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.t.get(this.p)).g(), this.n, 0);
              _ehCatchPc = 1;
              this.l = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.t.get(this.p)).g()
              - ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.t.get(0)).g();
              _ehCatchPc = 7;
              _pc = 6;
              continue _sm;
            case 1:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 3; continue _sm; }
              v2 = v1;
              _pc = 2;
              continue _sm;
            case 2:
              HttpClient.incrementConnectionTimeout();
              GameInstaller.addErrorNumber(561);
              v1 = v2;
              _pc = 6;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              _pc = 4;
              continue _sm;
            case 4:
              GameInstaller.addErrorNumber(560);
              v1 = null;
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 16;
              _pc = 10;
              continue _sm;
            case 7:
              _ehCatchPc = 16;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 8; continue _sm; }
              v2 = null;
              _pc = 2;
              continue _sm;
            case 8:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              _pc = 4;
              continue _sm;
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              if ( !(v1 == null) ) { _pc = 15; continue _sm; }
              this.i.a();
              _ehCatchPc = 11;
              sleep(3000);
              _ehCatchPc = 16;
              _pc = 15;
              continue _sm;
            case 11:
              _ehCatchPc = 16;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 12; continue _sm; }
              _pc = 15;
              continue _sm;
            case 12:
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 14; continue _sm; }
              _pc = 13;
              continue _sm;
            case 13:
              GameInstaller.addErrorNumber(561);
              HttpClient.incrementConnectionTimeout();
              return;
            case 14:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 15:
              if ( v1 == null )
              throw new Exception();
              this.x = new com.gameloft.android.GAND.GloftGGSS.installer.utils.b(v1);
              if ( this.x == null )
              throw new Exception();
              this.w = new byte[0x8000];
              _ehCatchPc = -1;
              _pc = 19;
              continue _sm;
            case 16:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 17; continue _sm; }
              _pc = 13;
              continue _sm;
            case 17:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 18; continue _sm; }
              GameInstaller.addErrorNumber(560);
              throw new Exception();
            case 18:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 19:
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

    private int i()
    {
      return this.q;
    }

    private int j()
    {
      return this.o;
    }

    private long k()
    {
      return this.n;
    }

    private String l()
    {
      return this.s;
    }

    private String m()
    {
      return this.r;
    }

    public final void a()
    {
      this.g = null;
      this.j = false;
      this.k = true;
    }

    public final boolean b()
    {
      return this.j;
    }

    public final boolean c()
    {
      return !this.j && this.k;
    }

    public final boolean d()
    {
      return this.q < 3;
    }

    public final long e()
    {
      return this.l + this.m;
    }

    public final int f()
    {
      return this.p;
    }

    public final java.util.Vector<com.gameloft.android.GAND.GloftGGSS.installer.utils.i> g()
    {
      return this.t;
    }

    public void run()
    {
      Thread v1 = null;
      java.io.InputStream v2 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v3 = null;
      String v4 = null;
      int v5 = 0;
      String v6 = null;
      String v7 = null;
      String v8 = null;
      String v9 = null;
      Object v10 = null;
      int v12 = 0; // RETVAL
      Object v13 = null;
      java.io.InputStream v15 = null;
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
              v1 = Thread.currentThread();
              this.g = Thread.currentThread();
              _ehCatchPc = 11;
              this.i = new com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient();
              _ehCatchPc = 7;
              if ( this.p >= this.t.size() )
              v2 = null;
              else
              v2 = this.i.a(this.r, ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.t.get(this.p)).g(), this.n, 0);
              _ehCatchPc = 1;
              this.l = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.t.get(this.p)).g()
              - ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.t.get(0)).g();
              _ehCatchPc = 7;
              _pc = 6;
              continue _sm;
            case 1:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 3; continue _sm; }
              v15 = v2;
              _pc = 2;
              continue _sm;
            case 2:
              HttpClient.incrementConnectionTimeout();
              GameInstaller.addErrorNumber(561);
              v2 = v15;
              _pc = 6;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              _pc = 4;
              continue _sm;
            case 4:
              GameInstaller.addErrorNumber(560);
              v2 = null;
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 11;
              _pc = 10;
              continue _sm;
            case 7:
              _ehCatchPc = 11;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 8; continue _sm; }
              v15 = null;
              _pc = 2;
              continue _sm;
            case 8:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              _pc = 4;
              continue _sm;
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              if ( v2 == null )
              {
              this.i.a();
              try
              {
              sleep(3000);
              }
              catch ( Exception e )
              {
              }
              }
              if ( v2 == null )
              throw new Exception();
              this.x = new com.gameloft.android.GAND.GloftGGSS.installer.utils.b(v2);
              if ( this.x == null )
              throw new Exception();
              this.w = new byte[0x8000];
              _ehCatchPc = -1;
              _pc = 20;
              continue _sm;
            case 11:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 18; continue _sm; }
              _pc = 12;
              continue _sm;
            case 12:
              _ehCatchPc = 13;
              GameInstaller.addErrorNumber(561);
              HttpClient.incrementConnectionTimeout();
              _pc = 20;
              continue _sm;
            case 13:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 15; continue _sm; }
              _pc = 14;
              continue _sm;
            case 14:
              GameInstaller.addErrorNumber(562);
              HttpClient.incrementConnectionTimeout();
              this.k = true;
              _pc = 17;
              continue _sm;
            case 15:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 16; continue _sm; }
              GameInstaller.addErrorNumber(563);
              this.k = true;
              this.w = null;
              if ( this.i != null )
              {
              this.i.a();
              this.i = null;
              }
              this.l += this.m;
              _pc = 17;
              continue _sm;
            case 16:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 17:
              this.k = true;
              return;
            case 18:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 19; continue _sm; }
              GameInstaller.addErrorNumber(560);
              throw new Exception();
            case 19:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 20:
              if ( !this.j )
              {
              while ( true )
              {
              if ( this.g != v1 || this.t.size() <= this.p )
              {
              new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.utils.k(this)).start();
              this.u = null;
              this.w = null;
              this.j = true;
              if ( this.i == null )
              { _pc = 17; continue _sm; }
              try
              {
              Thread.sleep(50);
              }
              catch ( Exception e )
              {
              }
              v13 = f;
              synchronized ( v13 )
              {
              this.i.a();
              this.i = null;
              }
              { _pc = 17; continue _sm; }
              }
              try
              {
              sleep(10);
              }
              catch ( Exception e )
              {
              }
              v3 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.t.get(this.p);
              this.x.a(v3.f());
              this.u = new com.gameloft.android.GAND.GloftGGSS.installer.utils.o(this.x);
              this.v = this.u.getNextEntry();
              if ( this.v == null )
              {
              GameInstaller.addErrorNumber(570);
              throw new java.util.zip.DataFormatException("m_zipEntry = null");
              }
              v4 = v3.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/") + "/" + v3.b();
              if ( v4.contains(".split_") )
              {
              v5 = Integer.parseInt(v4.substring(v4.lastIndexOf("_") + 1));
              v6 = v4.substring(0, v4.lastIndexOf(46));
              }
              else
              {
              v5 = 0;
              v6 = v4;
              }
              v7 = this.s + "/" + v6;
              if ( v6.endsWith(".so") )
              {
              v8 = v3.b();
              if ( v3.b().contains(".split_") )
              v9 = v8.substring(0, v8.lastIndexOf(46));
              else
              v9 = v8;
              v7 = GameInstaller.LIBS_PATH + v9;
              GameInstaller.addNativeLib(v9);
              }
              v10 = e;
              synchronized ( v10 )
              {
              this.h = getOutputStream(v7, v5);
              }
              if ( v6.endsWith(".so") )
              {
              new java.io.File(v7).createNewFile();
              GameInstaller.makeLibExecutable(v7);
              }
              if ( this.h != null )
              {
              while ( true )
              {
              v12 = this.u.read(this.w, 0, 0x8000);
              if ( v12 < 0 )
              break;
              this.h.write(this.w, 0, v12);
              this.m = this.u.a();
              }
              this.l += this.m;
              this.m = 0;
              if ( v3.b().contains(".split_") && v3.j() / 0x200000 + 1 == v5 )
              this.h.setLength(v3.j());
              Utils.markAsSaved((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.t.get(this.p));
              ++this.p;
              this.h.close();
              this.u.closeEntry();
              this.x.b();
              this.x.a();
              }
              else
              {
              this.u.closeEntry();
              this.v = this.u.getNextEntry();
              if ( this.v == null )
              {
              GameInstaller.addErrorNumber(570);
              throw new java.util.zip.DataFormatException("m_zipEntry = null");
              }
              }
              }
              }
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
