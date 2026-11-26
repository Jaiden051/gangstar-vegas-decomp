// Decompiled from classes.dex (SourceFile: Util.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

import com.facebook.internal.Utility;
import java.net.URLDecoder;
import java.net.URLEncoder;
import org.json.JSONObject;
public final class Util {
    // Fields
    private static java.lang.String UTF8;

    // Methods
    public Util()
    {
      super();
    }

    public static android.os.Bundle decodeUrl(String p0)
    {
      int v1 = 0;
      android.os.Bundle v2 = null;
      String[] v3 = null;
      int v4 = 0;
      String[] v5 = null; // RETVAL
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
              v1 = 0;
              v2 = new android.os.Bundle();
              if ( !(p0 != null) ) { _pc = 6; continue _sm; }
              v3 = p0.split("&");
              v4 = v3.length;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v1 >= v4 )
              return v2;
              v5 = v3[v1].split("=");
              _ehCatchPc = 2;
              if ( v5.length == 2 )
              {
              v2.putString(URLDecoder.decode(v5[0], "UTF-8"), URLDecoder.decode(v5[1], "UTF-8"));
              }
              else if ( v5.length == 1 )
              {
              v2.putString(URLDecoder.decode(v5[0], "UTF-8"), "");
              }
              _pc = 3;
              continue _sm;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.UnsupportedEncodingException) ) { _pc = 4; continue _sm; }
              _pc = 3;
              continue _sm;
            case 3:
              ++v1;
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _pc = 1;
              continue _sm;
            case 6:
              return v2;
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

    public static String encodePostBody(android.os.Bundle p0, String p1)
    {
      StringBuilder v4;
      java.util.Iterator v5;
      String v6;
      Object v7;
      if ( p0 == null )
        return "";
      v4 = new StringBuilder();
      v5 = p0.keySet().iterator();
      while ( v5.hasNext() )
      {
        v6 = (String)v5.next();
        v7 = p0.get(v6);
        if ( v7 instanceof String )
        {
          v4.append("Content-Disposition: form-data; name=\"" + v6 + "\"\r\n\r\n" + (String)v7);
          v4.append("\r\n--" + p1 + "\r\n");
        }
      }
      return v4.toString();
    }

    public static String encodeUrl(android.os.Bundle p0)
    {
      StringBuilder v3;
      java.util.Iterator v4;
      int v5;
      String v6;
      if ( p0 == null )
        return "";
      v3 = new StringBuilder();
      v4 = p0.keySet().iterator();
      v5 = 1;
      while ( v4.hasNext() )
      {
        v6 = (String)v4.next();
        if ( p0.get(v6) instanceof String )
        {
          if ( v5 != 0 )
            v5 = 0;
          else
            v3.append("&");
          v3.append(URLEncoder.encode(v6) + "=" + URLEncoder.encode(p0.getString(v6)));
        }
      }
      return v3.toString();
    }

    public static String openUrl(String p0, String p1, android.os.Bundle p2)
 throws java.io.IOException, java.net.MalformedURLException, java.net.ProtocolException {
      java.net.HttpURLConnection v3;
      android.os.Bundle v4;
      java.util.Iterator v5;
      String v6;
      Object v7; // RETVAL
      java.io.BufferedOutputStream v8;
      java.util.Iterator v9;
      String v10;
      if ( p1.equals("GET") )
        p0 = p0 + "?" + encodeUrl(p2);
      Utility.logd("Facebook-Util", p1 + " URL: " + p0);
      v3 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
      v3.setRequestProperty("User-Agent", System.getProperties().getProperty("http.agent") + " FacebookAndroidSDK");
      if ( !p1.equals("GET") )
      {
        v4 = new android.os.Bundle();
        v5 = p2.keySet().iterator();
        while ( v5.hasNext() )
        {
          v6 = (String)v5.next();
          v7 = p2.get(v6);
          if ( v7 instanceof byte[] )
            v4.putByteArray(v6, (byte[])v7);
        }
        if ( !p2.containsKey("method") )
          p2.putString("method", p1);
        if ( p2.containsKey("access_token") )
          p2.putString("access_token", URLDecoder.decode(p2.getString("access_token")));
        v3.setRequestMethod("POST");
        v3.setRequestProperty("Content-Type", "multipart/form-data;boundary=" + "3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f");
        v3.setDoOutput(true);
        v3.setDoInput(true);
        v3.setRequestProperty("Connection", "Keep-Alive");
        v3.connect();
        v8 = new java.io.BufferedOutputStream(v3.getOutputStream());
        try
        {
          v8.write(("--" + "3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f" + "\r\n").getBytes());
          v8.write(encodePostBody(p2, "3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f").getBytes());
          v8.write(("\r\n" + "--" + "3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f" + "\r\n").getBytes());
          if ( !v4.isEmpty() )
          {
            v9 = v4.keySet().iterator();
            while ( v9.hasNext() )
            {
              v10 = (String)v9.next();
              v8.write(("Content-Disposition: form-data; filename=\"" + v10 + "\"" + "\r\n").getBytes());
              v8.write(("Content-Type: content/unknown" + "\r\n" + "\r\n").getBytes());
              v8.write(v4.getByteArray(v10));
              v8.write(("\r\n" + "--" + "3i2ndDfv2rTHiSisAbouNdArYfORhtTPEefj3q2f" + "\r\n").getBytes());
            }
          }
          v8.flush();
        }
        finally
        {
          v8.close();
        }
      }
      try
      {
        return read(v3.getInputStream());
      }
      catch ( java.io.FileNotFoundException e )
      {
        return read(v3.getErrorStream());
      }
    }

    public static org.json.JSONObject parseJson(String p0)
 throws org.json.JSONException {
      org.json.JSONObject v1;
      org.json.JSONObject JSONObject;
      if ( p0.equals("false") )
        throw new com.facebook.android.FacebookError("request failed");
      if ( p0.equals("true") )
        p0 = "{value : true}";
      v1 = new org.json.JSONObject(p0);
      if ( v1.has("error") )
      {
        JSONObject = v1.getJSONObject("error");
        throw new com.facebook.android.FacebookError(JSONObject.getString("message"), JSONObject.getString("type"), 0);
      }
      if ( v1.has("error_code") && v1.has("error_msg") )
        throw new com.facebook.android.FacebookError(v1.getString("error_msg"), "", Integer.parseInt(v1.getString("error_code")));
      if ( v1.has("error_code") )
        throw new com.facebook.android.FacebookError("request failed", "", Integer.parseInt(v1.getString("error_code")));
      if ( v1.has("error_msg") )
        throw new com.facebook.android.FacebookError(v1.getString("error_msg"));
      if ( v1.has("error_reason") )
        throw new com.facebook.android.FacebookError(v1.getString("error_reason"));
      return v1;
    }

    public static android.os.Bundle parseUrl(String p0)
    {
      String v1; // RETVAL
      String v2;
      java.net.URL v3;
      android.os.Bundle v4;
      v1 = p0.replace("fbconnect", "http");
      v2 = v1;
      try
      {
        v3 = new java.net.URL(v1);
        v4 = decodeUrl(v3.getQuery());
        v4.putAll(decodeUrl(v3.getRef()));
        return v4;
      }
      catch ( java.net.MalformedURLException e )
      {
        return new android.os.Bundle();
      }
    }

    private static String read(java.io.InputStream p0)
 throws java.io.IOException {
      StringBuilder v1;
      java.io.BufferedReader v2;
      String i;
      v1 = new StringBuilder();
      v2 = new java.io.BufferedReader(new java.io.InputStreamReader(p0), 1000);
      for ( i = v2.readLine(); i != null; i = v2.readLine() )
        v1.append(i);
      p0.close();
      return v1.toString();
    }

    public static void showAlert(android.content.Context p0, String p1, String p2)
    {
      android.app.AlertDialog.Builder v3;
      v3 = new android.app.AlertDialog.Builder(p0);
      v3.setTitle(p1);
      v3.setMessage(p2);
      v3.create().show();
    }

}
