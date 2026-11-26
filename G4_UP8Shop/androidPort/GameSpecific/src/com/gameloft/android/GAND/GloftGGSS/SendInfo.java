// Decompiled from classes.dex (SourceFile: SendInfo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.os.Build;
import android.provider.Settings;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
import java.security.MessageDigest;
import java.util.Locale;
public class SendInfo {
    // Fields
    public static android.content.Context a;
    public static java.lang.String b;
    public static java.lang.String c;
    public static java.lang.String d;
    public static java.lang.String e;
    private static java.util.List f;

    // Methods
    static
    {
      a = null;
      f = null;
    }

    public SendInfo()
    {
      super();
    }

    private static java.util.List<String> collectPackageNames(java.util.List<android.content.pm.PackageInfo> p0)
    {
      java.util.List v1;
      java.util.Iterator i;
      v1 = new java.util.ArrayList();
      for ( i = p0.iterator();
            i.hasNext();
            v1.add(((android.content.pm.PackageInfo)i.next()).packageName) )
      {
        ;
      }
      return v1;
    }

    private static String generateRandomNumber()
    {
      byte[] v0;
      String RandomFromOtherApps;
      java.util.Random v3;
      int i;
      int v5;
      byte v6;
      v0 = new byte[16];
      RandomFromOtherApps = getRandomFromOtherApps();
      if ( RandomFromOtherApps.equals("") )
      {
        v3 = new java.util.Random(System.currentTimeMillis());
        for ( i = 0; i < 16; ++i )
        {
          v5 = v3.nextInt() % 16;
          if ( v5 < 0 )
            v5 = -v5;
          if ( v5 >= 10 )
            v6 = (byte)(v5 - 10 + 65);
          else
            v6 = (byte)(v5 + 48);
          v0[i] = v6;
        }
        RandomFromOtherApps = new String(v0);
        savePreference("GLU", RandomFromOtherApps, "GLDID");
      }
      return RandomFromOtherApps;
    }

    public static String getAndroidID()
    {
      String String; // RETVAL
      String v1;
      String = Settings.Secure.getString(a.getApplicationContext().getContentResolver(), "android_id");
      v1 = String;
      if ( String == null || String.equals("9774d56d682e549c") )
        return null;
      if ( v1.length() < 15 )
        return null;
      return v1;
    }

    private static String getAndroidIndentification()
    {
      String IMEI;
      IMEI = getIMEI();
      if ( IMEI == null )
      {
        IMEI = getAndroidID();
        if ( IMEI == null )
        {
          IMEI = getSerial();
          if ( IMEI == null )
          {
            IMEI = getSerialNo();
            if ( IMEI == null )
            {
              IMEI = getCPUSerial();
              if ( IMEI == null )
                return generateRandomNumber();
            }
          }
        }
      }
      return IMEI;
    }

    public static String getCPUSerial()
    {
      String[] v0;
      java.io.InputStream InputStream;
      byte[] v2;
      String[] v3;
      int i;
      try
      {
        v0 = new String[2];
        v0[0] = "/system/bin/cat";
        v0[1] = "/proc/cpuinfo";
        InputStream = new ProcessBuilder(v0).start().getInputStream();
        v2 = new byte[1024];
        while ( InputStream.read(v2) != -1 )
        {
          v3 = new String(v2).split("\n|:");
          for ( i = 0; i < v3.length; ++i )
          {
            if ( v3[i].trim().equals("Serial") && v3[i + 1] != null && !v3[i + 1].replace("0", "").trim().equals("") )
              return v3[i + 1];
          }
        }
        InputStream.close();
        return null;
      }
      catch ( Exception v7 )
      {
        v7.printStackTrace();
      }
      return null;
    }

    public static String getCurrentRuntimeValue()
    {
      Class v0; // RETVAL
      Object v1;
      Class[] v2;
      java.lang.reflect.Method Method; // RETVAL
      String v4;
      Object[] v6;
      try
      {
        v0 = Class.forName("android.os.SystemProperties");
        v1 = v0;
        try
        {
          v2 = new Class[2];
          v2[0] = String.class;
          v2[1] = String.class;
          Method = v0.getMethod("get", v2);
          if ( Method == null )
            return "Unknown";
          try
          {
            v6 = new Object[2];
            v6[0] = "persist.sys.dalvik.vm.lib";
            v6[1] = "Dalvik";
            v4 = (String)Method.invoke(v1, v6);
            if ( Character.getNumericValue(System.getProperty("java.vm.version").charAt(0)) <= 1 )
            {
              if ( "libdvm.so".equals(v4) )
              {
                v4 = "Dalvik";
              }
              else if ( "libart.so".equals(v4) )
              {
                v4 = "ART";
              }
              else if ( "libartd.so".equals(v4) )
              {
                v4 = "ART_DEBUG";
              }
            }
            else
            {
              v4 = "ART_JVM_V2";
            }
          }
          catch ( IllegalAccessException e )
          {
            return "IllegalAccessException";
          }
          catch ( IllegalArgumentException e )
          {
            return "IllegalArgumentException";
          }
          catch ( java.lang.reflect.InvocationTargetException e )
          {
            return "InvocationTargetException";
          }
        }
        catch ( NoSuchMethodException e )
        {
          return "SystemProperties.get(String key, String def) method is not found";
        }
      }
      catch ( ClassNotFoundException e )
      {
        return "SystemProperties class is not found";
      }
      return v4;
    }

