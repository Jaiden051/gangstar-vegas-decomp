// Decompiled from classes.dex (SourceFile: Game.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.app.PendingIntent;
import android.net.NetworkInfo;
import android.opengl.GLES10;
import android.os.Build;
import android.os.Environment;
import android.os.Process;
import android.provider.Settings;
import android.view.InputDevice;
import android.view.MotionEvent;
import com.bda.controller.Controller;
import com.gameloft.GLSocialLib.PlatformAndroid;
import com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Encrypter;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.LowProfileListener;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Tracking;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.controller.StandardHIDController;
import com.gameloft.android.GAND.GloftGGSS.PushNotification.SimplifiedAndroidUtils;
import com.gameloft.android.GAND.GloftGGSS.iab.InAppBilling;
import com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller;
import com.gameloft.android.hdidfv.HDIDFV;
import com.gameloft.glads.GLAds;
import com.gameloft.glads.vast.util.Assets;
import com.gameloft.glotv3.PortingJNIv3;
import java.io.File;
import java.util.Collections;
import java.util.Locale;
import java.util.UUID;
public class Game extends android.support.v4.app.FragmentActivity implements com.gameloft.android.GAND.GloftGGSS.GLUtils.r {
    // Fields
    static boolean B;
    static boolean C;
    static boolean D;
    static android.widget.LinearLayout E;
    static android.widget.LinearLayout F;
    static int G;
    static java.lang.String H;
    static boolean I;
    public static int J;
    public static int K;
    static com.gameloft.android.GAND.GloftGGSS.Keyboard M;
    public static int P;
    public static int Q;
    public static int R;
    public static int S;
    public static android.app.KeyguardManager T;
    public static boolean U;
    static android.os.PowerManager.WakeLock V;
    public static android.widget.RelativeLayout W;
    public static int X;
    public static int Y;
    static android.content.IntentFilter Z;
    public static java.lang.String aE;
    public static java.lang.String aF;
    public static java.lang.String aG;
    public static java.lang.String aH;
    public static com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib aI;
    public static boolean aJ;
    public static int aK;
    public static java.lang.String aL;
    public static java.lang.String aM;
    public static java.lang.String aN;
    public static java.lang.String aO;
    public static java.lang.String aP;
    public static java.lang.String aQ;
    public static java.lang.String aR;
    public static float aS;
    public static float aT;
    public static java.lang.String aU;
    public static int aV;
    public static int aW;
    public static float aZ;
    static java.lang.String ab;
    public static boolean ac;
    public static boolean ad;
    public static java.util.ArrayList aq;
    public static int ar;
    public static boolean as;
    public static int at;
    public static int au;
    public static boolean av;
    static boolean aw;
    public static boolean ax;
    public static boolean ay;
    public static com.gameloft.android.GAND.GloftGGSS.Game az;
    private static int bA;
    private static int bB;
    private static android.net.NetworkInfo bC;
    private static boolean bD;
    private static boolean bF;
    private static android.hardware.SensorManager bG;
    private static float bH;
    private static float bI;
    private static float bJ;
    private static boolean bK;
    private static int bL;
    private static boolean bM;
    private static final android.hardware.SensorEventListener bN;
    private static android.net.ConnectivityManager bO;
    private static int bP;
    private static int bQ;
    private static int bR;
    private static int bS;
    private static android.net.wifi.WifiManager bU;
    private static boolean bV;
    private static boolean bW;
    private static com.gameloft.GLSocialLib.PlatformAndroid bX;
    private static com.bda.controller.Controller bY;
    public static float ba;
    public static int bb;
    public static int bc;
    public static int bd;
    public static int be;
    public static int bf;
    public static int bg;
    public static int bh;
    public static int bi;
    public static int bj;
    public static int bk;
    public static int bl;
    public static int bm;
    public static int bn;
    public static int bo;
    static boolean bp;
    public static java.lang.String[] br;
    private static boolean bu;
    private static boolean bv;
    private static boolean bw;
    private static boolean bx;
    private static int by;
    private static int bz;
    public static boolean t;
    public static boolean u;
    static boolean v;
    static boolean w;
    static boolean y;
    static int z;
    boolean A;
    java.util.Timer L;
    android.widget.FrameLayout N;
    com.gameloft.android.GAND.GloftGGSS.gEditText O;
    com.gameloft.android.GAND.GloftGGSS.GL2JNIView aA;
    public boolean aB;
    public boolean aC;
    public boolean aD;
    com.gameloft.android.GAND.GloftGGSS.aw aX;
    com.gameloft.android.GAND.GloftGGSS.aw aY;
    public android.content.res.AssetManager aa;
    boolean ae;
    boolean af;
    boolean ag;
    boolean ah;
    boolean ai;
    boolean aj;
    boolean ak;
    boolean al;
    boolean am;
    boolean an;
    int ao;
    int ap;
    private final android.content.BroadcastReceiver bE;
    private boolean bT;
    final com.gameloft.android.GAND.GloftGGSS.av bq;
    boolean bs;
    public android.os.Handler bt;
    public com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard q;
    public android.widget.RelativeLayout r;
    public boolean s;
    public boolean x;

    // Methods
    static
    {
      android.content.IntentFilter v0;
      String[] v1;
      bu = false;
      t = false;
      u = false;
      v = false;
      w = false;
      y = false;
      z = 0;
      bv = false;
      bw = false;
      C = false;
      D = false;
      F = null;
      G = 0;
      I = true;
      bx = false;
      by = -1;
      bz = -1;
      bA = -1;
      bB = -1;
      P = 0;
      T = null;
      U = false;
      v0 = new android.content.IntentFilter();
      Z = v0;
      v0.addAction("android.intent.action.USER_PRESENT");
      Z.addAction("android.intent.action.TIME_SET");
      Z.addAction("android.intent.action.HDMI_PLUG");
      Z.addAction("android.intent.action.HDMI_PLUGGED");
      Z.addAction("android.intent.action.LOCALE_CHANGED");
      ab = "";
      bF = false;
      bN = (android.hardware.SensorEventListener)new com.gameloft.android.GAND.GloftGGSS.af();
      ac = false;
      ad = false;
      aq = new java.util.ArrayList();
      ar = 0;
      as = false;
      at = 0;
      au = -1;
      av = false;
      aw = false;
      ax = false;
      ay = false;
      aE = "";
      aF = "";
      aG = "";
      aH = "";
      bV = false;
      bW = false;
      aJ = false;
      aK = 0;
      aL = "";
      aM = "";
      aN = "";
      aO = "";
      aP = "";
      aQ = "";
      aR = "";
      aS = 0.0f;
      aT = 0.0f;
      aU = "";
      aW = 0;
      aZ = 0.0f;
      ba = 0.0f;
      v1 = new String[13];
      v1[0] = "EN";
      v1[1] = "FR";
      v1[2] = "DE";
      v1[3] = "ES";
      v1[4] = "IT";
      v1[5] = "JA";
      v1[6] = "KO";
      v1[7] = "ZH";
      v1[8] = "PT";
      v1[9] = "RU";
      v1[10] = "TR";
      v1[11] = "ZT";
      v1[12] = "TH";
      br = v1;
    }

    public Game()
    {
      super();
      this.q = null;
      this.r = null;
      this.s = false;
      this.x = true;
      this.A = false;
      this.bE = new com.gameloft.android.GAND.GloftGGSS.ad(this);
      this.ae = false;
      this.af = false;
      this.ag = false;
      this.ah = false;
      this.ai = false;
      this.aj = false;
      this.ak = false;
      this.al = false;
      this.am = false;
      this.an = false;
      this.ao = 0;
      this.ap = 0;
      this.aB = false;
      this.aC = false;
      this.aD = false;
      this.bT = false;
      this.aX = new com.gameloft.android.GAND.GloftGGSS.aw(this, 0.0f, 0.0f);
      this.aY = new com.gameloft.android.GAND.GloftGGSS.aw(this, 0.0f, 0.0f);
      this.bq = new com.gameloft.android.GAND.GloftGGSS.av(this);
      this.bs = false;
      this.bt = new com.gameloft.android.GAND.GloftGGSS.am(this);
    }

    private static void CleanUp()
    {
      bU = null;
    }

    public static void CopyAssets(String p0)
    {
      String v1;
      com.gameloft.android.GAND.GloftGGSS.Game v2;
      android.content.res.AssetManager Assets; // RETVAL
      android.content.res.AssetManager v4;
      String[] v5;
      int v6;
      int i;
      String v8;
      java.io.InputStream v10;
      java.io.FileOutputStream v11;
      v1 = p0.replace("/", "");
      new java.io.File(getSDFolder()).mkdirs();
      v2 = az;
      Assets = v2.getAssets();
      v4 = Assets;
      try
      {
        v5 = Assets.list(v1);
      }
      catch ( java.io.IOException e )
      {
        v5 = null;
      }
      v6 = v5.length;
      for ( i = 0; i < v6; ++i )
      {
        v8 = v5[i];
        try
        {
          if ( new java.io.File(getSDFolder() + "/" + v8).exists() )
            continue;
          try
          {
            v10 = v4.open(v1 + "/" + v8);
          }
          catch ( Exception e )
          {
            v10 = null;
          }
          v11 = new java.io.FileOutputStream(getSDFolder() + "/" + v8);
          copyFile(v10, v11);
          v10.close();
          v11.flush();
          v11.close();
        }
        catch ( Exception v12 )
        {
          Log.e("GLGame", v12.getMessage(), new Object[0]);
        }
      }
    }

    public static int DisablePlaylist()
    {
      return aF.indexOf("sgh-t959") != -1
          || aF.indexOf("gt-i9000") != -1
          || aF.indexOf("sc-02b") != -1
          || aF.indexOf("shw-m110s") != -1
           ? 1
           : 0;
    }

    public static void Exit()
    {
      bU = null;
      Process.killProcess(Process.myPid());
    }

    public static int GetControllerByAxisHash(android.view.InputDevice p0)
    {
      java.util.List v1;
      java.util.Iterator v2;
      android.view.InputDevice.MotionRange v3;
      java.util.Iterator v4;
      String v5;
      int v6;
      v1 = new java.util.ArrayList();
      v2 = p0.getMotionRanges().iterator();
      while ( v2.hasNext() )
      {
        v3 = (android.view.InputDevice.MotionRange)v2.next();
        if ( v3.getSource() == 16777232 )
          v1.add(Integer.valueOf(v3.getAxis()));
      }
      Collections.sort(v1);
      v4 = v1.iterator();
      v5 = new String();
      while ( v4.hasNext() )
        v5 = v5 + ((Integer)v4.next()).intValue() + ",";
      switch ( v5.hashCode() )
      {
        case -33620174:
        case 1569342481:
          v6 = Game$GameControllerType.g.ordinal();
          break;
        case 41420469:
          v6 = Game$GameControllerType.h.ordinal();
          break;
        case 190305969:
          v6 = Game$GameControllerType.c.ordinal();
          break;
        default:
          v6 = Game$GameControllerType.i.ordinal();
          break;
      }
      return v6;
    }

