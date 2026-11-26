// Decompiled from classes.dex (SourceFile: Controller.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

public final class Controller {
    // Fields
    public static int A;
    public static int B;
    public static int C;
    public static int D;
    public static int E;
    public static int F;
    public static int G;
    public static int H;
    public static int I;
    public static int J;
    public static int K;
    public static int L;
    public static int M;
    public static int N;
    public static int O;
    public static int P;
    static int Q;
    static int R;
    static int S;
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static int n;
    public static int o;
    public static int p;
    public static int q;
    public static int r;
    public static int s;
    public static int t;
    public static int u;
    public static int v;
    public static int w;
    public static int x;
    public static int y;
    public static int z;
    final android.content.Context T;
    boolean U;
    com.bda.controller.IControllerService V;
    final com.bda.controller.IControllerListener$Stub W;
    final com.bda.controller.IControllerMonitor$Stub X;
    final com.bda.controller.g Y;
    int Z;
    android.os.Handler aa;
    com.bda.controller.i ab;
    com.bda.controller.j ac;

    // Methods
    private Controller(android.content.Context p0)
    {
      super();
      this.U = false;
      this.V = null;
      this.W = new com.bda.controller.c(this);
      this.X = new com.bda.controller.d(this);
      this.Y = new com.bda.controller.g(this);
      this.Z = 6;
      this.aa = null;
      this.ab = null;
      this.ac = null;
      this.T = p0;
    }

    private void a(com.bda.controller.j p0)
    {
      if ( this.V != null )
      {
        try
        {
          this.V.b(this.X, this.Z);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
      this.ac = null;
      this.f();
    }

    private float b(int p0)
    {
      if ( this.V != null )
      {
        try
        {
          return this.V.b(1, p0);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
      return 0.0f;
    }

    private int c(int p0)
    {
      if ( this.V != null )
      {
        try
        {
          return this.V.a(p0);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
      return 0;
    }

    private int d(int p0)
    {
      int v2 = 0;
      int _sw_1 = 0;
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
              v2 = 1;
              if ( !(this.V != null) ) { _pc = 11; continue _sm; }
              _ehCatchPc = 1;
              return this.V.e(1, p0);
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.os.RemoteException) ) { _pc = 10; continue _sm; }
              _sw_1 = (p0);
              if ( (_sw_1 == ('c')) ) { _pc = 2; continue _sm; }
              if ( (_sw_1 == ('d')) ) { _pc = 3; continue _sm; }
              _pc = 8;
              continue _sm;
            case 2:
              p0 = 98;
              _pc = 4;
              continue _sm;
            case 3:
              p0 = 99;
              _pc = 4;
              continue _sm;
            case 4:
              _ehCatchPc = 5;
              v2 = this.V.a(1, p0);
              _pc = 9;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof android.os.RemoteException) ) { _pc = 6; continue _sm; }
              _pc = 7;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              _pc = 9;
              continue _sm;
            case 8:
              _pc = 4;
              continue _sm;
            case 9:
              _pc = 11;
              continue _sm;
            case 10:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 11:
              return v2;
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

    private void g()
    {
      if ( this.V != null )
      {
        try
        {
          this.V.b(this.W, this.Z);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
    }

    public static final com.bda.controller.Controller getInstance(android.content.Context p0)
    {
      return new com.bda.controller.Controller(p0);
    }

    private void h()
    {
      if ( this.V != null )
      {
        try
        {
          this.V.b(this.X, this.Z);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
    }

    private void i()
    {
      if ( this.V != null )
      {
        try
        {
          this.V.a();
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
    }

    private void j()
    {
      if ( this.V != null )
      {
        try
        {
          this.V.b();
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
    }

    private void k()
    {
      if ( this.V != null )
      {
        try
        {
          this.V.c();
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
    }

    public final int a(int p0)
    {
      if ( this.V != null )
      {
        try
        {
          return this.V.c(1, 4);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
      return 0;
    }

    public final void a()
    {
      this.a(null, null);
      this.h();
      this.ac = null;
      this.f();
      if ( this.U )
      {
        this.T.unbindService((android.content.ServiceConnection)this.Y);
        this.U = false;
      }
    }

    final void a(int p0, int p1)
    {
      if ( this.V != null )
      {
        try
        {
          this.V.d(1, p1);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
    }

    public final void a(com.bda.controller.i p0, android.os.Handler p1)
    {
      if ( this.V != null )
      {
        try
        {
          this.V.b(this.W, this.Z);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
      this.ab = p0;
      this.aa = p1;
      this.e();
    }

    public final boolean b()
    {
      android.content.Intent v1;
      if ( !this.U )
      {
        v1 = new android.content.Intent(com.bda.controller.IControllerService.class.getName());
        this.T.startService(v1);
        this.T.bindService(v1, (android.content.ServiceConnection)this.Y, 1);
        this.U = true;
      }
      return this.U;
    }

    public final void c()
    {
      this.Z = 6;
      this.a(1, this.Z);
      this.e();
    }

    public final void d()
    {
      this.Z = 5;
      this.a(1, this.Z);
      this.e();
    }

    final void e()
    {
      if ( this.ab != null && this.V != null )
      {
        try
        {
          this.V.c(this.W, this.Z);
        }
        catch ( android.os.RemoteException e )
        {
          try
          {
            this.V.a(this.W, this.Z);
          }
          catch ( android.os.RemoteException e2 )
          {
          }
        }
      }
    }

    final void f()
    {
      if ( this.ac != null && this.V != null )
      {
        try
        {
          this.V.a(this.X, this.Z);
        }
        catch ( android.os.RemoteException e )
        {
        }
      }
    }

}
