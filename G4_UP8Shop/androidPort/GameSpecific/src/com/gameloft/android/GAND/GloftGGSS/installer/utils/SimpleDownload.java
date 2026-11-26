// Decompiled from classes.dex (SourceFile: SimpleDownload.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
public final class SimpleDownload extends java.lang.Thread {
    // Fields
    public boolean a;
    private final int b;
    private final int c;
    private java.lang.Thread d;
    private java.io.FileOutputStream e;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient f;
    private boolean g;
    private boolean h;
    private boolean i;
    private long j;
    private long k;
    private java.lang.String l;
    private java.lang.String m;
    private int n;
    private byte[] o;
    private java.io.DataInputStream p;
    private java.util.Vector q;
    private long r;
    private int s;
    private int t;

    // Methods
    private SimpleDownload(com.gameloft.android.GAND.GloftGGSS.installer.utils.SimpleDownload p0)
    {
      super();
      this.b = 3000;
      this.c = 0x8000;
      this.d = null;
      this.e = null;
      this.f = null;
      this.g = false;
      this.h = false;
      this.i = false;
      this.j = 0;
      this.k = 0;
      this.l = "";
      this.m = "";
      this.n = 0;
      this.o = null;
      this.q = null;
      this.r = 0;
      this.s = 0;
      this.t = 0;
      this.a = false;
      this.l = p0.l;
      this.m = p0.m;
      this.n = p0.n;
      this.q = p0.q;
      this.g = false;
      this.h = false;
    }

    public SimpleDownload(
            String p0,
            String p1,
            java.util.Vector<com.gameloft.android.GAND.GloftGGSS.installer.utils.i> p2,
            long p3)
    {
      super();
      this.b = 3000;
      this.c = 0x8000;
      this.d = null;
      this.e = null;
      this.f = null;
      this.g = false;
      this.h = false;
      this.i = false;
      this.j = 0;
      this.k = 0;
      this.l = "";
      this.m = "";
      this.n = 0;
      this.o = null;
      this.q = null;
      this.r = 0;
      this.s = 0;
      this.t = 0;
      this.a = false;
      this.l = p0;
      this.m = p1;
      this.n = 0;
      this.q = p2;
      this.g = false;
      this.h = false;
      this.r = p3;
    }