    public static String GetControllerName()
    {
      String v0;
      int[] DeviceIds;
      int i;
      android.view.InputDevice Device; // RETVAL
      android.view.InputDevice v5;
      if ( isShield() )
        return "NVIDIA Shield";
      if ( isXperia() == 1 )
        return "Xperia";
      DeviceIds = InputDevice.getDeviceIds();
      for ( i = 0; i < DeviceIds.length; ++i )
      {
        Device = InputDevice.getDevice(DeviceIds[i]);
        v5 = Device;
        if ( Device != null )
        {
          if ( Device.getName().toLowerCase().contains("nyko") )
            return "Nyko";
          if ( v5.getName().toLowerCase().contains("samsung") )
            return "Hid";
          if ( v5.getName().toLowerCase().contains("hid") && v5.getName().toLowerCase().contains("moga") )
            return "Moga_HID";
        }
      }
      if ( isHIDController() )
        return "Pad";
      if ( bY == null || !av )
        return "Disconnected";
      switch ( bY.a(4) )
      {
        case 1:
          v0 = "Moga_Pro";
          break;
        case 2:
          v0 = "Moga_2";
          break;
        default:
          v0 = "Moga";
          break;
      }
      return v0;
    }

    public static int GetControllerNumber()
    {
      int v0;
      int[] DeviceIds;
      int ControllerByAxisHash;
      int i;
      android.view.InputDevice Device; // RETVAL
      android.view.InputDevice v5;
      v0 = -1;
      if ( bY != null && av )
      {
        switch ( bY.a(4) )
        {
          case 0:
          case 1:
          case 2:
            v0 = 2;
            break;
          default:
            break;
        }
      }
      DeviceIds = InputDevice.getDeviceIds();
      ControllerByAxisHash = v0;
      for ( i = 0; i < DeviceIds.length; ++i )
      {
        Device = InputDevice.getDevice(DeviceIds[i]);
        v5 = Device;
        if ( Device != null )
        {
          if ( Device.getName().toLowerCase().contains("nvidia corporation nvidia controller v01") )
          {
            ControllerByAxisHash = Game$GameControllerType.e.ordinal();
          }
          else if ( v5.getName().toLowerCase().contains("nyko") )
          {
            ControllerByAxisHash = Game$GameControllerType.g.ordinal();
          }
          else if ( v5.getName().toLowerCase().contains("samsung") && v5.getName().toLowerCase().contains("pad") )
          {
            ControllerByAxisHash = Game$GameControllerType.h.ordinal();
          }
          else if ( v5.getName().toLowerCase().contains("hid") && v5.getName().toLowerCase().contains("moga") )
          {
            ControllerByAxisHash = Game$GameControllerType.i.ordinal();
          }
          else if ( isHIDController() )
          {
            ControllerByAxisHash = GetControllerByAxisHash(v5);
          }
        }
      }
      return ControllerByAxisHash;
    }

    public static String GetControllerType()
    {
      String v0;
      int[] DeviceIds;
      int i;
      android.view.InputDevice Device; // RETVAL
      android.view.InputDevice v5;
      if ( bY != null && av )
      {
        switch ( bY.a(4) )
        {
          case 1:
            v0 = "Moga_Pro";
            break;
          case 2:
            v0 = "Moga_2";
            break;
          default:
            v0 = "Moga";
            break;
        }
      }
      else
      {
        DeviceIds = InputDevice.getDeviceIds();
        for ( i = 0; ; ++i )
        {
          if ( i >= DeviceIds.length )
            return "No_Controller";
          Device = InputDevice.getDevice(DeviceIds[i]);
          v5 = Device;
          if ( Device != null )
            break;
        }
        if ( Device.getName().toLowerCase().contains("nvidia corporation nvidia controller v01") )
        {
          return "Shield";
        }
        else if ( v5.getName().toLowerCase().contains("nyko") )
        {
          return "Nyko";
        }
        else if ( v5.getName().toLowerCase().contains("samsung") && v5.getName().toLowerCase().contains("pad") )
        {
          return "Samsung_Pad";
        }
        else if ( v5.getName().toLowerCase().contains("hid") && v5.getName().toLowerCase().contains("moga") )
        {
          return "Moga_HID";
        }
        else
        {
          return "Generic_HID";
        }
      }
      return v0;
    }

    public static long GetCurrentTime()
    {
      return System.currentTimeMillis();
    }

    public static String GetExternalObbPath()
    {
      String v0;
      v0 = "" + Environment.getExternalStorageDirectory();
      if ( v0.endsWith("/") )
        v0.substring(0, v0.length() - 1);
      return v0 + "/Android/obb/com.gameloft.android.GAND.GloftGGSS";
    }

    public static String GetExtraObbName()
    {
      String PreferenceString; // RETVAL
      String v1;
      try
      {
        PreferenceString = SUtils.getPreferenceString("extraFile", "ExpansionPrefs");
        v1 = PreferenceString;
        if ( PreferenceString == null || PreferenceString.length() <= 0 )
          return "extra."
               + new Integer(Integer.parseInt("18225")).toString()
               + ".com.gameloft.android.GAND.GloftGGSS"
               + ".obb";
        return v1;
      }
      catch ( Exception e )
      {
      }
      return "extra." + new Integer(Integer.parseInt("18225")).toString() + ".com.gameloft.android.GAND.GloftGGSS" + ".obb";
    }

    public static int GetFirmwareApi()
    {
      return aV;
    }

    public static String GetMainObbName()
    {
      String PreferenceString; // RETVAL
      String v1;
      try
      {
        PreferenceString = SUtils.getPreferenceString("mainFileName", "ExpansionPrefs");
        v1 = PreferenceString;
        if ( PreferenceString == null || PreferenceString.length() <= 0 )
          return "main."
               + new Integer(Integer.parseInt("18225")).toString()
               + ".com.gameloft.android.GAND.GloftGGSS"
               + ".obb";
        return v1;
      }
      catch ( Exception e )
      {
      }
      return "main." + new Integer(Integer.parseInt("18225")).toString() + ".com.gameloft.android.GAND.GloftGGSS" + ".obb";
    }

    public static String GetObbPath()
    {
      String v0;
      v0 = "";
      try
      {
        if ( !new java.io.File("").exists() )
          return getTemporaryObbPath();
        return v0;
      }
      catch ( Exception e )
      {
      }
      return getTemporaryObbPath();
    }

    public static String GetPatchObbName()
    {
      String PreferenceString; // RETVAL
      String v1;
      try
      {
        PreferenceString = SUtils.getPreferenceString("patchFileName", "ExpansionPrefs");
        v1 = PreferenceString;
        if ( PreferenceString == null || PreferenceString.length() <= 0 )
          return "patch."
               + new Integer(Integer.parseInt("18225")).toString()
               + ".com.gameloft.android.GAND.GloftGGSS"
               + ".obb";
        return v1;
      }
      catch ( Exception e )
      {
      }
      return "patch." + new Integer(Integer.parseInt("18225")).toString() + ".com.gameloft.android.GAND.GloftGGSS" + ".obb";
    }

    public static String GetPhoneCPUArch()
    {
      return aQ;
    }

    public static float GetPhoneCPUFreq()
    {
      return aT;
    }

    public static String GetPhoneCPUName()
    {
      return aP;
    }

    public static String GetPhoneCPUPart()
    {
      return aR;
    }

    public static int GetPhoneCores()
    {
      int v0;
      java.io.BufferedReader v2;
      String Line; // RETVAL
      String v4;
      if ( aW == 0 )
      {
        if ( new java.io.File("/proc/cpuinfo").exists() )
        {
          try
          {
            v2 = new java.io.BufferedReader(new java.io.FileReader(new java.io.File("/proc/cpuinfo")));
            while ( true )
            {
              Line = v2.readLine();
              v4 = Line;
              if ( Line == null )
                break;
              if ( Line.contains("processor") )
              {
                try
                {
                  aW = Integer.parseInt("" + v4.charAt(v4.length() - 1));
                }
                catch ( Exception e )
                {
                }
              }
            }
            v2.close();
          }
          catch ( Exception v5 )
          {
            v5.printStackTrace();
          }
        }
        v0 = aW + 1;
        aW = v0;
        return v0;
      }
      return aW;
    }

    public static String GetPhoneFirmware()
    {
      return Build.VERSION.RELEASE;
    }

    public static String GetPhoneGPUName()
    {
      return aU;
    }

