// Decompiled from classes.dex (SourceFile: s.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.os.Looper;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer;
final class s implements java.lang.Runnable {
    // Methods
    s()
    {
      super();
    }

    public final void run()
    {
      int v1 = 0;
      com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer v2 = null;
      long v3 = 0L;
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
              Looper.prepare();
              SamsungHelper.access$202(true);
              v1 = 0;
              _pc = 1;
              continue _sm;
            case 1:
              _ehCatchPc = 7;
              v2 = new com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer(new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device(SamsungHelper.access$300()));
              XPlayer.setUserCreds(InAppBilling.a(6, 1), InAppBilling.a(7, 2));
              v2.a(0, InAppBilling.a(0, 203));
              v3 = 0;
              while ( !v2.e() )
              {
              try
              {
              Thread.sleep(50);
              }
              catch ( Exception e )
              {
              }
              if ( System.currentTimeMillis() - v3 > 1500 )
              v3 = System.currentTimeMillis();
              }
              if ( XPlayer.getLastErrorCode() != 0 )
              { _pc = 2; continue _sm; }
              _ehCatchPc = 3;
              XPlayer.getLastEComTxId();
              v1 = 1;
              XPlayer.clearLastEComTxId();
              _pc = 2;
              continue _sm;
            case 2:
              SamsungHelper.access$202(false);
              _pc = 9;
              continue _sm;
            case 3:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              v1 = 1;
              _pc = 4;
              continue _sm;
            case 4:
              SamsungHelper.access$202(false);
              _pc = 9;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 8; continue _sm; }
              _pc = 4;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              if ( v1 == 0 ) { _pc = 1; continue _sm; }
              _pc = 10;
              continue _sm;
            case 10:
              Looper.loop();
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
