// Decompiled from classes.dex (SourceFile: da.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.os.Build;
import java.util.Locale;
class da implements com.google.android.gms.tagmanager.ab {
    // Fields
    private final java.lang.String a;
    private final org.apache.http.client.HttpClient b;
    private final android.content.Context c;
    private com.google.android.gms.tagmanager.da$a d;

    // Methods
    da(org.apache.http.client.HttpClient p0, android.content.Context p1, com.google.android.gms.tagmanager.da$a p2)
    {
      super();
      Object[] v4;
      this.c = p1.getApplicationContext();
      v4 = new Object[6];
      v4[0] = "GoogleTagManager";
      v4[1] = "4.00";
      v4[2] = Build.VERSION.RELEASE;
      v4[3] = c(Locale.getDefault());
      v4[4] = Build.MODEL;
      v4[5] = Build.ID;
      this.a = String.format("%s/%s (Linux; U; Android %s; %s; %s Build/%s)", v4);
      this.b = p0;
      this.d = p2;
    
    }

    private static String a(String p0, String p1, String p2, String p3, String p4, String p5)
    {
      Object[] v6;
      v6 = new Object[6];
      v6[0] = p0;
      v6[1] = p1;
      v6[2] = p2;
      v6[3] = p3;
      v6[4] = p4;
      v6[5] = p5;
      return String.format("%s/%s (Linux; U; Android %s; %s; %s Build/%s)", v6);
    }

