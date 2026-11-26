// Decompiled from classes.dex (SourceFile: InAppBilling.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

import android.text.TextUtils;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter;
import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
public class InAppBilling {
    // Fields
    public static com.gameloft.android.GAND.GloftGGSS.iab.ServerInfo a;
    static int b;
    static java.lang.String c;
    static java.lang.String d;
    static java.lang.String e;
    static java.lang.String f;
    static java.lang.String g;
    static java.lang.String h;
    static java.lang.String i;
    static boolean j;
    static int k;
    static boolean l;
    static boolean m;
    static boolean n;
    static com.gameloft.android.GAND.GloftGGSS.iab.IABDialog o;
    private static com.gameloft.android.GAND.GloftGGSS.iab.d p;
    private static com.gameloft.android.GAND.GloftGGSS.iab.k q;

    // Methods
    static
    {
      b = 0;
      c = null;
      d = null;
      e = null;
      f = null;
      g = null;
      h = null;
      i = null;
      p = new com.gameloft.android.GAND.GloftGGSS.iab.m();
      j = false;
      l = false;
      m = false;
      n = false;
      o = null;
    }

    public InAppBilling()
    {
      super();
    }

    public static int GetState()
    {
      return SUtils.getPreferenceInt(StringEncrypter.getString(2131165354), 0, StringEncrypter.getString(2131165345));
    }

    static boolean IsInternetAvaliable()
    {
      java.net.HttpURLConnection v0;
      try
      {
        v0 = (java.net.HttpURLConnection)new java.net.URL("http://www.google.com").openConnection();
        v0.setConnectTimeout(3000);
        v0.connect();
        return true;
      }
      catch ( Exception e )
      {
        return false;
      }
    }

    public static String a(int p0, int p1)
    {
      android.os.Bundle v2;
      android.os.Bundle v3; // RETVAL
    
      v2 = new android.os.Bundle();
      v2.putInt("O", p0);
      v2.putInt("I", p1);
      v3 = nativeSendData(v2);
      if ( v3 != null )
        return v3.getString("R");
      else
        return null;
    }

    /* synthetic */ static String access$000()
    {
      return getSDFolder();
    }

    /* synthetic */ static boolean access$100(int p0)
    {
      return handleOperations(p0);
    }

    public static String c(int p0, int p1, int p2, String p3)
    {
      android.os.Bundle v4;
      android.os.Bundle v5; // RETVAL
    
      v4 = new android.os.Bundle();
      v4.putInt("O", p0);
      v4.putInt("L", p1);
      v4.putInt("S", p2);
      if ( p3 != null )
        v4.putByteArray(a(0, 47), p3.getBytes());
      v5 = nativeSendData(v4);
      if ( v5 != null )
        return v5.getString("R");
      else
        return null;
    }

    static void clear()
    {
      Boolean v0;
      v0 = new Boolean(false);
      SUtils.setPreference(
        StringEncrypter.getString(2131165347),
        SUtils.getContext().getString(2131165361),
        StringEncrypter.getString(2131165345));
      SUtils.setPreference(
        StringEncrypter.getString(2131165348),
        SUtils.getContext().getString(2131165390),
        StringEncrypter.getString(2131165345));
      SUtils.setPreference(
        StringEncrypter.getString(2131165349),
        SUtils.getContext().getString(2131165390),
        StringEncrypter.getString(2131165345));
      SUtils.setPreference(
        StringEncrypter.getString(2131165350),
        SUtils.getContext().getString(2131165390),
        StringEncrypter.getString(2131165345));
      SUtils.setPreference(
        StringEncrypter.getString(2131165351),
        new Boolean(true).toString(),
        StringEncrypter.getString(2131165345));
      SUtils.setPreference(StringEncrypter.getString(2131165354), Integer.valueOf(0), StringEncrypter.getString(2131165345));
      SUtils.setPreference(StringEncrypter.getString(2131165352), v0.toString(), StringEncrypter.getString(2131165345));
      SUtils.setPreference(StringEncrypter.getString(2131165357), v0.toString(), StringEncrypter.getString(2131165345));
    }

    public static void closeBackgroundDialog()
    {
      ;
    }

