// Decompiled from classes.dex (SourceFile: Tracking.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import android.os.Build;
import android.provider.Settings;
import com.gameloft.android.hdidfv.HDIDFV;
import java.util.Locale;
public class Tracking {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    static java.lang.String f;
    static java.lang.String g;
    static java.lang.String h;
    static java.lang.String i;
    static java.lang.String j;
    static java.lang.String k;
    static java.lang.String l;
    static java.lang.String m;
    private static java.lang.String n;
    private static java.lang.String o;
    private static java.lang.String p;
    private static int q;
    private static int r;
    private static java.lang.String s;
    private static final java.util.concurrent.locks.ReentrantLock t;

    // Methods
    static
    {
      n = "GGSS";
      o = "1.8.2f";
      p = "2.1";
      q = 1500;
      r = 0;
      s = "http://ingameads.gameloft.com/redir/hdloading.php?game=#GAME#&country=#COUNTRY#&lg=#LANG#&ver=#IGP_VERSION#&device" +
          "=#DEVICE#&f=#FIRMWARE#&udid=#ID#&hdidfv=#HDIDFV#&androidid=#ANDROID_ID#&g_ver=#VERSION#&line_number=#LINE_NUMBER#&" +
          "google_adid=#GOOGLE_ADID#&google_optout=#GOOGLE_OPTOUT#";
      t = new java.util.concurrent.locks.ReentrantLock();
    }

    public Tracking()
    {
      super();
    }

    /* synthetic */ static java.util.concurrent.locks.ReentrantLock access$000()
    {
      return t;
    }

    /* synthetic */ static String access$100()
    {
      return s;
    }

    /* synthetic */ static String access$200(String p0)
    {
      return buildURL(p0);
    }

    /* synthetic */ static void access$300()
    {
      r = 0;
    }

    /* synthetic */ static String access$400()
    {
      return n;
    }

    /* synthetic */ static String access$500()
    {
      return o;
    }

    /* synthetic */ static int access$600()
    {
      return q;
    }

    private static String buildURL(String p0)
    {
      String v1;
      String v2;
      java.util.Locale Default;
      v1 = Encrypter.crypt(f);
      v2 = Encrypter.crypt(m);
      Default = Locale.getDefault();
      if ( Locale.getDefault().toString().equals("zh_TW") )
        i = "zt";
      else
        i = Default.getLanguage();
      j = Default.getCountry();
      return p0.replace("#GAME#", n).replace("#COUNTRY#", j).replace("#LANG#", i).replace("#VERSION#", o).replace("#DEVICE#", k).replace("#FIRMWARE#", l).replace("#ID#", v1).replace("#HDIDFV#", g).replace("#ANDROID_ID#", h).replace("#IGP_VERSION#", p).replace("#LINE_NUMBER#", v2).replace("#GOOGLE_ADID#", Device.getGoogleAdId()).replace("#GOOGLE_OPTOUT#", Integer.toString(com.gameloft.android.DecompRT.b2i(Device.getGoogleAdIdStatus() != 0))).replace(" ", "");
    }

    private static void clearFlags()
    {
      r = 0;
    }

    public static void init()
    {
      String String; // RETVAL
    
      f = Device.getSerial();
      g = Device.getHDIDFV();
      String = Settings.Secure.getString(SUtils.getContext().getContentResolver(), "android_id");
      h = String;
      if ( String == null )
        h = "null";
      k = Build.MANUFACTURER + "_" + Build.MODEL;
      l = Build.VERSION.RELEASE;
      m = Device.getLineNumber();
      Device.getGoogleAdId();
    }

    public static void onLaunchGame()
    {
      onLaunchGame(2, "");
    }

    public static void onLaunchGame(int p0)
    {
      onLaunchGame(p0, "");
    }

    public static void onLaunchGame(int p0, String p1)
    {
      new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.l(p1, p0)).start();
    }

    public static void setFlag(int p0)
    {
      r |= p0;
    }

    public static boolean testFlags(int p0)
    {
      return (r & p0) == p0;
    }

}
