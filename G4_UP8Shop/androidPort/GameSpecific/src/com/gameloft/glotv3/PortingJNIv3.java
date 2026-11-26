// Decompiled from classes.dex (SourceFile: PortingJNIv3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glotv3;

import android.os.Build;
import android.os.SystemClock;
import android.provider.Settings;
import java.util.Locale;
public class PortingJNIv3 {
    // Fields
    private static java.lang.String a;
    private static android.content.Context b;
    private static int[] c;

    // Methods
    static
    {
      b = null;
      c = new int[4];
    }

    public PortingJNIv3()
    {
      super();
    }

    public static int[] GetBarrels()
    {
      int v0;
      int v1;
      android.content.pm.Signature[] v2;
      v0 = 4;
      v1 = 0;
      c[3] = 0;
      c[2] = 0;
      c[1] = 0;
      c[0] = 0;
      try
      {
        if ( b == null )
          return c;
        v2 = (b.getPackageManager().getPackageInfo(b.getPackageName(), 64)).signatures;
        if ( v2.length < 4 )
          v0 = v2.length;
        while ( v1 < v0 )
        {
          c[v1] = v2[v1].hashCode();
          ++v1;
        }
        return c;
      }
      catch ( Exception e )
      {
      }
      return c;
    }

    public static void Init(android.content.Context p0)
    {
      b = p0;
    }

    public static String getAndroidID()
    {
      String String; // RETVAL
      String v1;
      if ( b == null )
        return null;
      String = Settings.Secure.getString(b.getContentResolver(), "android_id");
      v1 = String;
      if ( String == null || String.length() <= 0 )
        return null;
      return v1;
    }

    public static String getCPUSerial()
    {
      String v0;
      String[] v1;
      java.lang.Process v2;
      java.io.InputStream InputStream;
      byte[] v4;
      String[] v5;
      int i;
      v0 = null;
      try
      {
        v1 = new String[2];
        v1[0] = "/system/bin/cat";
        v1[1] = "/proc/cpuinfo";
        v2 = new ProcessBuilder(v1).start();
        InputStream = v2.getInputStream();
        v4 = new byte[1024];
        while ( InputStream.read(v4) != -1 )
        {
          v5 = new String(v4).split("\n|:");
          for ( i = 0; i < v5.length; ++i )
          {
            if ( v5[i].trim().equals("Serial") && v5[i + 1] != null && !v5[i + 1].replace("0", "").trim().equals("") )
              v0 = v5[i + 1];
          }
        }
        InputStream.close();
        v2.destroy();
        return v0;
      }
      catch ( Exception e )
      {
      }
      return v0;
    }

    public static String getDeviceCarrier()
    {
      String SimOperator; // RETVAL
      String v1;
      try
      {
        if ( b == null )
          return "0";
        SimOperator = ((android.telephony.TelephonyManager)b.getSystemService("phone")).getSimOperator();
        v1 = SimOperator;
        if ( SimOperator == null || SimOperator.isEmpty() )
          return "0";
        return v1;
      }
      catch ( Exception e )
      {
      }
      return "0";
    }

    public static String getDeviceCountry()
    {
      String SimCountryIso; // RETVAL
      String v1;
      String Country; // RETVAL
      String v4; // RETVAL
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            if ( b != null )
            {
            try
            {
            SimCountryIso = ((android.telephony.TelephonyManager)b.getSystemService("phone")).getSimCountryIso();
            v1 = SimCountryIso;
            if ( SimCountryIso == null || SimCountryIso.isEmpty() )
            {
            Country = (b.getResources().getConfiguration()).locale.getCountry();
            v1 = Country;
            if ( Country == null || Country.isEmpty() )
            { _pc = 1; continue _sm; }
            }
            return v1;
            }
            catch ( Exception e )
            {
            }
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v4 = Locale.getDefault().getCountry();
            v1 = v4;
            if ( v4 == null || v4.isEmpty() )
            return "XX";
            return v1;
            
          }
          default: throw new IllegalStateException("Unreachable");
        }
      }
    }

    public static String getDeviceFirmware()
    {
      return Build.VERSION.RELEASE;
    }

    public static String getDeviceLanguage()
    {
      android.content.Context v0 = null;
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
              v0 = b;
              if ( v0 != null )
              {
              if ( Locale.getDefault().toString().equals("zh_TW") )
              return "zt";
              else
              return (b.getResources().getConfiguration()).locale.getLanguage();
              }
              _pc = 1;
              continue _sm;
            case 1:
              try
              {
              if ( !Locale.getDefault().toString().equals("zh_TW") )
              return Locale.getDefault().getLanguage();
              v1 = "zt";
              }
              catch ( Exception e )
              {
              return "XX";
              }
              
              return v1;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _pc = 1;
              continue _sm;
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

    public static String getDeviceName()
    {
      return Build.MANUFACTURER + " " + Build.MODEL;
    }

    public static String getDeviceRegion()
    {
      android.content.Context v0 = null;
      java.util.Locale v1 = null;
      java.util.Locale Default = null;
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
              v0 = b;
              if ( v0 != null )
              {
              v1 = (b.getResources().getConfiguration()).locale;
              return v1.getLanguage() + "_" + v1.getCountry();
              }
              _pc = 1;
              continue _sm;
            case 1:
              try
              {
              Default = Locale.getDefault();
              return Default.getLanguage() + "_" + Default.getCountry();
              }
              catch ( Exception e )
              {
              return "XX_XX";
              }
              



            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              _pc = 1;
              continue _sm;
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

    public static String getIdentifier()
    {
      String AndroidID;
      AndroidID = getAndroidID();
      if ( AndroidID == null )
      {
        AndroidID = getSerial();
        if ( AndroidID == null )
        {
          AndroidID = getSerialNo();
          if ( AndroidID == null )
          {
            AndroidID = getCPUSerial();
            if ( AndroidID == null )
            {
              AndroidID = getMac();
              if ( AndroidID == null )
                return "Undefined";
            }
          }
        }
      }
      return AndroidID;
    }

    public static String getMac()
    {
      String MacAddress; // RETVAL
      String v1;
      try
      {
        if ( b == null )
          return "00:00:00:00:00:00";
        MacAddress = ((android.net.wifi.WifiManager)b.getSystemService("wifi")).getConnectionInfo().getMacAddress();
        v1 = MacAddress;
        if ( MacAddress == null || MacAddress.length() <= 0 )
          return "00:00:00:00:00:00";
        return v1;
      }
      catch ( Exception e )
      {
      }
      return "00:00:00:00:00:00";
    }

    public static String getSerial()
    {
      String v0;
      if ( Build.VERSION.SDK_INT < 9 )
        v0 = null;
      else
        v0 = Build.SERIAL;
      if ( v0 == null || v0.equals("unknown") )
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
        if ( v4 == null || v4.length() <= 0 || v4.equals("unknown") )
          return null;
        return v4;
      }
      catch ( Exception e )
      {
      }
      return null;
    }

    public static long getSystemUpTimeMillis()
    {
      return SystemClock.elapsedRealtime();
    }

}
