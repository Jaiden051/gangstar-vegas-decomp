// Decompiled from classes.dex (SourceFile: HTTP.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import android.os.Build;
import android.text.TextUtils;
import com.gameloft.android.GAND.GloftGGSS.iab.InAppBilling;
import java.net.InetAddress;
import java.net.Proxy;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
public final class HTTP implements com.gameloft.android.GAND.GloftGGSS.GLUtils.Config, java.lang.Runnable {
    // Fields
    public static java.lang.String w;
    private java.lang.String A;
    private org.apache.http.HttpConnection B;
    private java.net.HttpURLConnection C;
    private javax.net.ssl.HttpsURLConnection D;
    private java.io.InputStream E;
    private java.io.OutputStream F;
    public java.lang.String t;
    boolean u;
    public boolean v;
    private final int x;
    private java.lang.Thread y;
    private java.lang.String z;

    // Methods
    static
    {
      w = null;
    }

    public HTTP()
    {
      super();
      javax.net.ssl.SSLContext Instance; // RETVAL
      javax.net.ssl.TrustManager[] v2;
      this.x = 16;
      this.y = null;
      this.B = null;
      this.C = null;
      this.D = null;
      this.E = null;
      this.F = null;
      this.u = false;
      this.v = false;
      try
      {
        Instance = SSLContext.getInstance("TLS");
        v2 = new javax.net.ssl.TrustManager[1];
        v2[0] = new com.gameloft.android.GAND.GloftGGSS.GLUtils.f(this);
        Instance.init(null, (javax.net.ssl.TrustManager[])v2, new java.security.SecureRandom());
        HttpsURLConnection.setDefaultSSLSocketFactory(Instance.getSocketFactory());
        HttpsURLConnection.setDefaultHostnameVerifier((javax.net.ssl.HostnameVerifier)new com.gameloft.android.GAND.GloftGGSS.GLUtils.e(this));
      }
      catch ( Exception e )
      {
      }
    
    }

    private boolean d()
    {
      return this.v;
    }

    private boolean e()
    {
      return this.z.indexOf("https") != -1;
    }

    private static void onValidationHandled()
    {
      ConnectionTimer.stop();
    }

    public final String a(String p0)
    {
      try
      {
        if ( this.e() )
          return this.D.getHeaderField(p0);
        else
          return this.C.getHeaderField(p0);
      }
      catch ( Exception e )
      {
        return "0";
      }
    }

    public final void a(String p0, String p1)
    {
      StringBuilder v4;
      String v5;
      while ( this.u )
      {
        try
        {
          if ( System.currentTimeMillis() - XPlayer.bn > 60000 )
            this.b();
          synchronized ( this )
          {
            this.wait(50);
          }
          continue;
        }
        catch ( Exception e )
        {
        }
      }
      this.u = true;
      v4 = new StringBuilder().append(p0);
      if ( p0.indexOf("?") <= 0 )
        v5 = "?";
      else
        v5 = "&";
      this.z = v4.append(v5).append(p1).toString();
      if ( XPlayer.bl.equals("TextHtml") || XPlayer.bl.equals("texthtml") || XPlayer.bl.equals("TEXTHTML") )
      {
        this.z = this.z + "&texthtml=1";
      }
      else if ( XPlayer.bl.equals("TextPlain") || XPlayer.bl.equals("textplain") || XPlayer.bl.equals("TEXTPLAIN") )
      {
        this.z = this.z + "&textplain=1";
      }
      if ( this.y != null )
      {
        try
        {
          this.y.join();
        }
        catch ( Exception e )
        {
        }
      }
      ConnectionTimer.start(60000);
      this.v = false;
      this.y = new Thread((Runnable)this);
      this.y.start();
    }

    public final boolean a()
    {
      return this.u;
    }

