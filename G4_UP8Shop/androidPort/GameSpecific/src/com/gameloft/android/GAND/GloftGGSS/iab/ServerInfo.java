// Decompiled from classes.dex (SourceFile: ServerInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.os.Build;
import android.text.TextUtils;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer;
import java.util.Currency;
import java.util.Locale;
import javax.xml.parsers.SAXParserFactory;
public class ServerInfo extends com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo {
    // Fields
    private com.gameloft.android.GAND.GloftGGSS.iab.l f;
    private java.lang.String g;
    private java.lang.String h;
    private java.lang.String i;
    private com.gameloft.android.GAND.GloftGGSS.iab.am j;

    // Methods
    public ServerInfo()
    {
      super();
      this.g = null;
      this.h = null;
      this.i = null;
      this.j = null;
      try
      {
        this.a = SAXParserFactory.newInstance();
        this.b = this.a.newSAXParser();
        this.c = this.b.getXMLReader();
        this.f = new com.gameloft.android.GAND.GloftGGSS.iab.l();
        this.c.setContentHandler(this.f);
        this.d = new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device();
        this.e = new com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer(this.d);
      }
      catch ( Exception e )
      {
      }
    }

    private boolean M()
    {
      return this.h != null;
    }

    private boolean N()
    {
      return this.g != null && this.M();
    }

    private String O()
    {
      String v1;
      com.gameloft.android.GAND.GloftGGSS.iab.ao v2;
      String v3;
      v1 = null;
      if ( this.N() && (v2 = this.R()) != null )
      {
        if ( v2.a(InAppBilling.a(0, 59)).equals(Currency.getInstance(Locale.JAPAN).getCurrencyCode()) )
          v3 = v2.a(InAppBilling.a(0, 59)) + " " + v2.a(InAppBilling.a(0, 58));
        else
          v3 = v2.a(InAppBilling.a(0, 58)) + " " + v2.a(InAppBilling.a(0, 59));
      }
      else
      {
        v3 = null;
      }
      if ( v3 != null )
        return StringCurrencytoChar(v3);
      return v1;
    }

    private String P()
    {
      if ( this.j != null )
        return this.j.c();
      else
        return null;
    }