    public static void GetPhoneInfo()
    {
      String String;
      java.io.Reader v1;
      java.io.LineNumberReader v2;
      String Line; // RETVAL
      String v4;
      java.io.FileReader v5;
      java.io.FileReader v6;
      java.io.FileReader v7;
      java.io.LineNumberReader v8;
      java.io.Reader v9;
      java.io.LineNumberReader v10;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            try
            {
            String = GLES10.glGetString(7939);
            if ( String.indexOf("GL_IMG_texture_compression_pvrtc", 0) >= 0 )
            {
            aK = 1;
            { _pc = 1; continue _sm; }
            }
            if ( String.indexOf("GL_AMD_compressed_ATC_texture", 0) < 0 )
            {
            if ( String.indexOf("GL_EXT_texture_compression_dxt1", 0) < 0 )
            {
            if ( String.indexOf("GL_OES_compressed_ETC1_RGB8_texture", 0) >= 0 )
            aK = 4;
            }
            else
            {
            aK = 3;
            }
            }
            else
            {
            aK = 2;
            }
            }
            catch ( Exception e )
            {
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            aL = Build.MANUFACTURER;
            aV = Build.VERSION.SDK_INT;
            aM = Build.MODEL;
            aN = "000000000000000";
            if ( Build.VERSION.SDK_INT <= 8 )
            aO = "158465454";
            else
            aO = Build.SERIAL;
            aU = GLES10.glGetString(7937);
            try
            {
            v1 = new java.io.FileReader(new java.io.File("/proc/cpuinfo"));
            v2 = new java.io.LineNumberReader(v1);
            while ( true )
            {
            Line = v2.readLine();
            v4 = Line;
            if ( Line == null )
            break;
            if ( Line.indexOf("Processor") != 0 )
            {
            if ( v4.indexOf("BogoMIPS") != 0 )
            {
            if ( v4.indexOf("CPU implementer") != 0 )
            {
            if ( v4.indexOf("CPU part") == 0 )
            aR = v4.substring(v4.indexOf(":") + 1).trim();
            }
            else
            {
            aQ = v4.substring(v4.indexOf(":") + 1).trim();
            }
            }
            else
            {
            aS = Float.valueOf(v4.substring(v4.indexOf(":") + 1).trim()).floatValue();
            }
            }
            else
            {
            aP = v4.substring(v4.indexOf(":") + 1).trim();
            }
            }
            v2.close();
            v1.close();
            }
            catch ( java.io.IOException e )
            {
            }
            try
            {
            v5 = new java.io.FileReader(new java.io.File("/sys/devices/system/cpu/cpu0/cpufreq/scaling_cur_freq"));
            new java.io.LineNumberReader(v5).close();
            v5.close();
            }
            catch ( java.io.IOException e )
            {
            }
            try
            {
            v6 = new java.io.FileReader(new java.io.File("/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_min_freq"));
            new java.io.LineNumberReader(v6).close();
            v6.close();
            }
            catch ( java.io.IOException e )
            {
            }
            try
            {
            v7 = new java.io.FileReader(new java.io.File("/sys/devices/system/cpu/cpu0/cpufreq/cpuinfo_max_freq"));
            v8 = new java.io.LineNumberReader(v7);
            aT = Float.valueOf(v8.readLine().trim()).floatValue();
            v8.close();
            v7.close();
            }
            catch ( java.io.IOException e )
            {
            }
            try
            {
            v9 = new java.io.FileReader(new java.io.File("/proc/meminfo"));
            v10 = new java.io.LineNumberReader(v9);
            while ( v10.readLine() != null )
            ;
            v10.close();
            v9.close();
            }
            catch ( java.io.IOException e )
            {
            }
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    public static int GetPhoneLanguage()
    {
      int v0;
      String ISO3Language;
      v0 = 0;
      try
      {
        ISO3Language = Locale.getDefault().getISO3Language();
        if ( !ISO3Language.equals("eng") )
        {
          if ( ISO3Language.equals("fra") )
          {
            return 1;
          }
          else if ( ISO3Language.equals("deu") )
          {
            return 2;
          }
          else if ( ISO3Language.equals("ita") )
          {
            return 4;
          }
          else if ( ISO3Language.equals("spa") )
          {
            return 3;
          }
          else if ( ISO3Language.equals("kor") )
          {
            return 6;
          }
          else if ( ISO3Language.equals("jpn") )
          {
            return 5;
          }
          else if ( ISO3Language.equals("bra") || ISO3Language.equals("por") )
          {
            return 8;
          }
          else if ( ISO3Language.equals("zho") )
          {
            if ( Locale.getDefault().toString().equals("zh_TW") )
              return 11;
            else
              return 7;
          }
          else if ( ISO3Language.equals("rus") )
          {
            return 9;
          }
          else if ( ISO3Language.equals("tur") )
          {
            return 10;
          }
          else if ( ISO3Language.equals("tha") )
          {
            return 13;
          }
          else
          {
            return -1;
          }
        }
        return v0;
      }
      catch ( java.util.MissingResourceException e )
      {
      }
      return v0;
    }

    public static String GetPhoneManufacturer()
    {
      return aL;
    }

    public static String GetPhoneModel()
    {
      return aM;
    }

    public static String GetPhoneRegionFormat()
    {
      return Locale.getDefault().toString();
    }

    public static int GetTextureFormat()
    {
      return aK;
    }

    public static int GetXperiaSlideout()
    {
      if ( v )
        return B ? 1 : 0;
      else
        return 2;
    }

    public static void InitInGameBrowser(int p0)
    {
      InGameBrowser.a = p0;
    }

    public static void InitInGameBrowserSN(int p0, String p1)
    {
      if ( p1 == null )
        p1 = " ";
      switch ( p0 )
      {
        case 4:
          InGameBrowser.c = SUtils.getPreferenceString("FBID", "", "SAVE_ID_LOGIN");
          break;
        case 32:
          InGameBrowser.e = SUtils.getPreferenceString("GAID", "", "SAVE_ID_LOGIN");
          break;
        case 64:
          InGameBrowser.b = "android:" + p1;
          break;
        default:
          return;
      }
    }

    public static native void InitNativeAssetManager(android.content.res.AssetManager p0);

    public static void OpenCustomLink(String p0)
    {
      InGameBrowser.openCustomLink(p0);
    }

    public static void OpenLinkRateGame(String p0, int p1)
    {
      String[] v2;
      String v3; // RETVAL
    
      try
      {
        v2 = p0.replace("FROMGAME", "GGSS").replace("FVGL", "GAND").replace("TOGAME", "GGSS").replace("UDIDPHONE", getDeviceIdentifier()).replace("DEVICE", Build.MANUFACTURER + "_" + Build.MODEL).replace(" ", "").replace("COUNTRY", Locale.getDefault().getCountry()).replace("FIRMWARE", Build.VERSION.RELEASE).replace("HDIDFV", com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getHDIDFV()).replace("ANDROIDID", com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getAndroidId()).replace("GAMEVERSION", "1.8.2f").replace("LANGCODE", br[p1]).split("[?]");
        v3 = v2[0] + "?data=" + Encrypter.crypt(v2[1]) + "&enc=1";
        ab = v3;
        InGameBrowser.openCustomLink(v3);
      }
      catch ( Exception e )
      {
        InGameBrowser.openCustomLink("http://www.gameloft.com/conditions/?lang=en");
      }
    }

    public static void Pause()
    {
      android.content.Intent v0;
      v0 = new android.content.Intent("android.intent.action.MAIN").addCategory("android.intent.category.HOME");
      v0.replaceExtras(az.getIntent());
      az.startActivity(v0);
    }

    public static void PrintDebug(String p0)
    {
      ;
    }

    public static void RefreshUnreadNewsNumber()
    {
      InGameBrowser.refreshUnreadNewsNumber();
    }

    public static void ResetMessage(String p0, String p1)
    {
      if ( !ad )
      {
        ac = true;
        new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.aj(p0, p1)).start();
      }
    }

    public static void Restart()
    {
      ((android.app.AlarmManager)az.getSystemService("alarm")).set(1, System.currentTimeMillis() + 2500, PendingIntent.getActivity(az.getBaseContext(), 0, new android.content.Intent(az.getIntent()), az.getIntent().getFlags()));
      try
      {
        Thread.sleep(1000);
      }
      catch ( Exception e )
      {
      }
      Exit();
    }

    public static void SetFBId(String p0)
    {
      SUtils.setPreference("FBID", p0, "SAVE_ID_LOGIN");
      InGameBrowser.c = p0;
    }

    public static void SetGAId(String p0)
    {
      SUtils.setPreference("GAID", p0, "SAVE_ID_LOGIN");
      InGameBrowser.e = p0;
    }

    public static void SetXperiaJoypad(int p0)
    {
      C = p0 == 1;
    }

    public static void ShowScreen(int p0)
    {
      y = true;
      hideGameloftLogo();
    }

    public static void Toast(String p0)
    {
      if ( !ac )
      {
        ac = true;
        new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.ah(p0)).start();
      }
    }

    public static void TryToConnectController()
    {
      int[] DeviceIds;
      int i;
      android.view.InputDevice Device; // RETVAL
      android.view.InputDevice v3;
      int DeviceType;
      if ( bz == -1
        || bB == Game$GameControllerType.b.ordinal()
        || bB == Game$GameControllerType.e.ordinal()
        || InputDevice.getDevice(bz) != null )
      {
        if ( bA == -3 && nativeControllerConflict(Game$GameControllerType.b.ordinal()) == 1 )
          bA = -2;
        DeviceIds = InputDevice.getDeviceIds();
        for ( i = 0; i < DeviceIds.length; ++i )
        {
          Device = InputDevice.getDevice(DeviceIds[i]);
          v3 = Device;
          if ( Device != null && Device.getId() > by )
          {
            by = v3.getId();
            DeviceType = getDeviceType(v3);
            if ( DeviceType != -1 )
            {
              if ( bB != -1 && bA != v3.getId() )
              {
                if ( nativeControllerConflict(DeviceType) == 1 )
                  bA = v3.getId();
                else
                  by = v3.getId() - 1;
                return;
              }
              setCurrentControl(DeviceType, v3.getId());
            }
          }
        }
      }
      else
      {
        nativeControllerDisconnected(bB);
        bB = -1;
        bz = -1;
      }
    }

    public static int _hasAnyInternetConnection()
    {
      int v0;
      android.net.NetworkInfo ActiveNetworkInfo;
      android.net.NetworkInfo NetworkInfo;
      boolean v3;
      boolean v4;
      v0 = 0;
      ActiveNetworkInfo = bO.getActiveNetworkInfo();
      NetworkInfo = bO.getNetworkInfo(0);
      v3 = ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected();
      v4 = NetworkInfo != null && NetworkInfo.isConnected();
      if ( v3 || v4 )
        return 1;
      return v0;
    }

    /* synthetic */ static void access$000(int p0)
    {
      nativeAddReward(p0);
    }

    /* synthetic */ static int access$100()
    {
      return bL;
    }

    /* synthetic */ static int access$1000(int p0)
    {
      return nativeControllerConflict(p0);
    }

    /* synthetic */ static int access$102(int p0)
    {
      bL = p0;
      return p0;
    }

    /* synthetic */ static void access$1100(int p0)
    {
      nativeWichMogaIsConnected(p0);
    }

    /* synthetic */ static void access$1200(int p0)
    {
      nativeControllerDisconnected(p0);
    }

    /* synthetic */ static void access$1300(int p0)
    {
      nativeMogaIsConnected(p0);
    }

    /* synthetic */ static boolean access$200()
    {
      return bw;
    }

    /* synthetic */ static void access$300(float p0, float p1, float p2)
    {
      nativeAccelerator(p0, p1, p2);
    }

    /* synthetic */ static com.bda.controller.Controller access$400()
    {
      return bY;
    }

    /* synthetic */ static int access$500()
    {
      return bz;
    }

    /* synthetic */ static int access$502(int p0)
    {
      bz = p0;
      return p0;
    }

    /* synthetic */ static void access$600(int p0, int p1)
    {
      nativeOnKeyDown(p0, p1);
    }

    /* synthetic */ static void access$700(int p0, int p1)
    {
      nativeOnKeyUp(p0, p1);
    }

