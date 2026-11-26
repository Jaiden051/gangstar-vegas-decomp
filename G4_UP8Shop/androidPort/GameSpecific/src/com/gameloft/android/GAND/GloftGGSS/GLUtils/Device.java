// Decompiled from classes.dex (SourceFile: Device.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import android.net.NetworkInfo;
import android.os.Build;
import android.os.SystemClock;
import android.provider.Settings;
import android.text.TextUtils;
import android.util.Log;
import com.gameloft.android.GAND.GloftGGSS.DataSharing;
import com.gameloft.android.hdidfv.HDIDFV;
import java.io.File;
import java.net.URLEncoder;
import java.util.Locale;
import java.util.UUID;
public class Device {
    // Fields
    private static java.lang.String A;
    private static boolean B;
    private static java.lang.String D;
    private static java.lang.String E;
    private static java.lang.String F;
    private static int G;
    private static com.gameloft.android.GAND.GloftGGSS.GLUtils.a I;
    private static android.webkit.WebView J;
    private static int K;
    private static int L;
    private static java.lang.String M;
    private static int N;
    private static byte[] P;
    public static final java.lang.String[][] a;
    public static boolean b;
    public static boolean c;
    public static boolean d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static java.lang.String l;
    public static int n;
    public static android.net.wifi.WifiManager o;
    static android.net.ConnectivityManager p;
    private static android.telephony.TelephonyManager r;
    private static java.lang.String s;
    private static java.lang.String t;
    private static java.lang.String u;
    private static java.lang.String v;
    private static java.lang.String w;
    private static java.lang.String x;
    private static java.lang.String y;
    private static java.lang.String z;
    private final java.lang.String C;
    private com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo H;
    private java.lang.String O;
    public final java.lang.String m;
    android.net.wifi.WifiManager.WifiLock q;

    // Methods
    static
    {
      String[][] v0;
      String[] v1;
      String[] v2;
      String[] v3;
      String[] v4;
      String[] v5;
      String[] v6;
      String[] v7;
      String[] v8;
      String[] v9;
      byte[] v10;
      v0 = new String[9][];
      v1 = new String[2];
      v1[0] = "eng";
      v1[1] = "en";
      v0[0] = v1;
      v2 = new String[2];
      v2[0] = "fra";
      v2[1] = "fr";
      v0[1] = v2;
      v3 = new String[2];
      v3[0] = "deu";
      v3[1] = "de";
      v0[2] = v3;
      v4 = new String[2];
      v4[0] = "esl";
      v4[1] = "es";
      v0[3] = v4;
      v5 = new String[2];
      v5[0] = "spa";
      v5[1] = "es";
      v0[4] = v5;
      v6 = new String[2];
      v6[0] = "ita";
      v6[1] = "it";
      v0[5] = v6;
      v7 = new String[2];
      v7[0] = "jpn";
      v7[1] = "jp";
      v0[6] = v7;
      v8 = new String[2];
      v8[0] = "por";
      v8[1] = "br";
      v0[7] = v8;
      v9 = new String[2];
      v9[0] = "por";
      v9[1] = "pt";
      v0[8] = v9;
      a = v0;
      r = null;
      s = null;
      t = null;
      u = null;
      v = null;
      w = null;
      x = null;
      y = null;
      z = null;
      A = null;
      D = null;
      E = null;
      F = null;
      G = -1;
      J = null;
      p = null;
      v10 = new byte[1];
      v10[0] = 0;
      P = (byte[])v10;
    }

    public Device()
    {
      super();
      this.C = "4";
      this.m = "1";
      this.O = "";
      InitDeviceValues();
    }

    public Device(com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo p0)
    {
      this();
      this.H = p0;
    }

    private static void DisableWifi()
    {
      o.setWifiEnabled(false);
    }

    private static void EnableWifi()
    {
      o.setWifiEnabled(true);
    }

