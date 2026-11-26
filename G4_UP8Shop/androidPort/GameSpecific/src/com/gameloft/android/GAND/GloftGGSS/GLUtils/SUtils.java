// Decompiled from classes.dex (SourceFile: SUtils.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import android.content.Intent;
import android.content.pm.ApplicationInfo;
import android.provider.Settings;
import android.text.TextUtils;
import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
import com.gameloft.glads.vast.util.Assets;
import java.nio.charset.Charset;
import java.security.MessageDigest;
public class SUtils implements com.gameloft.android.GAND.GloftGGSS.GLUtils.Config {
    // Fields
    public static int A;
    public static int B;
    public static int C;
    private static android.content.Context D;
    private static com.gameloft.android.GAND.GloftGGSS.billing.common.LManager E;
    private static java.lang.String F;
    private static java.lang.String G;
    private static int H;
    private static int I;
    private static int J;
    private static int K;
    private static java.lang.String L;
    private static java.lang.String M;
    private static java.lang.String N;
    private static java.lang.String O;
    private static android.widget.Toast P;
    private static int[] Q;
    public static int t;
    public static int u;
    public static int v;
    public static int w;
    public static int x;
    public static int y;
    public static int z;

    // Methods
    static
    {
      D = null;
      E = null;
      F = null;
      G = null;
      P = null;
      Q = new int[4];
    }

    public SUtils()
    {
      super();
    }