    /* synthetic */ static int access$800()
    {
      return bB;
    }

    /* synthetic */ static int access$802(int p0)
    {
      bB = p0;
      return p0;
    }

    /* synthetic */ static int access$900()
    {
      return bA;
    }

    /* synthetic */ static int access$902(int p0)
    {
      bA = p0;
      return p0;
    }

    public static void addAndroidHit(String p0)
    {
      String HttpResponse; // RETVAL
    
      HttpResponse = getHttpResponse(p0);
      try
      {
        new com.loopj.android.http.AsyncHttpClient().a(HttpResponse, new com.gameloft.android.GAND.GloftGGSS.ak());
      }
      catch ( Exception e )
      {
      }
      finally
      {
      }
    }

    public static void addInviteFaceFriends(String p0, String p1, String p2)
    {
      java.util.ArrayList v3;
      v3 = new java.util.ArrayList();
      v3.add(p0);
      v3.add(p1);
      v3.add(p2);
      aq.add(v3);
    }

    private void b(boolean p0)
    {
      android.view.View RootView; // RETVAL
      android.view.ViewParent Parent; // RETVAL
    
      if ( !this.A && v )
      {
        try
        {
          RootView = this.getWindow().getDecorView().getRootView();
          if ( RootView != null )
          {
            Parent = RootView.getParent();
            if ( Parent != null )
              processTouchpadAsPointer(Parent, true);
          }
        }
        catch ( Exception e )
        {
        }
        this.A = true;
      }
    }

    public static void checkAndUpdateConnectionState()
    {
      int hasAnyInternetConnection; // RETVAL
    
      hasAnyInternetConnection = _hasAnyInternetConnection();
      if ( (hasAnyInternetConnection != 0) != bD )
      {
        bD = hasAnyInternetConnection == 1;
        setInternetState(hasAnyInternetConnection);
      }
    }

    public static boolean checkRootMethod1()
    {
      String v0;
      v0 = Build.TAGS;
      return v0 != null && v0.contains("test-keys");
    }

    public static boolean checkRootMethod2()
    {
      try
      {
        return new java.io.File("/system/app/Superuser.apk").exists();
      }
      catch ( Exception e )
      {
      }
      return false;
    }

    private static boolean checkUseInstaller()
    {
      boolean v0;
      java.io.DataInputStream v1;
      java.io.BufferedReader v2;
      String Line; // RETVAL
    
      v0 = true;
      try
      {
        if ( new java.io.File("/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files/TestQAconfig.txt").exists() )
        {
          v1 = new java.io.DataInputStream(new java.io.FileInputStream("/sdcard/Android/data/com.gameloft.android.GAND.GloftG" +
                                                                       "GSS/files/TestQAconfig.txt"));
          v2 = new java.io.BufferedReader(new java.io.InputStreamReader(v1));
          while ( true )
          {
            Line = v2.readLine();
            if ( Line == null )
              break;
            if ( Line.contains("USE_INSTALLER=0") )
            {
              v0 = false;
              break;
            }
          }
          v1.close();
        }
        return v0;
      }
      catch ( Exception e )
      {
      }
      return v0;
    }

    public static void clearInviteFaceFriends_s()
    {
      aq.clear();
    }

    public static void closeWelcomeScr()
    {
      ;
    }

    public static void copyFile(java.io.InputStream p0, java.io.OutputStream p1)
 throws java.io.IOException {
      byte[] i;
      int v3; // RETVAL
    
      for ( i = new byte[1024]; ; p1.write(i, 0, v3) )
      {
        v3 = p0.read(i);
        if ( v3 == -1 )
          break;
      }
    }

    private void d()
    {
      android.view.ViewGroup.LayoutParams v1;
      com.bda.controller.Controller Instance; // RETVAL
      android.widget.LinearLayout v3;
      android.os.StatFs v4;
      long BlockSize;
      this.g();
      setEnableOrientation(0);
      SendInfo.setContext(this);
      SUtils.setContext(this);
      SUtils.nativeInit();
      Device.nativeInit();
      Device.init();
      SplashScreenActivity.init(this);
      SimplifiedAndroidUtils.Init(this);
      InAppBilling.init(this);
      if ( Build.MODEL.equals("SO-01D")
        || Build.MODEL.equals("R800i")
        || Build.MODEL.equals("R800x")
        || Build.MODEL.equals("R800a")
        || Build.MODEL.equals("R800c") )
      {
        v = true;
        try
        {
          MotionEvent.obtain(1, 1, 0, 0.0f, 0.0f, 0).getSource();
          t = true;
        }
        catch ( LinkageError e )
        {
          t = false;
        }
        this.onConfigurationChanged(this.getResources().getConfiguration());
      }
      GL2JNILib.init();
      if ( !bV )
      {
        bX = new com.gameloft.GLSocialLib.PlatformAndroid(this);
        PlatformAndroid.nativeInit();
        aI = new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib(this, this);
        FacebookAndroidGLSocialLib.nativeInit();
        bV = true;
      }
      nativeInit();
      if ( !bW )
      {
        PortingJNIv3.Init(this);
        bW = true;
      }
      this.N = (android.widget.FrameLayout)this.getLayoutInflater().inflate(2130903077, null);
      v1 = new android.view.ViewGroup.LayoutParams(-1, -1);
      if ( this.N != null )
        this.addContentView(this.N, v1);
      this.N.setVisibility(8);
      this.O = new com.gameloft.android.GAND.GloftGGSS.gEditText(this);
      this.N.addView(this.O, new android.widget.LinearLayout.LayoutParams(-2, -2));
      this.O.a(this.N, GL2JNILib.getKeyboard());
      this.O.setOnKeyListener((android.view.View.OnKeyListener)new com.gameloft.android.GAND.GloftGGSS.aq(this));
      this.O.setOnFocusChangeListener((android.view.View.OnFocusChangeListener)new com.gameloft.android.GAND.GloftGGSS.ar(this));
      this.O.setOnEditorActionListener((android.widget.TextView.OnEditorActionListener)new com.gameloft.android.GAND.GloftGGSS.as(this));
      this.O.addTextChangedListener((android.text.TextWatcher)new com.gameloft.android.GAND.GloftGGSS.at(this));
      T = (android.app.KeyguardManager)this.getSystemService("keyguard");
      M = GL2JNILib.getKeyboard();
      this.aa = this.getResources().getAssets();
      InitNativeAssetManager(this.aa);
      if ( Character.getNumericValue(System.getProperty("java.vm.version").charAt(0)) < 2 )
      {
        Instance = Controller.getInstance(this);
        bY = Instance;
        Instance.b();
        bY.a((com.bda.controller.i)this.bq, new android.os.Handler());
      }
      v3 = (android.widget.LinearLayout)this.getLayoutInflater().inflate(2130903071, null);
      E = v3;
      v3.setVisibility(8);
      az.setRequestedOrientation(0);
      setEnableOrientation(0);
      showGameloftLogo();
      Locale.getDefault().getCountry();
      if ( (Build.MANUFACTURER + "_" + Build.MODEL).toLowerCase().contains("samsung_gt-p7501") )
        bw = true;
      this.aB = true;
      v4 = new android.os.StatFs(Environment.getDataDirectory().getPath());
      BlockSize = v4.getBlockSize();
      v4.getBlockCount();
      if ( v4.getAvailableBlocks() * BlockSize / 0x100000 <= 10 )
        ResetMessage("Nou muchou free spaceru", "Accepteru");
      findBySource(16777232);
      D = true;
    }

    private static void deleteIndexFiles()
    {
      java.io.File[] v0;
      int v1;
      int i;
      java.io.File v3;
      v0 = new java.io.File(SUtils.getSaveFolder()).listFiles();
      v1 = v0.length;
      for ( i = 0; i < v1; ++i )
      {
        v3 = v0[i];
        if ( v3.getName().contains(".indexfile") )
          v3.delete();
      }
    }

    private static void deleteOldOBBData()
    {
      String MainObbName;
      String PatchObbName;
      java.io.File[] v2;
      int v3;
      int i;
      java.io.File v5;
      String Name;
      MainObbName = GetMainObbName();
      PatchObbName = GetPatchObbName();
      v2 = new java.io.File(GetObbPath()).listFiles();
      v3 = v2.length;
      for ( i = 0; i < v3; ++i )
      {
        v5 = v2[i];
        Name = v5.getName();
        if ( Name.contains(".obb") && !Name.contains(MainObbName) && !Name.contains(PatchObbName) || Name.contains("new_") )
          v5.delete();
      }
    }

    private void e()
    {
      android.view.ViewGroup.LayoutParams v1;
      this.N = (android.widget.FrameLayout)this.getLayoutInflater().inflate(2130903077, null);
      v1 = new android.view.ViewGroup.LayoutParams(-1, -1);
      if ( this.N != null )
        this.addContentView(this.N, v1);
      this.N.setVisibility(8);
      this.O = new com.gameloft.android.GAND.GloftGGSS.gEditText(this);
      this.N.addView(this.O, new android.widget.LinearLayout.LayoutParams(-2, -2));
      this.O.a(this.N, GL2JNILib.getKeyboard());
      this.O.setOnKeyListener((android.view.View.OnKeyListener)new com.gameloft.android.GAND.GloftGGSS.aq(this));
      this.O.setOnFocusChangeListener((android.view.View.OnFocusChangeListener)new com.gameloft.android.GAND.GloftGGSS.ar(this));
      this.O.setOnEditorActionListener((android.widget.TextView.OnEditorActionListener)new com.gameloft.android.GAND.GloftGGSS.as(this));
      this.O.addTextChangedListener((android.text.TextWatcher)new com.gameloft.android.GAND.GloftGGSS.at(this));
      T = (android.app.KeyguardManager)this.getSystemService("keyguard");
      M = GL2JNILib.getKeyboard();
    }

    public static void enableAccelerometer(int p0)
    {
      if ( bG != null && bN != null )
      {
        if ( p0 == 1 )
        {
          bK = true;
          bG.registerListener(bN, bG.getDefaultSensor(1), 3);
        }
        else
        {
          bK = false;
          bG.unregisterListener(bN);
        }
      }
    }

    public static void enableWifi(int p0)
    {
      try
      {
        if ( bU != null )
        {
          if ( p0 != 0 )
            bU.setWifiEnabled(true);
          else
            bU.setWifiEnabled(false);
        }
      }
      catch ( Exception e )
      {
      }
    }

    public static native void endProfiling();

    private void f()
    {
      this.finish();
      Process.killProcess(Process.myPid());
    }

