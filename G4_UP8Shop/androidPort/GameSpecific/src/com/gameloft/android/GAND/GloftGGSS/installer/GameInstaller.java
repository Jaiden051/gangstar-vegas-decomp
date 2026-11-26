// Decompiled from classes.dex (SourceFile: GameInstaller.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

import com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsConstants$Label;
import android.app.PendingIntent;
import android.content.Intent;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.os.Looper;
import android.provider.Settings;
import android.text.format.Time;
import android.view.ViewConfiguration;
import com.gameloft.android.GAND.GloftGGSS.ApplicationSetUp;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.LowProfileListener;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Tracking;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer;
import com.gameloft.android.GAND.GloftGGSS.installer.utils.CRC;
import com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient;
import com.gameloft.android.GAND.GloftGGSS.installer.utils.Tracker;
import com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsConstants;
import com.gameloft.android.GAND.GloftGGSS.utils.GoogleAnalyticsTracker;
import com.gameloft.android.hdidfv.HDIDFV;
import com.google.android.gms.analytics.GoogleAnalytics;
import java.io.File;
public class GameInstaller extends android.app.Activity implements com.gameloft.android.GAND.GloftGGSS.installer.utils.c, java.lang.Runnable {
    // Fields
    public static java.lang.String DATA_PATH;
    public static int LAYOUT_BLACK;
    public static int LAYOUT_CHECKING_REQUIRED_FILES;
    public static int LAYOUT_CONFIRM_3G;
    public static int LAYOUT_CONFIRM_UPDATE;
    public static int LAYOUT_CONFIRM_WAITING_FOR_WIFI;
    public static int LAYOUT_DOWNLOAD_ANYTIME;
    public static int LAYOUT_DOWNLOAD_FILES;
    public static int LAYOUT_DOWNLOAD_FILES_CANCEL_QUESTION;
    public static int LAYOUT_DOWNLOAD_FILES_ERROR;
    public static int LAYOUT_DOWNLOAD_FILES_NO_WIFI_QUESTION;
    public static int LAYOUT_DOWNLOAD_FILES_QUESTION;
    public static int LAYOUT_LICENSE_INFO;
    public static int LAYOUT_LOGO;
    public static int LAYOUT_NO_DATA_CONNECTION_FOUND;
    public static int LAYOUT_NO_GP_ACCOUNT_DETECTED;
    public static int LAYOUT_RETRY_UPDATE_VERSION;
    public static int LAYOUT_SD_SPACE_INFO;
    public static int LAYOUT_SEARCHING_FOR_NEW_VERSION;
    public static int LAYOUT_SEARCHING_FOR_WIFI;
    public static int LAYOUT_SUCCESS_DOWNLOADED;
    public static int LAYOUT_UNZIP_FILES;
    public static int LAYOUT_UNZIP_FILES_CANCEL_QUESTION;
    public static int LAYOUT_VERIFYING_FILES;
    public static int LAYOUT_WAITING_FOR_WIFI;
    public static java.lang.String LIBS_PATH;
    public static java.lang.String SaveFolder;
    private static int TAP_COUNT_MAX;
    public static boolean bIsPaused;
    public static java.lang.Boolean isReached;
    private static int leftTapCount;
    public static android.telephony.TelephonyManager mDeviceInfo;
    public static java.lang.String mPreferencesName;
    private static android.app.AlertDialog m_Dialog;
    private static int m_delayTime;
    private static java.lang.String m_errorMessage;
    public static long m_iDownloadedSize;
    public static long m_iRealRequiredSize;
    private static java.lang.Object m_objectToastLock;
    public static com.gameloft.android.GAND.GloftGGSS.installer.utils.Downloader m_pDownloader;
    public static java.lang.String m_portalCode;
    private static java.lang.String m_prevErrorMessage;
    public static com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller m_sInstance;
    private static int m_toastExtra;
    private static int m_toastSize;
    public static java.lang.String marketPath;
    private static int pack_NoFiles;
    private static long pack_biggestFile;
    private static int rightTapCount;
    private static java.util.ArrayList sNativeLibs;
    private static boolean sUpdateAPK;
    public static boolean s_files_changed;
    public static boolean s_isPauseGame;
    public static boolean sbStarted;
    public static java.lang.String sd_folder;
    static long slLastIndex;
    private static long startTime;
    private static boolean statePressA;
    private static boolean statePressB;
    private static boolean statePressC;
    public final int A;
    public final int B;
    public final int C;
    public final int D;
    public final int E;
    public final int F;
    public final int G;
    public final int H;
    public final int I;
    public final int J;
    public final int K;
    public final int L;
    public final int M;
    public final int N;
    public final int O;
    public final int P;
    public final int Q;
    public final int R;
    public final int S;
    public final int T;
    public final int U;
    public final int V;
    public final int W;
    public final int X;
    public final int Y;
    public final int Z;
    public final int a;
    public final int aA;
    public final int aB;
    public int[] aC;
    android.net.wifi.WifiManager aD;
    android.net.ConnectivityManager aE;
    android.net.wifi.WifiManager.WifiLock aF;
    android.os.PowerManager.WakeLock aG;
    public boolean aH;
    public boolean aI;
    public java.io.DataInputStream aJ;
    java.io.FileOutputStream aK;
    int aL;
    int aM;
    com.gameloft.android.GAND.GloftGGSS.installer.utils.i aN;
    int aO;
    public boolean aP;
    public boolean aQ;
    public java.lang.String aR;
    public boolean aS;
    public int aT;
    public int aU;
    public int aV;
    public final int aW;
    public boolean aX;
    public boolean aY;
    public boolean aZ;
    public final int aa;
    public final int ab;
    public final int ac;
    public final int ad;
    public final int ae;
    public final int af;
    public final int ag;
    public final int ah;
    public final int ai;
    public final int aj;
    public final int ak;
    public int al;
    public int am;
    public int an;
    public java.lang.String ao;
    public int ap;
    public int aq;
    public int ar;
    public int as;
    public int at;
    public int au;
    public int av;
    public int aw;
    public final int ax;
    public final int ay;
    public final int az;
    android.app.NotificationManager b;
    private final boolean bA;
    private final int bB;
    private final int bC;
    private final int bD;
    private int bE;
    private boolean bF;
    private final int bG;
    private final int bH;
    private final java.lang.String bI;
    private java.lang.String bJ;
    private java.util.ArrayList bK;
    private int bL;
    private boolean bM;
    private final int bN;
    private final int bO;
    private long bP;
    private long bQ;
    private int bR;
    private boolean bS;
    private com.gameloft.android.GAND.GloftGGSS.GLUtils.Device bT;
    private com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer bU;
    private boolean bV;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.j bW;
    private com.gameloft.android.GAND.GloftGGSS.installer.utils.f bX;
    private boolean bY;
    private final int bZ;
    public int ba;
    android.net.NetworkInfo bb;
    java.util.Vector bc;
    java.util.Vector bd;
    public boolean be;
    android.content.BroadcastReceiver bf;
    android.content.BroadcastReceiver bg;
    public boolean bh;
    public boolean bi;
    public boolean bj;
    public android.view.View.OnClickListener bk;
    android.app.Notification bl;
    android.app.PendingIntent bm;
    private int bs;
    private boolean bt;
    private boolean bu;
    private java.lang.String bv;
    private boolean bw;
    private int bx;
    private final boolean by;
    private final boolean bz;
    java.util.Vector c;
    private final int ca;
    private final int cb;
    private final int cc;
    private java.util.ArrayList cd;
    private int ce;
    private int cf;
    private int cg;
    private int ch;
    private int ci;
    private long cj;
    private long ck;
    private android.os.Handler cl;
    private int cm;
    java.util.Vector d;
    java.util.Vector e;
    long f;
    long g;
    long h;
    boolean i;
    long j;
    long k;
    long l;
    java.text.DecimalFormat m;
    final int n;
    final int o;
    final int p;
    final int q;
    final int r;
    final int s;
    android.content.res.AssetManager t;
    com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient u;
    boolean v;
    public final int w;
    public final int x;
    public final int y;
    public final int z;

    // Methods
    static
    {
      sbStarted = false;
      s_isPauseGame = false;
      m_sInstance = null;
      mPreferencesName = "GamePrefs";
      sUpdateAPK = true;
      m_portalCode = "";
      SaveFolder = null;
      sd_folder = "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
      DATA_PATH = sd_folder + "/";
      LIBS_PATH = "/libs/";
      s_files_changed = false;
      marketPath = Environment.getExternalStorageDirectory() + "/Android/obb/com.gameloft.android.GAND.GloftGGSS";
      slLastIndex = 0;
      isReached = null;
      bIsPaused = false;
      startTime = 0;
      leftTapCount = 0;
      rightTapCount = 0;
      TAP_COUNT_MAX = 3;
      m_toastSize = 0;
      m_delayTime = 1500;
      m_toastExtra = 20;
      m_objectToastLock = new Object();
      m_errorMessage = "";
      m_prevErrorMessage = "";
      statePressA = false;
      statePressB = false;
      statePressC = false;
      pack_biggestFile = -1;
      pack_NoFiles = -1;
      sNativeLibs = new java.util.ArrayList();
    }

    public GameInstaller()
    {
      super();
      this.bs = -1;
      this.bt = true;
      this.bu = false;
      this.bv = "/pack.info";
      this.bw = false;
      this.bx = 0;
      this.by = false;
      this.bz = false;
      this.bA = true;
      this.a = 7;
      this.bB = 0;
      this.bC = 1;
      this.bD = 2;
      this.bE = 0;
      this.bF = false;
      this.bG = 0x8000;
      this.bH = 7176;
      this.bI = "com.gameloft.android.GAND.GloftGGSS.Game";
      this.bJ = "";
      this.bK = new java.util.ArrayList();
      this.c = null;
      this.d = new java.util.Vector();
      this.e = new java.util.Vector();
      this.f = 0;
      this.g = 0;
      this.h = 0;
      this.i = false;
      this.j = 0;
      this.k = 0;
      this.l = 0;
      this.n = 0;
      this.o = -1;
      this.p = -2;
      this.q = -3;
      this.r = -4;
      this.s = -5;
      this.bL = 0;
      this.bM = false;
      this.bN = 3000;
      this.bO = 30000;
      this.bP = 0;
      this.bQ = 0;
      this.v = false;
      this.w = 0;
      this.x = 1;
      this.y = 2;
      this.z = 3;
      this.A = 4;
      this.B = 5;
      this.C = 6;
      this.D = 7;
      this.E = 8;
      this.F = 9;
      this.G = 10;
      this.H = 11;
      this.I = 12;
      this.J = 13;
      this.K = 14;
      this.L = 19;
      this.M = 20;
      this.N = 21;
      this.O = 23;
      this.P = 24;
      this.Q = 25;
      this.R = 26;
      this.S = 27;
      this.T = 28;
      this.U = 29;
      this.V = 30;
      this.W = 31;
      this.X = 41;
      this.Y = 42;
      this.Z = -1;
      this.aa = 0;
      this.ab = 1;
      this.ac = 2;
      this.ad = 3;
      this.ae = 4;
      this.af = 5;
      this.ag = 6;
      this.ah = 7;
      this.ai = 8;
      this.aj = 9;
      this.ak = 10;
      this.an = 0;
      this.at = 0;
      this.au = 1;
      this.av = 2;
      this.aw = 3;
      this.ax = 0;
      this.ay = 1;
      this.az = 2;
      this.aA = 3;
      this.aB = 4;
      this.aC = new int[] { 0, 0, 0, 0 };
      this.bR = -1;
      this.aH = false;
      this.aI = false;
      this.bS = false;
      this.aK = null;
      this.aL = 0;
      this.aM = 0;
      this.aN = null;
      this.aO = 0;
      this.aP = false;
      this.aQ = false;
      this.aS = true;
      this.aT = 0;
      this.aU = 0;
      this.aV = 0;
      this.aW = 30;
      this.aX = false;
      this.aY = false;
      this.aZ = true;
      this.ba = 0;
      this.bb = null;
      this.bV = false;
      this.bY = false;
      this.bZ = 0;
      this.ca = 1;
      this.cb = 2;
      this.cc = 3;
      this.be = false;
      this.bf = null;
      this.bg = null;
      this.bh = false;
      this.bi = false;
      this.bj = true;
      this.ce = -1;
      this.cf = 0;
      this.cg = -1;
      this.ch = 0;
      this.ci = 0;
      this.bk = (android.view.View.OnClickListener)new com.gameloft.android.GAND.GloftGGSS.installer.c(this);
      this.cj = 0;
      this.ck = 1000;
      this.cm = 0;
      this.ap = 0;
      SUtils.setContext(this);
    }

    private void A()
    {
      String[] v1;
      int i;
      v1 = new java.io.File(SaveFolder).list();
      for ( i = 0; i < v1.length; ++i )
      {
        if ( v1[i].startsWith("pack") && v1[i].endsWith(".info") )
        {
          try
          {
            this.e.addAll(new com.gameloft.android.GAND.GloftGGSS.installer.utils.j(this).a(SaveFolder + "/" + v1[i]));
            continue;
          }
          catch ( Exception e )
          {
          }
        }
      }
    }

    private java.util.Vector<String> B()
    {
      java.util.Vector v1;
      java.io.File ExternalFilesDir; // RETVAL
      java.io.File v3;
      java.io.DataInputStream v4;
      java.io.BufferedReader v5;
      String Line; // RETVAL
      String v7;
      String v8;
      v1 = new java.util.Vector();
      try
      {
        ExternalFilesDir = this.getExternalFilesDir(null);
        v3 = ExternalFilesDir;
        if ( ExternalFilesDir != null )
        {
          v1.add(ExternalFilesDir.getAbsolutePath());
          if ( v3.exists() || v3.list().length == 0 )
          {
            v3.delete();
            new java.io.File(v3.getAbsolutePath().substring(0, v3.getAbsolutePath().lastIndexOf("/files"))).delete();
          }
        }
      }
      catch ( Exception e )
      {
      }
      try
      {
        v4 = new java.io.DataInputStream(new java.io.FileInputStream("/proc/mounts"));
        v5 = new java.io.BufferedReader(new java.io.InputStreamReader(v4));
        while ( true )
        {
          Line = v5.readLine();
          v7 = Line;
          if ( Line == null )
            break;
          if ( (Line.contains("/mnt/sdcard") || v7.contains("/storage/sdcard")) && !v7.contains("android_secure") )
          {
            v8 = v7.substring(v7.indexOf(32) + 1);
            v1.add(v8.substring(0, v8.indexOf(32)) + "/Android/data/com.gameloft.android.GAND.GloftGGSS" + "/files");
          }
        }
        v5.close();
        v4.close();
      }
      catch ( Exception e )
      {
      }
      v1.add("/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files");
      return v1;
    }

    private String C()
    {
      String v1 = null;
      int v2 = 0;
      java.util.Vector v3 = null;
      java.util.Iterator v4 = null;
      String v5 = null;
      java.io.File v6 = null;
      java.util.Iterator v7 = null;
      String v8 = null;
      java.util.Iterator v9 = null;
      int v10 = 0;
      String v11 = null;
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
              v1 = "";
              v2 = Build.VERSION.SDK_INT;
              if ( v2 < 8 )
              return "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
              _ehCatchPc = 4;
              new java.util.Vector().add("/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files");
              v3 = this.B();
              v4 = v3.iterator();
              while ( v4.hasNext() )
              {
              v5 = (String)v4.next();
              v6 = new java.io.File(v5);
              if ( v6.exists() && v6.list().length > 0 )
              {
              v1 = v5;
              break;
              }
              }
              this.bc = new java.util.Vector();
              this.bd = new java.util.Vector();
              v7 = v3.iterator();
              _pc = 1;
              continue _sm;
            case 1:
              if ( !(v7.hasNext()) ) { _pc = 3; continue _sm; }
              v8 = (String)v7.next();
              this.bc.add(new android.util.Pair(v8, Long.valueOf(this.c(v8))));
              v9 = this.bd.iterator();
              while ( v9.hasNext() )
              {
              if ( ((Long)((android.util.Pair)v9.next()).second).equals(Long.valueOf(this.c(v8))) )
              {
              v10 = 0;
              { _pc = 2; continue _sm; }
              }
              }
              v10 = 1;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v10 != 0 )
              this.bd.add(new android.util.Pair(v8, Long.valueOf(this.c(v8))));
              _pc = 1;
              continue _sm;
            case 3:
              if ( !v1.equals("") )
              return v1;
              v11 = "";
              _ehCatchPc = -1;
              _pc = 6;
              continue _sm;
            case 4:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              v11 = v1;
              if ( v1.equals("") )
              return "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              return v11;
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

