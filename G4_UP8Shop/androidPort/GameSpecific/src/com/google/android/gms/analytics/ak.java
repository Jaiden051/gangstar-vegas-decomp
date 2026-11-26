// Decompiled from classes.dex (SourceFile: ak.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.analytics;

import android.text.TextUtils;
import java.net.URLDecoder;
import java.security.MessageDigest;
class ak {
    // Fields
    private static final char[] a;

    // Methods
    static
    {
      a = new char[] { 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 65, 66, 67, 68, 69, 70 };
    }

    public static java.util.Map<String, String> U(String p0)
    {
      java.util.Map v1;
      String[] v2;
      int v3;
      int i;
      String[] v5; // RETVAL
      Object[] v6;
      v1 = new java.util.HashMap();
      v2 = p0.split("&");
      v3 = v2.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = v2[i].split("=");
        v6 = v5;
        if ( v5.length <= 1 )
        {
          if ( v5.length == 1 && v5[0].length() != 0 )
            v1.put(v6[0], null);
        }
        else
        {
          v1.put(v5[0], v5[1]);
        }
      }
      return v1;
    }

    public static String V(String p0)
    {
      int v1 = 0;
      String[] v4 = null; // RETVAL
      java.util.Map v5 = null;
      String[] v6 = null;
      StringBuilder v7 = null;
      int i = 0;
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
              if ( TextUtils.isEmpty(p0) )
              return null;
              if ( p0.contains("?") )
              {
              v4 = p0.split("[\\?]");
              if ( v4.length > 1 )
              p0 = v4[1];
              }
              if ( !p0.contains("%3D") )
              {
              if ( !p0.contains("=") )
              return null;
              { _pc = 1; continue _sm; }
              }
              _ehCatchPc = 2;
              p0 = URLDecoder.decode(p0, "UTF-8");
              _pc = 1;
              continue _sm;
            case 1:
              v5 = U(p0);
              v6 = new String[9];
              v6[0] = "dclid";
              v6[1] = "utm_source";
              v6[2] = "gclid";
              v6[3] = "utm_campaign";
              v6[4] = "utm_medium";
              v6[5] = "utm_term";
              v6[6] = "utm_content";
              v6[7] = "utm_id";
              v6[8] = "gmob_t";
              v7 = new StringBuilder();
              for ( i = 0; i < v6.length; ++i )
              {
              if ( !TextUtils.isEmpty((CharSequence)v5.get(v6[i])) )
              {
              if ( v7.length() > 0 )
              v7.append("&");
              v7.append(v6[i]).append("=").append((String)v5.get(v6[i]));
              }
              }
              return v7.toString();
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.UnsupportedEncodingException) ) { _pc = 3; continue _sm; }
              return null;
            case 3:
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

    public static java.security.MessageDigest W(String p0)
    {
      int i;
      java.security.MessageDigest Instance;
      for ( i = 0; i < 2; ++i )
      {
        try
        {
          Instance = MessageDigest.getInstance(p0);
          if ( Instance != null )
            return Instance;
          continue;
        }
        catch ( java.security.NoSuchAlgorithmException e )
        {
        }
      }
      return null;
    }

    public static double a(String p0, double p1)
    {
      if ( p0 != null )
      {
        try
        {
          return Double.parseDouble(p0);
        }
        catch ( NumberFormatException e )
        {
        }
      }
      return p1;
    }

    static String a(java.util.Locale p0)
    {
      String v1;
      StringBuilder v3;
      v1 = null;
      if ( p0 != null && !TextUtils.isEmpty(p0.getLanguage()) )
      {
        v3 = new StringBuilder();
        v3.append(p0.getLanguage().toLowerCase());
        if ( !TextUtils.isEmpty(p0.getCountry()) )
          v3.append("-").append(p0.getCountry().toLowerCase());
        return v3.toString();
      }
      return v1;
    }

    public static void a(java.util.Map<String, String> p0, String p1, String p2)
    {
      if ( !p0.containsKey(p1) )
        p0.put(p1, p2);
    }

    public static boolean d(String p0, boolean p1)
    {
      if ( p0 != null )
      {
        if ( p0.equalsIgnoreCase("true") || p0.equalsIgnoreCase("yes") || p0.equalsIgnoreCase("1") )
        {
          return true;
        }
        else if ( p0.equalsIgnoreCase("false") || p0.equalsIgnoreCase("no") || p0.equalsIgnoreCase("0") )
        {
          return false;
        }
      }
      return p1;
    }

    static String v(boolean p0)
    {
      if ( p0 )
        return "1";
      else
        return "0";
    }

}
