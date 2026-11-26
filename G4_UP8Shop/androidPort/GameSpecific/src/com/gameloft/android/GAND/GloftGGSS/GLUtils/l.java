// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class l implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final int b;

    // Methods
    l(String p0, int p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      String v1 = null; // RETVAL
      String v2 = null;
      StringBuilder v3 = null; // RETVAL
      String v4 = null;
      String v5 = null; // RETVAL
      java.net.URL v6 = null;
      String v7 = null;
      java.net.HttpURLConnection v8 = null;
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
              Tracking.access$000().lock();
              _ehCatchPc = 6;
              Thread.sleep(250);
              v1 = Tracking.access$200(Tracking.access$100()) + this.a;
              v2 = v1;
              _sw_1 = (this.b);
              if ( (_sw_1 == (1)) || (_sw_1 == (3)) ) { _pc = 1; continue _sm; }
              if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
              _pc = 4;
              continue _sm;
            case 1:
              v2 = v1 + "&check=1";
              _pc = 3;
              continue _sm;
            case 2:
              if ( !Tracking.testFlags(17) )
              {
              Tracking.access$300();
              Tracking.access$000().unlock();
              return;
              }
              Tracking.access$300();
              v2 = v2 + "&check=2";
              _pc = 3;
              continue _sm;
            case 3:
              if ( SUtils.getPreferenceString("trc_LI_ver", "0.0.0", Tracking.access$400()).compareTo(Tracking.access$500()) != 0 )
              {
              SUtils.removePreference("trc_SentIR", Tracking.access$400());
              SUtils.removePreference("trc_SentLI", Tracking.access$400());
              }
              if ( this.b == 1 && SUtils.getPreferenceBoolean("trc_SentLI", false, Tracking.access$400()) )
              { _pc = 10; continue _sm; }
              v3 = new StringBuilder().append(v2);
              v4 = "&enc=1";
              v5 = v3.append("&enc=1").toString();
              try
              {
              v6 = new java.net.URL(v5);
              v7 = new java.net.URI(v6.getProtocol(), v6.getUserInfo(), v6.getHost(), v6.getPort(), v6.getPath(), v6.getQuery(), v6.getRef()).toURL().toString();
              }
              catch ( Exception e )
              {
              v7 = v5;
              }
              
              v8 = (java.net.HttpURLConnection)new java.net.URL(v7).openConnection();
              v8.setConnectTimeout(Tracking.access$600());
              v8.setRequestMethod("GET");
              v8.setRequestProperty("Connection", "close");
              v8.getResponseCode();
              if ( (this.b == 1 || this.b == 3) && !v7.contains("action=InstallReferrer") )
              {
              SUtils.setPreference("trc_SentLI", Boolean.valueOf(true), Tracking.access$400());
              SUtils.setPreference("trc_LI_ver", Tracking.access$500(), Tracking.access$400());
              }
              _pc = 5;
              continue _sm;
            case 4:
              _pc = 3;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _pc = 10;
              continue _sm;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.UnknownHostException) ) { _pc = 8; continue _sm; }
              _pc = 7;
              continue _sm;
            case 7:
              _pc = 10;
              continue _sm;
            case 8:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              _pc = 10;
              continue _sm;
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              Tracking.access$000().unlock();
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