    private String Q()
    {
      if ( this.j != null )
        return this.j.d();
      else
        return null;
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.ao R()
    {
      return this.c(this.h, this.g);
    }

    private static String StringCurrencytoChar(String p0)
    {
      String v1;
      try
      {
        if ( p0.contains("\u0080") )
          v1 = p0.replaceAll("\u0080", "&#8364");
        else
          v1 = p0;
        try
        {
          if ( v1.contains("£") )
            v1 = v1.replaceAll("£", "&#163");
          if ( v1.contains("$") )
            return v1.replaceAll("$", "&#36");
          return v1;
        }
        catch ( Exception e )
        {
        }
        return v1;
      }
      catch ( Exception e )
      {
        return p0;
      }
    }

    private String a(com.gameloft.android.GAND.GloftGGSS.GLUtils.Device p0)
    {
      org.json.JSONObject v2;
      int v3;
      String v4;
      String v5;
      String v6;
      v2 = new org.json.JSONObject();
      v3 = 0;
      try
      {
        v2.put(InAppBilling.a(0, 163), "53689");
        v2.put(InAppBilling.a(0, 164), Device.getDemoCode());
        v4 = InAppBilling.a(6, 1);
        if ( TextUtils.isEmpty(v4) )
          v4 = "0";
        v2.put(InAppBilling.a(0, 165), v4);
        v5 = InAppBilling.a(7, 2);
        if ( TextUtils.isEmpty(v5) )
          v5 = "0";
        v2.put(InAppBilling.a(0, 169), v5);
        v6 = "1622:53689:1.8.2:android:samsung";
        if ( TextUtils.isEmpty("1622:53689:1.8.2:android:samsung") )
          v6 = "0";
        v2.put(InAppBilling.a(0, 170), v6);
        v2.put(InAppBilling.a(0, 167), Device.getHDIDFV());
        v2.put(InAppBilling.a(0, 168), Device.getGLDID());
        v2.put(InAppBilling.a(0, 182), Device.getUserAgent());
        v2.put(InAppBilling.a(0, 183), Build.MODEL);
        this.i = InAppBilling.a(10, 1);
        v2.put(InAppBilling.a(0, 178), InAppBilling.a(11, 2));
        v2.put(InAppBilling.a(0, 179), InAppBilling.a(12, 3));
        v2.put(InAppBilling.a(0, 180), InAppBilling.a(13, 4));
        v2.put(InAppBilling.a(0, 181), this.i);
        return v2.toString();
      }
      catch ( org.json.JSONException e )
      {
        return null;
      }
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.iab.am p0)
    {
      this.j = p0;
    }

    private void a(String p0, String p1, String p2, String p3, int p4)
    {
      java.util.ArrayList v6; // RETVAL
      java.util.ArrayList v7;
      com.gameloft.android.GAND.GloftGGSS.iab.ao v8;
      if ( this.j != null )
      {
        if ( p0 == null )
          p0 = "";
        v6 = this.j.a(p0);
        v7 = v6;
        if ( v6 != null && p4 >= 0 && p4 < v6.size() )
        {
          if ( p1 == "" )
            v8 = ((com.gameloft.android.GAND.GloftGGSS.iab.ap)v7.get(p4)).a();
          else
            v8 = ((com.gameloft.android.GAND.GloftGGSS.iab.ap)v7.get(p4)).b(p1);
          if ( v8 != null )
            v8.a(p2, p3);
        }
      }
    }

    private void a(org.xml.sax.InputSource p0)
    {
      try
      {
        this.c.parse(p0);
        this.j = this.f.a();
      }
      catch ( Exception e )
      {
      }
    }

    /* synthetic */ static String access$002(com.gameloft.android.GAND.GloftGGSS.iab.ServerInfo p0, String p1)
    {
      p0.g = p1;
      return p1;
    }

    /* synthetic */ static void access$100(
            com.gameloft.android.GAND.GloftGGSS.iab.ServerInfo p0,
            org.xml.sax.InputSource p1)
    {
      p0.a(p1);
    }

    private com.gameloft.android.GAND.GloftGGSS.iab.ao c(String p0, String p1)
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v3;
      com.gameloft.android.GAND.GloftGGSS.iab.ap v5; // RETVAL
    
      v3 = null;
      if ( this.j != null && p0 != null )
      {
        v5 = this.j.d(p0);
        if ( v5 != null )
          return v5.b(p1);
      }
      return v3;
    }

    private String f(String p0)
    {
      if ( this.j != null && p0 != null )
        return this.j.b(p0);
      else
        return null;
    }

    private String g(String p0)
    {
      if ( this.j != null && p0 != null )
        return this.j.c(p0);
      else
        return null;
    }

    private static String getDeviceQuery(com.gameloft.android.GAND.GloftGGSS.GLUtils.Device p0)
    {
      java.util.Locale Default;
      StringBuffer v2;
      Default = Locale.getDefault();
      v2 = new StringBuffer();
      v2.append("game=" + Device.ValidateStringforURL(Device.getDemoCode()));
      v2.append("&network_country_ISO=" + Device.ValidateStringforURL(Device.getNetworkCountryIso()));
      v2.append("&network_operator=" + Device.ValidateStringforURL(Device.getNetworkOperator()));
      v2.append("&network_operator_name=" + Device.getNetworkOperatorName());
      v2.append("&sim_country_iso=" + Device.ValidateStringforURL(Device.getSimCountryIso()));
      v2.append("&sim_operator=" + Device.ValidateStringforURL(Device.getSimOperator()));
      v2.append("&sim_operator_name=" + Device.getSimOperatorName());
      v2.append("&line_number=" + Device.ValidateStringforURL(Device.getLineNumber()));
      v2.append("&is_network_roaming=" + Device.getIsRoaming());
      v2.append("&android_build_device=" + Device.getDevice());
      v2.append("&android_build_model=" + Device.getPhoneModel());
      v2.append("&supports_sms=1");
      v2.append("&supports_wapother=1");
      v2.append("&supportswap=1");
      v2.append("&supports_wappp=1");
      v2.append("&game_version=1.8.2");
      v2.append("&lang=" + Device.ValidateStringforURL(Default.getLanguage().toLowerCase()));
      v2.append("&locale=" + Device.ValidateStringforURL(Default.toString().toLowerCase()));
      v2.append("&v=1.1");
      return v2.toString();
    }

