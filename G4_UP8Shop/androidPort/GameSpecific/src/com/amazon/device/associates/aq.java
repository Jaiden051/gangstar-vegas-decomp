// Decompiled from classes.dex (SourceFile: aq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import java.net.URLEncoder;
class aq {
    // Fields
    private java.util.ArrayList a;
    private java.util.ArrayList b;
    private java.lang.String c;
    private int d;
    private java.lang.String e;
    private java.lang.String f;

    // Methods
    public aq()
    {
      super();
      this.f = null;
    }

    public aq(String p0)
    {
      super();
      this.f = null;
      this.c = p0;
      this.a = new java.util.ArrayList();
      this.b = new java.util.ArrayList();
    }

    private static String a(java.io.InputStream p0)
    {
      java.io.BufferedReader v1 = null;
      StringBuilder v2 = null;
      String Line = null; // RETVAL
      Object v6 = null;
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
              v1 = new java.io.BufferedReader(new java.io.InputStreamReader(p0));
              v2 = new StringBuilder();
              _pc = 1;
              continue _sm;
            case 1:
              _ehEx = null;
              _ehCatchPc = 3;
              try
              {
              Line = v1.readLine();
              if ( Line == null )
              {
              try
              {
              p0.close();
              }
              catch ( java.io.IOException e )
              {
              }
              return v2.toString();
              }
              v2.append(Line + "\n");
              }
              catch ( java.io.IOException v4 )
              {
              p.d("RestClient", "Error converting stream to string. Ex=" + v4);
              { _pc = 6; continue _sm; }
              }
              
              _pc = 1;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              if ( !((_ehEx != null)) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v6 = _ehCaught;
              try
              {
              p0.close();
              }
              catch ( java.io.IOException e )
              {
              }
              
              throw (Throwable)v6;
            case 4:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 5;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _pc = 6;
              continue _sm;
            case 6:
              try
              {
              p0.close();
              return v2.toString();
              }
              catch ( java.io.IOException e )
              {
              }
              
              return v2.toString();
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

    private void a(org.apache.http.client.methods.HttpUriRequest p0, String p1)
    {
      org.apache.http.client.HttpClient v3;
      org.apache.http.HttpResponse v4;
      org.apache.http.HttpEntity Entity; // RETVAL
      java.io.InputStream Content;
      v3 = new org.apache.http.impl.client.DefaultHttpClient();
      v3.getParams().setParameter("http.connection.timeout", Integer.valueOf(1000));
      v3.getParams().setParameter("http.socket.timeout", Integer.valueOf(60000));
      try
      {
        v4 = v3.execute(p0);
        this.d = v4.getStatusLine().getStatusCode();
        this.e = v4.getStatusLine().getReasonPhrase();
        Entity = v4.getEntity();
        if ( Entity != null )
        {
          Content = Entity.getContent();
          this.f = a(Content);
          Content.close();
        }
        v3.getConnectionManager().shutdown();
      }
      catch ( org.apache.http.client.ClientProtocolException e )
      {
        v3.getConnectionManager().shutdown();
        this.f = null;
      }
      catch ( java.io.IOException e )
      {
        v3.getConnectionManager().shutdown();
        this.f = null;
      }
    }

    public String a()
    {
      return this.f;
    }

    public void a(com.amazon.device.associates.s p0) throws java.io.UnsupportedEncodingException
    {
      String v2;
      String v3;
      java.util.Iterator v4;
      org.apache.http.NameValuePair v5;
      String v6;
      org.apache.http.client.methods.HttpGet v7;
      java.util.Iterator v8;
      org.apache.http.NameValuePair v9;
      org.apache.http.client.methods.HttpPost v10;
      java.util.Iterator v11;
      org.apache.http.NameValuePair v12;
      switch ( aq$1.a[p0.ordinal()] )
      {
        case 1:
          v2 = "";
          if ( !this.a.isEmpty() )
          {
            v3 = "" + "?";
            v4 = this.a.iterator();
            v2 = v3;
            while ( v4.hasNext() )
            {
              v5 = (org.apache.http.NameValuePair)v4.next();
              v6 = v5.getName() + "=" + URLEncoder.encode(v5.getValue(), "UTF-8");
              if ( v2.length() <= 1 )
                v2 = v2 + v6;
              else
                v2 = v2 + "&" + v6;
            }
          }
          v7 = new org.apache.http.client.methods.HttpGet(this.c + v2);
          v8 = this.b.iterator();
          while ( v8.hasNext() )
          {
            v9 = (org.apache.http.NameValuePair)v8.next();
            v7.addHeader(v9.getName(), v9.getValue());
          }
          this.a(v7, this.c);
          break;
        case 2:
          v10 = new org.apache.http.client.methods.HttpPost(this.c);
          v11 = this.b.iterator();
          while ( v11.hasNext() )
          {
            v12 = (org.apache.http.NameValuePair)v11.next();
            v10.addHeader(v12.getName(), v12.getValue());
          }
          if ( !this.a.isEmpty() )
            v10.setEntity(new org.apache.http.client.entity.UrlEncodedFormEntity(this.a, "UTF-8"));
          this.a(v10, this.c);
          break;
        default:
          return;
      }
    }

    public void a(String p0, String p1)
    {
      this.a.add(new org.apache.http.message.BasicNameValuePair(p0, p1));
    }

    public void a(java.util.ArrayList<org.apache.http.NameValuePair> p0)
    {
      this.a = p0;
    }

    public int b()
    {
      return this.d;
    }

}