    private org.apache.http.HttpEntityEnclosingRequest a(java.net.URL p0)
    {
      org.apache.http.HttpEntityEnclosingRequest v2 = null;
      Object v5 = null;
      Object v6 = null;
      java.net.URISyntaxException _cv_1 = null;
      java.net.URISyntaxException _cv_2 = null;
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
              _ehCatchPc = 5;
              v2 = new org.apache.http.message.BasicHttpEntityEnclosingRequest("GET", p0.toURI().toString());
              _ehCatchPc = 1;
              v2.addHeader("User-Agent", this.a);
              return v2;
            case 1:
              _ehCatchPc = 5;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.URISyntaxException) ) { _pc = 3; continue _sm; }
              _cv_1 = (java.net.URISyntaxException)_ehCaught;
              v6 = _cv_1;
              _pc = 2;
              continue _sm;
            case 2:
              bh.D("Exception sending hit: " + v6.getClass().getSimpleName());
              bh.D(((Throwable)v6).getMessage());
              return v2;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.URISyntaxException) ) { _pc = 6; continue _sm; }
              _cv_2 = (java.net.URISyntaxException)_ehCaught;
              v5 = _cv_2;
              v2 = null;
              v6 = v5;
              _pc = 2;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
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

    private static void a(org.apache.http.HttpEntityEnclosingRequest p0)
    {
      StringBuffer v1;
      org.apache.http.Header[] AllHeaders;
      int v3;
      int i;
      java.io.InputStream Content; // RETVAL
      java.io.InputStream v6;
      int v7; // RETVAL
      byte[] v8;
      v1 = new StringBuffer();
      AllHeaders = p0.getAllHeaders();
      v3 = AllHeaders.length;
      for ( i = 0; i < v3; ++i )
        v1.append(AllHeaders[i].toString()).append("\n");
      v1.append(p0.getRequestLine().toString()).append("\n");
      if ( p0.getEntity() != null )
      {
        try
        {
          Content = p0.getEntity().getContent();
          v6 = Content;
          if ( Content != null )
          {
            v7 = Content.available();
            if ( v7 > 0 )
            {
              v8 = new byte[v7];
              v6.read(v8);
              v1.append("POST:\n");
              v1.append(new String(v8)).append("\n");
            }
          }
        }
        catch ( java.io.IOException e )
        {
          bh.C("Error Writing hit to log...");
        }
      }
      bh.C(v1.toString());
    }

    static String c(java.util.Locale p0)
    {
      String v1;
      StringBuilder v3;
      v1 = null;
      if ( p0 != null && p0.getLanguage() != null && p0.getLanguage().length() != 0 )
      {
        v3 = new StringBuilder();
        v3.append(p0.getLanguage().toLowerCase());
        if ( p0.getCountry() != null && p0.getCountry().length() != 0 )
          v3.append("-").append(p0.getCountry().toLowerCase());
        return v3.toString();
      }
      return v1;
    }

    private static java.net.URL d(com.google.android.gms.tagmanager.ap p0)
    {
      String v1; // RETVAL
    
      v1 = p0.c();
      try
      {
        return new java.net.URL(v1);
      }
      catch ( java.net.MalformedURLException e )
      {
        bh.A("Error trying to parse the GTM url.");
        return null;
      }
    }

    public final void a(java.util.List p0)
    {
      int v2 = 0;
      int v3 = 0;
      int i = 0;
      Object v5 = null;
      java.net.URL v6 = null; // RETVAL
      java.net.URL v7 = null;
      org.apache.http.HttpEntityEnclosingRequest v8 = null;
      org.apache.http.HttpHost v9 = null;
      org.apache.http.HttpResponse v10 = null;
      int StatusCode = 0;
      org.apache.http.HttpEntity Entity = null; // RETVAL
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = Math.min(p0.size(), 40);
            v3 = 1;
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(i < v2) ) { _pc = 4; continue _sm; }
            v5 = (com.google.android.gms.tagmanager.ap)p0.get(i);
            v6 = d((com.google.android.gms.tagmanager.ap)v5);
            v7 = v6;
            if ( v6 == null )
            {
            bh.D("No destination: discarding hit.");
            this.d.b((com.google.android.gms.tagmanager.ap)v5);
            v5 = Integer.valueOf(v3);
            { _pc = 2; continue _sm; }
            }
            v8 = this.a(v6);
            if ( v8 == null )
            {
            this.d.b((com.google.android.gms.tagmanager.ap)v5);
            v5 = Integer.valueOf(v3);
            { _pc = 2; continue _sm; }
            }
            v9 = new org.apache.http.HttpHost(v7.getHost(), v7.getPort(), v7.getProtocol());
            v8.addHeader("Host", v9.toHostString());
            a(v8);
            try
            {
            if ( v3 != 0 )
            {
            bn.t(this.c);
            v3 = 0;
            }
            v10 = this.b.execute(v9, v8);
            StatusCode = v10.getStatusLine().getStatusCode();
            Entity = v10.getEntity();
            if ( Entity != null )
            Entity.consumeContent();
            if ( StatusCode == 200 )
            {
            this.d.a((com.google.android.gms.tagmanager.ap)v5);
            v5 = Integer.valueOf(v3);
            { _pc = 2; continue _sm; }
            }
            bh.D("Bad response: " + v10.getStatusLine().getStatusCode());
            this.d.c((com.google.android.gms.tagmanager.ap)v5);
            v5 = Integer.valueOf(v3);
            }
            catch ( org.apache.http.client.ClientProtocolException e )
            {
            bh.D("ClientProtocolException sending hit; discarding hit...");
            this.d.b((com.google.android.gms.tagmanager.ap)v5);
            v5 = Integer.valueOf(v3);
            }
            catch ( java.io.IOException v13 )
            {
            bh.D("Exception sending hit: " + v13.getClass().getSimpleName());
            bh.D(v13.getMessage());
            this.d.c((com.google.android.gms.tagmanager.ap)v5);
            v5 = Integer.valueOf(v3);
            }
            
            _pc = 2;
            continue _sm;
          case 2:
            v3 = ((Integer)v5).intValue();
            _pc = 3;
            continue _sm;
          case 3:
            ++i;
            _pc = 1;
            continue _sm;
          case 4:
            return;
        }
      }
}

    public final boolean a()
    {
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      ActiveNetworkInfo = ((android.net.ConnectivityManager)this.c.getSystemService("connectivity")).getActiveNetworkInfo();
      if ( ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected() )
        return true;
      bh.C("...no network connectivity");
      return false;
    }

}