    private String D()
    {
      String OverriddenSetting;
      String File;
      int v4;
      int v5;
      OverriddenSetting = SUtils.getOverriddenSetting(
                            SUtils.getPreferenceString("SDFolder", "", mPreferencesName) + "/qaTestingConfigs.txt",
                            "DATA_LINK");
      if ( OverriddenSetting != null )
      {
        this.bu = true;
      }
      else
      {
        this.bu = false;
        File = SUtils.ReadFile(0x7f050000);
        v4 = File.indexOf("DYNAMIC:") + 8;
        v5 = File.indexOf(13, v4);
        if ( v5 == -1 )
          v5 = File.length();
        return (File.substring(v4, v5)
              + "?model="
              + Device.getPhoneModel()
              + "&device="
              + Device.getPhoneDevice()
              + "&product=1622"
              + "&version=1.8.2"
              + "&portal="
              + m_portalCode).replaceAll("\\s+", "%20");
      }
      return OverriddenSetting;
    }

    private int E()
    {
      String PreferenceString;
      java.io.File v2;
      android.os.StatFs v3;
      java.util.Iterator i;
      this.h = 0;
      try
      {
        PreferenceString = SUtils.getPreferenceString("SDFolder", "", mPreferencesName);
        if ( PreferenceString.contains("com.gameloft.android.GAND.GloftGGSS") )
        {
          v2 = new java.io.File(PreferenceString.substring(0, PreferenceString.indexOf("com.gameloft.android.GAND.GloftGGSS")));
        }
        else if ( PreferenceString == "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files" )
        {
          v2 = new java.io.File("/sdcard/");
        }
        else
        {
          v2 = new java.io.File(PreferenceString);
        }
        if ( !v2.exists() )
          v2.mkdirs();
        v3 = new android.os.StatFs(v2.getAbsolutePath());
        this.g = (int)(v3.getAvailableBlocks() * (long)v3.getBlockSize() / 0x100000);
        if ( this.g == 0 && !this.a(0) )
          this.aC[0] = hasSDCard();
      }
      catch ( Exception e )
      {
        this.g = 0;
      }
      for ( i = this.bK.iterator();
            i.hasNext();
            this.h += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)i.next()).f() )
      {
        ;
      }
      if ( this.h > 0 )
        this.h = this.h;
      return this.g <= this.h ? 1 : 0;
    }

    private void F()
    {
      this.setResult(1);
      this.finish();
    }

    private void G()
    {
      this.setResult(2);
      this.finish();
    }

    private static String GetCurrentVersion(String p0)
    {
      String v1;
      String[] v2;
      String v3;
      v1 = "3.1.4";
      try
      {
        (new String[1])[0] = "";
        if ( sUpdateAPK )
          v2 = p0.split("DOWNLOAD_URL");
        else
          v2 = p0.split("SERVER_URL");
        v3 = v2[0].split("VERSION_AVAILABLE")[1];
        return v3.substring(2, v3.length() - 2);
      }
      catch ( Exception e )
      {
      }
      return v1;
    }

    private static String GetLayoutName(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "LAYOUT_CHECKING_REQUIRED_FILES";
          break;
        case 1:
          v1 = "LAYOUT_CONFIRM_3G";
          break;
        case 2:
          v1 = "LAYOUT_CONFIRM_UPDATE";
          break;
        case 3:
          v1 = "LAYOUT_CONFIRM_WAITING_FOR_WIFI";
          break;
        case 4:
          v1 = "LAYOUT_DOWNLOAD_ANYTIME";
          break;
        case 5:
          v1 = "LAYOUT_DOWNLOAD_FILES";
          break;
        case 7:
          v1 = "LAYOUT_DOWNLOAD_FILES_CANCEL_QUESTION";
          break;
        case 8:
          v1 = "LAYOUT_DOWNLOAD_FILES_ERROR";
          break;
        case 9:
          v1 = "LAYOUT_DOWNLOAD_FILES_NO_WIFI_QUESTION";
          break;
        case 10:
          v1 = "LAYOUT_DOWNLOAD_FILES_QUESTION";
          break;
        case 13:
          v1 = "LAYOUT_LICENSE_INFO";
          break;
        case 14:
          v1 = "LAYOUT_LOGO";
          break;
        case 16:
          v1 = "LAYOUT_NO_DATA_CONNECTION_FOUND";
          break;
        case 17:
          v1 = "LAYOUT_RETRY_UPDATE_VERSION";
          break;
        case 18:
          v1 = "LAYOUT_SD_SPACE_INFO";
          break;
        case 19:
          v1 = "LAYOUT_SEARCHING_FOR_NEW_VERSION";
          break;
        case 20:
          v1 = "LAYOUT_SEARCHING_FOR_WIFI";
          break;
        case 21:
          v1 = "LAYOUT_SUCCESS_DOWNLOADED";
          break;
        case 22:
          v1 = "LAYOUT_VERIFYING_FILES";
          break;
        case 23:
          v1 = "LAYOUT_WAITING_FOR_WIFI";
          break;
        case 24:
          v1 = "LAYOUT_MAIN";
          break;
        case 27:
          v1 = "LAYOUT_UNZIP_FILES";
          break;
        case 29:
          v1 = "LAYOUT_NO_GP_ACCOUNT_DETECTED";
          break;
        default:
          v1 = "Unknown Layout(" + p0 + ")";
          break;
      }
      return v1;
    }

    private static String GetUrl(String p0)
    {
      return p0.substring(p0.indexOf("http"));
    }

    private String H()
    {
      String v1; // RETVAL
      String v2;
      v1 = "" + "1" + "0" + "0" + "0";
      switch ( this.bE )
      {
        case 0:
          v2 = v1 + "1";
          break;
        case 1:
          v2 = v1 + "0";
          break;
        case 2:
          v2 = v1 + "2";
          break;
        default:
          v2 = v1 + "x";
          break;
      }
      return v2 + "-samsung_a_store" + "-1622";
    }

    private void I()
    {
      android.content.IntentFilter v1;
      this.bh = true;
      if ( this.bg == null )
      {
        this.bj = true;
        this.bg = new com.gameloft.android.GAND.GloftGGSS.installer.n(this);
        v1 = new android.content.IntentFilter();
        v1.addAction("android.net.wifi.STATE_CHANGE");
        com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(this, this.bg, v1);
      }
    }

    private void J()
    {
      if ( this.bg != null )
      {
        this.unregisterReceiver(this.bg);
        this.bg = null;
      }
    }

    private void K()
    {
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            _sw_1 = (this.cg);
            if ( (_sw_1 == (1)) || (_sw_1 == (2)) || (_sw_1 == (7)) || (_sw_1 == (8)) || (_sw_1 == (10)) || (_sw_1 == (16)) || (_sw_1 == (17)) || (_sw_1 == (23)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (3)) || (_sw_1 == (5)) || (_sw_1 == (20)) || (_sw_1 == (27)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (4)) || (_sw_1 == (13)) || (_sw_1 == (18)) || (_sw_1 == (21)) || (_sw_1 == (29)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 4; continue _sm; }
            _pc = 7;
            continue _sm;
          case 1:
            _pc = 5;
            continue _sm;
          case 2:
            this.b(2131427403);
            _pc = 8;
            continue _sm;
          case 3:
            this.b(2131427399);
            _pc = 8;
            continue _sm;
          case 4:
            if ( this.bE == 1 ) { _pc = 5; continue _sm; } else { _pc = 6; continue _sm; }
          case 5:
            this.b(2131427401);
            _pc = 6;
            continue _sm;
          case 6:
            _pc = 8;
            continue _sm;
          case 7:
            return;
          case 8:
            return;
        }
      }
}

    private void L()
    {
      if ( this.b == null )
        this.b = (android.app.NotificationManager)this.getSystemService("notification");
      this.bm = PendingIntent.getActivity(
                  this,
                  0,
                  new android.content.Intent(this, com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller.class),
                  0);
      this.bl = new android.app.Notification();
      this.bl.icon = 2130837634;
      this.bl.when = System.currentTimeMillis();
      this.bl.contentIntent = this.bm;
    }

    private boolean M()
    {
      boolean v1;
      String[] v3;
      long v4;
      long v5;
      v1 = false;
      if ( new java.io.File(DATA_PATH + "InsTime").exists() )
      {
        v3 = SUtils.ReadFile(DATA_PATH + "InsTime").split("/");
        if ( !v3[0].equals("") )
        {
          v4 = Long.parseLong(v3[0]);
          v5 = System.currentTimeMillis() / 1000;
          if ( v3.length <= 2 )
          {
            if ( v5 - v4 >= 604800 )
            {
              SaveDateLastUpdate(DATA_PATH);
              return true;
            }
            if ( v5 - v4 >= 0 )
              return v1;
          }
        }
      }
      SaveDateLastUpdate(DATA_PATH);
      return v1;
    }

    private void N()
    {
      java.util.Iterator v1;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v2;
      this.aR = Build.MANUFACTURER + Build.MODEL;
      pack_biggestFile = -1;
      pack_NoFiles = 0;
      v1 = this.bK.iterator();
      while ( v1.hasNext() )
      {
        v2 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v1.next();
        v2.a(this);
        pack_NoFiles += v2.m();
        if ( pack_biggestFile < v2.l() )
          pack_biggestFile = v2.l();
      }
    }

    private boolean O()
    {
      java.util.Iterator v1;
      boolean v2;
      boolean v3;
      v1 = this.bK.iterator();
      v2 = true;
      while ( v1.hasNext() )
      {
        v3 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v1.next()).n() && v2;
        v2 = v3;
      }
      return v2;
    }

    private static boolean SaveDateLastUpdate(String p0)
    {
      Object[] v1;
      v1 = new Object[1];
      v1[0] = Long.valueOf(System.currentTimeMillis() / 1000);
      SUtils.WriteFile(p0 + "InsTime", String.format("%d/", v1));
      return true;
    }

    private void a(int p0, int p1)
    {
      this.aC[p0] = p1;
    }

    private void a(int p0, String p1, int p2, int p3)
    {
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( !(p0 != 12) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            if ( this.bl == null )
            {
            if ( this.b == null )
            this.b = (android.app.NotificationManager)this.getSystemService("notification");
            this.bm = PendingIntent.getActivity(
            this,
            0,
            new android.content.Intent(this, com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller.class),
            0);
            this.bl = new android.app.Notification();
            this.bl.icon = 2130837634;
            this.bl.when = System.currentTimeMillis();
            this.bl.contentIntent = this.bm;
            }
            switch ( p0 )
            {
            case 12:
            this.bl.contentView = new android.widget.RemoteViews(this.getApplicationContext().getPackageName(), 2130903068);
            this.bl.contentView.setProgressBar(2131427442, p2, p3, false);
            this.bl.contentView.setTextViewText(2131427441, p1);
            this.bl.flags = 18;
            break;
            case 13:
            this.bl.contentView = new android.widget.RemoteViews(this.getApplicationContext().getPackageName(), 2130903067);
            this.bl.contentView.setTextViewText(2131427441, this.getString(2131165277));
            this.bl.flags = 16;
            this.b(null, this.getString(2131165277));
            break;
            case 14:
            this.bl.contentView = new android.widget.RemoteViews(this.getApplicationContext().getPackageName(), 2130903067);
            this.bl.contentView.setTextViewText(2131427441, this.getString(2131165278));
            this.bl.flags = 16;
            this.b(null, this.getString(2131165278));
            break;
            default:
            break;
            }
            this.bl.contentView.setImageViewResource(2131427439, 2130837629);
            this.bl.contentView.setTextViewText(2131427440, this.getString(2131165524));
            this.cj = System.currentTimeMillis();
            this.b.notify(7176, this.bl);
            return;
          case 2:
            try
            {
            if ( System.currentTimeMillis() - this.cj <= this.ck )
            return;
            { _pc = 1; continue _sm; }
            }
            catch ( Exception e )
            {
            }
            
            return;
        }
      }
}

    private void a(int p0, boolean p1)
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.j(this, p0, p1));
    }

    private void a(long p0)
    {
      java.util.Iterator v2;
      android.util.Pair v3;
      if ( sd_folder.equals("") )
      {
        v2 = this.bc.iterator();
        while ( v2.hasNext() )
        {
          v3 = (android.util.Pair)v2.next();
          if ( ((Long)v3.second).longValue() >= p0 )
          {
            sd_folder = (String)v3.first;
            SUtils.setPreference("SDFolder", sd_folder, mPreferencesName);
            DATA_PATH = sd_folder + "/";
            break;
          }
        }
      }
      if ( sd_folder.equals("") )
      {
        sd_folder = "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files";
        DATA_PATH = sd_folder + "/";
        SUtils.setPreference("SDFolder", sd_folder, mPreferencesName);
      }
    }

    private void a(android.content.Context p0)
    {
      android.content.IntentFilter v2;
      this.bg = new com.gameloft.android.GAND.GloftGGSS.installer.n(this);
      v2 = new android.content.IntentFilter();
      v2.addAction("android.net.wifi.STATE_CHANGE");
      com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(p0, this.bg, v2);
    }

    private void a(android.widget.Button p0)
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.f(this, p0));
    }

    private void a(String p0, String p1)
    {
      String v3;
      java.io.DataInputStream v4;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.j v5;
      int Int; // RETVAL
      java.io.FileOutputStream v7;
      int i;
      int v9;
      byte[] v10;
      java.util.Vector v11;
      int v12;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.b v13;
      byte[] v14;
      int j;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v16;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.o v17;
      String v18;
      String Parent;
      java.io.File v20;
      String v21;
      java.io.FileOutputStream v22;
      java.io.BufferedOutputStream v23;
      int v24;
      int v25; // RETVAL
    
      try
      {
        v3 = p1 + "/pack.info";
        v4 = new java.io.DataInputStream(new java.io.FileInputStream(p0));
        v5 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.j(this);
        Int = v4.readInt();
        v7 = new java.io.FileOutputStream(v3);
        for ( i = 0; i < Int; i += v9 )
        {
          v9 = Int - i;
          if ( Int - i > 0x8000 )
            v9 = 0x8000;
          v10 = new byte[v9];
          v4.readFully(v10);
          v7.write(v10);
          v7.flush();
        }
        v7.close();
        v11 = v5.a(v3);
        v12 = v11.size();
        v13 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.b(v4);
        v14 = new byte[0x8000];
        for ( j = 0; j < v12 && !this.v; ++j )
        {
          v16 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.i)v11.elementAt(j);
          new java.io.File(p1 + "/" + v16.c());
          v13.a(v16.f());
          v17 = new com.gameloft.android.GAND.GloftGGSS.installer.utils.o(v13);
          v18 = p1
              + "/"
              + v16.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/")
              + "/"
              + v17.getNextEntry().getName();
          if ( v18.endsWith("/") )
            Parent = v18;
          else
            Parent = new java.io.File(v18).getParent();
          if ( Parent != null )
          {
            v20 = new java.io.File(Parent);
            if ( !v20.exists() )
              v20.mkdirs();
          }
          if ( v18.endsWith(".so") )
          {
            v18 = LIBS_PATH + v16.b();
            addNativeLib(v16.b());
          }
          v21 = v18;
          v22 = new java.io.FileOutputStream(v18);
          if ( v21.endsWith(".so") )
            makeLibExecutable(v21);
          v23 = new java.io.BufferedOutputStream(v22, v14.length);
          v24 = 0;
          while ( true )
          {
            v25 = v17.read(v14, 0, 0x8000);
            if ( v25 < 0 )
              break;
            v24 += v25;
            v23.write(v14, 0, v25);
          }
          this.ba += v24 / 1024;
          if ( !bIsPaused )
            this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.a(this));
          v23.flush();
          v23.close();
          v22.close();
          v17.closeEntry();
          v13.b();
          v13.a();
        }
      }
      catch ( Exception e )
      {
      }
    }

    private void a(java.util.ArrayList<android.widget.Button> p0)
    {
      this.cd = p0;
    }

    private boolean a(String p0)
    {
      boolean v2 = false;
      java.io.InputStream v3 = null; // RETVAL
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
              v2 = false;
              _ehCatchPc = 1;
              if ( this.u != null )
              this.u.a();
              else
              this.u = new com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient();
              v3 = this.u.a(p0);
              if ( v3 != null )
              {
              if ( this.aJ != null )
              {
              this.aJ.close();
              this.aJ = null;
              }
              this.aJ = new java.io.DataInputStream(v3);
              return true;
              }
              else
              {
              this.bL = -2;
              addErrorNumber(220);
              }
              return v2;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.SocketTimeoutException) ) { _pc = 3; continue _sm; }
              addErrorNumber(221);
              HttpClient.incrementConnectionTimeout();
              _pc = 2;
              continue _sm;
            case 2:
              this.k();
              return v2;
            case 3:
              if ( !(_ehCaught instanceof java.io.FileNotFoundException) ) { _pc = 4; continue _sm; }
              addErrorNumber(222);
              this.bL = -2;
              _pc = 2;
              continue _sm;
            case 4:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              addErrorNumber(223);
              this.bL = -1;
              _pc = 2;
              continue _sm;
            case 5:
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

    private boolean a(String p0, String p1, String p2, String p3, boolean p4)
    {
      boolean v6;
      String v7;
      String v8; // RETVAL
      String v9;
      java.util.zip.ZipFile v10;
      java.util.Enumeration v11;
      java.util.zip.ZipEntry v12;
      String v13;
      java.io.File v14;
      java.io.BufferedInputStream v16;
      byte[] v17;
      java.io.FileOutputStream v18;
      java.io.BufferedOutputStream v19;
      int v20; // RETVAL
    
      v6 = false;
      v7 = p3 + "/" + p2 + "/";
      v8 = p1 + "/" + p0;
      v9 = v8;
      try
      {
        v10 = new java.util.zip.ZipFile(v8);
        v11 = v10.entries();
        while ( v11.hasMoreElements() && !this.v )
        {
          v12 = (java.util.zip.ZipEntry)v11.nextElement();
          if ( v12.getName().endsWith(".so") )
          {
            v13 = LIBS_PATH + v12.getName();
            addNativeLib(v12.getName());
          }
          else
          {
            v13 = v7 + v12.getName();
          }
          v14 = new java.io.File(v13);
          new java.io.File(v14.getParent()).mkdirs();
          if ( !v14.exists() || v14.isDirectory() )
          {
            if ( !v13.endsWith("/") )
            {
              v6 = true;
              v16 = new java.io.BufferedInputStream(v10.getInputStream(v12));
              v17 = new byte[0x4000];
              v18 = new java.io.FileOutputStream(v13);
              if ( v13.endsWith(".so") )
                makeLibExecutable(v13);
              v19 = new java.io.BufferedOutputStream(v18, v17.length);
              while ( true )
              {
                v20 = v16.read(v17, 0, v17.length);
                if ( v20 == -1 || this.v )
                  break;
                v19.write(v17, 0, v20);
                this.ba += v20 / 1024;
                this.a();
              }
              this.a();
              v19.flush();
              v19.close();
              v18.close();
              v16.close();
            }
          }
          else
          {
            this.ba += (int)(v14.length() / 1024);
            this.a();
          }
        }
        return v6;
      }
      catch ( java.io.IOException e )
      {
        return v6;
      }
      catch ( Exception e )
      {
        return v6;
      }
    }

    private boolean a(String[] p0, String p1, String p2, String p3, boolean p4)
    {
      boolean v6 = false;
      String v7 = null;
      int v8 = 0;
      String v9 = null; // RETVAL
      java.util.Enumeration v10 = null;
      boolean v11 = false;
      java.util.zip.ZipEntry v12 = null;
      String v13 = null;
      java.io.File v14 = null;
      boolean v15 = false;
      int v16 = 0;
      java.util.Enumeration v17 = null;
      int v18 = 0;
      boolean v19 = false;
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
              v6 = true;
              v7 = p3 + "/" + p2 + "/";
              v8 = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v8 >= 3 )
              return v6;
              v9 = p1 + "/" + p0[v8];
              _ehEx = null;
              _ehCatchPc = 13;
              v10 = new java.util.zip.ZipFile(v9).entries();
              v11 = v6;
              _pc = 2;
              continue _sm;
            case 2:
              _ehCatchPc = 7;
              _pc = 3;
              continue _sm;
            case 3:
              if ( !(v10.hasMoreElements()) ) { _pc = 6; continue _sm; }
              v12 = (java.util.zip.ZipEntry)v10.nextElement();
              if ( v12.getName().endsWith(".so") )
              {
              v13 = LIBS_PATH + v12.getName();
              addNativeLib(v12.getName());
              }
              else
              {
              v13 = v7 + v12.getName();
              }
              v14 = new java.io.File(v13);
              new java.io.File(v14.getParent()).mkdirs();
              if ( !(!v13.endsWith("/")) ) { _pc = 5; continue _sm; }
              v15 = false;
              ++this.ba;
              if ( p4 )
              v15 = !CRC.isValidChecksum(v14.getAbsolutePath(), v12.getCrc());
              if ( v14.isDirectory() )
              { _pc = 4; continue _sm; }
              if ( v14.exists() )
              {
              if ( v14.length() != v12.getSize() || v15 )
              {
              v16 = 0;
              if ( v8 + 1 < 2 )
              {
              try
              {
              v17 = new java.util.zip.ZipFile(p1 + "/" + p0[v8 + 1]).entries();
              while ( v17.hasMoreElements() )
              {
              if ( v12.getName().equals(((java.util.zip.ZipEntry)v17.nextElement()).getName()) )
              v18 = 1;
              else
              v18 = v16;
              v16 = v18;
              }
              }
              catch ( Exception e )
              {
              }
              }
              if ( v16 != 0 )
              {
              v19 = v11;
              }
              else
              {
              v14.delete();
              v19 = false;
              }
              v11 = v19;
              }
              }
              else
              {
              v11 = false;
              }
              _pc = 4;
              continue _sm;
            case 4:
              this.a();
              _pc = 11;
              continue _sm;
            case 5:
              _pc = 3;
              continue _sm;
            case 6:
              ++v8;
              v6 = v11;
              _pc = 1;
              continue _sm;
            case 7:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 9; continue _sm; }
              _pc = 8;
              continue _sm;
            case 8:
              return v11;
            case 9:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 10; continue _sm; }
              return v11;
            case 10:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 11:
              _pc = 2;
              continue _sm;
            case 13:
              _ehCatchPc = -1;
              if ( !((_ehEx != null && (_ehEx instanceof java.io.IOException))) ) { _pc = 14; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              return v6;
            case 14:
              if ( !((_ehEx != null && (_ehEx instanceof Exception))) ) { _pc = 15; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              _pc = 15;
              continue _sm;
            case 15:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 16;
              continue _sm;
            case 16:
              _ehCatchPc = -1;
              return v6;
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

    /* synthetic */ static boolean access$000(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      return p0.bY;
    }

    /* synthetic */ static boolean access$002(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0,
            boolean p1)
    {
      p0.bY = p1;
      return p1;
    }

    /* synthetic */ static void access$100(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      p0.s();
    }

    /* synthetic */ static int access$1000(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      return p0.bx;
    }

    /* synthetic */ static int access$1100(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      return p0.bR;
    }

    /* synthetic */ static com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer access$1200(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      return p0.bU;
    }

    /* synthetic */ static void access$200(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0,
            int p1)
    {
      p0.c(p1);
    }

    /* synthetic */ static java.util.ArrayList access$300(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      return p0.bK;
    }

    /* synthetic */ static int access$402(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0,
            int p1)
    {
      p0.ch = p1;
      return p1;
    }

    /* synthetic */ static int access$500(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      return p0.cg;
    }

    /* synthetic */ static int access$502(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0,
            int p1)
    {
      p0.cg = p1;
      return p1;
    }

    /* synthetic */ static int access$600(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      return p0.ci;
    }

    /* synthetic */ static int access$602(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0,
            int p1)
    {
      p0.ci = p1;
      return p1;
    }

    /* synthetic */ static void access$700(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0,
            int p1,
            boolean p2)
    {
      p0.a(p1, p2);
    }

    /* synthetic */ static void access$800(
            com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0,
            int p1,
            boolean p2)
    {
      p0.b(p1, p2);
    }

    /* synthetic */ static int access$900(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      return p0.bE;
    }

    public static void addErrorNumber(int p0)
    {
      Object v1;
      v1 = m_objectToastLock;
      synchronized ( v1 )
      {
        if ( !m_errorMessage.contains("" + p0) )
          m_errorMessage = m_errorMessage + " " + p0;
      }
    }

    public static void addNativeLib(String p0)
    {
      if ( !sNativeLibs.contains(p0) )
        sNativeLibs.add(p0);
    }

    private void b(int p0, int p1)
    {
      this.cd = new java.util.ArrayList();
      this.cd.clear();
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.b(this, p0, p1, this.getApplicationContext()));
    }

    private void b(int p0, boolean p1)
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.k(this, p0, p1));
    }

    private void b(android.widget.Button p0)
    {
      this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.g(this, p0));
    }

    private void b(String p0, String p1)
    {
      this.cl.post((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.e(this, p1, p0));
    }

    private boolean b(String p0)
    {
      long v2;
      v2 = System.currentTimeMillis();
      new com.gameloft.android.GAND.GloftGGSS.installer.l(this, p0).start();
      while ( isReached == null && System.currentTimeMillis() - v2 < 2000 )
        ;
      if ( isReached == null )
        isReached = Boolean.valueOf(false);
      return isReached.booleanValue();
    }

    private boolean b(String p0, String p1, String p2, String p3, boolean p4)
    {
      boolean v6 = false;
      String v7 = null;
      String v8 = null; // RETVAL
      String v9 = null;
      java.util.Enumeration v10 = null;
      java.util.zip.ZipEntry v11 = null;
      String v12 = null;
      java.io.File v13 = null;
      boolean v14 = false;
      long v15 = 0L; // RETVAL
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
              v6 = true;
              v7 = p3 + "/" + p2 + "/";
              v8 = p1 + "/" + p0;
              v9 = v8;
              _ehCatchPc = 6;
              v10 = new java.util.zip.ZipFile(v8).entries();
              _pc = 1;
              continue _sm;
            case 1:
              if ( !(v10.hasMoreElements()) ) { _pc = 5; continue _sm; }
              v11 = (java.util.zip.ZipEntry)v10.nextElement();
              if ( v11.getName().endsWith(".so") )
              {
              v12 = LIBS_PATH + v11.getName();
              addNativeLib(v11.getName());
              }
              else
              {
              v12 = v7 + v11.getName();
              }
              v13 = new java.io.File(v12);
              new java.io.File(v13.getParent()).mkdirs();
              if ( !(!v12.endsWith("/")) ) { _pc = 4; continue _sm; }
              v14 = false;
              v15 = v13.length();
              this.ba += (int)v15;
              if ( p4 )
              v14 = !CRC.isValidChecksum(v13.getAbsolutePath(), v11.getCrc());
              if ( !(!v13.isDirectory()) ) { _pc = 3; continue _sm; }
              if ( !v13.exists() )
              { _pc = 2; continue _sm; }
              if ( !(v13.length() != v11.getSize() || v14) ) { _pc = 3; continue _sm; }
              v13.delete();
              _pc = 2;
              continue _sm;
            case 2:
              v6 = false;
              _pc = 3;
              continue _sm;
            case 3:
              this.a();
              _pc = 4;
              continue _sm;
            case 4:
              _pc = 1;
              continue _sm;
            case 5:
              return v6;
            case 6:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 7; continue _sm; }
              return v6;
            case 7:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 8; continue _sm; }
              return v6;
            case 8:
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

    private long c(String p0)
    {
      int v2;
      java.io.File v3;
      android.os.StatFs v4;
      v2 = 1;
      try
      {
        v3 = new java.io.File(p0 + "/");
        if ( v3.exists() )
          v2 = 0;
        else
          v3.mkdirs();
        v4 = new android.os.StatFs(p0);
        this.g = (int)(v4.getBlockSize() * (long)v4.getAvailableBlocks() / 0x100000);
        if ( v2 != 0 || v3.list().length == 0 )
        {
          if ( v3.getAbsolutePath().endsWith("/files") || v3.getAbsolutePath().endsWith("/files/") )
          {
            v3.delete();
            new java.io.File(v3.getAbsolutePath().substring(0, v3.getAbsolutePath().lastIndexOf("/files"))).delete();
          }
          else
          {
            v3.delete();
          }
        }
        this.aC[0] = 1;
        return this.g;
      }
      catch ( Exception e )
      {
        return 0;
      }
    }

    private void c(int p0)
    {
      String v2;
      String v3;
      android.content.pm.PackageManager PackageManager; // RETVAL
      android.content.Intent v5;
      android.content.IntentFilter v6;
      android.content.Intent Intent; // RETVAL
      android.content.Intent v8;
      android.content.Intent v9; // RETVAL
      android.content.Intent v10;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            while ( true )
            {
            if ( p0 == 1 || p0 == 14 || p0 == 5 || p0 == 31 )
            clearErrorHistory();
            switch ( p0 )
            {
            case 1:
            this.b(2130903057, 13);
            break;
            case 3:
            this.bP = System.currentTimeMillis();
            this.b(2130903064, 14);
            if ( this.bJ.equals("") )
            this.l();
            Tracking.onLaunchGame(1);
            this.bE = this.w();
            Tracker.launchInstallerTracker(this.bE, this.x());
            if ( this.bE == 1 )
            v2 = "Wifi Only";
            else
            v2 = "Wifi & 3G";
            if ( this.x() )
            v3 = "Wifi On";
            else
            v3 = "Wifi Off";
            GoogleAnalyticsTracker.trackEvent("Launch Installer", v2, v3, (Long)null);
            break;
            case 4:
            this.b(2130903057, 18);
            break;
            case 5:
            this.b(2130903060, 9);
            break;
            case 6:
            PackageManager = this.getApplicationContext().getPackageManager();
            if ( this.bE != 0 && this.bE != 2
            || PackageManager.checkPermission("android.permission.CHANGE_WIFI_STATE", "com.gameloft.android.GAND.GloftGGSS") != 0 )
            {
            try
            {
            if ( m_portalCode.equals("amazon") )
            v5 = new android.content.Intent("android.settings.WIRELESS_SETTINGS");
            else
            v5 = new android.content.Intent("android.settings.WIFI_SETTINGS");
            v5.setFlags(0x10000000);
            this.startActivity(v5);
            this.bF = true;
            }
            catch ( Exception e )
            {
            }
            }
            else
            {
            this.b(2130903060, 20);
            }
            break;
            case 7:
            this.bh = true;
            if ( this.bg == null )
            {
            this.bj = true;
            this.bg = new com.gameloft.android.GAND.GloftGGSS.installer.n(this);
            v6 = new android.content.IntentFilter();
            v6.addAction("android.net.wifi.STATE_CHANGE");
            com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(this, this.bg, v6);
            }
            this.bQ = System.currentTimeMillis();
            this.b(2130903057, 23);
            break;
            case 8:
            this.b(2130903057, 3);
            break;
            case 9:
            this.b(2130903057, 10);
            break;
            case 10:
            this.b(2130903057, 1);
            break;
            case 11:
            this.b(2130903057, 16);
            break;
            case 13:
            this.b(2130903060, 21);
            if ( this.bh || !this.be )
            {
            if ( this.be )
            {
            Intent = this.getIntent();
            v8 = Intent;
            try
            {
            Intent.addFlags(0x400000);
            v8.addFlags(0x20000);
            v8.addFlags(0x20000000);
            this.startActivity(v8);
            }
            catch ( Exception e )
            {
            }
            }
            else
            {
            this.a(13, "", 0, 0);
            }
            }
            if ( this.a(3) )
            saveVersion("18225");
            break;
            case 14:
            if ( this.cg != 4 )
            {
            this.b(2130903057, 8);
            new com.gameloft.android.GAND.GloftGGSS.installer.o(this).start();
            if ( this.bh || !this.be )
            {
            if ( this.be )
            {
            v9 = this.getIntent();
            v10 = v9;
            try
            {
            v9.addFlags(0x400000);
            v10.addFlags(0x20000);
            v10.addFlags(0x20000000);
            this.startActivity(v10);
            }
            catch ( Exception e )
            {
            }
            }
            else
            {
            this.a(14, "", 0, 0);
            }
            }
            }
            break;
            case 19:
            this.b(2130903057, 4);
            break;
            case 20:
            this.b(2130903058, 22);
            break;
            case 21:
            if ( !this.aQ && this.aS )
            {
            p0 = 23;
            continue;
            }
            break;
            case 24:
            this.b(2130903060, 19);
            break;
            case 27:
            this.b(2130903057, 2);
            break;
            case 28:
            this.b(2130903057, 17);
            break;
            case 42:
            this.b(2130903057, 29);
            break;
            default:
            { _pc = 1; continue _sm; }
            }
            break;
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            this.ar = this.aq;
            this.aq = p0;
            if ( this.al != 5 )
            this.al = -1;
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    private static void cancelDialog()
    {
      if ( m_Dialog != null )
        m_Dialog.cancel();
    }

    private static void clearErrorHistory()
    {
      m_prevErrorMessage = m_errorMessage;
      m_errorMessage = "";
    }

    private static void createNoMedia(String p0)
    {
      java.io.File v1;
      java.io.File v2;
      if ( p0 != null )
      {
        try
        {
          v1 = new java.io.File(p0);
          if ( !v1.exists() )
            v1.mkdirs();
          v2 = new java.io.File(p0 + "/.nomedia");
          if ( !v2.exists() )
            v2.createNewFile();
        }
        catch ( Exception e )
        {
        }
      }
    }

    private String d(String p0)
    {
      return p0.replace("$", "" + (this.f / 0x100000 + 1));
    }

    private void d(int p0)
    {
      int v2; // RETVAL
      int v3;
      int v4;
      try
      {
        v2 = this.cd.size();
        if ( v2 > 0 )
        {
          if ( p0 == 19 || p0 == 22 )
          {
            v3 = this.ce + 1;
            this.ce = v3;
            if ( v3 >= v2 )
              this.ce = v2 - 1;
            this.a((android.widget.Button)this.cd.get(this.ce));
          }
          else if ( p0 == 20 || p0 == 21 )
          {
            v4 = this.ce - 1;
            this.ce = v4;
            if ( v4 < 0 )
              this.ce = 0;
            this.a((android.widget.Button)this.cd.get(this.ce));
          }
          else if ( p0 == 96 && this.ce >= 0 && this.ce < v2 )
          {
            this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.g(this, (android.widget.Button)this.cd.get(this.ce)));
          }
        }
      }
      catch ( Exception e )
      {
      }
    }

    private void e()
    {
      int i;
      for ( i = 0; i < this.aC.length; ++i )
        this.aC[i] = 0;
    }

    private void e(String p0)
    {
      this.b(null, p0);
    }

    private int f()
    {
      java.util.Iterator v1;
      int v2;
      v1 = this.bK.iterator();
      v2 = 0;
      while ( v1.hasNext() )
        v2 += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v1.next()).g();
      return v2;
    }

    private void f(String p0)
    {
      this.bK.add(new com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent(p0, ""));
    }

    private int g()
    {
      java.util.Iterator v1;
      int v2;
      v1 = this.bK.iterator();
      v2 = 0;
      while ( v1.hasNext() )
        v2 += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v1.next()).h();
      return v2;
    }

    private static String getSDFolder()
    {
      return sd_folder;
    }

    private static long getZipRealSpace(java.util.zip.ZipFile p0)
    {
      java.util.Enumeration v1;
      long v2;
      v1 = p0.entries();
      v2 = 0;
      while ( v1.hasMoreElements() )
        v2 += ((java.util.zip.ZipEntry)v1.nextElement()).getSize();
      return v2;
    }

    private int h()
    {
      android.widget.ProgressBar v1 = null;
      java.util.Iterator v2 = null;
      int v3 = 0;
      int v4 = 0; // RETVAL
      java.util.Iterator v5 = null;
      long v6 = 0L;
      int v7 = 0;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v8 = null;
      int v9 = 0;
      java.util.ArrayList v10 = null; // RETVAL
      java.util.Iterator i = null;
      long v12 = 0L;
      String v14 = null;
      String[] v15 = null;
      int v16 = 0;
      java.io.File v17 = null;
      java.util.Iterator v18 = null;
      int v19 = 0;
      int j = 0;
      String v21 = null;
      java.util.Iterator v22 = null;
      int v23 = 0;
      String v24 = null;
      java.io.File v25 = null;
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
              if ( this.aq == 20 )
              {
              v1 = (android.widget.ProgressBar)this.findViewById(2131427407);
              v2 = this.bK.iterator();
              v3 = 0;
              while ( v2.hasNext() )
              v3 += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v2.next()).h();
              v4 = this.e.size();
              if ( v1 != null )
              v1.setMax(v4 + v3);
              }
              this.j = 0;
              this.k = 0;
              this.h = 0;
              m_iRealRequiredSize = 0;
              this.ba = 0;
              v5 = this.bK.iterator();
              v6 = 0;
              v7 = 0;
              while ( v5.hasNext() )
              {
              v8 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v5.next();
              if ( v8.a(this.i, this) == 1 )
              {
              m_iRealRequiredSize += v8.e();
              v9 = 1;
              }
              else
              {
              v9 = v7;
              }
              this.j += v8.i();
              this.k += v8.j();
              v10 = v8.o();
              if ( v10 != null )
              {
              for ( i = v10.iterator(); i.hasNext(); addNativeLib((String)i.next()) )
              ;
              }
              if ( v8.k() )
              v12 = v6;
              else
              v12 = v8.f() + v6;
              v6 = v12;
              v7 = v9;
              }
              if ( !(this.aq == 20) ) { _pc = 13; continue _sm; }
              if ( !(Build.PRODUCT.equals("Kindle Fire") || Build.MODEL.equals("Kindle Fire")) ) { _pc = 9; continue _sm; }
              this.bS = false;
              v14 = DATA_PATH;
              v15 = new java.io.File(v14).list();
              v16 = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v15 == null || v16 >= v15.length )
              { _pc = 13; continue _sm; }
              _ehCatchPc = 4;
              v17 = new java.io.File(v14 + v15[v16]);
              if ( !(v17.exists()) ) { _pc = 3; continue _sm; }
              v18 = this.bK.iterator();
              while ( v18.hasNext() )
              {
              if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v18.next()).a().contains(v15[v16]) )
              {
              v19 = 0;
              { _pc = 2; continue _sm; }
              }
              }
              v19 = 1;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v19 != 0 )
              {
              if ( !v15[v16].equals("main.18225.com.gameloft.android.AMAZ.GloftGGAS.obb")
              && !v15[v16].equals("patch.18225.com.gameloft.android.AMAZ.GloftGGAS.obb")
              && !v15[v16].equals("d_o_w_n_l_o_a_d_e_d.txt") )
              {
              v17.delete();
              { _pc = 5; continue _sm; }
              }
              { _pc = 6; continue _sm; }
              }
              _pc = 3;
              continue _sm;
            case 3:
              _pc = 5;
              continue _sm;
            case 4:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 7; continue _sm; }
              _pc = 5;
              continue _sm;
            case 5:
              ++this.ba;
              this.a();
              _pc = 6;
              continue _sm;
            case 6:
              ++v16;
              _pc = 8;
              continue _sm;
            case 7:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _pc = 1;
              continue _sm;
            case 9:
              j = 0;
              _pc = 10;
              continue _sm;
            case 10:
              if ( !(j < this.e.size()) ) { _pc = 13; continue _sm; }
              v21 = ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.e.get(j)).b();
              v22 = this.bK.iterator();
              while ( v22.hasNext() )
              {
              if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v22.next()).a(v21) )
              {
              v23 = 1;
              { _pc = 11; continue _sm; }
              }
              }
              v23 = 0;
              _pc = 11;
              continue _sm;
            case 11:
              if ( v23 == 0 )
              {
              v24 = v21.startsWith("main") || v21.startsWith("patch")
              ? marketPath
              + ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.e.get(j)).a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/")
              + "/"
              + ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.e.get(j)).b()
              : DATA_PATH
              + ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.e.get(j)).a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/")
              + "/"
              + ((com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.e.get(j)).b();
              v25 = new java.io.File(v24);
              if ( v25.exists() )
              v25.delete();
              }
              ++this.ba;
              this.a();
              _pc = 12;
              continue _sm;
            case 12:
              ++j;
              _pc = 10;
              continue _sm;
            case 13:
              if ( v6 > 0 )
              this.a(v6);
              return v7;
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

    private static boolean hasDownloadLimit()
    {
      return true;
    }

    private static int hasSDCard()
    {
      String ExternalStorageState;
      ExternalStorageState = Environment.getExternalStorageState();
      return !"mounted".equals(ExternalStorageState) && !"mounted_ro".equals(ExternalStorageState) ? 1 : 0;
    }

    private boolean i()
    {
      boolean v1;
      String File; // RETVAL
      String v4;
      v1 = false;
      if ( new java.io.File(DATA_PATH).exists() )
      {
        File = SUtils.ReadFile(SaveFolder + "/prefs/gl_ver");
        v4 = File;
        if ( File == null || File.length() <= 0 || v4.compareTo("18225") != 0 )
          v1 = true;
        if ( v1 )
          SUtils.setPreference("ZipHasCRCtest", Boolean.valueOf(true), mPreferencesName);
      }
      return v1;
    }

    public static boolean isAirplaneModeOn(android.content.Context p0)
    {
      return Settings.System.getInt(p0.getContentResolver(), "airplane_mode_on", 0) != 0;
    }

    private static boolean isEnoughInternalSpace()
    {
      android.os.StatFs v0;
      v0 = new android.os.StatFs(Environment.getDataDirectory().getPath());
      v0.getBlockSize();
      v0.getAvailableBlocks();
      return true;
    }

    private void j()
    {
      saveVersion("18225");
    }

    private void k()
    {
      try
      {
        if ( this.aJ != null )
        {
          this.aJ.close();
          this.aJ = null;
        }
        if ( this.aK != null )
        {
          this.aK.close();
          this.aK = null;
        }
        if ( this.u != null )
          this.u.a();
      }
      catch ( Exception e )
      {
      }
    }

    private void l()
    {
      String OverriddenSetting;
      String File;
      int v3;
      int v4;
      OverriddenSetting = SUtils.getOverriddenSetting(
                            SUtils.getPreferenceString("SDFolder", "", mPreferencesName) + "/qaTestingConfigs.txt",
                            "DATA_LINK");
      if ( OverriddenSetting != null )
      {
        this.bu = true;
      }
      else
      {
        this.bu = false;
        File = SUtils.ReadFile(0x7f050000);
        v3 = File.indexOf("DYNAMIC:") + 8;
        v4 = File.indexOf(13, v3);
        if ( v4 == -1 )
          v4 = File.length();
        OverriddenSetting = (File.substring(v3, v4)
                           + "?model="
                           + Device.getPhoneModel()
                           + "&device="
                           + Device.getPhoneDevice()
                           + "&product=1622"
                           + "&version=1.8.2"
                           + "&portal="
                           + m_portalCode).replaceAll("\\s+", "%20");
      }
      this.bJ = OverriddenSetting;
    }

    private void m()
    {
      java.util.Iterator i;
      String v2;
      android.util.DisplayMetrics v3;
      String v4;
      GoogleAnalyticsTracker.trackEvent(
        "Configuration",
        "Running Applications",
        "",
        Long.valueOf(((android.app.ActivityManager)this.getSystemService("activity")).getRunningAppProcesses().size()));
      GoogleAnalyticsTracker.trackEvent(
        "Configuration",
        "Installed Applications",
        "",
        Long.valueOf(this.getPackageManager().getInstalledPackages(128).size()));
      this.C();
      for ( i = this.bd.iterator();
            i.hasNext();
            GoogleAnalyticsTracker.trackEvent(
              "Configuration",
              "SDcard" + 0,
              "Before Install",
              (Long)((android.util.Pair)i.next()).second) )
      {
        ;
      }
      switch ( this.getResources().getConfiguration().screenLayout & 0xF )
      {
        case 1:
          v2 = "small";
          break;
        case 2:
          v2 = "normal";
          break;
        case 3:
          v2 = "large";
          break;
        case 4:
          v2 = "xlarge";
          break;
        default:
          v2 = "undefined";
          break;
      }
      GoogleAnalyticsTracker.trackEvent("Configuration", "Screen Type", v2, null);
      v3 = new android.util.DisplayMetrics();
      this.getWindowManager().getDefaultDisplay().getMetrics(v3);
      switch ( v3.densityDpi )
      {
        case 120:
          v4 = "low";
          break;
        case 160:
          v4 = "medium";
          break;
        case 213:
          v4 = "tv";
          break;
        case 240:
          v4 = "high";
          break;
        case 320:
          v4 = "xhigh";
          break;
        case 480:
          v4 = "xxhigh";
          break;
        default:
          v4 = "default";
          break;
      }
      GoogleAnalyticsTracker.trackEvent("Configuration", "Screen Density", v4, null);
    }

    public static void makeLibExecutable(String p0)
    {
      if ( Build.VERSION.SDK_INT < 9 )
      {
        try
        {
          Runtime.getRuntime().exec("/system/bin/chmod u+x " + LIBS_PATH);
          Runtime.getRuntime().exec("/system/bin/chmod u+x " + p0);
        }
        catch ( Exception e )
        {
        }
      }
      else
      {
        new java.io.File(p0).setExecutable(true);
      }
    }

    private java.util.Vector<android.util.Pair<String, Long>> n()
    {
      java.util.Vector v1 = null;
      java.util.Iterator v2 = null;
      android.util.Pair v3 = null;
      java.util.Iterator v4 = null;
      int v5 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = new java.util.Vector();
            if ( !(this.bc != null) ) { _pc = 3; continue _sm; }
            v2 = this.bc.iterator();
            _pc = 1;
            continue _sm;
          case 1:
            if ( !(v2.hasNext()) ) { _pc = 3; continue _sm; }
            v3 = (android.util.Pair)v2.next();
            v4 = v1.iterator();
            while ( v4.hasNext() )
            {
            if ( ((Long)((android.util.Pair)v4.next()).second).equals(v3.second) )
            {
            v5 = 1;
            { _pc = 2; continue _sm; }
            }
            }
            v5 = 0;
            _pc = 2;
            continue _sm;
          case 2:
            if ( v5 == 0 )
            v1.add(v3);
            _pc = 1;
            continue _sm;
          case 3:
            return v1;
        }
      }
}

    private boolean o()
    {
      java.util.Iterator v1 = null;
      long v2 = 0L;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v3 = null;
      String v4 = null;
      String PreferenceString = null;
      java.io.File v6 = null;
      android.os.StatFs v7 = null;
      long v8 = 0L;
      java.util.Iterator v9 = null;
      long v10 = 0L;
      long v11 = 0L;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v12 = null;
      String v13 = null;
      java.util.Enumeration v14 = null;
      long v15 = 0L;
      long v16 = 0L;
      long v17 = 0L;
      java.util.zip.ZipEntry v18 = null;
      java.io.File v19 = null;
      long v20 = 0L;
      long v21 = 0L;
      long v24 = 0L;
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
              if ( SUtils.getPreferenceString("SDFolder", "", mPreferencesName).equals("") )
              {
              v1 = this.bK.iterator();
              v2 = 0;
              while ( v1.hasNext() )
              {
              v3 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v1.next();
              try
              {
              if ( v3.a.startsWith("main") || v3.a.startsWith("patch") )
              v4 = marketPath;
              else
              v4 = DATA_PATH;
              v2 += getZipRealSpace(new java.util.zip.ZipFile(v4 + "/" + v3.a));
              }
              catch ( Exception e )
              {
              }
              }
              if ( v2 > 0 )
              this.a(v2 / 0x100000);
              }
              PreferenceString = SUtils.getPreferenceString("SDFolder", "", mPreferencesName);
              if ( PreferenceString.contains("com.gameloft.android.GAND.GloftGGSS") )
              {
              v6 = new java.io.File(PreferenceString.substring(0, PreferenceString.indexOf("com.gameloft.android.GAND.GloftGGSS")));
              }
              else if ( PreferenceString == "/sdcard/Android/data/com.gameloft.android.GAND.GloftGGSS/files" )
              {
              v6 = new java.io.File("/sdcard/");
              }
              else
              {
              v6 = new java.io.File(PreferenceString);
              }
              if ( !v6.exists() )
              v6.mkdirs();
              v7 = new android.os.StatFs(v6.getAbsolutePath());
              v8 = v7.getBlockSize() * (long)v7.getAvailableBlocks();
              this.g = (int)(v8 / 0x100000);
              v9 = this.bK.iterator();
              v10 = 0;
              v11 = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( !(v9.hasNext()) ) { _pc = 12; continue _sm; }
              v12 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v9.next();
              if ( !(v12.a.equals("")) ) { _pc = 2; continue _sm; }
              _pc = 1;
              continue _sm;
            case 2:
              _ehCatchPc = 8;
              if ( v12.a.startsWith("main") || v12.a.startsWith("patch") )
              v13 = marketPath;
              else
              v13 = DATA_PATH;
              v14 = new java.util.zip.ZipFile(v13 + "/" + v12.a).entries();
              v15 = v11;
              v16 = v10;
              v17 = v15;
              _pc = 3;
              continue _sm;
            case 3:
              _ehCatchPc = 5;
              if ( !(!v14.hasMoreElements()) ) { _pc = 4; continue _sm; }
              v21 = v17;
              v10 = v16;
              v11 = v21;
              _pc = 1;
              continue _sm;
            case 4:
              ++this.l;
              v18 = (java.util.zip.ZipEntry)v14.nextElement();
              v19 = new java.io.File(DATA_PATH + "/" + v18.getName());
              if ( !v19.isDirectory() )
              {
              if ( v19.exists() )
              {
              v20 = v18.getSize() - v19.length();
              if ( v20 > 0 )
              v16 += v20;
              }
              else
              {
              v16 += v18.getSize();
              }
              }
              v17 += v18.getSize();
              _pc = 3;
              continue _sm;
            case 5:
              _ehCatchPc = 8;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 6; continue _sm; }
              v24 = v17;
              _pc = 9;
              continue _sm;
            case 6:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.IOException) ) { _pc = 10; continue _sm; }
              v24 = v11;
              v16 = v10;
              _pc = 9;
              continue _sm;
            case 9:
              v10 = v16;
              v11 = v24;
              _pc = 11;
              continue _sm;
            case 10:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 11:
              _pc = 1;
              continue _sm;
            case 12:
              this.j = v11;
              if ( v10 < v8 )
              return true;
              this.h = (int)(v10 / 0x100000);
              return false;
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

    private static String ovWifiMode()
    {
      String OverriddenSetting;
      OverriddenSetting = SUtils.getOverriddenSetting(DATA_PATH + "qaTestingConfigs.txt", "WIFI_MODE");
      if ( OverriddenSetting == null )
        return null;
      return OverriddenSetting;
    }

    private void p()
    {
      int i = 0;
      String OverriddenSetting = null; // RETVAL
      int v3 = 0;
      int v4 = 0; // RETVAL
      String v5 = null;
      String v6 = null;
      String v7 = null;
      String v8 = null;
      boolean PreferenceBoolean = false;
      String[] v10 = null;
      java.util.Iterator v11 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v12 = null;
      java.util.Iterator v13 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v14 = null;
      java.util.Iterator v15 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v16 = null;
      java.util.Iterator v17 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v18 = null;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            if ( this.al == -1 )
            {
            if ( this.aq == 12 )
            {
            if ( this.ar == 9 || this.ar == 10 )
            {
            this.an = this.d.size();
            this.al = 6;
            }
            else if ( this.al != 5 )
            {
            this.al = 0;
            }
            }
            else
            {
            if ( this.al != 5 )
            this.al = 0;
            try
            {
            Thread.sleep(50);
            }
            catch ( Exception e )
            {
            }
            }
            return;
            }
            _sw_1 = (this.aq);
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 9; continue _sm; }
            if ( (_sw_1 == (7)) ) { _pc = 10; continue _sm; }
            if ( (_sw_1 == (12)) ) { _pc = 11; continue _sm; }
            if ( (_sw_1 == (13)) ) { _pc = 12; continue _sm; }
            if ( (_sw_1 == (20)) ) { _pc = 16; continue _sm; }
            if ( (_sw_1 == (23)) || (_sw_1 == (24)) || (_sw_1 == (25)) || (_sw_1 == (27)) || (_sw_1 == (28)) || (_sw_1 == (29)) || (_sw_1 == (30)) ) { _pc = 21; continue _sm; }
            if ( (_sw_1 == (41)) ) { _pc = 22; continue _sm; }
            _pc = 23;
            continue _sm;
          case 1:
            this.c(2);
            return;
          case 2:
            if ( !(!this.aY) ) { _pc = 6; continue _sm; }
            this.aY = true;
            if ( this.bJ.equals("") )
            this.l();
            this.bK.add(new com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent(this.bJ, ""));
            for ( i = 0; i < this.aC.length; ++i )
            this.aC[i] = 0;
            OverriddenSetting = SUtils.getOverriddenSetting(DATA_PATH + "qaTestingConfigs.txt", "SKIP_VALIDATION");
            if ( !(OverriddenSetting != null && OverriddenSetting.equals("1")) ) { _pc = 3; continue _sm; }
            {
            this.c(21);
            this.bL = 0;
            this.aQ = true;
            this.aS = true;
            }
            _pc = 6;
            continue _sm;
          case 3:
            this.N();
            pushHashMapResource();
            this.ap = 0;
            if ( this.g() <= 0 )
            { _pc = 4; continue _sm; }
            this.aC[0] = hasSDCard();
            this.aC[3] = this.i() ? 1 : 0;
            this.aC[2] = this.h();
            if ( this.a(2) )
            this.aC[1] = this.E();
            if ( this.a(0) || this.a(1) || this.a(2) || this.a(3) ) { _pc = 4; continue _sm; } else { _pc = 5; continue _sm; }
          case 4:
            this.c(3);
            _pc = 6;
            continue _sm;
          case 5:
            this.c(21);
            _pc = 6;
            continue _sm;
          case 6:
            return;
          case 7:
            if ( System.currentTimeMillis() - this.bP <= 3000 )
            return;
            s_files_changed = true;
            if ( this.g() > 0 )
            {
            if ( this.a(0) || this.a(1) )
            { _pc = 18; continue _sm; }
            if ( this.a(3) )
            {
            this.c(20);
            return;
            }
            if ( !this.x() )
            {
            addErrorNumber(240);
            this.c(5);
            return;
            }
            if ( this.x() && !this.b(this.bJ) )
            {
            addErrorNumber(260);
            this.c(14);
            return;
            }
            }
            else
            {
            if ( !this.x() )
            {
            addErrorNumber(241);
            this.c(5);
            return;
            }
            if ( this.x() && !this.b(this.bJ) )
            {
            addErrorNumber(261);
            this.c(14);
            return;
            }
            }
            this.c(12);
            return;
          case 8:
            if ( this.al == 0 )
            {
            if ( this.bE == 0 || this.bE == 2 )
            {
            this.a(2131427401, true);
            this.b(2131427412, false);
            }
            { _pc = 14; continue _sm; }
            }
            return;
          case 9:
            if ( (this.bE == 0 || this.bE == 2)
            && this.getApplicationContext().getPackageManager().checkPermission("android.permission.CHANGE_WIFI_STATE", "com.gameloft.android.GAND.GloftGGSS") == 0 )
            {
            v4 = this.y();
            if ( this.bh )
            {
            if ( v4 > 0 )
            {
            if ( this.bg != null )
            {
            this.unregisterReceiver(this.bg);
            this.bg = null;
            }
            return;
            }
            if ( v4 >= 0 )
            return;
            }
            else
            {
            if ( v4 >= 0 )
            return;
            if ( this.ar != 8 )
            {
            this.c(8);
            return;
            }
            }
            this.c(7);
            return;
            }
            if ( this.bF && this.x() )
            {
            this.c(12);
            this.bF = false;
            }
            return;
          case 10:
            if ( this.be && System.currentTimeMillis() - this.bQ > 30000 )
            this.moveTaskToBack(true);
            return;
          case 11:
            if ( this.al != 0 )
            {
            this.q();
            }
            else
            {
            this.ba = 0;
            this.aM = 0;
            this.al = 2;
            }
            return;
          case 12:
            if ( !(this.al != 0) ) { _pc = 13; continue _sm; }
            {
            if ( this.al == 5 && this.aX )
            {
            Tracker.downloadFinishTracker(this.bE, this.bR == 0);
            if ( this.bE == 1 )
            v7 = "Wifi Only";
            else
            v7 = "Wifi & 3G";
            if ( this.bR != 0 )
            v8 = "Wifi";
            else
            v8 = "3G";
            GoogleAnalyticsTracker.trackEvent("Finish Download", v7, v8, null);
            this.aX = false;
            }
            }
            _pc = 15;
            continue _sm;
          case 13:
            if ( this.aX )
            {
            Tracker.downloadFinishTracker(this.bE, this.bR == 0);
            if ( this.bE == 1 )
            v5 = "Wifi Only";
            else
            v5 = "Wifi & 3G";
            if ( this.bR != 0 )
            v6 = "Wifi";
            else
            v6 = "3G";
            GoogleAnalyticsTracker.trackEvent("Finish Download", v5, v6, null);
            this.a(2131427399, true);
            this.b(2131427412, false);
            this.aX = false;
            this.s();
            }
            _pc = 14;
            continue _sm;
          case 14:
            this.al = 1;
            _pc = 15;
            continue _sm;
          case 15:
            return;
          case 16:
            this.i = true;
            if ( this.O() )
            this.N();
            v3 = this.h();
            if ( !(this.f() <= 0) ) { _pc = 17; continue _sm; }
            {
            saveVersion("18225");
            this.c(21);
            }
            _pc = 20;
            continue _sm;
          case 17:
            this.i = false;
            this.aC[0] = hasSDCard();
            this.aC[2] = v3;
            this.aC[1] = this.E();
            if ( this.a(0) || this.a(1) ) { _pc = 18; continue _sm; } else { _pc = 19; continue _sm; }
          case 18:
            this.c(4);
            _pc = 20;
            continue _sm;
          case 19:
            this.c(9);
            _pc = 20;
            continue _sm;
          case 20:
            return;
          case 21:
            this.u();
            return;
          case 22:
            this.ba = 0;
            SUtils.getPreferenceString("ExtraFile", "", mPreferencesName);
            SUtils.getPreferenceString("mainFileName", "", "ExpansionPrefs");
            SUtils.getPreferenceString("patchFileName", "", "ExpansionPrefs");
            PreferenceBoolean = SUtils.getPreferenceBoolean("ZipHasCRCtest", false, mPreferencesName);
            v10 = new String[3];
            v11 = this.bK.iterator();
            while ( v11.hasNext() )
            {
            v12 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v11.next();
            if ( v12.a.startsWith("main") )
            {
            v10[0] = v12.a;
            }
            else if ( v12.a.startsWith("patch") )
            {
            v10[1] = v12.a;
            }
            else
            {
            v10[2] = v12.a;
            }
            }
            if ( PreferenceBoolean )
            this.b(2130903058, 22);
            if ( !this.a(v10, marketPath, "", DATA_PATH, PreferenceBoolean) )
            {
            this.ba = 0;
            this.b(2130903058, 27);
            v13 = this.bK.iterator();
            while ( v13.hasNext() )
            {
            v14 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v13.next();
            if ( !v14.a.startsWith("main") && !v14.a.startsWith("patch") )
            this.a(v14.a, DATA_PATH, "", DATA_PATH, false);
            }
            v15 = this.bK.iterator();
            while ( v15.hasNext() )
            {
            v16 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v15.next();
            if ( v16.a.startsWith("patch") )
            this.a(v16.a, marketPath, "", DATA_PATH, false);
            }
            v17 = this.bK.iterator();
            while ( v17.hasNext() )
            {
            v18 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v17.next();
            if ( v18.a.startsWith("main") )
            this.a(v18.a, marketPath, "", DATA_PATH, false);
            }
            }
            if ( !this.v )
            {
            SUtils.setPreference("ZipHasCRCtest", Boolean.valueOf(false), mPreferencesName);
            this.aS = true;
            this.bL = 0;
            this.c(21);
            }
            return;
          case 23:
            return;
        }
      }
}

    private static void pushHashMapResource()
    {
      java.io.DataInputStream v0;
      java.io.BufferedReader v1;
      String Line; // RETVAL
    
      try
      {
        if ( TimePass.b == null )
        {
          TimePass.b = new java.util.HashMap();
          v0 = new java.io.DataInputStream(new java.io.FileInputStream(sd_folder + "/d_o_w_n_l_o_a_d_e_d.txt"));
          v1 = new java.io.BufferedReader(new java.io.InputStreamReader(v0));
          while ( true )
          {
            Line = v1.readLine();
            if ( Line == null )
              break;
            TimePass.b.put(Line, Line);
          }
          v0.close();
        }
      }
      catch ( Exception e )
      {
      }
    }

    private void q()
    {
      java.util.Iterator v1 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v2 = null;
      java.util.Iterator v3 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v4 = null;
      java.util.Iterator v6 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v7 = null;
      java.util.Iterator v8 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v9 = null;
      java.util.Iterator v10 = null;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v11 = null;
      java.util.Iterator k = null;
      java.util.Iterator i = null;
      java.util.Iterator j = null;
      java.util.Iterator v15 = null;
      int v16 = 0;
      int v17 = 0;
      java.util.Iterator v18 = null;
      int v19 = 0;
      int v20 = 0;
      float v21 = 0.0f;
      float v22 = 0.0f;
      String v23 = null; // RETVAL
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            _sw_1 = (this.al);
            if ( (_sw_1 == (2)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (5)) || (_sw_1 == (7)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (6)) ) { _pc = 7; continue _sm; }
            if ( (_sw_1 == (8)) ) { _pc = 8; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 9; continue _sm; }
            if ( (_sw_1 == (10)) ) { _pc = 10; continue _sm; }
            _pc = 11;
            continue _sm;
          case 1:
            this.r();
            this.u = new com.gameloft.android.GAND.GloftGGSS.installer.utils.HttpClient();
            this.bL = 0;
            this.al = 10;
            this.b(2130903060, 0);
            _pc = 4;
            continue _sm;
          case 2:
            if ( this.a(this.bJ) )
            {
            if ( this.O() )
            {
            this.N();
            this.al = 8;
            }
            else
            {
            addErrorNumber(203);
            this.c(14);
            }
            }
            else
            {
            addErrorNumber(204);
            this.c(14);
            if ( this.u != null )
            {
            this.u.a();
            this.u = null;
            }
            }
            _pc = 4;
            continue _sm;
          case 3:
            if ( !((this.bR != 1 || this.x()) && (this.bR != 0 || !this.x() && this.z())) ) { _pc = 5; continue _sm; }
            for ( i = this.bK.iterator();
            i.hasNext();
            ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)i.next()).s() )
            {
            ;
            }
            m_iDownloadedSize = 0;
            for ( j = this.bK.iterator();
            j.hasNext();
            m_iDownloadedSize += ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)j.next()).u() )
            {
            ;
            }
            this.ba = (int)(m_iDownloadedSize >> 10);
            v15 = this.bK.iterator();
            v16 = 1;
            while ( v15.hasNext() )
            {
            if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v15.next()).t() )
            v17 = v16;
            else
            v17 = 0;
            v16 = v17;
            }
            if ( v16 != 0 )
            {
            if ( m_iRealRequiredSize > 0 )
            GoogleAnalyticsTracker.sendTimingTracking(
            "Installer",
            System.currentTimeMillis(),
            "Total Download Time",
            GoogleAnalyticsConstants$Label.g);
            this.c(13);
            }
            v18 = this.bK.iterator();
            v19 = 0;
            while ( v18.hasNext() )
            {
            if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v18.next()).v() )
            {
            if ( m_iRealRequiredSize > 0 )
            GoogleAnalyticsTracker.stopTimingTracking(
            "Installer",
            System.currentTimeMillis(),
            "Total Download Time",
            GoogleAnalyticsConstants$Label.g);
            v20 = 1;
            }
            else
            {
            v20 = v19;
            }
            v19 = v20;
            }
            if ( v19 != 0 )
            {
            addErrorNumber(550);
            this.c(14);
            }
            _pc = 4;
            continue _sm;
          case 4:
            if ( this.bh && !this.be && this.aq == 14 )
            {
            this.ap = 0;
            this.h();
            this.k();
            this.c(7);
            }
            this.a();
            if ( this.aq == 12 && (this.al == 7 || this.al == 5 && bIsPaused) )
            {
            v21 = (float)(((double)this.k / 1024.0 + (double)this.ba) / 1024.0);
            v22 = (float)((double)this.j / 1048576.0);
            if ( v21 > v22 )
            v21 = v22;
            v23 = this.getString(2131165286).replace("{SIZE}", "" + this.m.format(v21)).replace("{TOTAL_SIZE}", "" + this.m.format(v22));
            if ( bIsPaused || this.al == 5 )
            {
            if ( bIsPaused )
            this.a(12, v23, (int)(this.j / 1024 + 1), (int)(this.k / 1024 + this.ba));
            }
            else
            {
            this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.i(this, v23));
            }
            }
            _pc = 6;
            continue _sm;
          case 5:
            {
            for ( k = this.bK.iterator();
            k.hasNext();
            ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)k.next()).w() )
            {
            ;
            }
            if ( m_iRealRequiredSize > 0 )
            GoogleAnalyticsTracker.stopTimingTracking(
            "Installer",
            System.currentTimeMillis(),
            "Total Download Time",
            GoogleAnalyticsConstants$Label.g);
            addErrorNumber(246);
            if ( this.al == 5 )
            this.al = 0;
            this.c(14);
            }
            _pc = 6;
            continue _sm;
          case 6:
            return;
          case 7:
            this.r();
            if ( m_iRealRequiredSize > 0 )
            GoogleAnalyticsTracker.startTimingTracking(
            "Installer",
            System.currentTimeMillis(),
            "Total Download Time",
            GoogleAnalyticsConstants$Label.g);
            v8 = this.bK.iterator();
            while ( v8.hasNext() )
            {
            v9 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v8.next();
            if ( v9.a().startsWith("patch") || v9.a().startsWith("main") )
            v9.b(marketPath);
            else
            v9.b(sd_folder);
            }
            v10 = this.bK.iterator();
            while ( v10.hasNext() )
            {
            v11 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v10.next();
            if ( v11.d() != SUtils.getPreferenceInt("CurrentVersion" + v11.a(), 0, mPreferencesName) )
            {
            v11.c();
            SUtils.setPreference("CurrentVersion" + v11.a(), Integer.valueOf(v11.d()), mPreferencesName);
            SUtils.setPreference("IsGenericBuild" + v11.a(), Boolean.valueOf(v11.b()), mPreferencesName);
            }
            }
            this.al = 7;
            _pc = 4;
            continue _sm;
          case 8:
            this.ap = 0;
            this.aC[0] = hasSDCard();
            this.aC[3] = this.i() ? 1 : 0;
            this.aC[2] = this.h();
            if ( this.a(2) )
            this.aC[1] = this.E();
            if ( this.g() <= 0 )
            {
            addErrorNumber(202);
            this.c(14);
            }
            if ( Build.PRODUCT.equals("Kindle Fire") || Build.MODEL.equals("Kindle Fire") )
            {
            this.bS = true;
            this.c(20);
            }
            else if ( this.a(3) )
            {
            this.c(20);
            }
            else if ( this.a(2) )
            {
            if ( this.f() > 0 )
            {
            this.c(9);
            }
            else
            {
            addErrorNumber(201);
            this.c(14);
            }
            }
            else
            {
            this.al = 9;
            }
            _pc = 4;
            continue _sm;
          case 9:
            v6 = this.bK.iterator();
            while ( v6.hasNext() )
            {
            v7 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v6.next();
            if ( v7.d() != SUtils.getPreferenceInt("CurrentVersion" + v7.a(), 0, mPreferencesName) )
            {
            v7.c();
            SUtils.setPreference("CurrentVersion" + v7.a(), Integer.valueOf(v7.d()), mPreferencesName);
            SUtils.setPreference("IsGenericBuild" + v7.a(), Boolean.valueOf(v7.b()), mPreferencesName);
            }
            }
            SaveDateLastUpdate(DATA_PATH);
            this.c(13);
            _pc = 4;
            continue _sm;
          case 10:
            if ( this.bJ.equals("") )
            this.l();
            if ( this.bu )
            {
            this.bs = 1;
            this.bt = false;
            v1 = this.bK.iterator();
            while ( v1.hasNext() )
            {
            v2 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v1.next();
            v2.c();
            SUtils.setPreference("CurrentVersion" + v2.a(), Integer.valueOf(this.bs), mPreferencesName);
            SUtils.setPreference("IsGenericBuild" + v2.a(), Boolean.valueOf(this.bt), mPreferencesName);
            }
            }
            else
            {
            v3 = this.bK.iterator();
            while ( v3.hasNext() )
            {
            v4 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v3.next();
            if ( v4.p() )
            {
            v4.q();
            if ( v4.d() != SUtils.getPreferenceInt("CurrentVersion" + v4.a(), 0, mPreferencesName) )
            {
            v4.c();
            SUtils.setPreference("CurrentVersion" + v4.a(), Integer.valueOf(v4.d()), mPreferencesName);
            SUtils.setPreference("IsGenericBuild" + v4.a(), Boolean.valueOf(v4.b()), mPreferencesName);
            }
            }
            }
            }
            this.al = 3;
            _pc = 4;
            continue _sm;
          case 11:
            _pc = 4;
            continue _sm;
        }
      }
}

    private void r()
    {
      if ( this.bR != 0 )
      {
        this.bY = isAirplaneModeOn(this);
        if ( this.aF == null )
          this.aF = this.aD.createWifiLock(1, "Installer");
        if ( !this.aF.isHeld() )
          this.aF.acquire();
        if ( this.aG == null )
          this.aG = ((android.os.PowerManager)this.getSystemService("power")).newWakeLock(1, "Installer_PowerLock");
        if ( !this.aG.isHeld() )
          this.aG.acquire();
      }
    }

    private static String readVersion()
    {
      return SUtils.ReadFile(SaveFolder + "/prefs/gl_ver");
    }

    private void s()
    {
      if ( this.bR != 0 )
      {
        if ( this.aF != null )
        {
          if ( this.aF.isHeld() )
            this.aF.release();
          this.aF = null;
        }
        if ( this.aG != null )
        {
          if ( this.aG.isHeld() )
            this.aG.release();
          this.aG = null;
        }
      }
    }

    private static void saveVersion(String p0)
    {
      String v1;
      java.io.File v2;
      try
      {
        v1 = SaveFolder + "/prefs/gl_ver";
        v2 = new java.io.File(v1);
        if ( v2.exists() )
          v2.delete();
        else
          new java.io.File(v2.getParent()).mkdirs();
        SUtils.WriteFile(v1, p0);
      }
      catch ( Exception e )
      {
      }
    }

    private static void sendHDIDFVtracker()
    {
      String HDIDFV;
      if ( !SUtils.getPreferenceBoolean("HDIDFV_sent", false, mPreferencesName) )
      {
        HDIDFV = Device.getHDIDFV();
        SUtils.setPreference("HDIDFV_sent", Boolean.valueOf(true), mPreferencesName);
        GoogleAnalyticsTracker.trackEvent("Configuration", "HDIDFV", HDIDFV, null);
      }
    }

    public static void startGame()
    {
      sbStarted = true;
      m_sInstance.F();
    }

    private void t()
    {
      float v1;
      float v2;
      String v3; // RETVAL
    
      if ( this.aq == 12 && (this.al == 7 || this.al == 5 && bIsPaused) )
      {
        v1 = (float)(((double)this.k / 1024.0 + (double)this.ba) / 1024.0);
        v2 = (float)((double)this.j / 1048576.0);
        if ( v1 > v2 )
          v1 = v2;
        v3 = this.getString(2131165286).replace("{SIZE}", "" + this.m.format(v1)).replace("{TOTAL_SIZE}", "" + this.m.format(v2));
        if ( bIsPaused || this.al == 5 )
        {
          if ( bIsPaused )
            this.a(12, v3, (int)(this.j / 1024 + 1), (int)(this.k / 1024 + this.ba));
        }
        else
        {
          this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.i(this, v3));
        }
      }
    }

    private void u()
    {
      android.os.StatFs v1 = null;
      java.util.Iterator v2 = null;
      int v3 = 0;
      int v4 = 0;
      java.util.Iterator v5 = null;
      int v6 = 0;
      com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent v7 = null;
      int v8 = 0;
      String v9 = null;
      String v10 = null;
      String w = null;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            _sw_1 = (this.aq);
            if ( (_sw_1 == (23)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (24)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (25)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (27)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (30)) ) { _pc = 5; continue _sm; }
            _pc = 7;
            continue _sm;
          case 1:
            if ( this.bJ.equals("") )
            this.l();
            if ( !sUpdateAPK )
            {
            if ( this.aQ || this.bV || !this.M() )
            {
            this.aQ = true;
            this.aS = true;
            this.c(21);
            }
            else
            {
            this.aQ = true;
            sbStarted = false;
            this.bL = 0;
            this.bV = true;
            this.c(24);
            }
            }
            if ( !sUpdateAPK )
            { _pc = 6; continue _sm; }
            v1 = new android.os.StatFs(Environment.getDataDirectory().getPath());
            v1.getBlockSize();
            v1.getAvailableBlocks();
            if ( this.aS && !this.aQ && !this.bV && this.M() )
            {
            sbStarted = false;
            this.bT = new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device();
            this.bU = new com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer(this.bT);
            this.bV = true;
            this.c(24);
            this.aQ = true;
            { _pc = 6; continue _sm; }
            }
            this.bV = false;
            this.aQ = false;
            sUpdateAPK = false;
            this.c(23);
            return;
          case 2:
            if ( !sUpdateAPK )
            {
            v2 = this.bK.iterator();
            v3 = 1;
            while ( v2.hasNext() )
            {
            if ( ((com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v2.next()).p() )
            v4 = v3;
            else
            v4 = 0;
            v3 = v4;
            }
            if ( v3 != 0 )
            {
            this.c(25);
            }
            else if ( this.a(this.bJ + "&head=1") || SUtils.hasConnectivity() != 1 )
            {
            this.c(28);
            }
            else
            {
            this.bL = 0;
            this.c(21);
            }
            }
            if ( sUpdateAPK )
            {
            this.bU.a("https://secure.gameloft.com/partners/android/update_check.php", "key="
            + SUtils.ReadFile(0x7f050004));
            this.c(25);
            }
            _pc = 6;
            continue _sm;
          case 3:
            if ( !sUpdateAPK )
            {
            v5 = this.bK.iterator();
            v6 = 0;
            while ( v5.hasNext() )
            {
            v7 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent)v5.next();
            v7.q();
            if ( v7.b() || !SUtils.getPreferenceBoolean("IsGenericBuild" + v7.a(), false, mPreferencesName) )
            {
            if ( v7.d() <= SUtils.getPreferenceInt("CurrentVersion" + v7.a(), 0, mPreferencesName) )
            v8 = v6;
            else
            v8 = 1;
            v6 = v8;
            }
            else
            {
            v6 = 1;
            }
            }
            if ( v6 != 0 )
            {
            this.c(27);
            }
            else
            {
            SaveDateLastUpdate(DATA_PATH);
            this.aS = true;
            this.bL = 0;
            this.c(21);
            }
            }
            if ( !sUpdateAPK )
            { _pc = 6; continue _sm; }
            while ( !this.bU.f() )
            {
            try
            {
            Thread.sleep(50);
            }
            catch ( Exception e )
            {
            }
            }
            if ( this.bU.w == null )
            {
            this.c(28);
            { _pc = 6; continue _sm; }
            }
            if ( this.bU.w.contains("Error: No live release") )
            {
            this.aS = true;
            this.bL = 0;
            this.bV = false;
            this.aQ = false;
            this.aS = false;
            sUpdateAPK = false;
            this.c(23);
            return;
            }
            v9 = "";
            v10 = "";
            try
            {
            v9 = SUtils.ReadFile(0x7f050003).trim();
            v10 = GetCurrentVersion(this.bU.w).trim();
            }
            catch ( Exception e )
            {
            this.bV = false;
            }
            
            if ( v9.compareTo(v10) == 0 )
            {
            this.bL = 0;
            this.bV = false;
            this.aQ = false;
            this.aS = false;
            sUpdateAPK = false;
            this.c(23);
            return;
            }
            this.c(27);
            _pc = 6;
            continue _sm;
          case 4:
            this.aS = true;
            _pc = 6;
            continue _sm;
          case 5:
            if ( !sUpdateAPK )
            {
            this.c(12);
            { _pc = 6; continue _sm; }
            }
            try
            {
            w = this.bU.w;
            this.startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(w.substring(w.indexOf("http")))));
            this.aS = false;
            }
            catch ( Exception e )
            {
            }
            
            this.c(21);
            _pc = 6;
            continue _sm;
          case 6:
            if ( !this.bV )
            {
            this.getClass();
            this.c(21);
            }
            return;
          case 7:
            _pc = 6;
            continue _sm;
        }
      }
}

    private void v()
    {
      this.c(2);
    }

    private int w()
    {
      int v1;
      String OverriddenSetting;
      v1 = 2;
      OverriddenSetting = SUtils.getOverriddenSetting(DATA_PATH + "qaTestingConfigs.txt", "WIFI_MODE");
      if ( OverriddenSetting == null )
        OverriddenSetting = null;
      if ( OverriddenSetting != null )
      {
        if ( OverriddenSetting.equals("WIFI_ONLY") || OverriddenSetting.equals("TRUE") )
          return 1;
        if ( OverriddenSetting.equals("WIFI_3G") || OverriddenSetting.equals("FALSE") )
          return 0;
        if ( OverriddenSetting.equals("WIFI_3G_ORANGE_IL") )
          return v1;
      }
      if ( mDeviceInfo.getPhoneType() != 2 && (mDeviceInfo.getSimState() == 1 || mDeviceInfo.getSimState() == 0) )
        return 1;
      this.bT = new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device();
      this.bU = new com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer(this.bT);
      this.bU.a();
      while ( !this.bU.b() )
      {
        try
        {
          Thread.sleep(50);
        }
        catch ( Exception e )
        {
        }
      }
      if ( XPlayer.getWHTTP().t != null )
      {
        if ( XPlayer.getLastErrorCode() == 0 )
        {
          if ( XPlayer.getWHTTP().t.contains("WIFI_ONLY") )
            return 1;
          if ( XPlayer.getWHTTP().t.contains("WIFI_3G") )
            return 0;
          if ( XPlayer.getWHTTP().t.contains("WIFI_3G_ORANGE_IL") )
            return v1;
        }
        return 0;
      }
      return 0;
    }

    private boolean x()
    {
      boolean v1;
      boolean v2;
      v1 = false;
      v2 = this.aE != null && this.aE.getNetworkInfo(1) != null && this.aE.getNetworkInfo(1).isConnected();
      if ( this.aD.isWifiEnabled() && v2 )
        return true;
      return v1;
    }

    private int y()
    {
      int v1 = 0;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = 0;
            _sw_1 = (this.aU);
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (1)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 4; continue _sm; }
            if ( (_sw_1 == (4)) ) { _pc = 5; continue _sm; }
            _pc = 7;
            continue _sm;
          case 1:
            if ( !this.aD.isWifiEnabled() )
            {
            this.aD.setWifiEnabled(true);
            --this.aU;
            }
            _pc = 6;
            continue _sm;
          case 2:
            if ( this.aF == null )
            {
            this.aF = this.aD.createWifiLock(1, "Installer");
            --this.aU;
            }
            _pc = 6;
            continue _sm;
          case 3:
            if ( !this.aF.isHeld() )
            {
            this.aF.acquire();
            --this.aU;
            }
            _pc = 6;
            continue _sm;
          case 4:
            if ( this.aD.getConnectionInfo() != null )
            {
            this.aV = 0;
            { _pc = 6; continue _sm; }
            }
            --this.aU;
            ++this.aV;
            try
            {
            Thread.sleep(1000);
            }
            catch ( Exception e )
            {
            }
            
            if ( this.aV > 30 )
            {
            if ( this.u != null )
            {
            this.u.a();
            this.u = null;
            }
            v1 = -1;
            }
            _pc = 6;
            continue _sm;
          case 5:
            if ( this.x() )
            {
            this.aV = -1;
            this.aU = 0;
            this.bR = 1;
            this.c(12);
            this.aH = true;
            v1 = 1;
            { _pc = 6; continue _sm; }
            }
            --this.aU;
            ++this.aV;
            try
            {
            Thread.sleep(1000);
            }
            catch ( Exception e )
            {
            }
            
            if ( this.aV > 30 )
            {
            if ( this.bb == null && this.u != null )
            {
            this.u.a();
            this.u = null;
            }
            this.aU = -1;
            this.aV = 0;
            v1 = -1;
            }
            _pc = 6;
            continue _sm;
          case 6:
            ++this.aU;
            return v1;
          case 7:
            _pc = 6;
            continue _sm;
        }
      }
}

    private boolean z()
    {
      boolean v1;
      v1 = false;
      if ( this.bE != 1 )
      {
        this.bb = this.aE.getActiveNetworkInfo();
        if ( this.bb != null && this.bb.getType() != 1 )
          return this.bb.isConnected();
      }
      return v1;
    }

    public final String a(int p0, String p1, String p2)
    {
      String String; // RETVAL
    
      String = this.getString(p0);
      if ( p1 == null )
        p1 = "{SIZE}";
      return String.replace(p1, p2);
    }

    public final void a()
    {
      if ( (this.aq == 12 || this.aq == 20 || this.aq == 41)
        && this.al != 5
        && (this.aq != 12 || this.al == 7)
        && !bIsPaused )
      {
        this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.h(this));
      }
    }

    public final boolean a(int p0)
    {
      return this.aC[p0] == 1;
    }

    public final java.util.ArrayList<android.widget.Button> b()
    {
      return this.cd;
    }

    public final void b(int p0)
    {
      com.gameloft.android.GAND.GloftGGSS.installer.utils.i v2 = null;
      java.io.File v3 = null;
      String v4 = null;
      String v5 = null;
      int _sw_1 = 0;
      int _sw_2 = 0;
      int _sw_3 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            _sw_1 = (this.cg);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 5; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 6; continue _sm; }
            if ( (_sw_1 == (4)) || (_sw_1 == (13)) || (_sw_1 == (18)) ) { _pc = 14; continue _sm; }
            if ( (_sw_1 == (5)) ) { _pc = 15; continue _sm; }
            if ( (_sw_1 == (7)) ) { _pc = 16; continue _sm; }
            if ( (_sw_1 == (8)) ) { _pc = 17; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 18; continue _sm; }
            if ( (_sw_1 == (10)) ) { _pc = 26; continue _sm; }
            if ( (_sw_1 == (16)) ) { _pc = 30; continue _sm; }
            if ( (_sw_1 == (17)) ) { _pc = 33; continue _sm; }
            if ( (_sw_1 == (20)) ) { _pc = 34; continue _sm; }
            if ( (_sw_1 == (21)) ) { _pc = 35; continue _sm; }
            if ( (_sw_1 == (23)) ) { _pc = 36; continue _sm; }
            if ( (_sw_1 == (27)) ) { _pc = 37; continue _sm; }
            if ( (_sw_1 == (28)) ) { _pc = 38; continue _sm; }
            if ( (_sw_1 == (29)) ) { _pc = 39; continue _sm; }
            _pc = 42;
            continue _sm;
          case 1:
            if ( !(p0 == 2131427399) ) { _pc = 4; continue _sm; }
            if ( !(!this.aD.isWifiEnabled()
            || this.getApplicationContext().getPackageManager().checkPermission("android.permission.CHANGE_WIFI_STATE", "com.gameloft.android.GAND.GloftGGSS") != 0) ) { _pc = 3; continue _sm; }
            _pc = 2;
            continue _sm;
          case 2:
            if ( !this.z() )
            { _pc = 22; continue _sm; }
            _pc = 21;
            continue _sm;
          case 3:
            this.aD.setWifiEnabled(false);
            try
            {
            Thread.sleep(50);
            }
            catch ( Exception e )
            {
            }
            
            this.aI = true;
            _pc = 2;
            continue _sm;
          case 4:
            if ( p0 == 2131427401 )
            { _pc = 28; continue _sm; }
            return;
          case 5:
            if ( p0 == 2131427399 )
            {
            saveVersion("0.0.1");
            this.c(30);
            return;
            }
            if ( p0 != 2131427401 )
            return;
            if ( this.bU != null && this.bU.x )
            { _pc = 24; continue _sm; }
            this.c(21);
            return;
          case 6:
            _sw_2 = (p0);
            if ( (_sw_2 == (2131427399)) ) { _pc = 7; continue _sm; }
            if ( (_sw_2 == (2131427401)) ) { _pc = 8; continue _sm; }
            if ( (_sw_2 == (2131427403)) ) { _pc = 11; continue _sm; }
            _pc = 13;
            continue _sm;
          case 7:
            _pc = 31;
            continue _sm;
          case 8:
            if ( !(!this.aD.isWifiEnabled()
            || this.getApplicationContext().getPackageManager().checkPermission("android.permission.CHANGE_WIFI_STATE", "com.gameloft.android.GAND.GloftGGSS") != 0) ) { _pc = 10; continue _sm; }
            _pc = 9;
            continue _sm;
          case 9:
            if ( this.z() )
            { _pc = 21; continue _sm; }
            _pc = 22;
            continue _sm;
          case 10:
            this.aD.setWifiEnabled(false);
            try
            {
            Thread.sleep(50);
            }
            catch ( Exception e )
            {
            }
            
            this.aI = true;
            _pc = 9;
            continue _sm;
          case 11:
            if ( this.u != null )
            {
            this.u.a();
            this.u = null;
            }
            _pc = 12;
            continue _sm;
          case 12:
            this.aS = false;
            this.c(19);
            return;
          case 13:
            return;
          case 14:
            if ( p0 == 2131427399 )
            { _pc = 40; continue _sm; }
            return;
          case 15:
            if ( p0 == 2131427403 && this.aq == 12 )
            {
            this.am = this.al;
            this.al = 5;
            this.b(2130903057, 7);
            }
            return;
          case 16:
            if ( p0 == 2131427399 )
            {
            new com.gameloft.android.GAND.GloftGGSS.installer.d(this).start();
            this.c(19);
            try
            {
            this.aS = false;
            this.k();
            v2 = (com.gameloft.android.GAND.GloftGGSS.installer.utils.i)this.d.get(this.ap);
            v3 = new java.io.File(DATA_PATH
            + v2.a().replace(".\\\\", "").replace(".\\", "").replace("\\", "/")
            + "/"
            + v2.c());
            if ( v3.exists() )
            v3.delete();
            }
            catch ( Exception e )
            {
            }
            }
            else if ( p0 == 2131427401 && this.aq == 12 )
            {
            this.al = this.am;
            this.b(2130903058, 5);
            }
            return;
          case 17:
            if ( p0 == 2131427399 )
            {
            this.ap = 0;
            this.k();
            if ( this.x() )
            {
            this.c(12);
            }
            else
            {
            addErrorNumber(244);
            this.c(5);
            }
            return;
            }
            if ( p0 != 2131427401 )
            return;
            if ( this.u != null )
            {
            this.u.a();
            this.u = null;
            }
            _pc = 12;
            continue _sm;
          case 18:
            _sw_3 = (p0);
            if ( (_sw_3 == (2131427399)) ) { _pc = 19; continue _sm; }
            if ( (_sw_3 == (2131427401)) ) { _pc = 20; continue _sm; }
            if ( (_sw_3 == (2131427403)) ) { _pc = 24; continue _sm; }
            _pc = 25;
            continue _sm;
          case 19:
            _pc = 31;
            continue _sm;
          case 20:
            if ( this.bE == 1 )
            { _pc = 28; continue _sm; }
            if ( this.aD.isWifiEnabled()
            && this.getApplicationContext().getPackageManager().checkPermission("android.permission.CHANGE_WIFI_STATE", "com.gameloft.android.GAND.GloftGGSS") == 0 )
            {
            this.aD.setWifiEnabled(false);
            try
            {
            Thread.sleep(50);
            }
            catch ( Exception e )
            {
            }
            this.aI = true;
            }
            if ( !(this.z()) ) { _pc = 22; continue _sm; }
            _pc = 21;
            continue _sm;
          case 21:
            this.bR = 0;
            this.c(12);
            _pc = 23;
            continue _sm;
          case 22:
            this.c(11);
            _pc = 23;
            continue _sm;
          case 23:
            return;
          case 24:
            this.aS = false;
            this.c(21);
            return;
          case 25:
            return;
          case 26:
            if ( !(p0 == 2131427399) ) { _pc = 27; continue _sm; }
            {
            if ( this.bR != 0 )
            {
            this.bR = 1;
            if ( !this.x() )
            {
            addErrorNumber(245);
            this.c(5);
            return;
            }
            }
            else if ( this.x() )
            {
            this.bR = 1;
            addErrorNumber(517);
            this.c(14);
            return;
            }
            if ( !this.aX )
            {
            Tracker.downloadStartTracker(this.bE, this.bR == 0);
            if ( this.bE == 1 )
            v4 = "Wifi Only";
            else
            v4 = "Wifi & 3G";
            if ( this.bR != 0 )
            v5 = "Wifi";
            else
            v5 = "3G";
            GoogleAnalyticsTracker.trackEvent("Start Download", v4, v5, null);
            this.aX = true;
            }
            createNoMedia(DATA_PATH);
            this.bL = 0;
            this.c(12);
            this.b(2130903058, 5);
            }
            _pc = 29;
            continue _sm;
          case 27:
            if ( !(p0 == 2131427401) ) { _pc = 29; continue _sm; }
            _pc = 28;
            continue _sm;
          case 28:
            this.c(19);
            _pc = 29;
            continue _sm;
          case 29:
            return;
          case 30:
            if ( !(p0 == 2131427399) ) { _pc = 32; continue _sm; }
            _pc = 31;
            continue _sm;
          case 31:
            this.c(6);
            return;
          case 32:
            if ( p0 != 2131427401 )
            return;
            if ( this.u != null )
            {
            this.u.a();
            this.u = null;
            }
            _pc = 12;
            continue _sm;
          case 33:
            if ( p0 == 2131427399 )
            {
            this.c(24);
            }
            else if ( p0 == 2131427401 )
            {
            this.bL = 0;
            this.c(21);
            }
            return;
          case 34:
            if ( p0 != 2131427403 )
            return;
            if ( this.u != null )
            {
            this.u.a();
            this.u = null;
            }
            _pc = 12;
            continue _sm;
          case 35:
            if ( p0 == 2131427399 )
            {
            this.aS = true;
            this.bL = 0;
            this.c(21);
            }
            return;
          case 36:
            if ( p0 == 2131427399 )
            {
            this.moveTaskToBack(true);
            }
            else if ( p0 == 2131427401 )
            {
            this.bh = false;
            this.aS = false;
            this.c(19);
            }
            return;
          case 37:
            if ( p0 == 2131427403 )
            this.b(2130903057, 28);
            return;
          case 38:
            if ( p0 == 2131427399 )
            {
            this.v = true;
            this.c(19);
            }
            else if ( p0 == 2131427401 )
            {
            this.b(2130903058, 27);
            }
            return;
          case 39:
            if ( !(p0 == 2131427399) ) { _pc = 41; continue _sm; }
            _pc = 40;
            continue _sm;
          case 40:
            this.aS = false;
            this.c(21);
            this.G();
            _pc = 41;
            continue _sm;
          case 41:
            return;
          case 42:
            return;
        }
      }
}

    final void c()
    {
      this.b = (android.app.NotificationManager)this.getSystemService("notification");
      this.b.cancel(7176);
    }

    final void d()
    {
      this.ce = -1;
    }

    protected void onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      ;
    }

    public void onCreate(android.os.Bundle p0)
    {
      android.content.Intent Intent;
      android.widget.RelativeLayout v3;
      android.widget.RelativeLayout.LayoutParams v4;
      String[] v5;
      int i;
      java.io.File v7;
      String[] v8;
      int j;
      java.io.File v10;
      String OverriddenSetting; // RETVAL
    
      super.onCreate(p0);
      SaveFolder = SUtils.getSaveFolder();
      LIBS_PATH = SaveFolder + LIBS_PATH;
      this.bv = SaveFolder + this.bv;
      Intent = this.getIntent();
      if ( SUtils.getPreferenceString("SDFolder", "", mPreferencesName).equals("") )
      {
        sd_folder = this.C();
        SUtils.setPreference("SDFolder", sd_folder, mPreferencesName);
      }
      else
      {
        sd_folder = SUtils.getPreferenceString("SDFolder", "", mPreferencesName);
      }
      DATA_PATH = sd_folder + "/";
      if ( Intent != null && Intent.getExtras() != null && Intent.getExtras().getBoolean("finishGame") )
      {
        this.G();
        return;
      }
      this.cl = new android.os.Handler(Looper.getMainLooper());
      v3 = new android.widget.RelativeLayout(this);
      v4 = new android.widget.RelativeLayout.LayoutParams(-2, -2);
      v4.addRule(15);
      v4.addRule(14);
      v3.addView(new android.widget.ProgressBar(this, null, 16842874), v4);
      this.setContentView(v3);
      m_portalCode = "samsung_a_store";
      this.aD = (android.net.wifi.WifiManager)this.getSystemService("wifi");
      mDeviceInfo = (android.telephony.TelephonyManager)this.getSystemService("phone");
      this.aE = (android.net.ConnectivityManager)this.getSystemService("connectivity");
      this.bX = new com.gameloft.android.GAND.GloftGGSS.installer.utils.f();
      this.bX.a(this);
      this.A();
      if ( this.i() || this.bu )
      {
        v5 = new java.io.File(SaveFolder).list();
        for ( i = 0; i < v5.length; ++i )
        {
          if ( v5[i].startsWith("pack") && v5[i].endsWith(".info") )
          {
            try
            {
              v7 = new java.io.File(SaveFolder + "/" + v5[i]);
              if ( v7.exists() )
                v7.delete();
              continue;
            }
            catch ( Exception e )
            {
            }
          }
        }
        v8 = new String[2];
        v8[0] = "main.1209.com.gameloft.android.GAND.GloftGGSS.obb";
        v8[1] = "patch.1209.com.gameloft.android.GAND.GloftGGSS.obb";
        for ( j = 0; j < v8.length; ++j )
        {
          try
          {
            v10 = new java.io.File(DATA_PATH + "/" + v8[j]);
            if ( v10.exists() )
              v10.delete();
            continue;
          }
          catch ( Exception e )
          {
          }
        }
      }
      this.bL = 0;
      this.aS = false;
      Tracking.init();
      this.bf = new com.gameloft.android.GAND.GloftGGSS.installer.m(this);
      com.gameloft.android.GAND.GloftGGSS.CompatUtil.registerReceiverCompat(this, this.bf, new android.content.IntentFilter("android.intent.action.AIRPLANE_MODE"));
      m_sInstance = this;
      OverriddenSetting = SUtils.getOverriddenSetting(DATA_PATH + "qaTestingConfigs.txt", "OUTPUT_ACP_REVISION");
      if ( OverriddenSetting != null && OverriddenSetting.equals("1") )
      {
        if ( "12235".equals("") || "12235".equals("0") )
          this.b("ACP Revision", "Android Core Package not versioned");
        else
          this.b("ACP Revision", "12235");
      }
      LowProfileListener.ActivateImmersiveMode(this);
    }

    protected void onDestroy()
    {
      super.onDestroy();
      if ( this.u != null )
      {
        this.u.a();
        this.u = null;
      }
      this.s();
      if ( this.bf != null )
      {
        this.unregisterReceiver(this.bf);
        this.bf = null;
      }
      m_sInstance = null;
      this.t = null;
      if ( !sbStarted )
        this.G();
    }

    public boolean onKeyDown(int p0, android.view.KeyEvent p1)
    {
      boolean v3;
      int v5; // RETVAL
      int v6;
      int v7;
      v3 = false;
      LowProfileListener.onKeyDown(this, p0);
      if ( p0 == 25 || p0 == 24 || p0 == 27 )
        return v3;
      try
      {
        v5 = this.cd.size();
        if ( v5 <= 0 )
          return true;
        if ( p0 == 19 || p0 == 22 )
        {
          v6 = this.ce + 1;
          this.ce = v6;
          if ( v6 >= v5 )
            this.ce = v5 - 1;
        }
        else
        {
          if ( p0 != 20 && p0 != 21 )
          {
            if ( p0 == 96 && this.ce >= 0 && this.ce < v5 )
              this.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.installer.g(this, (android.widget.Button)this.cd.get(this.ce)));
            return true;
          }
          v7 = this.ce - 1;
          this.ce = v7;
          if ( v7 < 0 )
            this.ce = 0;
        }
        this.a((android.widget.Button)this.cd.get(this.ce));
        return true;
      }
      catch ( Exception e )
      {
        return true;
      }
    }

    public boolean onKeyUp(int p0, android.view.KeyEvent p1)
    {
      boolean v3 = false;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = true;
            if ( !((p0 == 4 || p0 == 97) && p1.getRepeatCount() == 0) ) { _pc = 9; continue _sm; }
            _sw_1 = (this.cg);
            if ( (_sw_1 == (1)) || (_sw_1 == (2)) || (_sw_1 == (7)) || (_sw_1 == (8)) || (_sw_1 == (10)) || (_sw_1 == (16)) || (_sw_1 == (17)) || (_sw_1 == (23)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (3)) || (_sw_1 == (5)) || (_sw_1 == (20)) || (_sw_1 == (27)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (4)) || (_sw_1 == (13)) || (_sw_1 == (18)) || (_sw_1 == (21)) || (_sw_1 == (29)) ) { _pc = 3; continue _sm; }
            if ( (_sw_1 == (9)) ) { _pc = 4; continue _sm; }
            _pc = 7;
            continue _sm;
          case 1:
            _pc = 5;
            continue _sm;
          case 2:
            this.b(2131427403);
            _pc = 8;
            continue _sm;
          case 3:
            this.b(2131427399);
            _pc = 8;
            continue _sm;
          case 4:
            if ( this.bE == 1 ) { _pc = 5; continue _sm; } else { _pc = 6; continue _sm; }
          case 5:
            this.b(2131427401);
            _pc = 6;
            continue _sm;
          case 6:
            _pc = 8;
            continue _sm;
          case 7:
            return v3;
          case 8:
            _pc = 10;
            continue _sm;
          case 9:
            if ( p0 == 25 || p0 == 24 || p0 == 27 )
            {
            return false;
            }
            _pc = 10;
            continue _sm;
          case 10:
            return v3;
        }
      }
}

    protected void onPause()
    {
      super.onPause();
      bIsPaused = true;
      if ( m_Dialog != null )
        m_Dialog.cancel();
    }

    protected void onRestart()
    {
      super.onRestart();
    }

    protected void onResume()
    {
      if ( this.cg != -1 )
        this.b(this.ch, this.cg);
      super.onResume();
      bIsPaused = false;
      if ( this.bE == 1 && this.bF && this.aq != 1 )
      {
        if ( this.x() )
          this.c(12);
        this.bF = false;
      }
      this.c();
    }

    protected void onStart()
    {
      super.onStart();
      GoogleAnalyticsTracker.activityStart(this);
      if ( SUtils.getPreferenceString(ApplicationSetUp.b, ApplicationSetUp.d, ApplicationSetUp.a).equals(ApplicationSetUp.c) )
        GoogleAnalytics.getInstance(this).c().a(0);
      GoogleAnalyticsTracker.Init(this.getApplicationContext());
      if ( !this.bM )
      {
        this.bM = true;
        this.t = this.getAssets();
        new Thread(this).start();
      }
    }

    protected void onStop()
    {
      super.onStop();
      GoogleAnalyticsTracker.activityStop(this);
    }

    public boolean onTouchEvent(android.view.MotionEvent p0)
    {
      int Action;
      android.view.Display DefaultDisplay;
      int Width;
      android.util.DisplayMetrics v5;
      StringBuilder v8;
      StringBuilder v9;
      StringBuilder v10;
      String v11;
      StringBuilder v12;
      Object v13;
      if ( m_toastSize == 0 )
        m_toastSize = Integer.parseInt(this.getString(2131361828).replaceAll("[\\D]+[^.]", "")) + 25 + m_toastExtra;
      Action = p0.getAction();
      DefaultDisplay = this.getWindowManager().getDefaultDisplay();
      Width = DefaultDisplay.getWidth();
      DefaultDisplay.getHeight();
      if ( Build.VERSION.SDK_INT >= 19 && !ViewConfiguration.get(this.getApplicationContext()).hasPermanentMenuKey() )
      {
        try
        {
          v5 = new android.util.DisplayMetrics();
          DefaultDisplay.getRealMetrics(v5);
          if ( v5.widthPixels > Width )
            Width = v5.widthPixels;
        }
        catch ( Exception e )
        {
          Width = DefaultDisplay.getWidth();
        }
      }
      if ( p0.getX() < (float)m_toastSize && p0.getY() < (float)m_toastSize )
      {
        if ( Action == 1 )
        {
          if ( leftTapCount != 0 && System.currentTimeMillis() - startTime >= m_delayTime )
          {
            leftTapCount = 0;
          }
          else
          {
            ++leftTapCount;
            startTime = System.currentTimeMillis();
            if ( statePressA || statePressB || statePressC )
            {
              if ( statePressA && statePressB && !statePressC )
              {
                statePressC = true;
              }
              else
              {
                statePressC = false;
                statePressB = false;
                statePressA = true;
              }
            }
            else
            {
              statePressA = true;
            }
            if ( leftTapCount == TAP_COUNT_MAX )
            {
              leftTapCount = 0;
              if ( m_prevErrorMessage != "" && (this.aq == 1 || this.aq == 14 || this.aq == 5 || this.aq == 31) )
              {
                v8 = new StringBuilder();
                m_Dialog = new android.app.AlertDialog.Builder(this).setNeutralButton("Close", null).create();
                v8.append("Configuration: " + this.H());
                v8.append("\nDevice: " + Build.MANUFACTURER + " " + Build.MODEL + " " + Build.VERSION.RELEASE);
                v8.append("\nGame: " + this.getString(2131165524) + " 1" + ".8" + ".2");
                v8.append("\nError:" + m_prevErrorMessage);
                m_Dialog.setMessage(v8.toString());
                m_Dialog.setTitle("Installer version 3.7.12235");
                m_Dialog.show();
                return true;
              }
            }
          }
        }
        return false;
      }
      if ( p0.getX() < (float)Width && p0.getX() > (float)(Width - m_toastSize) && p0.getY() < (float)m_toastSize )
      {
        leftTapCount = 0;
        if ( Action != 1 )
          return false;
        if ( System.currentTimeMillis() - startTime < m_delayTime )
        {
          if ( statePressA && !statePressB )
          {
            startTime = System.currentTimeMillis();
            statePressB = true;
            return false;
          }
          if ( !statePressA || !statePressB || !statePressC )
          {
            statePressC = false;
            statePressB = false;
            statePressA = false;
            return false;
          }
          statePressC = false;
          statePressB = false;
          statePressA = false;
          m_Dialog = new android.app.AlertDialog.Builder(this).setNeutralButton("Close", null).create();
          v9 = new StringBuilder();
          v9.append("Configuration: " + this.H());
          v9.append("\nInstallation Path: " + DATA_PATH);
          v10 = new StringBuilder("\nBiggest file: ");
          if ( pack_biggestFile == -1 )
            v11 = "";
          else
            v11 = new java.text.DecimalFormat("#,##0.00").format((double)(pack_biggestFile >> 10) / 1024.0) + " MB";
          v9.append(v10.append(v11).toString());
          v12 = new StringBuilder("\nNumber of files: ");
          if ( pack_NoFiles == -1 )
            v13 = "";
          else
            v13 = Integer.valueOf(pack_NoFiles);
          v9.append(v12.append(v13).toString());
          m_Dialog.setMessage(v9.toString());
          m_Dialog.setTitle("Installer version 3.7.12235");
          m_Dialog.show();
          return true;
        }
      }
      statePressC = false;
      statePressB = false;
      statePressA = false;
      rightTapCount = 0;
      return false;
    }

    public void onWindowFocusChanged(boolean p0)
    {
      if ( p0 )
        LowProfileListener.ActivateImmersiveMode(this);
      this.be = p0;
      s_isPauseGame = !p0;
      this.bQ = System.currentTimeMillis();
    }

    public void run()
    {
      String HDIDFV = null;
      int v2 = 0;
      long v3 = 0L;
      java.util.Iterator i = null;
      String v5 = null;
      java.util.Iterator v6 = null;
      int v7 = 0;
      int v8 = 0;
      String PreferenceString = null;
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
              Looper.prepare();
              this.aq = 0;
              this.al = 0;
              this.bL = 0;
              this.aS = true;
              this.aX = false;
              this.m = new java.text.DecimalFormat("#,##0.00");
              if ( !SUtils.getPreferenceBoolean("HDIDFV_sent", false, mPreferencesName) )
              {
              HDIDFV = Device.getHDIDFV();
              SUtils.setPreference("HDIDFV_sent", Boolean.valueOf(true), mPreferencesName);
              GoogleAnalyticsTracker.trackEvent("Configuration", "HDIDFV", HDIDFV, null);
              }
              if ( this.i() )
              {
              this.m();
              v2 = 1;
              }
              else
              {
              v2 = 0;
              }
              _pc = 1;
              continue _sm;
            case 1:
              if ( !(this.aq != 21 && !sbStarted) ) { _pc = 5; continue _sm; }
              this.aP = false;
              v3 = System.currentTimeMillis();
              if ( !bIsPaused )
              { _pc = 2; continue _sm; }
              if ( !((this.aq == 12 || this.aq == 20) && (this.aq != 12 || this.al == 7 || this.al == 5)) ) { _pc = 3; continue _sm; }
              if ( this.aq == 12 && this.al == 7 )
              {
              try
              {
              Thread.sleep(100);
              }
              catch ( Exception e )
              {
              }
              }
              _pc = 2;
              continue _sm;
            case 2:
              this.p();
              if ( this.aq == 12 && this.al == 7 )
              {
              if ( System.currentTimeMillis() == v3 )
              {
              try
              {
              Thread.sleep(50);
              }
              catch ( Exception e )
              {
              }
              }
              else
              {
              try
              {
              Thread.sleep(50 / (System.currentTimeMillis() - v3));
              }
              catch ( Exception e )
              {
              }
              }
              }
              else
              {
              try
              {
              Thread.sleep(20);
              }
              catch ( Exception e )
              {
              }
              }
              this.aP = true;
              _pc = 4;
              continue _sm;
            case 3:
              {
              try
              {
              Thread.sleep(50);
              }
              catch ( Exception e )
              {
              }
              }
              _pc = 4;
              continue _sm;
            case 4:
              _pc = 1;
              continue _sm;
            case 5:
              if ( this.bL != 0 || !this.aS )
              { _pc = 7; continue _sm; }
              if ( v2 != 0 )
              {
              this.C();
              for ( i = this.bd.iterator();
              i.hasNext();
              GoogleAnalyticsTracker.trackEvent(
              "Configuration",
              "SDcard" + 0,
              "After Install",
              (Long)((android.util.Pair)i.next()).second) )
              {
              ;
              }
              }
              v5 = LIBS_PATH + "/libsampleSandBox.so";
              new java.io.File(v5);
              _ehCatchPc = 8;
              if ( sNativeLibs.size() > 0 )
              {
              v6 = sNativeLibs.iterator();
              v7 = 0;
              while ( true )
              {
              try
              {
              if ( !v6.hasNext() )
              { _pc = 10; continue _sm; }
              ++v7;
              System.load(LIBS_PATH + (String)v6.next());
              }
              catch ( Exception e )
              {
              { _pc = 10; continue _sm; }
              }
              }
              }
              v8 = 0;
              _pc = 6;
              continue _sm;
            case 6:
              if ( v8 == 0 )
              System.loadLibrary("Gangstar4");
              new java.io.File(LIBS_PATH + "/libsampleSandBox.so");
              if ( this.getApplicationContext().getPackageManager().checkPermission("android.permission.CHANGE_WIFI_STATE", "com.gameloft.android.GAND.GloftGGSS") == 0 )
              {
              if ( this.aH )
              {
              this.aD.setWifiEnabled(false);
              }
              else if ( this.aI )
              {
              this.aD.setWifiEnabled(true);
              }
              }
              createNoMedia(DATA_PATH);
              Tracking.setFlag(17);
              Tracking.onLaunchGame(2);
              sbStarted = true;
              while ( s_isPauseGame )
              {
              try
              {
              Thread.sleep(100);
              }
              catch ( Exception e )
              {
              }
              }
              _pc = 7;
              continue _sm;
            case 7:
              if ( this.bL != 0 || !this.aS )
              {
              this.G();
              }
              else
              {
              PreferenceString = SUtils.getPreferenceString("SDFolder", "", mPreferencesName);
              if ( PreferenceString.equals("") )
              {
              this.a(0);
              createNoMedia(PreferenceString);
              SaveDateLastUpdate(PreferenceString);
              }
              this.F();
              }
              return;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              v7 = 0;
              _pc = 10;
              continue _sm;
            case 9:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 10:
              v8 = v7;
              _pc = 6;
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

}