    public static android.view.InputDevice findBySource(int p0)
    {
      int[] DeviceIds;
      int i;
      android.view.InputDevice Device;
      DeviceIds = InputDevice.getDeviceIds();
      for ( i = 0; i < DeviceIds.length; ++i )
      {
        Device = InputDevice.getDevice(DeviceIds[i]);
        if ( (Device.getSources() & 0xFFFFFF00 & p0) != 0 )
          return Device;
      }
      return null;
    }

    private void g()
    {
      if ( isAmazonDevice() )
      {
        az.setRequestedOrientation(0);
      }
      else if ( Settings.System.getInt(this.getApplicationContext().getContentResolver(), "accelerometer_rotation", 0) == 1 )
      {
        az.getWindowManager().getDefaultDisplay();
        getScreenOrientation();
        az.setRequestedOrientation(6);
        I = true;
      }
      else
      {
        az.getWindowManager().getDefaultDisplay();
        az.setRequestedOrientation(0);
        I = false;
      }
    }

    public static com.gameloft.android.GAND.GloftGGSS.Game getActivityContext()
    {
      return az;
    }

    public static String getAndroidID()
    {
      String String;
      String = Settings.Secure.getString(az.aA.getContext().getContentResolver(), "android_id");
      if ( String.length() <= 0 )
        return null;
      return String;
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

    public static String getDeviceIdentifier()
    {
      return com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getDeviceId();
    }

    public static String getDeviceName()
    {
      return (Build.MANUFACTURER + "_" + Build.MODEL).replaceAll(" ", "");
    }

    public static int getDeviceType(android.view.InputDevice p0)
    {
      if ( p0.getName().toLowerCase().contains("nvidia corporation nvidia controller v01") )
        return Game$GameControllerType.e.ordinal();
      if ( p0.getName().toLowerCase().contains("nyko") )
        return Game$GameControllerType.g.ordinal();
      if ( p0.getName().toLowerCase().contains("samsung") && p0.getName().toLowerCase().contains("pad") )
        return Game$GameControllerType.h.ordinal();
      if ( p0.getName().toLowerCase().contains("hid") && p0.getName().toLowerCase().contains("moga") )
        return Game$GameControllerType.c.ordinal();
      if ( !p0.getName().toLowerCase().contains("hid") || p0.getName().toLowerCase().contains("lgosp-hid") )
        return -1;
      return GetControllerByAxisHash(p0);
    }

    public static String getHttpResponse(String p0)
    {
      String Country;
      CharSequence v2;
      Country = Locale.getDefault().getCountry();
      v2 = "EN";
      switch ( GetPhoneLanguage() )
      {
        case 0:
          v2 = "EN";
          break;
        case 1:
          v2 = "FR";
          break;
        case 2:
          v2 = "DE";
          break;
        case 3:
          v2 = "ES";
          break;
        case 4:
          v2 = "IT";
          break;
        case 5:
          v2 = "PR";
          break;
        case 6:
          v2 = "JA";
          break;
        case 7:
          v2 = "KO";
          break;
        case 8:
          v2 = "ZH";
          break;
        case 13:
          v2 = "TH";
          break;
        default:
          return p0.replace("SOURCEGAMECODE", "GGSS").replace("MARKET", "SSHP").replace("GAMEVERSION", "1.8.2").replace("GC_LETTER", "f").replace("LANGCODE", v2).replace("COUNTRYOFDEVICE", Country).replace("DEVICE_NAME", (Build.MANUFACTURER + "_" + Build.MODEL).replaceAll(" ", "")).replace("FIRMWARE", Build.VERSION.RELEASE).replace("UDID", com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getDeviceId()).replace("HDIDFV", com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getHDIDFV()).replace("ANDROID_ID", com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getAndroidId());
      }
      return p0.replace("SOURCEGAMECODE", "GGSS").replace("MARKET", "SSHP").replace("GAMEVERSION", "1.8.2").replace("GC_LETTER", "f").replace("LANGCODE", v2).replace("COUNTRYOFDEVICE", Country).replace("DEVICE_NAME", (Build.MANUFACTURER + "_" + Build.MODEL).replaceAll(" ", "")).replace("FIRMWARE", Build.VERSION.RELEASE).replace("UDID", com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getDeviceId()).replace("HDIDFV", com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getHDIDFV()).replace("ANDROID_ID", com.gameloft.android.GAND.GloftGGSS.GLUtils.Device.getAndroidId());
    }

    public static String getIMEI()
    {
      String v0;
      Class v2;
      Class[] v3;
      java.lang.reflect.Method Method; // RETVAL
      Object[] v5;
      String String; // RETVAL
      String File; // RETVAL
      java.io.File v8;
      if ( SUtils.getContext() == null )
        return null;
      if ( Build.VERSION.SDK_INT < 9 || (v0 = Build.SERIAL) == null || v0 == "unknown" )
      {
        try
        {
          v2 = Class.forName("android.os.SystemProperties");
          v3 = new Class[1];
          v3[0] = String.class;
          Method = v2.getMethod("get", v3);
          v5 = new Object[1];
          v5[0] = "ro.serialno";
          v0 = (String)Method.invoke(v2, v5);
          if ( v0 != null && v0.length() > 0 && v0 != "unknown" )
            return v0;
        }
        catch ( Exception e )
        {
        }
        String = Settings.Secure.getString(SUtils.getContext().getContentResolver(), "android_id");
        v0 = String;
        if ( String == null || String.length() <= 0 )
        {
          File = SUtils.ReadFile("/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files/.nomedia");
          v0 = File;
          if ( File == null || File.length() == 0 )
          {
            v0 = UUID.randomUUID().toString().replaceAll("-", "");
            SUtils.WriteFile("/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files/.nomedia", v0);
            try
            {
              v8 = new java.io.File("/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files/.nomedia");
              if ( v8.exists() )
                v8.setReadOnly();
            }
            catch ( Exception e )
            {
            }
          }
        }
      }
      return v0;
    }

    public static String getIdentifier()
    {
      String IMEI;
      IMEI = getIMEI();
      if ( IMEI == null )
      {
        IMEI = getSerialNo();
        if ( IMEI == null )
        {
          IMEI = getCPUSerial();
          if ( IMEI == null )
          {
            IMEI = getMac();
            if ( IMEI == null )
              return getAndroidID();
          }
        }
      }
      return IMEI;
    }

    public static String getMac()
    {
      String MacAddress; // RETVAL
      String v1;
      try
      {
        MacAddress = bU.getConnectionInfo().getMacAddress();
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

    public static int getManufacture()
    {
      if ( aE.indexOf("motorola") == -1 )
      {
        if ( aE.indexOf("samsung") == -1 )
        {
          if ( aE.indexOf("htc") == -1 )
          {
            if ( aE.indexOf("sony") == -1 )
            {
              if ( aE.indexOf("sharp") == -1 )
                return 0;
              else
                return 5;
            }
            else
            {
              return 4;
            }
          }
          else if ( aF.indexOf("t-mobile g2") == -1 || aG.indexOf("htc_vision") == -1 )
          {
            return 3;
          }
          else
          {
            return 6;
          }
        }
        else
        {
          return 2;
        }
      }
      else if ( isNeedInvertTouchZone() )
      {
        return 7;
      }
      else if ( aF.indexOf("mb525") == -1 )
      {
        return 1;
      }
      else
      {
        return 8;
      }
    }

    private static boolean getMogaState()
    {
      return false;
    }

    public static String getRategameLink()
    {
      return ab;
    }

    public static String getSDFolder()
    {
      String PreferenceString;
      PreferenceString = SUtils.getPreferenceString("SDFolder", GameInstaller.mPreferencesName);
      if ( PreferenceString.equals("") )
        return "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
      return PreferenceString;
    }

    private static int getScreenOrientation()
    {
      int v0;
      int Rotation;
      android.util.DisplayMetrics v2;
      int widthPixels;
      int heightPixels;
      v0 = 1;
      bL = az.getWindowManager().getDefaultDisplay().getRotation();
      Rotation = az.getWindowManager().getDefaultDisplay().getRotation();
      v2 = new android.util.DisplayMetrics();
      az.getWindowManager().getDefaultDisplay().getMetrics(v2);
      widthPixels = v2.widthPixels;
      heightPixels = v2.heightPixels;
      if ( (Rotation == 0 || Rotation == 2) && heightPixels > widthPixels
        || (Rotation == 1 || Rotation == 3) && widthPixels > heightPixels )
      {
        switch ( Rotation )
        {
          case 1:
            v0 = 0;
            break;
          case 2:
            v0 = 9;
            break;
          case 3:
            v0 = 8;
            break;
          default:
            return v0;
        }
      }
      else
      {
        switch ( Rotation )
        {
          case 0:
            v0 = 0;
            break;
          case 1:
            return v0;
          case 2:
            v0 = 8;
            break;
          case 3:
            v0 = 9;
            break;
          default:
            v0 = 0;
            break;
        }
      }
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
        if ( v4.length() <= 0 || "unknown".equals(v4) )
          return null;
        return v4;
      }
      catch ( Exception e )
      {
      }
      return null;
    }

    public static String getTemporaryObbPath()
    {
      String SDFolder;
      SDFolder = getSDFolder();
      if ( SDFolder.endsWith("/") )
        SDFolder.substring(0, SDFolder.length() - 1);
      return SDFolder;
    }

    public static String getText()
    {
      return H;
    }

    public static String getUserAgent()
    {
      return Device.getUserAgent();
    }

    public static String getVersionName(android.content.Context p0, Class p1)
    {
      try
      {
        return (p0.getPackageManager().getPackageInfo(new android.content.ComponentName(p0, p1).getPackageName(), 0)).versionName;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
        return null;
      }
    }

    private boolean h()
    {
      return ((android.app.KeyguardManager)this.getSystemService("keyguard")).inKeyguardRestrictedInputMode();
    }

    public static int hasAccelerometer()
    {
      return bM ? 1 : 0;
    }

    public static int hasAnyInternetConnection()
    {
      checkAndUpdateConnectionState();
      return bD ? 1 : 0;
    }

    public static int hasInternetViaMobile()
    {
      int v0;
      android.net.NetworkInfo NetworkInfo; // RETVAL
    
      v0 = 0;
      NetworkInfo = bO.getNetworkInfo(0);
      if ( NetworkInfo != null && NetworkInfo.isConnected() )
        return 1;
      return v0;
    }

    public static int hasInternetViaWifi()
    {
      int v0;
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      v0 = 0;
      ActiveNetworkInfo = bO.getActiveNetworkInfo();
      if ( ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected() )
        return 1;
      return v0;
    }

    private static int hasSDCard()
    {
      String ExternalStorageState;
      Environment.getExternalStorageDirectory();
      ExternalStorageState = Environment.getExternalStorageState();
      return !"mounted".equals(ExternalStorageState) && !"mounted_ro".equals(ExternalStorageState) ? 1 : 0;
    }

    public static void hideGameloftLogo()
    {
      if ( az != null )
        az.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.ao());
    }

    private boolean i()
    {
      boolean v1;
      android.content.Intent v2;
      v1 = true;
      if ( !bF )
      {
        try
        {
          bF = true;
          v2 = new android.content.Intent();
          v2.setClassName(this.getPackageName(), this.getPackageName() + ".installer.GameInstaller");
          v2.replaceExtras(az.getIntent());
          this.startActivityForResult(v2, 100);
          return v1;
        }
        catch ( Exception v4 )
        {
          v4.printStackTrace();
        }
      }
      if ( GameInstaller.sbStarted )
        return false;
      return v1;
    }

    public static boolean isAmazonDevice()
    {
      return false;
    }

    public static boolean isController(String p0)
    {
      boolean v1;
      int[] DeviceIds;
      int i;
      android.view.InputDevice Device; // RETVAL
    
      v1 = false;
      DeviceIds = InputDevice.getDeviceIds();
      for ( i = 0; i < DeviceIds.length; ++i )
      {
        Device = InputDevice.getDevice(DeviceIds[i]);
        if ( Device != null && Device.getName().toLowerCase().contains(p0) )
          return true;
      }
      return v1;
    }

    public static boolean isHIDController()
    {
      boolean v0;
      android.view.InputDevice Device; // RETVAL
      android.view.InputDevice v2;
      v0 = false;
      Device = InputDevice.getDevice(bz);
      v2 = Device;
      if ( Device != null
        && (Device.getName().toLowerCase().contains("hid") && !v2.getName().toLowerCase().contains("lgosp-hid")
         || v2.getName().toLowerCase().contains("nyko")
         || v2.getName().toLowerCase().contains("game pad")) )
      {
        return true;
      }
      return v0;
    }

    public static boolean isNeedGcOnFrame()
    {
      return false;
    }

    public static boolean isNeedInvertTouchZone()
    {
      return aF.indexOf("droid2") != -1 || aF.indexOf("milestone2") != -1 || aF.indexOf("motoa953") != -1;
    }

    public static boolean isNeedUsedTouchZone()
    {
      return isNeedInvertTouchZone() || aF.indexOf("mb525") != -1;
    }

    public static int isRooted()
    {
      int v0;
      v0 = 1;
      if ( !checkRootMethod1() )
        return checkRootMethod2() ? 1 : 0;
      return v0;
    }

    public static boolean isShield()
    {
      return Build.MODEL.toLowerCase().contains("shield");
    }

    private static boolean isShowingGameloftLogo()
    {
      return F != null && F.getVisibility() == 0;
    }

    public static int isWifiEnabled()
    {
      return bU.isWifiEnabled() ? 1 : 0;
    }

    public static int isXperia()
    {
      return v ? 1 : 0;
    }

    public static boolean keepScreenOn(boolean p0)
    {
      boolean v1;
      v1 = true;
      if ( !p0 || V.isHeld() )
      {
        if ( !p0 && V.isHeld() && V != null )
        {
          V.release();
          return v1;
        }
        return false;
      }
      if ( V == null )
        return false;
      V.acquire();
      return v1;
    }

    public static void languageWelcomeScr(int p0)
    {
      int v1;
      if ( p0 == 11 )
        v1 = 15;
      else
        v1 = p0;
      if ( v1 < 0 )
        v1 = 0;
      ar = v1;
      SplashScreenActivity.setIsPAU(w);
      SplashScreenActivity.SetWSLanguage(ar);
    }

    public static void launchIGP(int p0)
    {
      ;
    }

    public static void launchWelcomeScr(int p0)
    {
      int v1;
      if ( p0 == 11 )
        v1 = 15;
      else
        v1 = p0;
      if ( v1 < 0 )
        v1 = 0;
      ar = v1;
      SplashScreenActivity.setIsPAU(w);
      SplashScreenActivity.cacheAndStart(ar);
    }

    private static native void nativeAccelerator(float p0, float p1, float p2);

    private static native void nativeAddReward(int p0);

    public static native void nativeCameraJoyPad(int p0, int p1);

    private static native int nativeCanInterrupt();

    public static native int nativeCheckInit(java.lang.String p0);

    private static native int nativeControllerConflict(int p0);

    private static native void nativeControllerConnected(int p0);

    private static native void nativeControllerDisconnected(int p0);

    private static native int nativeGetAUTLanguage();

    public static native java.util.ArrayList nativeGetFBFriendsNotInFed();

    public static native void nativeGetInfo(java.lang.String p0, java.lang.String p1, java.lang.String p2, java.lang.String p3);

    public static native void nativeInit();

    public static native void nativeInitt();

    public static native void nativeJoyPadMove(int p0, int p1, int p2, int p3);

    private static native void nativeMogaIsConnected(int p0);

    public static native void nativeOnAddFriend(java.lang.String p0);

    public static native void nativeOnHDMI(int p0);

    private static native void nativeOnKeyDown(int p0, int p1);

    private static native void nativeOnKeyUp(int p0, int p1);

    public static native void nativeOnTouch(int p0, int p1, int p2, int p3);

    private static native void nativeOrientation(float p0, float p1, float p2);

    public static native void nativePopUpCancel();

    public static native void nativePopUpLater();

    public static native void nativeRateMenuAnswerCallback(int p0);

    private static native void nativeShortcutToScreens(java.lang.String p0);

    public static native void nativeStopWalking(int p0);

    public static native void nativeWalkingAndCamera(int p0, int p1, int p2);

    private static native void nativeWichMogaIsConnected(int p0);

    private static native void nativeXperiaToggleJoysticks(int p0);

    public static void onAddFriend(String p0)
    {
      nativeOnAddFriend(p0);
    }

    public static void openBrowser(String p0)
    {
      String HttpResponse; // RETVAL
      String v2;
      HttpResponse = getHttpResponse(p0);
      v2 = HttpResponse;
      if ( HttpResponse != null && HttpResponse.length() > 0 )
        az.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.ag(v2));
    }