    public static String getGLDID()
    {
      return getAndroidIndentification();
    }

    public static int[] getGLUID()
    {
      int[] v0;
      String v1;
      java.security.MessageDigest Instance;
      byte[] v3;
      v0 = new int[4];
      try
      {
        v1 = getGLDID() + com.gameloft.android.GAND.GloftGGSS.SendInfo.class.getPackage().getName();
        Instance = MessageDigest.getInstance("MD5");
        Instance.update(v1.getBytes());
        v3 = Instance.digest();
        v0[0] = getInt(v3, 0);
        v0[1] = getInt(v3, 4);
        v0[2] = getInt(v3, 8);
        v0[3] = getInt(v3, 12);
        return (int[])v0;
      }
      catch ( Exception v5 )
      {
        v5.printStackTrace();
      }
      return (int[])v0;
    }

    public static String getIMEI()
    {
      String DeviceId = null; // RETVAL
      String v1 = null;
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
              DeviceId = ((android.telephony.TelephonyManager)a.getApplicationContext().getSystemService("phone")).getDeviceId();
              v1 = DeviceId;
              try
              {
              if ( Integer.parseInt(DeviceId) != 0 )
              { _pc = 1; continue _sm; }
              return null;
              }
              catch ( Exception e )
              {
              }
              
              _pc = 1;
              continue _sm;
            case 1:
              if ( v1.length() >= 5 )
              return v1;
              return null;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              return null;
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

    public static int getInt(byte[] p0, int p1)
    {
      return ((((((int)p0[p1] << 8) + (int)p0[p1 + 1]) << 8) + (int)p0[p1 + 2]) << 8)
           + (int)p0[p1 + 3];
    }

    public static String getLocaleCountry()
    {
      String SimCountryIso; // RETVAL
      String Country;
      if ( a == null )
        return "";
      try
      {
        SimCountryIso = ((android.telephony.TelephonyManager)a.getSystemService("phone")).getSimCountryIso();
        Country = SimCountryIso;
        if ( SimCountryIso != null && !SimCountryIso.isEmpty() )
          return Country;
        Country = Locale.getDefault().getCountry();
        if ( Country != null )
          return Country;
      }
      catch ( Exception e )
      {
      }
      Country = Locale.getDefault().getCountry();
      if ( Country == null )
        return "";
      return Country;
    }

    public static String getLocaleLanguage()
    {
      if ( a == null )
        return "";
      if ( Locale.getDefault().toString().equals("zh_TW") )
        return "zt";
      return Locale.getDefault().getLanguage();
    }

    public static String getMacAddress()
    {
      android.content.Context v0;
      android.net.wifi.WifiManager v1;
      String MacAddress;
      android.net.wifi.WifiInfo ConnectionInfo; // RETVAL
    
      v0 = a;
      if ( v0 == null )
        return "";
      try
      {
        v1 = (android.net.wifi.WifiManager)a.getApplicationContext().getSystemService("wifi");
        if ( v1 != null )
        {
          ConnectionInfo = v1.getConnectionInfo();
          if ( ConnectionInfo != null )
          {
            MacAddress = ConnectionInfo.getMacAddress();
            if ( MacAddress == null )
              return "";
          }
          else
          {
            return "";
          }
        }
        else
        {
          return "";
        }
        return MacAddress;
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static String getManufacturerModel()
    {
      return Build.MANUFACTURER + "_" + Build.MODEL;
    }

    private static java.util.ArrayList<String> getPackages()
    {
      java.util.ArrayList v0;
      java.util.List InstalledPackages;
      int i;
      android.content.pm.PackageInfo v3;
      String v4;
      v0 = new java.util.ArrayList();
      InstalledPackages = a.getPackageManager().getInstalledPackages(0);
      for ( i = 0; i < InstalledPackages.size(); ++i )
      {
        v3 = (android.content.pm.PackageInfo)InstalledPackages.get(i);
        if ( v3.versionName != null )
        {
          v4 = v3.packageName;
          if ( v4.startsWith("com.gameloft") )
            v0.add(v4);
        }
      }
      return v0;
    }

    private static java.util.List<android.content.pm.PackageInfo> getPackages1()
    {
      return a.getPackageManager().getInstalledPackages(0);
    }

    public static String getPhoneCarrier()
    {
      try
      {
        if ( a == null )
          return "";
        return ((android.telephony.TelephonyManager)a.getSystemService("phone")).getSimOperator();
      }
      catch ( Exception e )
      {
      }
      return "";
    }

    private static int getPreferenceInt(String p0, String p1, int p2)
    {
      return a.getSharedPreferences(p0, 1).getInt(p1, p2);
    }

    private static long getPreferenceLong(String p0, String p1, long p2)
    {
      return a.getSharedPreferences(p0, 1).getLong(p1, p2);
    }

    private static String getPreferenceString(String p0, String p1, String p2)
    {
      return a.getSharedPreferences(p0, 1).getString(p1, p2);
    }

    private static String getRandomFromOtherApps()
    {
      java.util.ArrayList Packages;
      String PreferenceString;
      Packages = getPackages();
      a.getSharedPreferences("GLU", 1);
      PreferenceString = getPreferenceString("GLU", "GLDID", "");
      if ( PreferenceString.equals("") )
      {
        PreferenceString = getSavedInOtherPreferences("GLU", Packages, "GLDID");
        if ( PreferenceString.equals("") )
          return "";
        else
          savePreference("GLU", PreferenceString, "GLDID");
      }
      return PreferenceString;
    }

    public static String getSDFolder()
    {
      String PreferenceString;
      PreferenceString = SUtils.getPreferenceString("SDFolder", GameInstaller.mPreferencesName);
      if ( PreferenceString.isEmpty() )
        return "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
      return PreferenceString;
    }

    public static String getSaveFolder()
    {
      try
      {
        return a.getFilesDir().toString();
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    private static String getSavedInOtherPreferences(String p0, java.util.ArrayList<String> p1, String p2)
    {
      String v3 = null;
      int v4 = 0;
      int v5 = 0;
      int i = 0;
      String String = null; // RETVAL
      String v8 = null;
      Exception v10 = null;
      Exception v12 = null;
      Exception _cv_1 = null;
      Exception _cv_2 = null;
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
              v3 = "";
              v4 = p1.size();
              v5 = 0;
              i = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( !(i < v4) ) { _pc = 10; continue _sm; }
              _ehCatchPc = 6;
              String = a.createPackageContext((String)p1.get(i), 2).getSharedPreferences(p0, 1).getString(p2, "");
              v8 = String;
              _ehCatchPc = 2;
              if ( !String.equals("") )
              return v8;
              _ehCatchPc = 6;
              _pc = 5;
              continue _sm;
            case 2:
              _ehCatchPc = 6;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 4; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              v10 = _cv_1;
              _pc = 3;
              continue _sm;
            case 3:
              v10.printStackTrace();
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _ehCatchPc = -1;
              _pc = 8;
              continue _sm;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 7; continue _sm; }
              _cv_2 = (Exception)_ehCaught;
              v12 = _cv_2;
              v8 = v3;
              v10 = v12;
              _pc = 3;
              continue _sm;
            case 7:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              v3 = v8;
              _pc = 9;
              continue _sm;
            case 9:
              ++i;
              _pc = 1;
              continue _sm;
            case 10:
              return v3;
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

    public static String getSerial()
    {
      String v0;
      if ( Build.VERSION.SDK_INT < 9 )
        v0 = null;
      else
        v0 = Build.SERIAL;
      if ( v0 == null || v0.length() < 5 )
        return null;
      if ( "unknown".equals(v0) )
        return null;
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
        if ( v4 != null && v4.length() >= 5 )
        {
          if ( !"unknown".equals(v4) )
            return v4;
          return null;
        }
        return null;
      }
      catch ( Exception e )
      {
      }
      return null;
    }

    public static native void initMethods();

    public static boolean isAppInstalled(String p0)
    {
      if ( f == null )
        f = collectPackageNames(getPackages1());
      return f.contains(p0);
    }

    private static void savePreference(String p0, String p1, Object p2)
    {
      android.content.SharedPreferences.Editor v3; // RETVAL
      android.content.SharedPreferences.Editor v4;
      v3 = a.getSharedPreferences(p0, 1).edit();
      v4 = v3;
      if ( p2 instanceof String )
      {
        v3.putString(p1, (String)p2);
      }
      else if ( p2 instanceof Integer )
      {
        v3.putInt(p1, ((Integer)p2).intValue());
      }
      else if ( p2 instanceof Boolean )
      {
        v3.putBoolean(p1, ((Boolean)p2).booleanValue());
      }
      else if ( p2 instanceof Long )
      {
        v3.putLong(p1, ((Long)p2).longValue());
      }
      v4.commit();
    }

    public static void setContext(android.content.Context p0)
    {
      a = p0;
      initMethods();
    }

}
