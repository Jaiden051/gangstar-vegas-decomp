// Decompiled from classes.dex (SourceFile: HitBuilder.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.apps.analytics;

import java.util.Locale;
class HitBuilder {
    // Fields
    static java.lang.String a;
    private static java.lang.String b;
    private static int c;
    private static int d;
    private static int e;

    // Methods
    HitBuilder()
    {
      super();
    }

    static void appendCurrencyValue(StringBuilder p0, String p1, double p2)
    {
      double v3; // RETVAL
    
      p0.append(p1).append("=");
      v3 = Math.floor(p2 * 1000000.0 + 0.5);
      if ( v3 / 1000000.0 != 0.0 )
        p0.append(Double.toString(v3 / 1000000.0));
    }

    private static void appendStringValue(StringBuilder p0, String p1, String p2)
    {
      p0.append(p1).append("=");
      if ( p2 != null && p2.trim().length() > 0 )
        p0.append(AnalyticsParameterEncoder.encode(p2));
    }

    private static String constructEventRequestPath(
            com.google.android.apps.analytics.e p0,
            com.google.android.apps.analytics.q p1)
    {
      java.util.Locale Default;
      StringBuilder v3;
      StringBuilder v4;
      Object[] v5;
      Object[] v6;
      Object[] v7;
      Object[] v8;
      Default = Locale.getDefault();
      v3 = new StringBuilder();
      v4 = new StringBuilder();
      v5 = new Object[2];
      v5[0] = encode(p0.g);
      v5[1] = encode(p0.h);
      v4.append(String.format("5(%s*%s", v5));
      if ( p0.i != null )
        v4.append("*").append(encode(p0.i));
      v4.append(")");
      if ( p0.j >= 0 )
      {
        v6 = new Object[1];
        v6[0] = Integer.valueOf(p0.j);
        v4.append(String.format("(%d)", v6));
      }
      v4.append(getCustomVariableParams(p0));
      v3.append("/__utm.gif");
      v3.append("?utmwv=4.8.1ma");
      v3.append("&utmn=").append(p0.a());
      v3.append("&utmt=event");
      v3.append("&utme=").append(v4.toString());
      v3.append("&utmcs=UTF-8");
      v7 = new Object[2];
      v7[0] = Integer.valueOf(p0.k);
      v7[1] = Integer.valueOf(p0.l);
      v3.append(String.format("&utmsr=%dx%d", v7));
      v8 = new Object[2];
      v8[0] = Default.getLanguage();
      v8[1] = Default.getCountry();
      v3.append(String.format("&utmul=%s-%s", v8));
      v3.append("&utmac=").append(p0.f);
      v3.append("&utmcc=").append(getEscapedCookieString(p0, p1));
      if ( p0.b() != 0 )
        v3.append("&utmhid=").append(p0.b());
      return v3.toString();
    }

    public static String constructHitRequestPath(
            com.google.android.apps.analytics.e p0,
            com.google.android.apps.analytics.q p1)
    {
      StringBuilder v2;
      v2 = new StringBuilder();
      if ( "__##GOOGLEPAGEVIEW##__".equals(p0.g) )
      {
        v2.append(constructPageviewRequestPath(p0, p1));
      }
      else if ( "__##GOOGLEITEM##__".equals(p0.g) )
      {
        v2.append(constructItemRequestPath(p0, p1));
      }
      else if ( "__##GOOGLETRANSACTION##__".equals(p0.g) )
      {
        v2.append(constructTransactionRequestPath(p0, p1));
      }
      else
      {
        v2.append(constructEventRequestPath(p0, p1));
      }
      if ( p0.h() )
        v2.append("&aip=1");
      if ( !p0.i() )
        v2.append("&utmht=" + System.currentTimeMillis());
      return v2.toString();
    }

    private static String constructItemRequestPath(
            com.google.android.apps.analytics.e p0,
            com.google.android.apps.analytics.q p1)
    {
      StringBuilder v2;
      com.google.android.apps.analytics.Item v3; // RETVAL
      com.google.android.apps.analytics.Item v4;
      v2 = new StringBuilder();
      v2.append("/__utm.gif");
      v2.append("?utmwv=4.8.1ma");
      v2.append("&utmn=").append(p0.a());
      v2.append("&utmt=item");
      v3 = p0.l();
      v4 = v3;
      if ( v3 != null )
      {
        appendStringValue(v2, "&utmtid", v3.a());
        appendStringValue(v2, "&utmipc", v4.b());
        appendStringValue(v2, "&utmipn", v4.c());
        appendStringValue(v2, "&utmiva", v4.d());
        appendCurrencyValue(v2, "&utmipr", v4.e());
        v2.append("&utmiqt=");
        if ( v4.f() != 0 )
          v2.append(v4.f());
      }
      v2.append("&utmac=").append(p0.f);
      v2.append("&utmcc=").append(getEscapedCookieString(p0, p1));
      return v2.toString();
    }