    public static int CheckConnectionType()
    {
      int v0 = 0;
      int v2 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( D == null || hasConnectivity() == 0 )
            return 0;
            switch ( ((android.net.ConnectivityManager)D.getSystemService("connectivity")).getActiveNetworkInfo().getType() )
            {
            case 1:
            v2 = 1;
            break;
            case 6:
            v2 = 4 + 1;
            break;
            case 7:
            v2 = 2;
            break;
            case 8:
            v2 = 3;
            break;
            case 9:
            v2 = 4;
            break;
            default:
            v2 = -1;
            break;
            }
            if ( !(v2 == -1) ) { _pc = 1; continue _sm; }
            {
            switch ( ((android.telephony.TelephonyManager)D.getSystemService("phone")).getNetworkType() )
            {
            case 1:
            case 2:
            case 4:
            case 7:
            case 11:
            v0 = 6;
            break;
            case 3:
            case 5:
            case 6:
            case 8:
            case 9:
            case 10:
            case 12:
            case 14:
            case 15:
            v0 = 7;
            break;
            case 13:
            v0 = 8;
            break;
            default:
            { _pc = 1; continue _sm; }
            }
            }
            _pc = 2;
            continue _sm;
          case 1:
            v0 = (int)v2;
            _pc = 2;
            continue _sm;
          case 2:
            if ( v0 == 3 )
            return 9;
            return v0;
        }
      }
}

    public static String GetApkPath()
    {
      android.content.pm.ApplicationInfo ApplicationInfo;
      android.content.pm.PackageManager PackageManager; // RETVAL
    
      ApplicationInfo = null;
      PackageManager = getContext().getPackageManager();
      try
      {
        ApplicationInfo = PackageManager.getApplicationInfo("com.gameloft.android.GAND.GloftGGSS", 0);
        return ApplicationInfo.sourceDir;
      }
      catch ( Exception v3 )
      {
        v3.printStackTrace();
      }
      return ApplicationInfo.sourceDir;
    }

    public static String GetSerialKey()
    {
      String Line;
      try
      {
        Line = new java.io.BufferedReader(new java.io.InputStreamReader(getContext().getResources().openRawResource(4), Charset.forName("UTF-8"))).readLine();
        if ( Line == null )
          return "null";
        return Line;
      }
      catch ( Exception e )
      {
        return "null";
      }
    }

    public static String GetVirtualKeyboardText()
    {
      return VirtualKeyboard.GetVirtualKeyboardText();
    }

    public static void HideKeyboard()
    {
      VirtualKeyboard.HideKeyboard();
    }

    public static boolean IsKeyboardVisible()
    {
      return VirtualKeyboard.isKeyboardVisible();
    }

    public static String ReadFile(int p0)
    {
      java.io.InputStream v1; // RETVAL
      java.io.InputStream v2;
      java.io.ByteArrayOutputStream v3;
      int i;
      v1 = D.getResources().openRawResource(p0);
      v2 = v1;
      v3 = new java.io.ByteArrayOutputStream();
      try
      {
        for ( i = v1.read(); i != -1; i = v2.read() )
          v3.write(i);
        v2.close();
        return v3.toString();
      }
      catch ( java.io.IOException e )
      {
      }
      return v3.toString();
    }

    public static String ReadFile(String p0)
    {
      java.io.File v1;
      long v2; // RETVAL
      byte[] v3;
      java.io.FileInputStream v4;
      try
      {
        v1 = new java.io.File(p0);
        v2 = v1.length();
        v3 = new byte[((int)v2)];
        v4 = new java.io.FileInputStream(v1);
        v4.read(v3);
        v4.close();
        return new String(v3);
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static byte[] ReadFileByte(int p0)
    {
      java.io.InputStream v1; // RETVAL
      java.io.InputStream v2;
      java.io.ByteArrayOutputStream v3;
      int i;
      v1 = D.getResources().openRawResource(p0);
      v2 = v1;
      v3 = new java.io.ByteArrayOutputStream();
      try
      {
        for ( i = v1.read(); i != -1; i = v2.read() )
          v3.write(i);
        v2.close();
        return v3.toByteArray();
      }
      catch ( java.io.IOException e )
      {
      }
      return v3.toByteArray();
    }

    public static byte[] ReadFileByte(String p0)
    {
      java.io.File v1;
      long v2; // RETVAL
      byte[] v3;
      java.io.FileInputStream v4;
      try
      {
        v1 = new java.io.File(p0);
        v2 = v1.length();
        v3 = new byte[((int)v2)];
        v4 = new java.io.FileInputStream(v1);
        v4.read(v3);
        v4.close();
        return (byte[])v3;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static void ShowKeyboard(String p0, int p1)
    {
      VirtualKeyboard.ShowKeyboard(p0, p1);
    }

    public static boolean WriteFile(String p0, String p1)
    {
      java.io.File v2;
      java.io.FileOutputStream v3;
      java.io.OutputStreamWriter v4;
      try
      {
        v2 = new java.io.File(p0);
        if ( !v2.exists() )
        {
          new java.io.File(v2.getParent()).mkdirs();
          v2.createNewFile();
        }
      }
      catch ( Exception e )
      {
      }
      try
      {
        v3 = new java.io.FileOutputStream(p0);
        v4 = new java.io.OutputStreamWriter(v3);
        v4.append(p1);
        v4.flush();
        v4.close();
        v3.close();
        return true;
      }
      catch ( Exception e )
      {
      }
      return true;
    }

    public static boolean WriteFile(String p0, byte[] p1)
    {
      java.io.File v2;
      java.io.FileOutputStream v3;
      java.io.DataOutputStream v4;
      try
      {
        v2 = new java.io.File(p0);
        if ( !v2.exists() )
        {
          new java.io.File(v2.getParent()).mkdirs();
          v2.createNewFile();
        }
      }
      catch ( Exception e )
      {
      }
      try
      {
        v3 = new java.io.FileOutputStream(p0);
        v4 = new java.io.DataOutputStream(v3);
        v4.write(p1, 0, p1.length);
        v4.flush();
        v4.close();
        v3.close();
        return true;
      }
      catch ( Exception e )
      {
      }
      return true;
    }

    /* synthetic */ static android.widget.Toast access$000()
    {
      return P;
    }

    /* synthetic */ static android.widget.Toast access$002(android.widget.Toast p0)
    {
      P = p0;
      return p0;
    }

    public static void deleteFile(String p0)
    {
      java.io.File v1;
      v1 = new java.io.File(p0);
      if ( v1.exists() )
        v1.delete();
    }

    public static boolean genericUnzipArchive(String p0, String p1)
    {
      boolean v2;
      java.util.zip.ZipInputStream v3;
      byte[] v4;
      java.util.zip.ZipEntry NextEntry; // RETVAL
      java.util.zip.ZipEntry v6;
      String Name;
      java.io.FileOutputStream i;
      int v10; // RETVAL
    
      v2 = false;
      try
      {
        v3 = new java.util.zip.ZipInputStream(new java.io.BufferedInputStream(new java.io.FileInputStream(p0)));
        v4 = new byte[4096];
        while ( true )
        {
          NextEntry = v3.getNextEntry();
          v6 = NextEntry;
          if ( NextEntry == null )
            break;
          Name = NextEntry.getName();
          if ( v6.isDirectory() )
          {
            new java.io.File(p1 + Name).mkdirs();
          }
          else
          {
            for ( i = new java.io.FileOutputStream(p1 + Name); ; i.write(v4, 0, v10) )
            {
              v10 = v3.read(v4);
              if ( v10 == -1 )
                break;
            }
            i.close();
            v3.closeEntry();
          }
        }
        v3.close();
        return true;
      }
      catch ( java.io.IOException e )
      {
      }
      return v2;
    }

    public static byte[] getAssetAsString(String p0)
    {
      java.io.DataInputStream v1;
      byte[] v2;
      try
      {
        if ( p0.startsWith(".") )
          p0 = p0.substring(1);
        v1 = new java.io.DataInputStream(((android.app.Activity)getContext()).getAssets().open(p0, 2));
        v2 = new byte[v1.available()];
        v1.readFully(v2);
        v1.close();
        return (byte[])v2;
      }
      catch ( java.io.IOException v4 )
      {
        v4.printStackTrace();
        return null;
      }
    }

    public static android.content.Context getContext()
    {
      return D;
    }

    public static float getFreeSpace(String p0)
    {
      java.io.File v1;
      android.os.StatFs v2;
      try
      {
        if ( p0.contains("com.gameloft.android.GAND.GloftGGSS") )
        {
          v1 = new java.io.File(p0.substring(0, p0.indexOf("com.gameloft.android.GAND.GloftGGSS")));
        }
        else if ( p0 == "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files" )
        {
          v1 = new java.io.File("/sdcard/");
        }
        else
        {
          v1 = new java.io.File(p0);
        }
        if ( !v1.exists() )
          v1.mkdirs();
        v2 = new android.os.StatFs(v1.getAbsolutePath());
        return (float)(v2.getAvailableBlocks() * (long)v2.getBlockSize() / 1024);
      }
      catch ( Exception e )
      {
        return 0.0f;
      }
    }

    public static int[] getGLUID(String p0)
    {
      int[] v1;
      String v2;
      java.security.MessageDigest Instance;
      byte[] v4;
      v1 = new int[4];
      try
      {
        v2 = p0 + com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils.class.getPackage().getName().replace(".GLUtils", "");
        Instance = MessageDigest.getInstance("MD5");
        Instance.update(v2.getBytes());
        v4 = Instance.digest();
        v1[0] = getInt(v4, 0);
        v1[1] = getInt(v4, 4);
        v1[2] = getInt(v4, 8);
        v1[3] = getInt(v4, 12);
        return (int[])v1;
      }
      catch ( Exception v6 )
      {
        v6.printStackTrace();
      }
      return (int[])v1;
    }

    public static String getGameName()
    {
      String Package;
      try
      {
        Package = getPackage();
        if ( Package.indexOf("com.gameloft.android.") != -1 )
          return Package.substring(21);
        return Package;
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static String getInjectedIGP()
    {
      return "";
    }

    public static String getInjectedSerialKey()
    {
      return "";
    }

    public static int getInt(byte[] p0, int p1)
    {
      return ((((((int)p0[p1] << 8) + (int)p0[p1 + 1]) << 8) + (int)p0[p1 + 2]) << 8)
           + (int)p0[p1 + 3];
    }

    public static com.gameloft.android.GAND.GloftGGSS.billing.common.LManager getLManager()
    {
      if ( E == null )
        E = new com.gameloft.android.GAND.GloftGGSS.billing.common.LManager();
      return E;
    }

    public static String getMetaDataValue(String p0)
    {
      String v1;
      try
      {
        v1 = (getContext().getPackageManager().getApplicationInfo(getContext().getPackageName(), 128)).metaData.get(p0).toString();
        if ( TextUtils.isEmpty(v1) )
          return "";
        return v1;
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    public static String getOverriddenSetting(String p0, String p1)
    {
      java.io.Reader v2;
      java.io.BufferedReader v3;
      String Line; // RETVAL
      String v5;
      try
      {
        v2 = new java.io.FileReader(p0);
        v3 = new java.io.BufferedReader(v2);
        while ( true )
        {
          Line = v3.readLine();
          v5 = Line;
          if ( Line == null )
            break;
          if ( Line.startsWith(p1) )
          {
            v5 = v5.substring(v5.indexOf("=") + 1).trim();
            break;
          }
        }
        v3.close();
        v2.close();
        return v5;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static boolean getOverriddenSettingBoolean(String p0, String p1)
    {
      String OverriddenSetting; // RETVAL
      String v3;
      OverriddenSetting = getOverriddenSetting(p0, p1);
      v3 = OverriddenSetting;
      return OverriddenSetting != null && OverriddenSetting.length() > 0 && Boolean.valueOf(v3).booleanValue();
    }

    public static String getPackage()
    {
      return "com.gameloft.android.GAND.GloftGGSS";
    }

    public static boolean getPreferenceBoolean(String p0, boolean p1, String p2)
    {
      boolean v3;
      v3 = false;
      try
      {
        return getContext().getSharedPreferences(p2, 0).getBoolean(p0, p1);
      }
      catch ( Exception e )
      {
      }
      return v3;
    }

    public static int getPreferenceInt(String p0, int p1, String p2)
    {
      return getContext().getSharedPreferences(p2, 0).getInt(p0, p1);
    }

    public static long getPreferenceLong(String p0, long p1, String p3)
    {
      return Long.valueOf(getContext().getSharedPreferences(p3, 0).getLong(p0, p1)).longValue();
    }

    public static String getPreferenceString(String p0, String p1)
    {
      return getContext().getSharedPreferences(p1, 0).getString(p0, "");
    }

    public static String getPreferenceString(String p0, String p1, String p2)
    {
      return getContext().getSharedPreferences(p2, 0).getString(p0, p1);
    }

    public static java.io.InputStream getResourceAsStream(String p0)
    {
      android.content.res.AssetManager Assets; // RETVAL
      java.io.InputStream v2;
      Assets = D.getAssets();
      v2 = null;
      try
      {
        return Assets.open(p0);
      }
      catch ( java.io.IOException e )
      {
      }
      return v2;
    }

    public static String getSDFolder()
    {
      String PreferenceString;
      PreferenceString = getPreferenceString("SDFolder", GameInstaller.mPreferencesName);
      if ( PreferenceString == "" )
        return "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
      return PreferenceString;
    }

    public static String getSaveFolder()
    {
      try
      {
        return D.getFilesDir().toString();
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    protected static int getUniqueCode(int p0, int p1)
    {
      return (int)(new java.util.Random().nextDouble() * (double)(p1 - p0 + 1) + (double)p0);
    }

    public static String getVersionInstalled()
    {
      try
      {
        return (D.getPackageManager().getPackageInfo("com.gameloft.android.GAND.GloftGGSS", 128)).versionName;
      }
      catch ( Exception e )
      {
        return "1.8.2";
      }
    }

    public static int hasConnectivity()
    {
      android.net.ConnectivityManager v2;
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      if ( D == null )
        return 0;
      v2 = (android.net.ConnectivityManager)D.getSystemService("connectivity");
      if ( v2 == null )
        return 0;
      ActiveNetworkInfo = v2.getActiveNetworkInfo();
      return ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected() ? 1 : 0;
    }

    public static void inGameVideoOnPause()
    {
      ;
    }

    public static void inGameVideoOnResume()
    {
      ;
    }

    public static void inGameVideoSetSkipEnabled(boolean p0)
    {
      ;
    }

    public static void init()
    {
      nativeInit();
    }

    public static int initCheckConnectionType()
    {
      if ( D == null )
        return 0;
      NetworkStateReceiver.a = true;
      return CheckConnectionType();
    }

    public static boolean isAirplaneModeOn()
    {
      return Settings.System.getInt(D.getContentResolver(), "airplane_mode_on", 0) != 0;
    }

    protected static void logWindowMessage(android.content.Context p0, String p1)
    {
      ;
    }

    public static android.os.Bundle nativeGetPreference(android.os.Bundle p0)
    {
      int Int;
      String String;
      String v3;
      Int = p0.getInt("npDataType");
      String = p0.getString("npKey");
      v3 = p0.getString("npPrefName");
      switch ( Int )
      {
        case 0:
          p0.putInt("npResult", getPreferenceInt(String, p0.getInt("npDefaultValue"), v3));
          break;
        case 1:
          p0.putLong("npResult", getPreferenceLong(String, p0.getLong("npDefaultValue"), v3));
          break;
        case 2:
          p0.putBoolean("npResult", getPreferenceBoolean(String, p0.getBoolean("npDefaultValue"), v3));
          break;
        case 3:
          p0.putString("npResult", getPreferenceString(String, p0.getString("npDefaultValue"), v3));
          break;
        default:
          return p0;
      }
      return p0;
    }

    public static native void nativeInit();

    public static native void nativeSendKeyboardData(java.lang.String p0);

    public static void nativeSetPreference(android.os.Bundle p0)
    {
      int Int;
      String String;
      String v3;
      String v4;
      Int = p0.getInt("npDataType");
      String = p0.getString("npKey");
      v3 = p0.getString("npPrefName");
      v4 = null;
      switch ( Int )
      {
        case 0:
          v4 = String.valueOf(p0.getInt("npData"));
          break;
        case 1:
          v4 = String.valueOf(p0.getLong("npData"));
          break;
        case 2:
          v4 = String.valueOf(p0.getBoolean("npData"));
          break;
        case 3:
          v4 = new String(p0.getString("npData"));
          break;
        default:
          break;
      }
      setPreference(String, v4, v3);
    }

    protected static String[] objectArrayToStringArray(Object[] p0)
    {
      String[] v1;
      int i;
      v1 = new String[p0.length];
      for ( i = 0; i < v1.length; ++i )
        v1[i] = p0[i].toString();
      return v1;
    }

    public static native void onVideoFinished();

    public static boolean playVideo(String p0, boolean p1)
    {
      return false;
    }

    protected static String[] readTextFile(String p0, String p1)
    {
      String[] v2 = null;
      java.io.InputStream ResourceAsStream = null; // RETVAL
      java.io.InputStream v4 = null;
      byte[] v5 = null;
      String v6 = null;
      String v7 = null;
      java.util.Vector v8 = null;
      String v9 = null;
      int i = 0;
      char v11 = 0;
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
              v2 = null;
              ResourceAsStream = getResourceAsStream(p0);
              v4 = ResourceAsStream;
              _ehCatchPc = 7;
              v5 = new byte[ResourceAsStream.available()];
              v4.read(v5);
              v6 = new String(v5, p1);
              _ehCatchPc = 1;
              v4.close();
              v7 = v6;
              _ehCatchPc = 7;
              _pc = 6;
              continue _sm;
            case 1:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 3; continue _sm; }
              _pc = 2;
              continue _sm;
            case 2:
              v7 = v6;
              _pc = 6;
              continue _sm;
            case 3:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              _pc = 4;
              continue _sm;
            case 4:
              v7 = v6;
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = -1;
              _pc = 10;
              continue _sm;
            case 7:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 8; continue _sm; }
              v6 = null;
              _pc = 2;
              continue _sm;
            case 8:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              v6 = null;
              _pc = 4;
              continue _sm;
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              if ( v7 != null )
              {
              v8 = new java.util.Vector();
              v9 = "";
              for ( i = 0; i < v7.length(); ++i )
              {
              v11 = v7.charAt(i);
              if ( v11 == 10 )
              {
              v8.addElement(v9);
              v9 = "";
              }
              else
              {
              v9 = v9 + v11;
              }
              }
              v2 = new String[v8.size()];
              v8.copyInto(v2);
              }
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

    public static void release()
    {
      D = null;
    }

    public static boolean removeDirectoryRecursively(String p0)
    {
      return removeFileDirectoryRecursively(new java.io.File(p0));
    }

    public static boolean removeFileDirectoryRecursively(java.io.File p0)
    {
      java.io.File[] v1;
      int i;
      if ( !p0.exists() )
        return p0.delete();
      v1 = p0.listFiles();
      if ( v1 != null )
      {
        for ( i = 0; i < v1.length; ++i )
        {
          if ( v1[i].isDirectory() )
            SUtils.removeFileDirectoryRecursively(v1[i]);
          else
            v1[i].delete();
        }
        return p0.delete();
      }
      return true;
    }

    public static void removePreference(String p0, String p1)
    {
      android.content.SharedPreferences.Editor v2;
      v2 = getContext().getSharedPreferences(p1, 0).edit();
      v2.remove(p0);
      v2.commit();
    }

    public static int[] retrieveBarrels()
    {
      int v0;
      int v1;
      android.content.pm.Signature[] v2;
      v0 = 4;
      v1 = 0;
      Q[3] = 0;
      Q[2] = 0;
      Q[1] = 0;
      Q[0] = 0;
      try
      {
        if ( getContext() == null )
          return Q;
        v2 = (getContext().getPackageManager().getPackageInfo(getContext().getPackageName(), 64)).signatures;
        if ( v2.length < 4 )
          v0 = v2.length;
        while ( v1 < v0 )
        {
          Q[v1] = v2[v1].hashCode();
          ++v1;
        }
        return Q;
      }
      catch ( Exception e )
      {
      }
      return Q;
    }

    public static void runOnUiThread(Runnable p0)
    {
      ((android.app.Activity)getContext()).runOnUiThread(p0);
    }

    public static void setAirplaneMode(boolean p0)
    {
      boolean v1; // RETVAL
      android.content.Intent v2;
      android.content.Intent v3;
      v1 = isAirplaneModeOn();
      if ( (!v1 || !p0) && (v1 || p0) )
      {
        if ( !v1 || p0 )
        {
          if ( !v1 && p0 )
          {
            Settings.System.putInt(D.getContentResolver(), "airplane_mode_on", 1);
            v3 = new android.content.Intent("android.intent.action.AIRPLANE_MODE");
            v3.putExtra("state", 1);
            D.sendBroadcast(v3);
          }
        }
        else
        {
          Settings.System.putInt(D.getContentResolver(), "airplane_mode_on", 0);
          v2 = new android.content.Intent("android.intent.action.AIRPLANE_MODE");
          v2.putExtra("state", 0);
          D.sendBroadcast(v2);
        }
      }
    }

    public static void setContext(android.content.Context p0)
    {
      D = p0;
    }

    public static void setOverriddenSetting(String p0, String p1, String p2)
    {
      int v3 = 0;
      java.io.Reader v4 = null;
      java.io.BufferedReader v5 = null;
      String Line = null; // RETVAL
      String v7 = null;
      String v8 = null;
      java.io.FileWriter v9 = null;
      java.io.BufferedWriter v10 = null;
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
              v3 = 1;
              _ehCatchPc = 2;
              v4 = new java.io.FileReader(p0);
              v5 = new java.io.BufferedReader(v4);
              while ( true )
              {
              Line = v5.readLine();
              v7 = Line;
              if ( Line == null )
              break;
              if ( Line.startsWith(p1) )
              {
              v8 = v7.substring(0, v7.indexOf("=") + 1).trim();
              { _pc = 1; continue _sm; }
              }
              }
              v3 = 0;
              v8 = null;
              _pc = 1;
              continue _sm;
            case 1:
              v5.close();
              v4.close();
              if ( v8 != null )
              v9 = new java.io.FileWriter(p0);
              else
              v9 = new java.io.FileWriter(p0, true);
              v10 = new java.io.BufferedWriter(v9);
              while ( v3 >= 0 )
              {
              v10.newLine();
              --v3;
              }
              v10.write(p1 + "=" + p2);
              v10.close();
              v9.close();
              _ehCatchPc = -1;
              _pc = 4;
              continue _sm;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              _pc = 4;
              continue _sm;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              return;
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

    public static void setPreference(String p0, Object p1, String p2)
    {
      android.content.SharedPreferences.Editor v3; // RETVAL
      android.content.SharedPreferences.Editor v4;
      v3 = getContext().getSharedPreferences(p2, 0).edit();
      v4 = v3;
      if ( p1 instanceof String )
      {
        v3.putString(p0, (String)p1);
      }
      else if ( p1 instanceof Integer )
      {
        v3.putInt(p0, ((Integer)p1).intValue());
      }
      else if ( p1 instanceof Boolean )
      {
        v3.putBoolean(p0, ((Boolean)p1).booleanValue());
      }
      else if ( p1 instanceof Long )
      {
        v3.putLong(p0, ((Long)p1).longValue());
      }
      v4.commit();
    }

    public static void shareInfo(String p0, String p1, String p2)
    {
      android.content.Intent v3;
      v3 = new android.content.Intent("android.intent.action.SEND");
      v3.setType("text/plain");
      v3.putExtra("android.intent.extra.SUBJECT", p0);
      v3.putExtra("android.intent.extra.TEXT", p1);
      if ( D != null )
        D.startActivity(Intent.createChooser(v3, p2));
    }

    public static void showCantGoBackPopup(int p0)
    {
      if ( getContext() != null )
        new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.j(p0)).start();
    }

    public static void stopVideo()
    {
      ;
    }

}
