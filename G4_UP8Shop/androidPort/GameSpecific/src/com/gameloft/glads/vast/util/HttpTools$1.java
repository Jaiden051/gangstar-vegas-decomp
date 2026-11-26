// Decompiled from classes.dex (SourceFile: HttpTools$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

import java.net.HttpURLConnection;
final class HttpTools$1 extends java.lang.Thread {
    // Fields
    final java.lang.String a;

    // Methods
    HttpTools$1(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      java.net.HttpURLConnection v1 = null;
      java.net.HttpURLConnection v2 = null;
      Exception v3 = null;
      Object v4 = null;
      Object v6 = null;
      Exception v8 = null;
      Exception _cv_1 = null;
      Throwable _cv_2 = null;
      Exception _cv_3 = null;
      Throwable _cv_4 = null;
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
              v1 = null;
              _ehCatchPc = 10;
              _ehCatchPc = 6;
              VASTLog.v(HttpTools.access$000(), "connection to URL:" + this.a);
              HttpURLConnection.setFollowRedirects(true);
              v2 = (java.net.HttpURLConnection)new java.net.URL(this.a).openConnection();
              _ehCatchPc = 1;
              v2.setConnectTimeout(5000);
              v2.setRequestProperty("Connection", "close");
              v2.setRequestMethod("GET");
              VASTLog.v(HttpTools.access$000(), "response code:" + v2.getResponseCode() + ", for URL:" + this.a);
              if ( v2 != null )
              {
              try
              {
              v2.disconnect();
              return;
              }
              catch ( Exception e )
              {
              }
              }
              return;
            case 1:
              _ehCatchPc = 6;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 2; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              v8 = _cv_1;
              v1 = v2;
              v3 = v8;
              _pc = 7;
              continue _sm;
            case 2:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 4; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v6 = _cv_2;
              v1 = v2;
              v4 = v6;
              _pc = 3;
              continue _sm;
            case 3:
              if ( v1 != null )
              {
              try
              {
              v1.disconnect();
              }
              catch ( Exception e )
              {
              }
              }
              throw com.gameloft.android.DecompRT.sneakyThrow(v4);
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 8; continue _sm; }
              _cv_3 = (Exception)_ehCaught;
              v3 = _cv_3;
              _pc = 7;
              continue _sm;
            case 7:
              VASTLog.w(HttpTools.access$000(), this.a + ": " + v3.getMessage() + ":" + v3.toString());
              _pc = 9;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              _ehCatchPc = -1;
              _pc = 12;
              continue _sm;
            case 10:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 11; continue _sm; }
              _cv_4 = (Throwable)_ehCaught;
              v4 = _cv_4;
              _pc = 3;
              continue _sm;
            case 11:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 12:
              if ( v1 != null )
              {
              try
              {
              v1.disconnect();
              }
              catch ( Exception e )
              {
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
