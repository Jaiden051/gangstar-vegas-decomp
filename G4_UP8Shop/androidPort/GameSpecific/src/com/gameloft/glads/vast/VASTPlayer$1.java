// Decompiled from classes.dex (SourceFile: VASTPlayer$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast;

import com.gameloft.glads.vast.util.VASTLog;
class VASTPlayer$1 implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.glads.vast.VASTPlayer b;

    // Methods
    VASTPlayer$1(com.gameloft.glads.vast.VASTPlayer p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public void run()
    {
      java.io.BufferedReader v1 = null;
      StringBuffer i = null;
      String Line = null; // RETVAL
      Exception _cv_1 = null;
      Throwable _cv_2 = null;
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
              _ehCatchPc = 8;
              v1 = new java.io.BufferedReader(new java.io.InputStreamReader(new java.net.URL(this.a).openStream()));
              _ehCatchPc = 5;
              _ehCatchPc = 1;
              for ( i = new StringBuffer(); ; i.append(Line).append(System.getProperty("line.separator")) )
              {
              Line = v1.readLine();
              if ( Line == null )
              break;
              }
              try
              {
              v1.close();
              }
              catch ( java.io.IOException e )
              {
              }
              
              this.b.loadVideoWithData(i.toString());
              return;
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              _pc = 2;
              continue _sm;
            case 2:
              VASTPlayer.access$000(this.b, 2);
              VASTLog.e("VASTPlayer", _cv_1.getMessage(), _cv_1);
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _ehCatchPc = 8;
              _pc = 7;
              continue _sm;
            case 5:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 6; continue _sm; }
              _pc = 10;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              if ( v1 != null )
              {
              try
              {
              v1.close();
              }
              catch ( java.io.IOException e )
              {
              }
              }
              _ehCatchPc = -1;
              _pc = 12;
              continue _sm;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              v1 = null;
              _pc = 2;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v1 = null;
              _pc = 10;
              continue _sm;
            case 10:
              if ( v1 != null )
              {
              try
              {
              v1.close();
              }
              catch ( java.io.IOException e )
              {
              }
              }
              throw _cv_2;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
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