    private void a(String p0, long p1)
    {
      com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient v3 = null;
      java.io.InputStream v4 = null;
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
              _ehCatchPc = 6;
              v3 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient();
              this.f = v3;
              try
              {
              if ( p0 == "" )
              v4 = this.f.a(this.l, p1, 0);
              else
              v4 = this.f.a(p0, p1, 0);
              }
              catch ( java.net.SocketTimeoutException e )
              {
              HttpClient.incrementConnectionTimeout();
              GameInstaller.addErrorNumber(561);
              v4 = null;
              }
              catch ( Exception e )
              {
              GameInstaller.addErrorNumber(560);
              v4 = null;
              }
              
              if ( !(v4 == null) ) { _pc = 5; continue _sm; }
              this.f.a();
              _ehCatchPc = 1;
              sleep(3000);
              _ehCatchPc = 6;
              _pc = 5;
              continue _sm;
            case 1:
              _ehCatchPc = 6;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 2; continue _sm; }
              _pc = 5;
              continue _sm;
            case 2:
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 4; continue _sm; }
              _pc = 3;
              continue _sm;
            case 3:
              GameInstaller.addErrorNumber(561);
              HttpClient.incrementConnectionTimeout();
              this.i = true;
              return;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              if ( v4 == null )
              throw new Exception();
              this.p = new java.io.DataInputStream(v4);
              if ( this.p == null )
              throw new Exception();
              this.o = new byte[0x8000];
              _ehCatchPc = -1;
              _pc = 9;
              continue _sm;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 7; continue _sm; }
              _pc = 3;
              continue _sm;
            case 7:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 8; continue _sm; }
              this.i = true;
              GameInstaller.addErrorNumber(560);
              throw new Exception();
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
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

    private void f()
    {
      this.g = false;
      this.h = false;
      this.i = false;
    }

    private boolean g()
    {
      return !this.g && this.h;
    }

    private static java.io.FileOutputStream getOutputStream(String p0)
    {
      java.io.File v1;
      String Parent;
      java.io.File v3;
      java.io.File v4;
      try
      {
        v1 = new java.io.File(p0);
        if ( p0.endsWith("/") )
          Parent = p0;
        else
          Parent = v1.getParent();
        if ( Parent != null )
        {
          v3 = new java.io.File(Parent);
          if ( !v3.exists() )
            v3.mkdirs();
          v4 = new java.io.File(Parent + "/.nomedia");
          if ( !v4.exists() )
            v4.createNewFile();
        }
        if ( p0.endsWith("/") )
          return null;
        return new java.io.FileOutputStream(v1, true);
      }
      catch ( Exception e )
      {
        GameInstaller.addErrorNumber(564);
      }
      return null;
    }

    private java.util.Vector<com.gameloft.android.GAND.GloftGGSS.installer.utils.i> h()
    {
      return this.q;
    }

    private String i()
    {
      return this.m;
    }

    private String j()
    {
      return this.l;
    }

    public static void update()
    {
      ;
    }

    public final void a()
    {
      this.d = null;
      this.g = false;
      this.h = true;
    }

    public final boolean b()
    {
      return this.i;
    }

    public final boolean c()
    {
      return this.g;
    }

    public final long d()
    {
      return this.j + this.k;
    }

    public final void e()
    {
      this.k = 0;
      this.j = 0;
    }

    public final void run()
    {
      int v1 = 0; // RETVAL
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v2 = null;
      String v3 = null;
      String v4 = null;
      java.io.File v5 = null;
      long v6 = 0L;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient v7 = null;
      java.io.InputStream v8 = null;
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
              Thread.currentThread();
              this.d = Thread.currentThread();
              this.j = 0;
              this.k = 0;
              _ehCatchPc = 12;
              if ( !(!this.g && !this.i && !this.h) ) { _pc = 11; continue _sm; }
              _pc = 1;
              continue _sm;
            case 1:
              if ( this.d == null || this.n >= this.q.size() )
              {
              this.e.close();
              this.p.close();
              this.o = null;
              if ( this.d != null )
              this.g = true;
              if ( this.f != null )
              {
              this.f.a();
              this.f = null;
              }
              { _pc = 16; continue _sm; }
              }
              try
              {
              sleep(10);
              }
              catch ( Exception e )
              {
              }
              
              v2 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.q.elementAt(this.n);
              v3 = v2.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/") + "/" + v2.b();
              if ( v3.endsWith(".so") )
              {
              this.m = GameInstaller.LIBS_PATH;
              GameInstaller.addNativeLib(v2.b());
              }
              v4 = this.m + "/" + v3;
              v5 = new java.io.File(v4.replace("//", "/"));
              if ( v5.exists() )
              v6 = v5.length();
              else
              v6 = 0;
              v7 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient();
              this.f = v7;
              try
              {
              v8 = this.f.a(this.l, v6, 0);
              }
              catch ( java.net.SocketTimeoutException e )
              {
              HttpClient.incrementConnectionTimeout();
              GameInstaller.addErrorNumber(561);
              v8 = null;
              { _pc = 3; continue _sm; }
              }
              catch ( Exception e )
              {
              GameInstaller.addErrorNumber(560);
              v8 = null;
              { _pc = 3; continue _sm; }
              }
              
              _pc = 2;
              continue _sm;
            case 2:
              if ( v8 == null )
              {
              this.f.a();
              try
              {
              sleep(3000);
              }
              catch ( Exception e )
              {
              }
              }
              if ( v8 == null )
              throw new Exception();
              this.p = new java.io.DataInputStream(v8);
              if ( this.p == null )
              throw new Exception();
              _ehEx = null;
              _ehCatchPc = 3;
              {
              this.o = new byte[0x8000];
              { _pc = 7; continue _sm; }
              }
            case 3:
              if ( _ehEx != null ) { _ehCatchPc = 12; }
              if ( !((_ehEx == null)) ) { _pc = 4; continue _sm; }
              _pc = 2;
              continue _sm;
            case 4:
              _pc = 5;
              continue _sm;
            case 5:
              if ( !((_ehEx != null && (_ehEx instanceof java.net.SocketTimeoutException))) ) { _pc = 8; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              _pc = 6;
              continue _sm;
            case 6:
              GameInstaller.addErrorNumber(561);
              HttpClient.incrementConnectionTimeout();
              this.i = true;
              _pc = 7;
              continue _sm;
            case 7:
              this.e = getOutputStream(v4);
              if ( v4.endsWith(".so") )
              {
              new java.io.File(this.m).createNewFile();
              GameInstaller.makeLibExecutable(this.m);
              }
              while ( true )
              {
              v1 = this.p.read(this.o, 0, 0x8000);
              if ( v1 < 0 )
              break;
              this.e.write(this.o, 0, v1);
              this.k += v1;
              if ( this.d == null )
              {
              this.g = false;
              this.h = true;
              break;
              }
              }
              this.j += this.k;
              this.k = 0;
              ++this.n;
              _pc = 1;
              continue _sm;
            case 8:
              _pc = 9;
              continue _sm;
            case 9:
              if ( !((_ehEx != null && (_ehEx instanceof Exception))) ) { _pc = 10; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              this.i = true;
              GameInstaller.addErrorNumber(560);
              throw new Exception();
            case 10:
              _pc = 2;
              continue _sm;
            case 11:
              return;
            case 12:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 14; continue _sm; }
              _pc = 13;
              continue _sm;
            case 13:
              GameInstaller.addErrorNumber(562);
              HttpClient.incrementConnectionTimeout();
              this.i = true;
              _pc = 16;
              continue _sm;
            case 14:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 15; continue _sm; }
              GameInstaller.addErrorNumber(563);
              this.i = true;
              this.o = null;
              if ( this.f != null )
              {
              this.f.a();
              this.f = null;
              }
              _pc = 16;
              continue _sm;
            case 15:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 16:
              this.a = true;
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
