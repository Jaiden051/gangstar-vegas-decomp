// Decompiled from classes.dex (SourceFile: hc$h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public final class hc$h extends com.google.android.gms.internal.hc$b {
    // Fields
    public final int a;
    public final android.os.Bundle b;
    public final android.os.IBinder c;
    final com.google.android.gms.internal.hc e;

    // Methods
    public hc$h(com.google.android.gms.internal.hc p0, int p1, android.os.IBinder p2, android.os.Bundle p3)
    {
      super(p0, Boolean.valueOf(true));
      this.e = p0;
      this.a = p1;
      this.c = p2;
      this.b = p3;
    
    }

    private void a(Boolean p0)
 {
      android.app.PendingIntent v2 = null;
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
              if ( !(p0 != null) ) { _pc = 9; continue _sm; }
              _sw_1 = (this.a);
              if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
              if ( (_sw_1 == (10)) ) { _pc = 6; continue _sm; }
              _pc = 7;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 2;
              if ( !this.e.e().equals(this.c.getInterfaceDescriptor()) )
              { _pc = 3; continue _sm; }
              hc.a(this.e, this.e.a(this.c));
              if ( hc.c(this.e) == null )
              { _pc = 3; continue _sm; }
              hc.a(this.e, 3);
              hc.a(this.e).a();
              _ehCatchPc = -1;
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 2:
              _ehCatchPc = -1;
              if ( !((_ehEx != null && (_ehEx instanceof android.os.RemoteException))) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              _pc = 3;
              continue _sm;
            case 3:
              he.B(hc.e(this.e)).b(this.e.f(), hc.d(this.e));
              hc.a(this.e, (android.os.IInterface)null);
              hc.a(this.e, 1);
              hc.a(this.e, (android.os.IInterface)null);
              hc.a(this.e).a(new com.google.android.gms.common.ConnectionResult(8, null));
              _pc = 4;
              continue _sm;
            case 4:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 5;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _pc = 8;
              continue _sm;
            case 6:
              hc.a(this.e, 1);
              throw new IllegalStateException("A fatal developer error has occurred. Check the logs for further information.");
            case 7:
              if ( this.b != null )
              v2 = (android.app.PendingIntent)this.b.getParcelable("pendingIntent");
              else
              v2 = null;
              if ( hc.d(this.e) != null )
              {
              he.B(hc.e(this.e)).b(this.e.f(), hc.d(this.e));
              hc.a(this.e, (android.os.IInterface)null);
              }
              hc.a(this.e, 1);
              hc.a(this.e, (android.os.IInterface)null);
              hc.a(this.e).a(new com.google.android.gms.common.ConnectionResult(this.a, v2));
              return;
            case 8:
              _pc = 10;
              continue _sm;
            case 9:
              {
              hc.a(this.e, 1);
              }
              _pc = 10;
              continue _sm;
            case 10:
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

    protected final void a()
    {
      ;
    }

    /* synthetic */ protected final void a(Object p0)
    {
      android.app.PendingIntent v2 = null;
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
              if ( !((Boolean)p0 != null) ) { _pc = 9; continue _sm; }
              _sw_1 = (this.a);
              if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
              if ( (_sw_1 == (10)) ) { _pc = 6; continue _sm; }
              _pc = 7;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 2;
              if ( !this.e.e().equals(this.c.getInterfaceDescriptor()) )
              { _pc = 3; continue _sm; }
              hc.a(this.e, this.e.a(this.c));
              if ( hc.c(this.e) == null )
              { _pc = 3; continue _sm; }
              hc.a(this.e, 3);
              hc.a(this.e).a();
              _ehCatchPc = -1;
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 2:
              _ehCatchPc = -1;
              if ( !((_ehEx != null && (_ehEx instanceof android.os.RemoteException))) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              _pc = 3;
              continue _sm;
            case 3:
              he.B(hc.e(this.e)).b(this.e.f(), hc.d(this.e));
              hc.a(this.e, (android.os.IInterface)null);
              hc.a(this.e, 1);
              hc.a(this.e, (android.os.IInterface)null);
              hc.a(this.e).a(new com.google.android.gms.common.ConnectionResult(8, null));
              _pc = 4;
              continue _sm;
            case 4:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 5;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _pc = 8;
              continue _sm;
            case 6:
              hc.a(this.e, 1);
              throw new IllegalStateException("A fatal developer error has occurred. Check the logs for further information.");
            case 7:
              if ( this.b != null )
              v2 = (android.app.PendingIntent)this.b.getParcelable("pendingIntent");
              else
              v2 = null;
              if ( hc.d(this.e) != null )
              {
              he.B(hc.e(this.e)).b(this.e.f(), hc.d(this.e));
              hc.a(this.e, (android.os.IInterface)null);
              }
              hc.a(this.e, 1);
              hc.a(this.e, (android.os.IInterface)null);
              hc.a(this.e).a(new com.google.android.gms.common.ConnectionResult(this.a, v2));
              return;
            case 8:
              _pc = 10;
              continue _sm;
            case 9:
              {
              hc.a(this.e, 1);
              }
              _pc = 10;
              continue _sm;
            case 10:
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