    private static String constructPageviewRequestPath(
            com.google.android.apps.analytics.e p0,
            com.google.android.apps.analytics.q p1)
    {
      String h;
      String v3;
      String CustomVariableParams;
      java.util.Locale Default;
      StringBuilder v6;
      Object[] v7;
      Object[] v8;
      h = "";
      if ( p0.h != null )
        h = p0.h;
      if ( !h.startsWith("/") )
        h = "/" + h;
      v3 = encode(h);
      CustomVariableParams = getCustomVariableParams(p0);
      Default = Locale.getDefault();
      v6 = new StringBuilder();
      v6.append("/__utm.gif");
      v6.append("?utmwv=4.8.1ma");
      v6.append("&utmn=").append(p0.a());
      if ( CustomVariableParams.length() > 0 )
        v6.append("&utme=").append(CustomVariableParams);
      v6.append("&utmcs=UTF-8");
      v7 = new Object[2];
      v7[0] = Integer.valueOf(p0.k);
      v7[1] = Integer.valueOf(p0.l);
      v6.append(String.format("&utmsr=%dx%d", v7));
      v8 = new Object[2];
      v8[0] = Default.getLanguage();
      v8[1] = Default.getCountry();
      v6.append(String.format("&utmul=%s-%s", v8));
      v6.append("&utmp=").append(v3);
      v6.append("&utmac=").append(p0.f);
      v6.append("&utmcc=").append(getEscapedCookieString(p0, p1));
      if ( p0.b() != 0 )
        v6.append("&utmhid=").append(p0.b());
      return v6.toString();
    }

    private static String constructTransactionRequestPath(
            com.google.android.apps.analytics.e p0,
            com.google.android.apps.analytics.q p1)
    {
      StringBuilder v2;
      com.google.android.apps.analytics.Transaction v3; // RETVAL
      com.google.android.apps.analytics.Transaction v4;
      v2 = new StringBuilder();
      v2.append("/__utm.gif");
      v2.append("?utmwv=4.8.1ma");
      v2.append("&utmn=").append(p0.a());
      v2.append("&utmt=tran");
      v3 = p0.k();
      v4 = v3;
      if ( v3 != null )
      {
        appendStringValue(v2, "&utmtid", v3.a());
        appendStringValue(v2, "&utmtst", v4.b());
        appendCurrencyValue(v2, "&utmtto", v4.c());
        appendCurrencyValue(v2, "&utmttx", v4.d());
        appendCurrencyValue(v2, "&utmtsp", v4.e());
        appendStringValue(v2, "&utmtci", "");
        appendStringValue(v2, "&utmtrg", "");
        appendStringValue(v2, "&utmtco", "");
      }
      v2.append("&utmac=").append(p0.f);
      v2.append("&utmcc=").append(getEscapedCookieString(p0, p1));
      return v2.toString();
    }

    private static void createX10Project(com.google.android.apps.analytics.b[] p0, StringBuilder p1, int p2)
    {
      int v3;
      int i;
      com.google.android.apps.analytics.b v5;
      p1.append(p2).append("(");
      v3 = 1;
      for ( i = 0; i < p0.length; ++i )
      {
        if ( p0[i] != null )
        {
          v5 = p0[i];
          if ( v3 != 0 )
            v3 = 0;
          else
            p1.append("*");
          p1.append(v5.d()).append("!");
          switch ( p2 )
          {
            case 8:
              p1.append(x10Escape(encode(v5.b())));
              break;
            case 9:
              p1.append(x10Escape(encode(v5.c())));
              break;
            case 11:
              p1.append(v5.a());
              break;
            default:
              continue;
          }
        }
      }
      p1.append(")");
    }

    private static String encode(String p0)
    {
      return AnalyticsParameterEncoder.encode(p0);
    }

    public static String getCustomVariableParams(com.google.android.apps.analytics.e p0)
    {
      StringBuilder v1;
      com.google.android.apps.analytics.CustomVariableBuffer m;
      com.google.android.apps.analytics.b[] v5; // RETVAL
    
      v1 = new StringBuilder();
      m = p0.m;
      if ( m == null )
        return "";
      if ( !m.b() )
        return "";
      v5 = m.a();
      createX10Project(v5, v1, 8);
      createX10Project(v5, v1, 9);
      createX10Project(v5, v1, 11);
      return v1.toString();
    }

    public static String getEscapedCookieString(
            com.google.android.apps.analytics.e p0,
            com.google.android.apps.analytics.q p1)
    {
      StringBuilder v2;
      v2 = new StringBuilder();
      v2.append("__utma=");
      v2.append("1.");
      v2.append(p0.g()).append(".");
      v2.append(p0.c()).append(".");
      v2.append(p0.d()).append(".");
      v2.append(p0.e()).append(".");
      v2.append(p0.f()).append(";");
      if ( p1 != null )
      {
        v2.append("+__utmz=");
        v2.append("1.");
        v2.append(p1.b()).append(".");
        v2.append(Integer.valueOf(p1.c()).toString()).append(".");
        v2.append(Integer.valueOf(p1.d()).toString()).append(".");
        v2.append(p1.a()).append(";");
      }
      return encode(v2.toString());
    }

    private static String x10Escape(String p0)
    {
      return p0.replace("'", "'0").replace(")", "'1").replace("*", "'2").replace("!", "'3");
    }

}