    private static void InitDeviceValues()
    {
      android.net.ConnectivityManager v0;
      android.net.ConnectivityManager v1;
      String SimState;
      getGoogleAdId();
      v0 = p;
      if ( v0 == null )
      {
        v1 = (android.net.ConnectivityManager)SUtils.getContext().getSystemService("connectivity");
        p = v1;
      }
      setDeviceInfo();
      try
      {
        SimState = getSimState();
      }
      catch ( Exception e )
      {
        SimState = "SIM_ERROR_UNKNOWN";
      }
      if ( s == null )
        s = getDeviceId();
      if ( u == null )
        u = getNetworkOperator();
      if ( u.trim().length() == 0 )
        u = SimState;
      if ( v == null )
        v = getNetworkOperatorName();
      if ( v.trim().length() == 0 )
        v = SimState;
      if ( w == null )
        w = r.getSimOperator();
      if ( w.trim().length() == 0 )
        w = SimState;
      if ( x == null )
        x = ValidateStringforURL(r.getSimOperatorName());
      if ( x.trim().length() == 0 )
        x = SimState;
      if ( y == null || y.equals("00") )
        y = getLineNumber();
      if ( z == null )
        getNetworkCountryIso();
      if ( A == null )
        A = r.getSimCountryIso();
      B = r.isNetworkRoaming();
      N = createUniqueCode();
      M = getLanguage(Locale.getDefault().getISO3Language());
      try
      {
        if ( t == null )
          ((android.app.Activity)SUtils.getContext()).runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.c());
      }
      catch ( ClassCastException e )
      {
      }
      I = new com.gameloft.android.GAND.GloftGGSS.GLUtils.a();
    }

    private static boolean IsConnectionReady()
    {
      return p.getNetworkInfo(0).getState() == NetworkInfo.State.CONNECTED;
    }

    private static boolean IsWifiDisabling()
    {
      return o.getWifiState() == 0;
    }

    public static boolean IsWifiEnable()
    {
      android.net.wifi.WifiManager v0;
      v0 = (android.net.wifi.WifiManager)SUtils.getContext().getSystemService("wifi");
      o = v0;
      return v0.getWifiState() == 3;
    }

    private static boolean IsWifiEnabling()
    {
      return o.getWifiState() == 2;
    }

    public static String ValidateStringforURL(String p0)
    {
      try
      {
        return URLEncoder.encode(p0, "UTF-8");
      }
      catch ( Exception e )
      {
      }
      return p0;
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo p0)
    {
      this.H = p0;
    }

    public static byte[] a()
    {
      if ( s != null )
        return s.getBytes();
      else
        return P;
    }

    /* synthetic */ static int access$002(int p0)
    {
      G = p0;
      return p0;
    }

    /* synthetic */ static String access$102(String p0)
    {
      F = p0;
      return p0;
    }

    /* synthetic */ static android.webkit.WebView access$200()
    {
      return J;
    }

    /* synthetic */ static android.webkit.WebView access$202(android.webkit.WebView p0)
    {
      J = p0;
      return p0;
    }

    /* synthetic */ static String access$302(String p0)
    {
      t = p0;
      return p0;
    }

    public static byte[] b()
    {
      if ( v != null )
        return v.getBytes();
      else
        return P;
    }

    public static byte[] c()
    {
      if ( y != null )
        return y.getBytes();
      else
        return P;
    }

    public static int createUniqueCode()
    {
      return (int)(new java.util.Random().nextDouble() * 8889.0 + 1111.0);
    }

    public static byte[] d()
    {
      return "1.8.2".getBytes();
    }

    public static synchronized String d1()
    {
      android.content.Context Context;
      String v1;
      Class v3;
      Class[] v4;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v6;
      String String; // RETVAL
      String v8;
      String File; // RETVAL
      java.io.File v10;
      Context = SUtils.getContext();
      if ( Context == null )
        return null;
      try
      {
        if ( Build.VERSION.SDK_INT >= 9 )
        {
          v1 = Build.SERIAL;
          if ( v1 != null && v1 != "unknown" )
            return v1;
        }
        try
        {
          v3 = Class.forName("android.os.SystemProperties");
          v4 = new Class[1];
          v4[0] = String.class;
          Method = v3.getMethod("get", v4);
          v6 = new Object[1];
          v6[0] = "ro.serialno";
          v1 = (String)Method.invoke(v3, v6);
          if ( v1 != null && v1.length() > 0 && v1 != "unknown" )
            return v1;
        }
        catch ( Exception e )
        {
        }
        String = Settings.Secure.getString(SUtils.getContext().getContentResolver(), "android_id");
        v1 = String;
        if ( String != null && String.length() > 0 )
          return v1;
        v8 = SUtils.getPreferenceString(
               "SDFolder",
               "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files",
               "GamePrefs")
           + "/.nomedia";
        File = SUtils.ReadFile(v8);
        v1 = File;
        if ( File != null && File.length() != 0 )
          return v1;
        v1 = UUID.randomUUID().toString().replaceAll("-", "");
        SUtils.WriteFile(v8, v1);
        try
        {
          v10 = new java.io.File(v8);
          if ( v10.exists() )
            v10.setReadOnly();
        }
        catch ( Exception e )
        {
        }
        return v1;
      }
      finally
      {
      }
    }

    public static void e(int p0)
    {
      N = p0;
    }

    public static byte[] f()
    {
      return getUserAgent().getBytes();
    }

    private String g()
    {
      return this.O;
    }

    public static String getAndroidId()
    {
      String v0;
      String String; // RETVAL
    
      if ( SUtils.getContext() == null )
        return "";
      String = Settings.Secure.getString(SUtils.getContext().getContentResolver(), "android_id");
      v0 = String;
      if ( String == null || String.equals("9774d56d682e549c") )
        return "";
      if ( v0.length() < 15 )
        return "";
      return v0;
    }

    private static String getBillingVersion()
    {
      return "1";
    }

    public static com.gameloft.android.GAND.GloftGGSS.GLUtils.a getCarrier()
    {
      return I;
    }

    public static String getDemoCode()
    {
      return "GGSS";
    }

    public static String getDevice()
    {
      return ValidateStringforURL(Build.DEVICE);
    }

    public static String getDeviceFirmware()
    {
      return Build.VERSION.RELEASE;
    }

    public static String getDeviceIMEI()
    {
      return "";
    }

    public static String getDeviceId()
    {
      IsWifiEnable();
      return d1();
    }

    public static String getDeviceName()
    {
      return Build.MANUFACTURER + " " + Build.MODEL;
    }

    public static String getGLDID()
    {
      return "hdidfv=" + getHDIDFV() + " ";
    }

    public static String getGoogleAdId()
    {
      if ( G == -1 )
      {
        G = 3;
        new com.gameloft.android.GAND.GloftGGSS.GLUtils.b().start();
      }
      if ( TextUtils.isEmpty(F) )
        return "";
      else
        return F;
    }

    public static int getGoogleAdIdStatus()
    {
      return G;
    }

    public static synchronized String getHDIDFV()
    {
      String v1;
      if ( !TextUtils.isEmpty(D) )
        return D;
      try
      {
        D = "";
        if ( DataSharing.getContext() == null )
          DataSharing.init(SUtils.getContext());
        D = DataSharing.getSharedValue("HDIDFV");
        try
        {
          if ( !TextUtils.isEmpty(D) )
            D = Encrypter.decrypt(D).replaceAll(" ", "");
        }
        catch ( Exception e )
        {
          D = "";
        }
        if ( TextUtils.isEmpty(D) )
        {
          System.loadLibrary("generator");
          D = HDIDFV.getHDIDFV();
          Log.d("HEI", "8200");
          E = HDIDFV.getHDIDFVVersion();
          if ( !TextUtils.isEmpty(D) )
          {
            DataSharing.setSharedValue("HDIDFV", Encrypter.crypt(D));
            DataSharing.setSharedValue("HDIDFVVersion", E);
          }
          if ( TextUtils.isEmpty(D) )
            v1 = "";
          else
            v1 = D;
        }
        else
        {
          E = DataSharing.getSharedValue("HDIDFVVersion");
          v1 = D;
        }
      }
      finally
      {
      }
      return v1;
    }

    public static String getHDIDFVVersion()
    {
      if ( TextUtils.isEmpty(E) )
        return "";
      else
        return E;
    }

    public static byte[] getHostName()
    {
      return (Build.MODEL + "_" + Build.PRODUCT).getBytes();
    }

    private static String getIMEI()
    {
      return s;
    }

    public static boolean getIsRoaming()
    {
      return B;
    }

    private static String getLanguage(String p0)
    {
      int i;
      for ( i = 0; i < a.length; ++i )
      {
        if ( p0.compareToIgnoreCase(a[i][0]) == 0 )
          return a[i][1];
      }
      return "en";
    }

    public static String getLineNumber()
    {
      y = "00";
      return "00";
    }

    public static String getLocale()
    {
      return M;
    }

    public static String getMacAddress()
    {
      android.content.Context Context;
      String v1;
      android.net.wifi.WifiManager v3;
      android.net.wifi.WifiInfo ConnectionInfo; // RETVAL
      String MacAddress; // RETVAL
    
      Context = SUtils.getContext();
      if ( Context == null )
        return "";
      try
      {
        v3 = (android.net.wifi.WifiManager)SUtils.getContext().getSystemService("wifi");
        if ( v3 != null )
        {
          ConnectionInfo = v3.getConnectionInfo();
          if ( ConnectionInfo != null )
          {
            MacAddress = ConnectionInfo.getMacAddress();
            v1 = MacAddress;
            if ( MacAddress == null || MacAddress.length() == 0 )
              v1 = "";
          }
          else
          {
            v1 = "";
          }
        }
        else
        {
          v1 = "";
        }
      }
      catch ( Exception e )
      {
        return "";
      }
      return v1;
    }

    public static String getNetworkCountryIso()
    {
      if ( z == null )
      {
        try
        {
          setDeviceInfo();
          z = r.getNetworkCountryIso();
          return z;
        }
        catch ( Exception e )
        {
          z = null;
        }
      }
      return z;
    }

    public static String getNetworkOperator()
    {
      String SimState;
      SimState = "SIM_ERROR_UNKNOWN";
      if ( u == null )
      {
        try
        {
          setDeviceInfo();
          SimState = getSimState();
          u = r.getNetworkOperator();
        }
        catch ( Exception e )
        {
          u = null;
          SimState = "SIM_ERROR_UNKNOWN";
        }
      }
      if ( u == null || u.trim().length() == 0 )
        u = SimState;
      return u;
    }

    public static String getNetworkOperatorName()
    {
      String SimState;
      SimState = "SIM_ERROR_UNKNOWN";
      if ( v == null )
      {
        try
        {
          setDeviceInfo();
          SimState = getSimState();
          v = ValidateStringforURL(r.getNetworkOperatorName());
        }
        catch ( Exception e )
        {
          u = null;
          SimState = "SIM_ERROR_UNKNOWN";
        }
      }
      if ( v == null || v.trim().length() == 0 )
        v = SimState;
      return v;
    }

    public static String getPhoneDevice()
    {
      return ValidateStringforURL(Build.DEVICE);
    }

    public static String getPhoneManufacturer()
    {
      return ValidateStringforURL(Build.MANUFACTURER);
    }

    public static String getPhoneModel()
    {
      return ValidateStringforURL(Build.MODEL);
    }

    public static String getPhoneProduct()
    {
      return ValidateStringforURL(Build.PRODUCT);
    }

    private static String getProfileType()
    {
      return "4";
    }

    public static String getSerial()
    {
      String v0;
      v0 = "";
      if ( Build.VERSION.SDK_INT >= 9 )
        v0 = Build.SERIAL;
      if ( v0 == null || v0.length() < 5 || v0.equals("unknown") )
        return getSerialNo();
      return v0;
    }

    public static String getSerialNo()
    {
      Class v0;
      Class[] v1;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v3;
      String v4;
      try
      {
        v0 = Class.forName("android.os.SystemProperties");
        v1 = new Class[1];
        v1[0] = String.class;
        Method = v0.getMethod("get", v1);
        v3 = new Object[1];
        v3[0] = "ro.serialno";
        v4 = (String)Method.invoke(v0, v3);
        if ( v4 == null || v4.length() < 5 || v4.equals("unknown") )
          return "";
        return v4;
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static String getSimCountryIso()
    {
      return A;
    }

    public static String getSimOperator()
    {
      return w;
    }

    public static String getSimOperatorName()
    {
      return x;
    }

    public static String getSimState()
    {
      String v0;
      switch ( r.getSimState() )
      {
        case 1:
          v0 = "SIM_ABSENT";
          break;
        case 2:
          v0 = "SIM_PIN_REQUIRED";
          break;
        case 3:
          v0 = "SIM_PUK_REQUIRED";
          break;
        default:
          v0 = "SIM_ERROR_UNKNOWN";
          break;
      }
      return v0;
    }

    public static long getSystemUpTimeMillis()
    {
      return SystemClock.elapsedRealtime();
    }

    public static int getUniqueCode()
    {
      return N;
    }

    public static String getUserAgent()
    {
      return t;
    }

    public static void init()
    {
      InitDeviceValues();
      nativeInit();
    }

    public static native void nativeInit();

    public static String retrieveCPUSerial()
    {
      CharSequence v0 = null;
      java.io.BufferedReader v1;
      String Line; // RETVAL
      String v3;
      String[] v4; // RETVAL
      Object[] v5;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v0 = null;
            if ( !new java.io.File("/proc/cpuinfo").exists() )
            { _pc = 1; continue _sm; }
            try
            {
            v1 = new java.io.BufferedReader(new java.io.FileReader(new java.io.File("/proc/cpuinfo")));
            while ( true )
            {
            Line = v1.readLine();
            v3 = Line;
            if ( Line == null )
            break;
            if ( Line.toLowerCase().contains("serial") )
            {
            v4 = v3.split(":");
            v5 = v4;
            if ( v4.length == 2 && !v4[1].replace("0", "").trim().equals("") )
            v0 = (CharSequence)v5[1];
            }
            }
            v1.close();
            }
            catch ( Exception e )
            {
            v0 = "";
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            if ( TextUtils.isEmpty(v0) )
            return "";
            return (String)v0;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public static String retrieveDeviceCarrier()
    {
      String SimOperator;
      SimOperator = "";
      try
      {
        if ( SUtils.getContext() != null )
          SimOperator = ((android.telephony.TelephonyManager)SUtils.getContext().getSystemService("phone")).getSimOperator();
      }
      catch ( Exception e )
      {
        SimOperator = "";
      }
      if ( TextUtils.isEmpty(SimOperator) )
        return "";
      return SimOperator;
    }

    public static String retrieveDeviceCountry()
    {
      String SimCountryIso;
      SimCountryIso = "";
      if ( SUtils.getContext() != null )
      {
        try
        {
          SimCountryIso = ((android.telephony.TelephonyManager)SUtils.getContext().getSystemService("phone")).getSimCountryIso();
        }
        catch ( Exception e )
        {
          SimCountryIso = "";
        }
        if ( TextUtils.isEmpty(SimCountryIso) )
        {
          try
          {
            SimCountryIso = (SUtils.getContext().getResources().getConfiguration()).locale.getCountry();
          }
          catch ( Exception e )
          {
            SimCountryIso = "";
          }
        }
      }
      if ( TextUtils.isEmpty(SimCountryIso) )
      {
        try
        {
          SimCountryIso = Locale.getDefault().getCountry();
        }
        catch ( Exception e )
        {
          SimCountryIso = "";
        }
      }
      if ( TextUtils.isEmpty(SimCountryIso) )
        return "";
      return SimCountryIso;
    }

    public static String retrieveDeviceLanguage()
    {
      String Language;
      Language = "";
      try
      {
        if ( SUtils.getContext() != null )
          Language = (SUtils.getContext().getResources().getConfiguration()).locale.getLanguage();
      }
      catch ( Exception e )
      {
        Language = "";
      }
      if ( TextUtils.isEmpty(Language) )
      {
        try
        {
          Language = Locale.getDefault().getLanguage();
        }
        catch ( Exception e )
        {
          Language = "";
        }
      }
      if ( TextUtils.isEmpty(Language) )
        return "";
      return Language;
    }

    public static String retrieveDeviceRegion()
    {
      String v0;
      java.util.Locale v1;
      java.util.Locale Default;
      v0 = "";
      try
      {
        if ( SUtils.getContext() != null )
        {
          v1 = (SUtils.getContext().getResources().getConfiguration()).locale;
          v0 = v1.getLanguage() + "_" + v1.getCountry();
        }
      }
      catch ( Exception e )
      {
        v0 = "";
      }
      if ( TextUtils.isEmpty(v0) )
      {
        try
        {
          Default = Locale.getDefault();
          v0 = Default.getLanguage() + "_" + Default.getCountry();
        }
        catch ( Exception e )
        {
          v0 = "";
        }
      }
      if ( TextUtils.isEmpty(v0) )
        return "";
      return v0;
    }

    public static void setDeviceInfo()
    {
      if ( r == null )
      {
        try
        {
          r = (android.telephony.TelephonyManager)SUtils.getContext().getSystemService("phone");
        }
        catch ( Exception e )
        {
          r = null;
        }
      }
    }

    public final void a(String p0)
    {
      this.O = p0;
    }

    public final com.gameloft.android.GAND.GloftGGSS.billing.common.AServerInfo e()
    {
      return this.H;
    }

}
