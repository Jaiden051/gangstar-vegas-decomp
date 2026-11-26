// Decompiled from classes.dex (SourceFile: IABRequestHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
import java.net.HttpURLConnection;
import java.net.URLEncoder;
import java.security.MessageDigest;
import javax.net.ssl.HttpsURLConnection;
import javax.net.ssl.SSLContext;
public class IABRequestHandler {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    static java.lang.String e;
    static java.lang.String f;
    static java.lang.String g;
    static java.lang.String h;
    static java.lang.String i;
    static java.lang.String j;
    static java.lang.String k;
    private static com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler o;
    final int l;
    final int m;
    final int n;

    // Methods
    static
    {
      o = null;
    }

    public IABRequestHandler()
    {
      super();
      this.l = 0;
      this.m = 1;
      this.n = 2;
    }

    private static String SHA256(String p0)
    {
      int v1;
      StringBuffer v2;
      java.security.MessageDigest Instance;
      byte[] i;
      v1 = 0;
      v2 = new StringBuffer();
      try
      {
        Instance = MessageDigest.getInstance(InAppBilling.a(0, 190));
        Instance.reset();
        Instance.update(p0.getBytes("UTF-8"));
        for ( i = Instance.digest(); v1 < i.length; v2.append(Integer.toString((int)i[v1++] + 256, 16).substring(1)) )
          ;
        return v2.toString();
      }
      catch ( Exception e )
      {
      }
      return v2.toString();
    }