    public final void b()
    {
      org.apache.http.HttpConnection B = null;
      org.apache.http.HttpConnection v2 = null;
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
              if ( this.B == null )
              { _pc = 1; continue _sm; }
              _ehCatchPc = 2;
              B = this.B;
              com.gameloft.android.DecompRT.monitorEnter(B);
              try
              {
              try
              {
              this.E.close();
              { _pc = 4; continue _sm; }
              }
              finally
              {
              com.gameloft.android.DecompRT.monitorExit(B);
              }
              }
              catch ( Exception e )
              {
              }
              
              _pc = 1;
              continue _sm;
            case 1:
              this.E = null;
              this.B = null;
              this.y = null;
              System.gc();
              this.u = false;
              return;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              v2 = this.B;
              synchronized ( v2 )
              {
              this.B.close();
              { _pc = 1; continue _sm; }
              }
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

    public final void c()
    {
      this.b();
      this.t = null;
    }

    public final void run()
    {
      com.gameloft.android.GAND.GloftGGSS.GLUtils.a Carrier = null;
      java.net.URL v2 = null;
      java.net.HttpURLConnection C = null;
      java.io.ByteArrayOutputStream v4 = null;
      byte[] v5 = null;
      int v6 = 0;
      int v7 = 0; // RETVAL
      com.gameloft.android.GAND.GloftGGSS.GLUtils.a v9 = null;
      java.net.URL v10 = null;
      javax.net.ssl.HttpsURLConnection D = null;
      java.io.ByteArrayOutputStream v12 = null;
      byte[] v13 = null;
      int v14 = 0;
      int v15 = 0; // RETVAL
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
              if ( !(!this.e()) ) { _pc = 8; continue _sm; }
              _ehCatchPc = 3;
              this.v = false;
              Carrier = XPlayer.getCarrier();
              System.setProperty("http.keepAlive", "false");
              v2 = new java.net.URL(this.z);
              if ( Carrier.a() )
              this.C = (java.net.HttpURLConnection)v2.openConnection(new java.net.Proxy(Proxy.Type.HTTP, new java.net.InetSocketAddress(InetAddress.getByName(Carrier.b()), Carrier.c())));
              else
              this.C = (java.net.HttpURLConnection)v2.openConnection();
              this.C.setRequestMethod("GET");
              this.C.setRequestProperty("Connection", "close");
              XPlayer.getDevice();
              this.C.setRequestProperty("User-Agent", Device.getUserAgent());
              if ( w != null )
              this.C.setRequestProperty("x-up-subno", w);
              this.C.setRequestProperty("x-gl-d", SUtils.GetSerialKey());
              this.C.setRequestProperty("x-android-os-build-model", Build.MODEL);
              XPlayer.getDevice();
              this.C.setRequestProperty("x-up-gl-subno", Device.getLineNumber());
              XPlayer.getDevice();
              this.C.setRequestProperty("x-up-gl-hdidfv", Device.getHDIDFV());
              XPlayer.getDevice();
              this.C.setRequestProperty("x-up-gl-gldid", Device.getGLDID());
              this.C.setRequestProperty("x-up-gl-ggi", "53689");
              XPlayer.getDevice();
              this.C.setRequestProperty("x-up-gl-gamecode", Device.getDemoCode());
              if ( XPlayer.C != null )
              this.C.setRequestProperty("x-up-gl-acnum", XPlayer.C);
              if ( XPlayer.E != null )
              {
              this.C.setRequestProperty("x-up-gl-fed-credentials", XPlayer.E);
              this.C.setRequestProperty("x-up-gl-fed-client-id", "1622:53689:1.8.2:android:samsung");
              }
              if ( XPlayer.I != "" )
              this.C.setRequestProperty("x-up-gl-purchaseid", XPlayer.I);
              if ( XPlayer.F != null && !TextUtils.isEmpty(XPlayer.F) )
              this.C.setRequestProperty(InAppBilling.a(0, 162), XPlayer.F);
              this.C.setRequestProperty("Accept", "application/com.gameloft.ecomm.android.iap-v1.1+plain");
              if ( this.z.contains("gettimestamprequest=1") )
              this.C.setRequestProperty("time", "1");
              if ( Config.b_ != null )
              this.C.setRequestProperty("x-up-calling-line-id", Config.b_);
              if ( Config.c_ != null )
              this.C.setRequestProperty("x-up-uplink", Config.c_);
              if ( Config.d_ != null )
              this.C.setRequestProperty("x-Nokia-MSISDN", Config.d_);
              if ( !(this.C.getResponseCode() != 200) ) { _pc = 2; continue _sm; }
              _pc = 1;
              continue _sm;
            case 1:
              this.b();
              this.v = true;
              this.u = false;
              ConnectionTimer.stop();
              return;
            case 2:
              C = this.C;
              synchronized ( C )
              {
              this.E = this.C.getInputStream();
              }
              v4 = new java.io.ByteArrayOutputStream();
              v5 = new byte[16];
              v6 = 0;
              while ( v6 != -1 )
              {
              v7 = this.E.read(v5, 0, 16);
              v6 = v7;
              if ( v7 != -1 )
              v4.write(v5, 0, v7);
              }
              this.t = v4.toString();
              _ehCatchPc = -1;
              _pc = 7;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketException) ) { _pc = 4; continue _sm; }
              this.v = true;
              this.u = false;
              XPlayer.setLastErrorMessage(-2);
              _pc = 7;
              continue _sm;
            case 4:
              if ( !(_ehCaught instanceof java.net.UnknownHostException) ) { _pc = 5; continue _sm; }
              this.v = true;
              this.u = false;
              XPlayer.setLastErrorMessage(-2);
              _pc = 7;
              continue _sm;
            case 5:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 6; continue _sm; }
              this.v = true;
              this.u = false;
              _pc = 7;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 7:
              this.b();
              this.u = false;
              ConnectionTimer.stop();
              return;
            case 8:
              System.setProperty("https.keepAlive", "false");
              System.setProperty("http.keepAlive", "false");
              try
              {
              this.v = false;
              v9 = XPlayer.getCarrier();
              v10 = new java.net.URL(this.z);
              if ( v9.a() )
              this.D = (javax.net.ssl.HttpsURLConnection)v10.openConnection(new java.net.Proxy(Proxy.Type.HTTP, new java.net.InetSocketAddress(InetAddress.getByName(v9.b()), v9.c())));
              else
              this.D = (javax.net.ssl.HttpsURLConnection)v10.openConnection();
              this.D.setRequestMethod("GET");
              if ( Integer.parseInt(Build.VERSION.SDK) != 8 )
              this.D.setRequestProperty("Connection", "close");
              XPlayer.getDevice();
              this.D.setRequestProperty("User-Agent", Device.getUserAgent());
              if ( w != null )
              this.D.setRequestProperty("x-up-subno", w);
              this.D.setRequestProperty("x-gl-d", SUtils.GetSerialKey());
              this.D.setRequestProperty("x-android-os-build-model", Build.MODEL);
              XPlayer.getDevice();
              this.D.setRequestProperty("x-up-gl-subno", Device.getLineNumber());
              XPlayer.getDevice();
              this.D.setRequestProperty("x-up-gl-hdidfv", Device.getHDIDFV());
              XPlayer.getDevice();
              this.D.setRequestProperty("x-up-gl-gldid", Device.getGLDID());
              this.D.setRequestProperty("x-up-gl-ggi", "53689");
              XPlayer.getDevice();
              this.D.setRequestProperty("x-up-gl-gamecode  ", Device.getDemoCode());
              if ( XPlayer.C != null )
              this.D.setRequestProperty("x-up-gl-acnum", XPlayer.C);
              if ( XPlayer.E != null )
              {
              this.D.setRequestProperty("x-up-gl-fed-credentials", XPlayer.E);
              this.D.setRequestProperty("x-up-gl-fed-client-id", "1622:53689:1.8.2:android:samsung");
              }
              if ( XPlayer.I != "" )
              this.D.setRequestProperty("x-up-gl-purchaseid", XPlayer.I);
              if ( XPlayer.F != null && !TextUtils.isEmpty(XPlayer.F) )
              this.D.setRequestProperty(InAppBilling.a(0, 162), XPlayer.F);
              this.D.setRequestProperty("Accept", "application/com.gameloft.ecomm.android.iap-v1.1+plain");
              if ( this.z.contains("gettimestamprequest=1") )
              this.D.setRequestProperty("time", "1");
              if ( Config.b_ != null )
              this.D.setRequestProperty("x-up-calling-line-id", Config.b_);
              if ( Config.c_ != null )
              this.D.setRequestProperty("x-up-uplink", Config.c_);
              if ( Config.d_ != null )
              this.D.setRequestProperty("x-Nokia-MSISDN", Config.d_);
              if ( this.D.getResponseCode() != 200 )
              { _pc = 1; continue _sm; }
              D = this.D;
              synchronized ( D )
              {
              this.E = this.D.getInputStream();
              }
              v12 = new java.io.ByteArrayOutputStream();
              v13 = new byte[16];
              v14 = 0;
              while ( v14 != -1 )
              {
              v15 = this.E.read(v13, 0, 16);
              v14 = v15;
              if ( v15 != -1 )
              v12.write(v13, 0, v15);
              }
              this.t = v12.toString();
              this.t.split("\n");
              }
              catch ( java.net.SocketException e )
              {
              this.v = true;
              this.u = false;
              XPlayer.setLastErrorMessage(-2);
              }
              catch ( java.net.UnknownHostException e )
              {
              this.v = true;
              this.u = false;
              XPlayer.setLastErrorMessage(-2);
              }
              catch ( Exception e )
              {
              this.v = true;
              this.u = false;
              }
              
              this.D.disconnect();
              this.b();
              this.u = false;
              ConnectionTimer.stop();
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
