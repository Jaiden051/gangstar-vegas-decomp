// Decompiled from classes.dex (SourceFile: c$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.common.api;

class c$2 implements com.google.android.gms.common.api.GoogleApiClient$ConnectionCallbacks {
    // Fields
    final com.google.android.gms.common.api.c c;

    // Methods
    c$2(com.google.android.gms.common.api.c p0)
    {
      super();
      this.c = p0;
    
    }

    public final void a(int p0)
    {
      Throwable _cv_1 = null;
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
              c.a(this.c).lock();
              _ehCatchPc = 2;
              c.a(this.c, p0);
              switch ( p0 )
              {
              case 1:
              if ( !c.e(this.c) )
              {
              c.b(this.c, 2);
              this.c.b.sendMessageDelayed(this.c.b.obtainMessage(1), c.f(this.c));
              { _pc = 4; continue _sm; }
              }
              break;
              case 2:
              this.c.b();
              break;
              default:
              break;
              }
              _pc = 1;
              continue _sm;
            case 1:
              c.a(this.c).unlock();
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              c.a(this.c).unlock();
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _pc = 1;
              continue _sm;
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

    public final void a(android.os.Bundle p0)
 throws com.google.android.gms.internal.Decomp_do$a, android.os.RemoteException {
      c.a(this.c).lock();
      try
      {
        if ( c.b(this.c) == 1 )
        {
          if ( p0 != null )
            c.c(this.c).putAll(p0);
          c.d(this.c);
        }
      }
      finally
      {
        c.a(this.c).unlock();
      }
    }

}
