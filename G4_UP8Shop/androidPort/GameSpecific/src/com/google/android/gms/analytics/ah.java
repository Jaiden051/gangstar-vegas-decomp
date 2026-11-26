// Decompiled from classes.dex (SourceFile: ah.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.os.Build;
import android.text.TextUtils;
import java.util.Locale;
class ah implements com.google.android.gms.analytics.n {
    // Fields
    private final java.lang.String a;
    private final org.apache.http.client.HttpClient b;
    private final android.content.Context c;
    private com.google.android.gms.analytics.GoogleAnalytics d;
    private java.net.URL e;

    // Methods
    ah(org.apache.http.client.HttpClient p0, android.content.Context p1)
    {
      this(p0, GoogleAnalytics.getInstance(p1), p1);
    }

    private ah(
            org.apache.http.client.HttpClient p0,
            com.google.android.gms.analytics.GoogleAnalytics p1,
            android.content.Context p2)
    {
      super();
      Object[] v4;
      this.c = p2.getApplicationContext();
      v4 = new Object[6];
      v4[0] = "GoogleAnalytics";
      v4[1] = "3.0";
      v4[2] = Build.VERSION.RELEASE;
      v4[3] = ak.a(Locale.getDefault());
      v4[4] = Build.MODEL;
      v4[5] = Build.ID;
      this.a = String.format("%s/%s (Linux; U; Android %s; %s; %s Build/%s)", v4);
      this.b = p0;
      this.d = p1;
    
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

    private java.net.URL a(com.google.android.gms.analytics.x p0)
    {
      java.net.URL e;
      String v5; // RETVAL
      java.net.URL v6;
      String v7;
      e = this.e;
      if ( e != null )
        return this.e;
      v5 = p0.d();
      try
      {
        v6 = null;
        if ( "http:".equals(v5) )
          v7 = "http://www.google-analytics.com/collect";
        else
          v7 = "https://ssl.google-analytics.com/collect";
        return (v6 = new java.net.URL(v7));
      }
      catch ( java.net.MalformedURLException e2 )
      {
        aa.A("Error trying to parse the hardcoded host url. This really shouldn't happen.");
        return null;
      }
    }

    private org.apache.http.HttpEntityEnclosingRequest a(String p0, String p1)
    {
      org.apache.http.HttpEntityEnclosingRequest v3;
      String v5;
      if ( TextUtils.isEmpty(p0) )
      {
        aa.D("Empty hit, discarding.");
        return null;
      }
      else
      {
        v5 = p1 + "?" + p0;
        if ( v5.length() >= 2036 )
        {
          v3 = new org.apache.http.message.BasicHttpEntityEnclosingRequest("POST", p1);
          try
          {
            v3.setEntity(new org.apache.http.entity.StringEntity(p0));
          }
          catch ( java.io.UnsupportedEncodingException e )
          {
            aa.D("Encoding error, discarding hit");
            return null;
          }
        }
        else
        {
          v3 = new org.apache.http.message.BasicHttpEntityEnclosingRequest("GET", v5);
        }
        v3.addHeader("User-Agent", this.a);
      }
      return v3;
    }

    private void a(com.google.android.gms.analytics.ab p0, java.net.URL p1, boolean p2)
    {
      org.apache.http.HttpHost v4;
      org.apache.http.HttpEntityEnclosingRequest v5;
      org.apache.http.HttpResponse v6;
      int StatusCode;
      org.apache.http.HttpEntity Entity; // RETVAL
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            if ( TextUtils.isEmpty(p0.a()) || Math.random() * 100.0 > 1.0 )
            return;
            if ( p1 == null )
            {
            try
            {
            if ( this.e != null )
            {
            p1 = this.e;
            { _pc = 1; continue _sm; }
            }
            p1 = new java.net.URL("https://ssl.google-analytics.com/collect");
            }
            catch ( java.net.MalformedURLException e )
            {
            return;
            }
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v4 = new org.apache.http.HttpHost(p1.getHost(), p1.getPort(), p1.getProtocol());
            try
            {
            v5 = this.a(p0.a(), p1.getPath());
            if ( v5 != null )
            {
            v5.addHeader("Host", v4.toHostString());
            if ( aa.dk() )
            a(v5);
            if ( p2 )
            q.t(this.c);
            v6 = this.b.execute(v4, v5);
            StatusCode = v6.getStatusLine().getStatusCode();
            Entity = v6.getEntity();
            if ( Entity != null )
            Entity.consumeContent();
            if ( StatusCode != 200 )
            aa.D("Bad response: " + v6.getStatusLine().getStatusCode());
            }
            }
            catch ( org.apache.http.client.ClientProtocolException e )
            {
            aa.D("ClientProtocolException sending monitoring hit.");
            return;
            }
            catch ( java.io.IOException v9 )
            {
            aa.D("Exception sending monitoring hit: " + v9.getClass().getSimpleName());
            aa.D(v9.getMessage());
            }
            
            break _sm;
          }
          default: break _sm;
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
          aa.C("Error Writing hit to log...");
        }
      }
      aa.C(v1.toString());
    }

    private static boolean ds()
    {
      return Math.random() * 100.0 <= 1.0;
    }

    public final int a(
            java.util.List<com.google.android.gms.analytics.x> p0,
            com.google.android.gms.analytics.ab p1,
            boolean p2)
    {
      int v4 = 0;
      int v5 = 0;
      int v6 = 0;
      java.net.URL v7 = null;
      boolean v8 = false;
      int i = 0;
      com.google.android.gms.analytics.x v10 = null;
      java.net.URL v11 = null; // RETVAL
      java.net.URL v12 = null;
      java.net.URL v13 = null;
      int v14 = 0;
      java.net.URL v15 = null;
      org.apache.http.HttpHost v16 = null;
      String Path = null;
      String v18 = null;
      org.apache.http.HttpEntityEnclosingRequest v19 = null;
      org.apache.http.HttpResponse v20 = null;
      int StatusCode = 0;
      org.apache.http.HttpEntity Entity = null; // RETVAL
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v4 = 0;
            v5 = Math.min(p0.size(), 40);
            p1.a("_hr", p0.size());
            v6 = 0;
            v7 = null;
            v8 = true;
            i = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(i < v5) ) { _pc = 4; continue _sm; }
            v10 = (com.google.android.gms.analytics.x)p0.get(i);
            v11 = this.a(v10);
            v12 = v11;
            if ( v11 != null )
            {
            v16 = new org.apache.http.HttpHost(v11.getHost(), v11.getPort(), v11.getProtocol());
            Path = v12.getPath();
            if ( TextUtils.isEmpty(v10.a()) )
            v18 = "";
            else
            v18 = y.a(v10, System.currentTimeMillis());
            v19 = this.a(v18, Path);
            if ( v19 == null )
            {
            ++v6;
            v14 = v4 + 1;
            v15 = v12;
            { _pc = 2; continue _sm; }
            }
            v19.addHeader("Host", v16.toHostString());
            if ( aa.dk() )
            a(v19);
            if ( v18.length() <= 0x2000 )
            {
            if ( this.d.a() )
            {
            aa.B("Dry run enabled. Hit not actually sent.");
            }
            else
            {
            try
            {
            if ( v8 )
            {
            q.t(this.c);
            v8 = false;
            }
            v20 = this.b.execute(v16, v19);
            StatusCode = v20.getStatusLine().getStatusCode();
            Entity = v20.getEntity();
            if ( Entity != null )
            Entity.consumeContent();
            if ( StatusCode != 200 )
            aa.D("Bad response: " + v20.getStatusLine().getStatusCode());
            }
            catch ( org.apache.http.client.ClientProtocolException e )
            {
            aa.D("ClientProtocolException sending hit; discarding hit...");
            p1.a("_hd", v6);
            }
            catch ( java.io.IOException v23 )
            {
            aa.D("Exception sending hit: " + v23.getClass().getSimpleName());
            aa.D(v23.getMessage());
            p1.a("_de", 1);
            p1.a("_hd", v6);
            p1.a("_hs", v4);
            this.a(p1, v12, v8);
            return v4;
            }
            }
            }
            else
            {
            aa.D("Hit too long (> 8192 bytes)--not sent");
            ++v6;
            }
            p1.a("_td", v18.getBytes().length);
            v14 = v4 + 1;
            v15 = v12;
            { _pc = 2; continue _sm; }
            }
            if ( aa.dk() )
            aa.D("No destination: discarding hit: " + v10.a());
            else
            aa.D("No destination: discarding hit.");
            ++v6;
            v13 = v7;
            v14 = v4 + 1;
            v15 = v13;
            _pc = 2;
            continue _sm;
          case 2:
            v4 = v14;
            v7 = v15;
            _pc = 3;
            continue _sm;
          case 3:
            ++i;
            _pc = 1;
            continue _sm;
          case 4:
            p1.a("_hd", v6);
            p1.a("_hs", v4);
            if ( p2 )
            this.a(p1, v7, v8);
            return v4;
        }
      }
}

    public final void a(String p0)
    {
      try
      {
        this.e = new java.net.URL(p0);
      }
      catch ( java.net.MalformedURLException e )
      {
        this.e = null;
      }
    }

    public final boolean a()
    {
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      ActiveNetworkInfo = ((android.net.ConnectivityManager)this.c.getSystemService("connectivity")).getActiveNetworkInfo();
      if ( ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected() )
        return true;
      aa.C("...no network connectivity");
      return false;
    }

}
