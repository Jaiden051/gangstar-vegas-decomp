// Decompiled from classes.dex (SourceFile: RemoteMediaPlayer$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.cast;

class RemoteMediaPlayer$4 extends com.google.android.gms.cast.RemoteMediaPlayer$b {
    // Fields
    final com.google.android.gms.common.api.GoogleApiClient a;
    final com.google.android.gms.cast.MediaInfo b;
    final boolean c;
    final long d;
    final org.json.JSONObject e;
    final com.google.android.gms.cast.RemoteMediaPlayer f;

    // Methods
    RemoteMediaPlayer$4(
            com.google.android.gms.cast.RemoteMediaPlayer p0,
            com.google.android.gms.common.api.GoogleApiClient p1,
            com.google.android.gms.cast.MediaInfo p2,
            boolean p3,
            long p4,
            org.json.JSONObject p6)
    {
      super();
      this.f = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
      this.d = p4;
      this.e = p6;
    
    }

    private void h()
    {
      Object v1 = null; // RETVAL
      Object v2 = null;
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
              v1 = RemoteMediaPlayer.c(this.f);
              v2 = v1;
              com.gameloft.android.DecompRT.monitorEnter(v2);
              RemoteMediaPlayer.d(this.f).a(this.a);
              _ehCatchPc = 2;
              try
              {
              RemoteMediaPlayer.e(this.f).a(this.g, this.b, this.c, this.d, this.e);
              RemoteMediaPlayer.d(this.f).a(null);
              }
              catch ( java.io.IOException e )
              {
              this.a((com.google.android.gms.common.api.Result)this.b(new com.google.android.gms.common.api.Status(1)));
              { _pc = 4; continue _sm; }
              }
              
              _pc = 1;
              continue _sm;
            case 1:
              com.gameloft.android.DecompRT.monitorExit(v2);
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              RemoteMediaPlayer.d(this.f).a(null);
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              RemoteMediaPlayer.d(this.f).a(null);
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

    /* synthetic */ protected final void a(com.google.android.gms.common.api.Api$a p0)
    {
      Object v2 = null; // RETVAL
      Object v3 = null;
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
              v2 = RemoteMediaPlayer.c(this.f);
              v3 = v2;
              com.gameloft.android.DecompRT.monitorEnter(v3);
              RemoteMediaPlayer.d(this.f).a(this.a);
              _ehCatchPc = 2;
              try
              {
              RemoteMediaPlayer.e(this.f).a(this.g, this.b, this.c, this.d, this.e);
              RemoteMediaPlayer.d(this.f).a(null);
              }
              catch ( java.io.IOException e )
              {
              this.a((com.google.android.gms.common.api.Result)this.b(new com.google.android.gms.common.api.Status(1)));
              { _pc = 4; continue _sm; }
              }
              
              _pc = 1;
              continue _sm;
            case 1:
              com.gameloft.android.DecompRT.monitorExit(v3);
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              RemoteMediaPlayer.d(this.f).a(null);
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              RemoteMediaPlayer.d(this.f).a(null);
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

}