    public static int packFloatToInt255(float p0)
    {
      return (int)(255.0f * p0);
    }

    public static native boolean processTouchpadAsPointer(android.view.ViewParent p0, boolean p1);

    private static void retrieveIGPReward()
    {
      IGPFreemiumActivity.retrieveItems(
        nativeGetAUTLanguage(),
        "GGSS",
        (com.gameloft.android.GAND.GloftGGSS.bs)new com.gameloft.android.GAND.GloftGGSS.au());
    }

    public static void sendAppToBackground()
    {
      android.content.Intent v0;
      if ( getManufacture() == 5 )
      {
        v0 = new android.content.Intent("android.intent.action.MAIN").addCategory("android.intent.category.HOME");
        v0.replaceExtras(az.getIntent());
        az.startActivity(v0);
      }
      else
      {
        try
        {
          az.moveTaskToBack(true);
        }
        catch ( Exception v1 )
        {
          v1.printStackTrace();
        }
      }
    }

    public static void setCurrentControl(int p0, int p1)
    {
      if ( bA == -2 || p1 == -2 )
      {
        bB = Game$GameControllerType.b.ordinal();
        p1 = -2;
      }
      else
      {
        if ( p0 <= 0 )
          p0 = getDeviceType(InputDevice.getDevice(bA));
        bB = p0;
        if ( p1 <= 0 )
          p1 = bA;
      }
      bz = p1;
      nativeMogaIsConnected(1);
      nativeControllerConnected(bB);
    }

    public static void setEnableOrientation(int p0)
    {
      int ScreenOrientation; // RETVAL
      com.gameloft.android.GAND.GloftGGSS.Game v2;
      int v3;
      try
      {
        if ( isAmazonDevice() )
        {
          az.setRequestedOrientation(0);
        }
        else
        {
          if ( !I )
            p0 = 0;
          az.getWindowManager().getDefaultDisplay();
          ScreenOrientation = getScreenOrientation();
          if ( ScreenOrientation == 0 || ScreenOrientation == 8 )
            z = ScreenOrientation;
          v2 = az;
          if ( p0 == 1 )
            v3 = 6;
          else
            v3 = z;
          v2.setRequestedOrientation(v3);
        }
      }
      catch ( Exception e )
      {
      }
    }

    public static native void setInternetState(int p0);

    public static void setIsUserPau(int p0, int p1)
    {
      w = p0 == 1;
      SplashScreenActivity.setIsPAU(w);
    }

    public static void showCustomerCare()
    {
      InGameBrowser.showCustomerCare();
    }

    public static void showCustomerCareWithBANType(int p0)
    {
      InGameBrowser.showCustomerCareWithBANType(p0);
    }

    public static void showForum()
    {
      InGameBrowser.showForum();
    }