    private android.os.Bundle a(android.os.Bundle p0)
    {
      String String = null;
      String v3 = null;
      String v4 = null;
      int Int = 0;
      String v6 = null;
      String v7 = null;
      java.net.URL v8 = null;
      java.net.HttpURLConnection v9 = null;
      org.json.JSONObject v10 = null;
      java.util.Iterator v11 = null;
      String v12 = null;
      String v13 = null;
      java.io.OutputStream OutputStream = null;
      int ResponseCode = 0;
      org.json.JSONObject v16 = null;
      java.util.Map HeaderFields = null; // RETVAL
      java.util.Iterator v18 = null;
      java.util.Map.Entry v19 = null;
      java.util.Iterator v20 = null;
      StringBuffer v21 = null;
      java.io.BufferedReader v24 = null;
      String i = null;
      String Line = null;
      Exception _cv_1 = null;
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
              _ehCatchPc = 2;
              String = p0.getString("a1");
              v3 = p0.getString("a2");
              v4 = p0.getString("a7");
              Int = p0.getInt("a3");
              if ( v3 != null )
              v6 = v3;
              else
              v6 = "";
              if ( String.contains("?") )
              v7 = "&";
              else
              v7 = "?";
              if ( Int == 1 || Int == 2 || TextUtils.isEmpty(v6) )
              v8 = new java.net.URL(String);
              else
              v8 = new java.net.URL(String + v7 + v6);
              v9 = this.a(v8, Int);
              if ( TextUtils.isEmpty(v4) )
              { _pc = 1; continue _sm; }
              try
              {
              v10 = new org.json.JSONObject(v4);
              v11 = v10.keys();
              while ( v11.hasNext() )
              {
              v12 = v11.next().toString();
              v13 = v10.getString(v12);
              if ( !TextUtils.isEmpty(v13) )
              v9.setRequestProperty(v12, v13);
              }
              }
              catch ( org.json.JSONException e )
              {
              }
              
              _pc = 1;
              continue _sm;
            case 1:
              if ( (Int == 1 || Int == 2) && !TextUtils.isEmpty(v6) )
              {
              v9.setFixedLengthStreamingMode(v6.length());
              OutputStream = v9.getOutputStream();
              OutputStream.write(v6.getBytes(), 0, v6.length());
              OutputStream.flush();
              }
              ResponseCode = v9.getResponseCode();
              p0.clear();
              v16 = new org.json.JSONObject();
              HeaderFields = v9.getHeaderFields();
              if ( HeaderFields != null )
              {
              v18 = HeaderFields.entrySet().iterator();
              while ( v18.hasNext() )
              {
              v19 = (java.util.Map.Entry)v18.next();
              try
              {
              if ( v19.getKey() != null )
              {
              v20 = ((java.util.List)v19.getValue()).iterator();
              v21 = new StringBuffer();
              v21.append(v20.next());
              while ( v20.hasNext() )
              {
              v21.append(" ");
              v21.append(v20.next());
              }
              v16.put(((String)v19.getKey()).toString(), v21.toString());
              }
              }
              catch ( org.json.JSONException e )
              {
              }
              }
              }
              p0.putInt("a6", ResponseCode);
              p0.putInt("a5", 2);
              if ( ResponseCode == 200 || ResponseCode == 201 )
              {
              v24 = new java.io.BufferedReader(new java.io.InputStreamReader(v9.getInputStream()));
              for ( i = ""; ; i = i + Line )
              {
              Line = v24.readLine();
              if ( Line == null )
              break;
              }
              p0.putInt("a5", 1);
              if ( TextUtils.isEmpty(i) )
              i = "";
              p0.putString("a4", i);
              p0.putString("a7", v16.toString());
              }
              _ehCatchPc = -1;
              _pc = 4;
              continue _sm;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              p0.clear();
              p0.putInt("a5", -1);
              p0.putString("a4", _cv_1.getMessage());
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              return p0;
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

    private java.net.HttpURLConnection a(java.net.URL p0, int p1)
    {
      javax.net.ssl.SSLContext Instance; // RETVAL
      javax.net.ssl.TrustManager[] v4;
      java.net.HttpURLConnection v5 = null;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            try
            {
            Instance = SSLContext.getInstance("TLS");
            v4 = new javax.net.ssl.TrustManager[1];
            v4[0] = new com.gameloft.android.GAND.GloftGGSS.iab.i(this);
            Instance.init(null, (javax.net.ssl.TrustManager[])v4, null);
            HttpsURLConnection.setDefaultSSLSocketFactory(Instance.getSocketFactory());
            HttpsURLConnection.setDefaultHostnameVerifier(new org.apache.http.conn.ssl.AllowAllHostnameVerifier());
            if ( p0.toString().indexOf("https") != -1 )
            {
            v5 = (javax.net.ssl.HttpsURLConnection)p0.openConnection();
            { _pc = 1; continue _sm; }
            }
            v5 = (java.net.HttpURLConnection)p0.openConnection();
            }
            catch ( Exception e )
            {
            return null;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            try
            {
            v5.setConnectTimeout(5000);
            v5.setDoInput(true);
            v5.setUseCaches(false);
            HttpURLConnection.setFollowRedirects(true);
            v5.setRequestProperty("Connection", "Keep-Alive");
            if ( p1 == 1 )
            {
            v5.setDoOutput(true);
            v5.setRequestMethod("POST");
            return v5;
            }
            if ( p1 != 0 )
            {
            if ( p1 == 2 )
            {
            v5.setDoOutput(true);
            v5.setRequestMethod("PUT");
            }
            }
            else
            {
            v5.setRequestMethod("GET");
            }
            }
            catch ( Exception e )
            {
            }
            return v5;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    /* synthetic */ static android.os.Bundle access$000(
            com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler p0,
            android.os.Bundle p1)
    {
      return p0.a(p1);
    }

    private void b(String p0, String p1, com.gameloft.android.GAND.GloftGGSS.iab.d p2)
    {
      android.os.Bundle v4;
      v4 = new android.os.Bundle();
      v4.putString("a1", p0);
      v4.putString("a2", p1);
      v4.putString("a7", null);
      v4.putInt("a3", 1);
      new com.gameloft.android.GAND.GloftGGSS.iab.j(this, p2).a(v4, null);
    }

    private void c(String p0, String p1, String p2, com.gameloft.android.GAND.GloftGGSS.iab.d p3)
    {
      android.os.Bundle v5;
      v5 = new android.os.Bundle();
      v5.putString("a1", p0);
      v5.putString("a2", p1);
      v5.putString("a7", null);
      v5.putInt("a3", 1);
      new com.gameloft.android.GAND.GloftGGSS.iab.j(this, p3).a(v5, null);
    }

    public static String encodeString(String p0)
    {
      try
      {
        return URLEncoder.encode(p0, "UTF-8");
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    static com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler getInstance()
    {
      if ( o == null )
        o = new com.gameloft.android.GAND.GloftGGSS.iab.IABRequestHandler();
      return o;
    }

    private static boolean isHTTPS(String p0)
    {
      return p0.indexOf("https") != -1;
    }

    public final void a(String p0, String p1, com.gameloft.android.GAND.GloftGGSS.iab.d p2)
    {
      this.a(p0, null, null, p2);
    }

    public final void a(String p0, String p1, String p2, com.gameloft.android.GAND.GloftGGSS.iab.d p3)
    {
      android.os.Bundle v5;
      v5 = new android.os.Bundle();
      v5.putString("a1", p0);
      v5.putString("a2", p1);
      v5.putString("a7", p2);
      v5.putInt("a3", 0);
      new com.gameloft.android.GAND.GloftGGSS.iab.j(this, p3).a(v5, null);
    }

    public final void b(String p0, String p1, String p2, com.gameloft.android.GAND.GloftGGSS.iab.d p3)
    {
      android.os.Bundle v5;
      v5 = new android.os.Bundle();
      v5.putString("a1", p0);
      v5.putString("a2", p1);
      v5.putString("a7", p2);
      v5.putInt("a3", 2);
      new com.gameloft.android.GAND.GloftGGSS.iab.j(this, p3).a(v5, null);
    }

}