    public static android.os.Bundle getData(android.os.Bundle p0)
    {
      int Int; // RETVAL
      int v2;
      Int = p0.getInt(a(0, 30));
      v2 = Int;
      if ( Int != 3
        && Int != 4
        && Int != 5
        && Int != 6
        && Int != 7
        && Int != 8
        && Int != 9
        && Int != 14
        && Int != 15
        && Int != 16
        && Int != 17
        && Int != 18 )
      {
        if ( Int == 2 )
          d = p0.getString(a(0, 35));
        if ( v2 == 1 )
          c = p0.getString(a(0, 38));
        if ( v2 == 10 )
          i = p0.getString(a(0, 40));
      }
      if ( v2 == 1 || v2 == 2 || v2 == 0 || v2 == 3 || v2 == 17 || v2 == 10 )
        new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.iab.n(v2)).start();
      return getDataAid(v2, p0);
    }

    private static android.os.Bundle getDataAid(int p0, android.os.Bundle p1)
    {
      byte[] v2 = null;
      String LastItem = null;
      String String = null;
      com.gameloft.android.GAND.GloftGGSS.iab.ap v5 = null;
      String v6 = null;
      byte[] Bytes = null;
      int Int = 0; // RETVAL
      int v10 = 0; // RETVAL
      String v11 = null;
      int v12 = 0; // RETVAL
      String v13 = null;
      int v14 = 0; // RETVAL
      String v15 = null;
      String v16 = null; // RETVAL
      String v17 = null; // RETVAL
      String v18 = null;
      String v19 = null; // RETVAL
      String v20 = null; // RETVAL
      String v21 = null;
      String v22 = null; // RETVAL
      String v23 = null; // RETVAL
      org.json.JSONObject v24 = null;
      org.json.JSONObject v25 = null;
      org.json.JSONObject v26 = null;
      String v27 = null;
      String v28 = null;
      String v29 = null;
      String i = null;
      String v31 = null;
      int v32 = 0;
      int v33 = 0;
      int v34 = 0;
      String v35 = null;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = null;
            _sw_1 = (p0);
            if ( (_sw_1 == (4)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (7)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (8)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (14)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (15)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (16)) ) { _pc = 9; continue _sm; }
            if ( (_sw_1 == (18)) ) { _pc = 11; continue _sm; }
            if ( (_sw_1 == (19)) ) { _pc = 12; continue _sm; }
            _pc = 13;
            continue _sm;
          case 1:
            LastItem = getLastItem();
            String = SUtils.getContext().getString(2131165390);
            if ( LastItem != null )
            {
            v5 = a.e(LastItem);
            if ( v5 != null )
            String = v5.a(a(0, 47));
            }
            v6 = a(0, 31);
            if ( String != null )
            Bytes = String.getBytes();
            else
            Bytes = null;
            p1.putByteArray(v6, Bytes);
            p1.putInt(a(0, 33), getLastState());
            return p1;
          case 2:
            Int = p1.getInt(a(0, 32));
            if ( Int >= 0 )
            p1.putByteArray(a(0, 31), a.a(c, Int));
            return p1;
          case 3:
            v10 = p1.getInt(a(0, 32));
            if ( v10 >= 0 )
            p1.putByteArray(a(0, 31), a.b(c, v10));
            return p1;
          case 4:
            v11 = p1.getString(a(0, 47));
            v12 = p1.getInt(a(0, 32));
            if ( v11 != null && v12 >= 0 )
            p1.putByteArray(a(0, 31), a.a(c, v11, v12));
            return p1;
          case 5:
            v13 = p1.getString(a(0, 47));
            v14 = p1.getInt(a(0, 32));
            if ( v13 != null && v14 >= 0 )
            p1.putByteArray(a(0, 31), a.b(c, v13, v14));
            return p1;
          case 6:
            v15 = p1.getString(a(0, 47));
            if ( v15 == null )
            return p1;
            if ( v15.equals(a(0, 105)) )
            {
            v2 = a.J();
            }
            else if ( v15.equals(a(0, 106)) )
            {
            v2 = a.K();
            }
            else if ( v15.equals(a(0, 107)) )
            {
            v2 = a.L();
            }
            _pc = 10;
            continue _sm;
          case 7:
            v16 = p1.getString(a(0, 74));
            if ( v16 == null )
            return p1;
            v17 = a.c(v16);
            if ( v17 != null )
            v2 = v17.getBytes();
            _pc = 10;
            continue _sm;
          case 8:
            v18 = p1.getString(a(0, 47));
            v19 = p1.getString(a(0, 74));
            if ( v18 == null || v19 == null )
            return p1;
            v20 = a.a(v19, v18);
            if ( v20 != null )
            v2 = v20.getBytes();
            _pc = 10;
            continue _sm;
          case 9:
            v21 = p1.getString(a(0, 47));
            v22 = p1.getString(a(0, 74));
            if ( v21 == null || v22 == null )
            return p1;
            v23 = a.b(v22, v21);
            if ( v23 != null )
            v2 = v23.getBytes();
            _pc = 10;
            continue _sm;
          case 10:
            p1.putByteArray(a(0, 31), v2);
            return p1;
          case 11:
            try
            {
            v24 = new org.json.JSONObject();
            v25 = new org.json.JSONObject();
            v26 = new org.json.JSONObject();
            new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device();
            v25.put("x-up-gl-acnum", a(6, 1));
            v25.put("x-up-gl-subno", Device.getLineNumber());
            v25.put("x-up-gl-hdidfv", Device.getHDIDFV());
            v25.put("x-up-gl-gldid", Device.getGLDID());
            v25.put("x-up-gl-sim-operator", Device.getSimOperator());
            v25.put("x-up-gl-sim-operator-name", Device.getSimOperatorName());
            v25.put("x-up-gl-sim-country-iso", Device.getSimCountryIso());
            v25.put("x-up-gl-network-operator", Device.getNetworkOperator());
            v25.put("x-up-gl-network-operator-name", Device.getNetworkOperatorName());
            v25.put("x-up-gl-network-country-iso", Device.getNetworkCountryIso());
            v25.put("x-up-gl-is-network-roaming", Boolean.toString(Device.getIsRoaming()));
            v24.put("scc", Integer.toString(Device.createUniqueCode()));
            v24.put("lang", Device.getLocale());
            v27 = a.H().h();
            if ( !TextUtils.isEmpty(v27) )
            {
            v28 = v27.substring(0, v27.indexOf("?"));
            v29 = v27.substring(v27.indexOf("=") + 1, v27.length());
            for ( i = v27.substring(v27.indexOf("?") + 1, v27.length()); ; i = v35 )
            {
            v31 = i.substring(0, i.indexOf("="));
            v32 = i.indexOf("=") + 1;
            v33 = i.indexOf("&") < 0 ? i.length() : i.indexOf("&");
            v26.put(v31, i.substring(v32, v33));
            v34 = i.indexOf("&") < 0 ? i.length() : i.indexOf("&") + 1;
            v35 = i.substring(v34, i.length());
            if ( TextUtils.isEmpty(v35) )
            break;
            }
            v24.put("url", v28);
            v24.put("portal", v29);
            }
            v24.put("headers", v25);
            v24.put("queryData", v26);
            p1.putByteArray(a(0, 31), v24.toString().getBytes());
            }
            catch ( Exception e )
            {
            }
            
            _pc = 14;
            continue _sm;
          case 12:
            closeBackgroundDialog();
            _pc = 14;
            continue _sm;
          case 13:
            _pc = 14;
            continue _sm;
          case 14:
            return p1;
        }
      }
}

    static String getLastItem()
    {
      try
      {
        return new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(StringEncrypter.getString(2131165344), StringEncrypter.getString(2131165360)).b(SUtils.getPreferenceString(StringEncrypter.getString(2131165353), StringEncrypter.getString(2131165345))).split(StringEncrypter.getString(2131165346))[0];
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    static int getLastState()
    {
      try
      {
        return Integer.parseInt(new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(StringEncrypter.getString(2131165344), StringEncrypter.getString(2131165360)).b(SUtils.getPreferenceString(StringEncrypter.getString(2131165353), StringEncrypter.getString(2131165345))).split(StringEncrypter.getString(2131165346))[2]);
      }
      catch ( Exception e )
      {
        return 0;
      }
    }

    private static String getSDFolder()
    {
      String PreferenceString;
      PreferenceString = SUtils.getPreferenceString("SDFolder", GameInstaller.mPreferencesName);
      if ( PreferenceString == "" )
        return "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
      return PreferenceString;
    }

    public static int getTotalItems()
    {
      if ( a == null )
        return 0;
      if ( c.equals("") )
        return a.I();
      return a.d(c);
    }

    private static synchronized boolean handleOperations(int p0)
    {
      boolean v1;
      v1 = true;
      k = p0;
      try
      {
        switch ( p0 )
        {
          case 0:
            try
            {
            }
            catch ( Exception e )
            {
              return v1;
            }
            break;
          case 1:
            if ( getTotalItems() != 0 || m )
            {
              p.a(null);
            }
            else
            {
              m = true;
              a.a(p);
            }
            return v1;
          case 2:
            try
            {
              if ( q == null )
                q = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper(a);
              a.a(d);
              q.b(d);
            }
            catch ( Exception e )
            {
              return v1;
            }
            break;
          case 10:
            return v1;
          case 17:
            if ( a == null )
              a = new com.gameloft.android.GAND.GloftGGSS.iab.ServerInfo();
            if ( q == null )
              q = new com.gameloft.android.GAND.GloftGGSS.iab.SamsungHelper(a);
            a.a(e);
            q.d();
            break;
          default:
            return false;
        }
      }
      finally
      {
      }
      return v1;
    }

    public static void init(android.content.Context p0)
    {
      SUtils.setContext(p0);
      if ( !l )
      {
        nativeInit(p0);
        l = true;
        if ( a == null )
          a = new com.gameloft.android.GAND.GloftGGSS.iab.ServerInfo();
      }
    }

    static boolean isGoogleResponse()
    {
      String PreferenceString; // RETVAL
      String v1;
      PreferenceString = SUtils.getPreferenceString(
                           StringEncrypter.getString(2131165357),
                           StringEncrypter.getString(2131165345));
      v1 = PreferenceString;
      try
      {
        return new Boolean(PreferenceString).booleanValue();
      }
      catch ( Exception e )
      {
        return false;
      }
    }

    static boolean isPending()
    {
      boolean v0;
      v0 = false;
      try
      {
        return new Boolean(new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(StringEncrypter.getString(2131165344), StringEncrypter.getString(2131165360)).b(SUtils.getPreferenceString(StringEncrypter.getString(2131165347), StringEncrypter.getString(2131165345))).split(StringEncrypter.getString(2131165346))[0]).booleanValue();
      }
      catch ( Exception e )
      {
      }
      return v0;
    }

    static void load()
    {
      com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter v0;
      String PreferenceString; // RETVAL
      String v2;
      Boolean v3;
      v0 = new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(StringEncrypter.getString(2131165344), StringEncrypter.getString(2131165359));
      PreferenceString = SUtils.getPreferenceString(
                           StringEncrypter.getString(2131165347),
                           StringEncrypter.getString(2131165345));
      v2 = PreferenceString;
      try
      {
        v3 = new Boolean(v0.b(PreferenceString).split(StringEncrypter.getString(2131165346))[0]);
      }
      catch ( Exception e )
      {
        v3 = new Boolean(false);
      }
      if ( v3.booleanValue() )
      {
        c = v0.b(SUtils.getPreferenceString(StringEncrypter.getString(2131165348), StringEncrypter.getString(2131165345)));
        d = v0.b(SUtils.getPreferenceString(StringEncrypter.getString(2131165349), StringEncrypter.getString(2131165345)));
        f = v0.b(SUtils.getPreferenceString(StringEncrypter.getString(2131165350), StringEncrypter.getString(2131165345)));
        g = v0.b(SUtils.getPreferenceString(StringEncrypter.getString(2131165351), StringEncrypter.getString(2131165345)));
        b = Integer.parseInt(v0.b(SUtils.getPreferenceString(
                                    StringEncrypter.getString(2131165354),
                                    StringEncrypter.getString(2131165345))));
        h = v0.b(SUtils.getPreferenceString(StringEncrypter.getString(2131165356), StringEncrypter.getString(2131165345)));
        i = v0.b(SUtils.getPreferenceString(StringEncrypter.getString(2131165363), StringEncrypter.getString(2131165345)));
        a.a(d);
      }
    }

    public static native void nativeInit(android.content.Context p0);

    public static native android.os.Bundle nativeSendData(android.os.Bundle p0);

    public static native void nativeSetContext(android.content.Context p0);

    public static native void nativeSetIABObject(com.gameloft.android.GAND.GloftGGSS.iab.InAppBilling p0);

    static void save(int p0)
    {
      com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter v1;
      String[] v2;
      String v3;
      String String;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      String v10;
      String v11;
      long v12;
      v1 = new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(StringEncrypter.getString(2131165344), StringEncrypter.getString(2131165358));
      v2 = new String[3];
      v2[0] = new Boolean(true).toString();
      v2[1] = new Boolean(false).toString();
      com.gameloft.android.DecompRT.discard(v2[1] + StringEncrypter.getString(2131165346) + v1.a() + StringEncrypter.getString(2131165346) + v2[0]);
      v2[2] = new Boolean(false).toString();
      com.gameloft.android.DecompRT.discard(v2[2] + StringEncrypter.getString(2131165346) + v1.a() + StringEncrypter.getString(2131165346) + v2[1]);
      v3 = v2[0] + StringEncrypter.getString(2131165346) + v2[2] + StringEncrypter.getString(2131165346) + v2[1];
      com.gameloft.android.DecompRT.discard(v2[0] + StringEncrypter.getString(2131165346) + v1.a() + StringEncrypter.getString(2131165346) + v2[0]);
      SUtils.setPreference(StringEncrypter.getString(2131165347), v1.a(v3), StringEncrypter.getString(2131165345));
      String = StringEncrypter.getString(2131165348);
      if ( c != null )
        v5 = c;
      else
        v5 = SUtils.getContext().getString(2131165390);
      SUtils.setPreference(String, v1.a(v5), StringEncrypter.getString(2131165345));
      v6 = StringEncrypter.getString(2131165349);
      if ( d != null )
        v7 = d;
      else
        v7 = SUtils.getContext().getString(2131165390);
      SUtils.setPreference(v6, v1.a(v7), StringEncrypter.getString(2131165345));
      v8 = StringEncrypter.getString(2131165350);
      if ( f != null )
        v9 = f;
      else
        v9 = SUtils.getContext().getString(2131165390);
      SUtils.setPreference(v8, v1.a(v9), StringEncrypter.getString(2131165345));
      v10 = StringEncrypter.getString(2131165351);
      if ( g != null )
        v11 = g;
      else
        v11 = SUtils.getContext().getString(2131165390);
      SUtils.setPreference(v10, v1.a(v11), StringEncrypter.getString(2131165345));
      SUtils.setPreference(
        StringEncrypter.getString(2131165354),
        v1.a(p0 + SUtils.getContext().getString(2131165390)),
        StringEncrypter.getString(2131165345));
      v12 = 0;
      if ( p0 == 2 || p0 == 4 || p0 == 3 || p0 == 6 )
        v12 = System.currentTimeMillis();
      SUtils.setPreference(
        StringEncrypter.getString(2131165355),
        v12 + SUtils.getContext().getString(2131165390),
        StringEncrypter.getString(2131165345));
      b = p0;
    }

    static void saveLastItem(int p0)
    {
      com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter v1;
      String[] v2;
      String v3;
      v1 = new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(StringEncrypter.getString(2131165344), StringEncrypter.getString(2131165360));
      v2 = new String[3];
      v2[0] = new Boolean(true).toString();
      v2[1] = new Boolean(false).toString();
      com.gameloft.android.DecompRT.discard(v2[1] + StringEncrypter.getString(2131165346) + v1.a() + StringEncrypter.getString(2131165346) + v2[0]);
      v2[2] = new Boolean(false).toString();
      com.gameloft.android.DecompRT.discard(v2[2] + StringEncrypter.getString(2131165346) + v1.a() + StringEncrypter.getString(2131165346) + v2[1]);
      v3 = d + StringEncrypter.getString(2131165346) + v2[2] + StringEncrypter.getString(2131165346) + p0;
      com.gameloft.android.DecompRT.discard(v2[0] + StringEncrypter.getString(2131165346) + v1.a() + StringEncrypter.getString(2131165346) + v2[0]);
      SUtils.setPreference(StringEncrypter.getString(2131165353), v1.a(v3), StringEncrypter.getString(2131165345));
    }

    static void saveNoGoogleReponse()
    {
      SUtils.setPreference(
        StringEncrypter.getString(2131165357),
        StringEncrypter.getString(2131165361),
        StringEncrypter.getString(2131165345));
    }

    public static void showBackgroundDialog()
    {
      ;
    }

}