    public static void showGameloftLogo()
    {
      az.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.an());
    }

    public static void showInviteFaceFriends(int p0, String p1, String p2)
    {
      az.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.al(p0, p1, p2));
    }

    public static void showNews()
    {
      InGameBrowser.showNews();
    }

    public static void showRateGameDialog(String p0, String p1, String p2, String p3)
    {
      new com.gameloft.android.GAND.GloftGGSS.RateGameDialogFragment(p0, p1, p2, p3).a(getActivityContext().c(), "rategame");
    }

    public static void splashScreenFunc(String p0)
    {
      nativeShortcutToScreens(p0);
    }

    public static native void startProfiling();

    public static native void updateKey(java.lang.String p0);

    public static native void validateSecondElapsed(int p0);

    public final void a()
    {
      ;
    }

    public final android.view.View b()
    {
      return this.getCurrentFocus();
    }

    public boolean dispatchGenericMotionEvent(android.view.MotionEvent p0)
    {
      float AxisValue;
      float v5;
      float v6;
      float v7;
      float v8;
      float v9;
      int v10;
      int v11;
      float v12;
      float v13; // RETVAL
      float v14;
      float v15;
      int v16;
      int v17;
      if ( p0.getDeviceId() != bz )
        return super.dispatchGenericMotionEvent(p0);
      if ( (p0.getSource() & 0x10) != 0 && p0.getAction() == 2 )
      {
        AxisValue = p0.getAxisValue(0);
        v5 = p0.getAxisValue(1);
        nativeJoyPadMove(packFloatToInt255(AxisValue), -packFloatToInt255(v5), 0, 0);
        v6 = p0.getAxisValue(11);
        v7 = p0.getAxisValue(14);
        v8 = p0.getAxisValue(12);
        v9 = p0.getAxisValue(13);
        if ( v6 != 0.0 && v7 != 0.0 )
          nativeJoyPadMove(packFloatToInt255(v6), packFloatToInt255(v7), 0, 1);
        if ( v8 != 0.0 && v9 != 0.0 )
          nativeJoyPadMove(packFloatToInt255(v8), packFloatToInt255(v9), 0, 1);
        if ( p0.getAxisValue(17) < 0.75f )
          v10 = 0;
        else
          v10 = 312;
        if ( p0.getAxisValue(18) < 0.75f )
          v11 = 0;
        else
          v11 = 313;
        if ( this.ae && p0.getAxisValue(17) <= 0.25 )
          this.ag = true;
        if ( this.af && p0.getAxisValue(18) <= 0.25 )
          this.ah = true;
        if ( v10 != 0 )
        {
          nativeOnKeyDown(v10, 1);
          this.ae = true;
        }
        if ( this.ag )
        {
          nativeOnKeyUp(312, 1);
          this.ae = false;
          this.ag = false;
        }
        if ( v11 != 0 )
        {
          nativeOnKeyDown(v11, 1);
          this.af = true;
        }
        if ( this.ah )
        {
          nativeOnKeyUp(313, 1);
          this.af = false;
          this.ah = false;
        }
        if ( bB == Game$GameControllerType.c.ordinal() || bB == Game$GameControllerType.g.ordinal() )
        {
          v12 = p0.getAxisValue(23);
          v13 = p0.getAxisValue(22);
          if ( v12 <= 0.0f )
            nativeOnKeyUp(312, 1);
          else
            nativeOnKeyDown(312, 1);
          if ( v13 <= 0.0f )
            nativeOnKeyUp(313, 1);
          else
            nativeOnKeyDown(313, 1);
        }
        v14 = p0.getAxisValue(15);
        v15 = p0.getAxisValue(16);
        if ( v14 != 0.0f && (bB != Game$GameControllerType.g.ordinal() || AxisValue == 0.0f) )
        {
          if ( v14 <= 0.0f )
            v16 = 21;
          else
            v16 = 22;
          this.ao = v16;
          nativeOnKeyDown(this.ao, 1);
          this.am = true;
        }
        if ( this.am && v14 == 0.0f )
        {
          nativeOnKeyUp(this.ao, 1);
          this.am = false;
          this.ao = 0;
        }
        if ( v15 != 0.0f && (bB != Game$GameControllerType.g.ordinal() || v5 == 0.0f) )
        {
          if ( v15 <= 0.0f )
            v17 = 19;
          else
            v17 = 20;
          this.ap = v17;
          nativeOnKeyDown(this.ap, 1);
          this.an = true;
        }
        if ( this.an && v15 == 0.0f )
        {
          nativeOnKeyUp(this.ap, 1);
          this.an = false;
          this.ap = 0;
        }
        return true;
      }
      else
      {
        p0.getSource();
        return true;
      }
    }

    public boolean dispatchKeyEvent(android.view.KeyEvent p0)
    {
      String v2;
      if ( p0.getAction() == 0 )
      {
        v2 = Build.MODEL.toLowerCase();
        if ( v2.equals("adr6330vw") || v2.equals("adr6425lvw") || Build.VERSION.SDK_INT == 12 || Build.VERSION.SDK_INT == 13 )
          aJ = true;
      }
      return super.dispatchKeyEvent(p0);
    }

    protected void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      if ( p0 == 100 && p1 != 1 )
        this.f();
      if ( p0 == 64206 )
      {
        try
        {
          aI.onActivityResult(64206, p1, p2);
        }
        catch ( Exception e )
        {
        }
      }
    }

    public void onBackPressed()
    {
      if ( GLAds.isInFullScreenAd() )
        GLAds.handleBackKey();
      else
        super.onBackPressed();
      this.finish();
    }

    public void onConfigurationChanged(android.content.res.Configuration p0)
    {
      boolean v2;
      super.onConfigurationChanged(p0);
      if ( v )
      {
        v2 = p0.navigationHidden == 1;
        B = v2;
        nativeXperiaToggleJoysticks(com.gameloft.android.DecompRT.b2i(v2));
      }
    }

    protected void onCreate(android.os.Bundle p0)
    {
      if ( bv )
        Process.killProcess(Process.myPid());
      bv = false;
      super.onCreate(p0);
      if ( this.isTaskRoot() )
      {
        aE = Build.MANUFACTURER.toLowerCase();
        aF = Build.MODEL.toLowerCase();
        aG = Build.PRODUCT.toLowerCase();
        this.getWindow().setFlags(1024, 1024);
        bG = (android.hardware.SensorManager)this.getSystemService("sensor");
        bH = 0.0f;
        bI = 9.80665f;
        bJ = 9.80665f;
        bM = bG.registerListener(bN, bG.getDefaultSensor(1), 3);
        bG.unregisterListener(bN);
        this.requestWindowFeature(1);
        az = this;
        aH = getVersionName(this, this.getClass());
        this.setVolumeControlStream(3);
        V = ((android.os.PowerManager)az.getSystemService("power")).newWakeLock(536870938, "Game");
        if ( SUtils.getContext() == null )
          SUtils.setContext(this);
        Tracking.init();
        if ( this.q == null )
          this.q = new com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard(this);
        if ( this.aA != null )
          this.aA.requestFocus();
        this.L = new java.util.Timer();
        LowProfileListener.ActivateImmersiveMode(this);
      }
      else
      {
        this.finish();
      }
    }

    protected void onDestroy()
    {
      super.onDestroy();
      if ( !this.isTaskRoot() )
        return;
      try
      {
        if ( this.bE != null )
          this.unregisterReceiver(this.bE);
      }
      catch ( Exception e )
      {
      }
      if ( bY != null )
        bY.a();
      this.q = null;
    }

    public boolean onGenericMotionEvent(android.view.MotionEvent p0)
    {
      StandardHIDController.HandleMotionEvent(p0);
      return true;
    }

    public boolean onKeyDown(int p0, android.view.KeyEvent p1)
    {
      int v3;
      boolean v4;
      android.view.InputDevice Device; // RETVAL
      android.view.InputDevice v7;
      v3 = 0;
      v4 = true;
      LowProfileListener.onKeyDown(this, p0);
      if ( p0 == 24 || p0 == 25 || p0 == 27 || p0 == 84 )
        return false;
      if ( p0 != 4 || y )
      {
        if ( p0 == 82 )
          p1.startTracking();
        Device = InputDevice.getDevice(p1.getDeviceId());
        v7 = Device;
        if ( Device != null
          && p0 == 4
          && (Device.getName().toLowerCase().contains("hid") || v7.getName().toLowerCase().contains("nyko")) )
        {
          p0 = 109;
        }
        if ( p1.getDeviceId() == bz )
          v3 = 1;
        nativeOnKeyDown(p0, v3);
      }
      else
      {
        this.f();
      }
      return v4;
    }

    public boolean onKeyLongPress(int p0, android.view.KeyEvent p1)
    {
      boolean v3;
      v3 = true;
      if ( p0 == 27 )
        return false;
      return v3;
    }

    public boolean onKeyUp(int p0, android.view.KeyEvent p1)
    {
      boolean v3;
      int v4;
      android.view.InputDevice Device; // RETVAL
      android.view.InputDevice v7;
      v3 = true;
      v4 = 0;
      if ( p0 == 24 || p0 == 25 || p0 == 27 || p0 == 84 )
        return false;
      if ( p0 == 82 )
        p1.startTracking();
      Device = InputDevice.getDevice(p1.getDeviceId());
      v7 = Device;
      if ( Device != null
        && p0 == 4
        && (Device.getName().toLowerCase().contains("hid") || v7.getName().toLowerCase().contains("nyko")) )
      {
        p0 = 109;
      }
      if ( p1.getDeviceId() == bz )
        v4 = 1;
      nativeOnKeyUp(p0, v4);
      return v3;
    }

    protected void onPause()
    {
      int v1;
      if ( this.L != null )
      {
        this.L.cancel();
        this.L.purge();
        this.L = null;
      }
      if ( !this.aC && this.aB )
      {
        this.aC = true;
        GL2JNILib.pause();
      }
      GLAds.pause();
      super.onPause();
      StandardHIDController.PauseControllerListener();
      v1 = 0;
      while ( !GL2JNIView.g )
      {
        try
        {
          Thread.sleep(1);
        }
        catch ( Exception e )
        {
        }
        if ( ++v1 >= 400 )
          break;
      }
      if ( bY != null )
        bY.c();
      if ( bG != null && bK )
        bG.unregisterListener(bN);
      if ( this.aA != null )
        this.aA.requestFocus();
      if ( bx )
        bx = false;
    }

    protected void onRestart()
    {
      super.onRestart();
    }

    protected void onResume()
    {
      int v1;
      android.view.ViewGroup.LayoutParams v2;
      com.bda.controller.Controller Instance; // RETVAL
      android.widget.LinearLayout v4;
      android.os.StatFs v5;
      long BlockSize;
      String[] v7;
      int v8;
      v1 = 0;
      this.g();
      super.onResume();
      GLAds.resume();
      StandardHIDController.ResumeControllerListener();
      if ( this.i() )
        return;
      if ( !u )
      {
        u = true;
        this.g();
        setEnableOrientation(0);
        SendInfo.setContext(this);
        SUtils.setContext(this);
        SUtils.nativeInit();
        Device.nativeInit();
        Device.init();
        SplashScreenActivity.init(this);
        SimplifiedAndroidUtils.Init(this);
        InAppBilling.init(this);
        if ( Build.MODEL.equals("SO-01D")
          || Build.MODEL.equals("R800i")
          || Build.MODEL.equals("R800x")
          || Build.MODEL.equals("R800a")
          || Build.MODEL.equals("R800c") )
        {
          v = true;
          try
          {
            MotionEvent.obtain(1, 1, 0, 0.0f, 0.0f, 0).getSource();
            t = true;
          }
          catch ( LinkageError e )
          {
            t = false;
          }
          this.onConfigurationChanged(this.getResources().getConfiguration());
        }
        GL2JNILib.init();
        if ( !bV )
        {
          bX = new com.gameloft.GLSocialLib.PlatformAndroid(this);
          PlatformAndroid.nativeInit();
          aI = new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib(this, this);
          FacebookAndroidGLSocialLib.nativeInit();
          bV = true;
        }
        nativeInit();
        if ( !bW )
        {
          PortingJNIv3.Init(this);
          bW = true;
        }
        this.N = (android.widget.FrameLayout)this.getLayoutInflater().inflate(2130903077, null);
        v2 = new android.view.ViewGroup.LayoutParams(-1, -1);
        if ( this.N != null )
          this.addContentView(this.N, v2);
        this.N.setVisibility(8);
        this.O = new com.gameloft.android.GAND.GloftGGSS.gEditText(this);
        this.N.addView(this.O, new android.widget.LinearLayout.LayoutParams(-2, -2));
        this.O.a(this.N, GL2JNILib.getKeyboard());
        this.O.setOnKeyListener((android.view.View.OnKeyListener)new com.gameloft.android.GAND.GloftGGSS.aq(this));
        this.O.setOnFocusChangeListener((android.view.View.OnFocusChangeListener)new com.gameloft.android.GAND.GloftGGSS.ar(this));
        this.O.setOnEditorActionListener((android.widget.TextView.OnEditorActionListener)new com.gameloft.android.GAND.GloftGGSS.as(this));
        this.O.addTextChangedListener((android.text.TextWatcher)new com.gameloft.android.GAND.GloftGGSS.at(this));
        T = (android.app.KeyguardManager)this.getSystemService("keyguard");
        M = GL2JNILib.getKeyboard();
        this.aa = this.getResources().getAssets();
        InitNativeAssetManager(this.aa);
        if ( Character.getNumericValue(System.getProperty("java.vm.version").charAt(0)) < 2 )
        {
          Instance = Controller.getInstance(this);
          bY = Instance;
          Instance.b();
          bY.a((com.bda.controller.i)this.bq, new android.os.Handler());
        }
        v4 = (android.widget.LinearLayout)this.getLayoutInflater().inflate(2130903071, null);
        E = v4;
        v4.setVisibility(8);
        az.setRequestedOrientation(0);
        setEnableOrientation(0);
        showGameloftLogo();
        Locale.getDefault().getCountry();
        if ( (Build.MANUFACTURER + "_" + Build.MODEL).toLowerCase().contains("samsung_gt-p7501") )
          bw = true;
        this.aB = true;
        v5 = new android.os.StatFs(Environment.getDataDirectory().getPath());
        BlockSize = v5.getBlockSize();
        v5.getBlockCount();
        if ( v5.getAvailableBlocks() * BlockSize / 0x100000 <= 10 )
          ResetMessage("Nou muchou free spaceru", "Accepteru");
        findBySource(16777232);
        D = true;
      }
      if ( !bu )
      {
        if ( DataSharing.getContext() == null )
          DataSharing.init(SUtils.getContext());
        DataSharing.doNativeInit();
        if ( DataSharingGangstar.getContext() == null )
          DataSharingGangstar.init(SUtils.getContext());
        DataSharingGangstar.doNativeInit();
      }
      if ( !((android.app.KeyguardManager)this.getSystemService("keyguard")).inKeyguardRestrictedInputMode() )
      {
        bv = false;
        if ( bG != null && bK )
          bG.registerListener(bN, bG.getDefaultSensor(1), 3);
        SUtils.setContext(az);
        CompatUtil.registerReceiverCompat(this, this.bE, Z);
        if ( bY != null )
          bY.d();
        if ( this.aA != null )
          this.aA.a();
        if ( bU == null )
          bU = (android.net.wifi.WifiManager)this.getSystemService("wifi");
        if ( bO == null )
        {
          bO = (android.net.ConnectivityManager)this.getSystemService("connectivity");
          bD = _hasAnyInternetConnection() == 1;
        }
        System.gc();
        if ( au != -1 && this.x )
          retrieveIGPReward();
        if ( this.aA != null )
          this.aA.onWindowFocusChanged(true);
        if ( !bx )
        {
          Tracking.setFlag(17);
          Tracking.onLaunchGame(2);
          bx = true;
        }
        if ( this.aA != null )
          this.aA.requestFocus();
        this.L = new java.util.Timer();
        this.L.schedule(new com.gameloft.android.GAND.GloftGGSS.ae(this), 0, 500);
        try
        {
          v7 = this.getAssets().list("");
          v8 = v7.length;
          while ( v1 < v8 )
          {
            if ( nativeCheckInit(v7[v1]) == 0 )
              nativeInitt();
            ++v1;
          }
        }
        catch ( Exception e )
        {
        }
      }
    }

    public boolean onSearchRequested()
    {
      return false;
    }

    protected void onStart()
    {
      super.onStart();
      com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsTracker.activityStart(this);
      com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsTracker.Init(this.getApplicationContext());
    }

    protected void onStop()
    {
      bU = null;
      super.onStop();
      com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsTracker.activityStop(this);
      Tracking.setFlag(1);
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      int Action;
      int v3;
      int PointerCount;
      int v5;
      float v6;
      float v7; // RETVAL
      int i;
      int PointerId;
      int v10;
      int v11;
      int j;
      float v13;
      float v14; // RETVAL
      float v15;
      float v16;
      float v17; // RETVAL
      float v18;
      float v19;
      Action = p0.getAction();
      v3 = Action & 0xFF;
      PointerCount = p0.getPointerCount();
      v5 = (Action & 0xFF00) >> 8;
      if ( Action == 1 && v5 <= 1 )
      {
        if ( isNeedUsedTouchZone() )
        {
          v6 = p0.getX(0);
          v7 = p0.getY(0);
          nativeOnTouch(0, (int)v6, (int)v7, 0);
          nativeOnTouch(0, (int)v6, (int)v7, 1);
          this.aX.c = false;
          this.aX.a();
          this.aY.c = false;
          this.aY.a();
          this.bs = false;
        }
        else
        {
          nativeOnTouch(0, (int)p0.getX(0), (int)p0.getY(0), 0);
          nativeOnTouch(0, (int)p0.getX(0), (int)p0.getY(0), 1);
        }
      }
      if ( Action == 2 && v5 <= 1 )
      {
        if ( isNeedUsedTouchZone() )
        {
          for ( i = 0; i < PointerCount; ++i )
          {
            PointerId = p0.getPointerId(i);
            v10 = (int)p0.getX(PointerId);
            v11 = (int)p0.getY(PointerId);
            if ( this.aY.c && this.aY.b((float)v10, (float)v11) )
            {
              this.aY.a((float)v10, (float)v11);
              nativeOnTouch(2, v10, v11, 1);
            }
            else if ( this.aX.c && this.aX.b((float)v10, (float)v11) )
            {
              this.aX.a((float)v10, (float)v11);
              nativeOnTouch(2, v10, v11, 0);
            }
            else if ( isNeedInvertTouchZone() )
            {
              this.aX.a((float)v10, (float)v11);
              nativeOnTouch(1, v10, v11, 0);
              nativeOnTouch(2, v10, v11, 0);
            }
            else if ( this.aX.c && !this.aY.c || !this.aX.c && this.aY.c )
            {
              nativeOnTouch(0, v10, v11, 0);
              this.aX.c = false;
              this.aX.a();
              nativeOnTouch(1, v10, v11, 1);
              this.aY.c = true;
              this.aY.a((float)v10, (float)v11);
            }
          }
        }
        else
        {
          for ( j = 0; j < PointerCount; ++j )
            nativeOnTouch(2, (int)p0.getX(j), (int)p0.getY(j), p0.getPointerId(j));
        }
      }
      if ( v3 == 6 && v5 <= 1 )
      {
        if ( isNeedUsedTouchZone() )
        {
          v13 = p0.getX(v5);
          v14 = p0.getY(v5);
          v15 = v14;
          if ( this.aX.c && this.aX.b(v13, v14) )
          {
            nativeOnTouch(0, (int)v13, (int)v15, 0);
            this.aX.c = false;
            this.aX.a();
          }
          else if ( this.aY.c && this.aY.b(v13, v15) )
          {
            nativeOnTouch(0, (int)v13, (int)v15, 1);
            this.aY.c = false;
            this.aY.a();
          }
        }
        else
        {
          nativeOnTouch(0, (int)p0.getX(v5), (int)p0.getY(v5), v5);
        }
      }
      if ( Action == 0 && v5 <= 1 )
      {
        if ( isNeedUsedTouchZone() )
        {
          v16 = p0.getX(0);
          v17 = p0.getY(0);
          this.aX.c = true;
          this.aX.a(v16, v17);
          nativeOnTouch(1, (int)v16, (int)v17, 0);
        }
        else
        {
          nativeOnTouch(1, (int)p0.getX(0), (int)p0.getY(0), 0);
        }
      }
      if ( v3 == 5 && v5 <= 1 )
      {
        if ( isNeedUsedTouchZone() )
        {
          v18 = p0.getX(v5);
          v19 = p0.getY(v5);
          if ( isNeedInvertTouchZone() )
          {
            if ( v5 == 0 )
            {
              this.bs = true;
              v18 = p0.getX(1);
              v19 = p0.getY(1);
            }
            if ( this.bs && v5 == 1 )
            {
              this.bs = false;
              v18 = p0.getX(0);
              v19 = p0.getY(0);
            }
          }
          if ( this.aX.c )
          {
            if ( !this.aY.c )
            {
              this.aY.c = true;
              this.aY.a(v18, v19);
              nativeOnTouch(1, (int)v18, (int)v19, 1);
            }
          }
          else
          {
            this.aX.c = true;
            this.aX.a(v18, v19);
            nativeOnTouch(1, (int)v18, (int)v19, 0);
          }
        }
        else
        {
          nativeOnTouch(1, (int)p0.getX(v5), (int)p0.getY(v5), v5);
        }
      }
      return true;
    }

    public void onWindowFocusChanged(boolean p0)
    {
      android.view.View RootView; // RETVAL
      android.view.ViewParent Parent; // RETVAL
    
      Log.i("GAME", "onLaunch Start", new Object[0]);
      this.s = p0;
      super.onWindowFocusChanged(p0);
      if ( p0 )
        Tracking.onLaunchGame(2);
      else
        Tracking.setFlag(16);
      Log.d("HDJNI", "Receive Focus", new Object[0]);
      if ( p0 )
      {
        new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.ap(this)).start();
        LowProfileListener.ActivateImmersiveMode(this);
        if ( !this.A && v )
        {
          try
          {
            RootView = this.getWindow().getDecorView().getRootView();
            if ( RootView != null )
            {
              Parent = RootView.getParent();
              if ( Parent != null )
                processTouchpadAsPointer(Parent, true);
            }
          }
          catch ( Exception e )
          {
          }
          this.A = true;
        }
      }
    }

}