    private static String getFeedURL()
    {
      return InAppBilling.a(0, 148);
    }

    public final String A()
    {
      if ( this.j != null )
        return this.j.e();
      else
        return null;
    }

    public final String B()
    {
      if ( this.j != null )
        return this.j.f();
      else
        return null;
    }

    public final String C()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 84));
      else
        return null;
    }

    public final String D()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 86));
      else
        return null;
    }

    public final boolean E()
    {
      return this.N();
    }

    public final String F()
    {
      return this.g;
    }

    public final String G()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1; // RETVAL
    
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a("type");
      else
        return null;
    }

    public final com.gameloft.android.GAND.GloftGGSS.iab.am H()
    {
      return this.j;
    }

    public final int I()
    {
      if ( this.j != null )
        return this.j.b();
      else
        return 0;
    }

    public final byte[] J()
    {
      if ( this.j != null )
        return this.j.i().getBytes();
      else
        return null;
    }

    public final byte[] K()
    {
      if ( this.j != null )
        return this.j.j().getBytes();
      else
        return null;
    }

    public final byte[] L()
    {
      if ( this.j != null )
        return this.j.k().getBytes();
      else
        return null;
    }

    public final String a(int p0)
    {
      String v2;
      com.gameloft.android.GAND.GloftGGSS.iab.ao v3; // RETVAL
    
      v2 = InAppBilling.a(0, 97) + p0;
      if ( this.N() && (v3 = this.R()) != null )
        return v3.a(v2);
      else
        return null;
    }

    public final String a(String p0, String p1)
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ap v3; // RETVAL
    
      if ( this.j != null && p0 != null && (v3 = this.j.d(p0)) != null )
        return v3.a(p1);
      else
        return null;
    }

    public final void a(com.gameloft.android.GAND.GloftGGSS.iab.d p0)
    {
      String FeedURL;
      java.util.Locale Default;
      StringBuffer v4;
      String v5;
      String v6;
      FeedURL = getFeedURL();
      Default = Locale.getDefault();
      v4 = new StringBuffer();
      v4.append("game=" + Device.ValidateStringforURL(Device.getDemoCode()));
      v4.append("&network_country_ISO=" + Device.ValidateStringforURL(Device.getNetworkCountryIso()));
      v4.append("&network_operator=" + Device.ValidateStringforURL(Device.getNetworkOperator()));
      v4.append("&network_operator_name=" + Device.getNetworkOperatorName());
      v4.append("&sim_country_iso=" + Device.ValidateStringforURL(Device.getSimCountryIso()));
      v4.append("&sim_operator=" + Device.ValidateStringforURL(Device.getSimOperator()));
      v4.append("&sim_operator_name=" + Device.getSimOperatorName());
      v4.append("&line_number=" + Device.ValidateStringforURL(Device.getLineNumber()));
      v4.append("&is_network_roaming=" + Device.getIsRoaming());
      v4.append("&android_build_device=" + Device.getDevice());
      v4.append("&android_build_model=" + Device.getPhoneModel());
      v4.append("&supports_sms=1");
      v4.append("&supports_wapother=1");
      v4.append("&supportswap=1");
      v4.append("&supports_wappp=1");
      v4.append("&game_version=1.8.2");
      v4.append("&lang=" + Device.ValidateStringforURL(Default.getLanguage().toLowerCase()));
      v4.append("&locale=" + Device.ValidateStringforURL(Default.toString().toLowerCase()));
      v4.append("&v=1.1");
      v5 = v4.toString();
      v6 = this.a(new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device());
      IABRequestHandler.getInstance();
      IABRequestHandler.getInstance().a(FeedURL, v5, v6, new com.gameloft.android.GAND.GloftGGSS.iab.al(this, this.i, p0));
    }

    public final void a(String p0, String p1, String p2, int p3)
    {
      java.util.ArrayList v5; // RETVAL
      java.util.ArrayList v6;
      String v7;
      if ( this.j != null )
      {
        v5 = this.j.a(p0);
        v6 = v5;
        if ( v5 != null && p3 >= 0 && p3 < v5.size() )
        {
          v7 = ((com.gameloft.android.GAND.GloftGGSS.iab.ap)v6.get(p3)).b();
          ((com.gameloft.android.GAND.GloftGGSS.iab.ap)v6.get(p3)).a(p1, p2);
          if ( v7 != null )
            this.j.a(v7, p1, p2);
        }
      }
    }

    public final boolean a()
    {
      long v1;
      XPlayer.sendIABProfileRequest(getFeedURL());
      v1 = 0;
      while ( !this.e.d() )
      {
        try
        {
          Thread.sleep(50);
        }
        catch ( Exception e )
        {
        }
        if ( System.currentTimeMillis() - v1 > 1500 )
          v1 = System.currentTimeMillis();
      }
      if ( XPlayer.getLastErrorCode() != 0 )
        return false;
      this.g = null;
      this.a(new org.xml.sax.InputSource(new java.io.ByteArrayInputStream(XPlayer.getWHTTP().t.getBytes())));
      return true;
    }

    public final boolean a(String p0)
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ap v2; // RETVAL
      boolean v3;
      v3 = false;
      if ( this.j != null && p0 != null )
      {
        this.h = p0;
        v2 = this.j.d(p0);
        if ( v2 != null )
        {
          this.g = v2.c();
          if ( this.g.length() > 0 )
            return true;
        }
      }
      return v3;
    }

    public final byte[] a(String p0, int p1)
    {
      java.util.ArrayList v5; // RETVAL
      java.util.ArrayList v6;
      String v7; // RETVAL
    
      if ( this.j == null )
        return null;
      v5 = this.j.a(p0);
      v6 = v5;
      if ( v5 != null
        && p1 >= 0
        && p1 < v5.size()
        && (v7 = ((com.gameloft.android.GAND.GloftGGSS.iab.ap)v6.get(p1)).b()) != null )
      {
        return v7.getBytes();
      }
      else
      {
        return null;
      }
    }

    public final byte[] a(String p0, String p1, int p2)
    {
      java.util.ArrayList v6; // RETVAL
      java.util.ArrayList v7;
      String v8; // RETVAL
    
      if ( this.j == null )
        return null;
      v6 = this.j.a(p0);
      v7 = v6;
      if ( v6 != null
        && p2 >= 0
        && p2 < v6.size()
        && (v8 = ((com.gameloft.android.GAND.GloftGGSS.iab.ap)v7.get(p2)).a(p1)) != null )
      {
        return v8.getBytes();
      }
      else
      {
        return null;
      }
    }

    public final String b()
    {
      return this.h;
    }

    public final String b(String p0, String p1)
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v3; // RETVAL
    
      if ( this.j != null && p0 != null && (v3 = this.j.d(p0).a()) != null )
        return v3.a(p1);
      else
        return null;
    }

    public final boolean b(String p0)
    {
      this.g = null;
      if ( !this.M() || p0 == null || this.c(this.h, p0) == null )
        return false;
      this.g = p0;
      return true;
    }

    public final byte[] b(String p0, int p1)
    {
      java.util.ArrayList v5; // RETVAL
      java.util.ArrayList v6;
      String v7; // RETVAL
    
      if ( this.j == null )
        return null;
      v5 = this.j.a(p0);
      v6 = v5;
      if ( v5 != null
        && p1 >= 0
        && p1 < v5.size()
        && (v7 = ((com.gameloft.android.GAND.GloftGGSS.iab.ap)v6.get(p1)).d()) != null )
      {
        return v7.getBytes();
      }
      else
      {
        return null;
      }
    }

    public final byte[] b(String p0, String p1, int p2)
    {
      java.util.ArrayList v6; // RETVAL
      java.util.ArrayList v7;
      com.gameloft.android.GAND.GloftGGSS.iab.ao v8; // RETVAL
      String v9; // RETVAL
    
      if ( this.j == null )
        return null;
      v6 = this.j.a(p0);
      v7 = v6;
      if ( v6 != null
        && p2 >= 0
        && p2 < v6.size()
        && (v8 = ((com.gameloft.android.GAND.GloftGGSS.iab.ap)v7.get(p2)).a()) != null
        && (v9 = v8.a(p1)) != null )
      {
        return v9.getBytes();
      }
      else
      {
        return null;
      }
    }

    public final String c()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 58));
      else
        return null;
    }

    public final String c(String p0)
    {
      if ( this.j != null && p0 != null )
        return this.j.d(p0).d();
      else
        return null;
    }

    public final int d(String p0)
    {
      int v2;
      java.util.ArrayList v4; // RETVAL
    
      v2 = 0;
      if ( this.j != null )
      {
        v4 = this.j.a(p0);
        if ( v4 != null )
          return v4.size();
      }
      return v2;
    }

    public final String d()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( !this.N() )
        return null;
      v1 = this.R();
      if ( v1 == null )
        return null;
      if ( v1.a(InAppBilling.a(0, 59)).equals(Currency.getInstance(Locale.JAPAN).getCurrencyCode()) )
        return v1.a(InAppBilling.a(0, 59)) + " " + v1.a(InAppBilling.a(0, 58));
      return v1.a(InAppBilling.a(0, 58)) + " " + v1.a(InAppBilling.a(0, 59));
    }

    public final com.gameloft.android.GAND.GloftGGSS.iab.ap e(String p0)
    {
      if ( this.j != null && p0 != null )
        return this.j.d(p0);
      else
        return null;
    }

    public final String e()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 104));
      else
        return null;
    }

    public final String f()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 101));
      else
        return null;
    }

    public final String g()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      v1 = this.R();
      if ( v1 != null )
        return v1.a(InAppBilling.a(0, 67));
      else
        return null;
    }

    public final String h()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      v1 = this.R();
      if ( v1 != null )
        return v1.a(InAppBilling.a(0, 68));
      else
        return null;
    }

    public final String i()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      v1 = this.R();
      if ( v1 != null )
        return v1.a(InAppBilling.a(0, 69));
      else
        return null;
    }

    public final String j()
    {
      if ( this.j != null )
        return this.j.l();
      else
        return null;
    }

    public final String k()
    {
      if ( this.j != null )
        return this.j.m();
      else
        return null;
    }

    public final String l()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 97));
      else
        return null;
    }

    public final String m()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 98));
      else
        return null;
    }

    public final String n()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 99));
      else
        return null;
    }

    public final String o()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 100));
      else
        return null;
    }

    public final String p()
    {
      if ( this.j != null )
        return this.j.g();
      else
        return null;
    }

    public final String q()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 63));
      else
        return null;
    }

    public final String r()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 66));
      else
        return null;
    }

    public final String s()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 59));
      else
        return null;
    }

    public final String t()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 71));
      else
        return null;
    }

    public final String u()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 77));
      else
        return null;
    }

    public final String v()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 78));
      else
        return null;
    }

    public final String w()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 79));
      else
        return null;
    }

    public final String x()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 80));
      else
        return null;
    }

    public final String y()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 81));
      else
        return null;
    }

    public final String z()
    {
      com.gameloft.android.GAND.GloftGGSS.iab.ao v1;
      if ( this.N() && (v1 = this.R()) != null )
        return v1.a(InAppBilling.a(0, 74));
      else
        return null;
    }

}
