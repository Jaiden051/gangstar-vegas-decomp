// Decompiled from classes.dex (SourceFile: LManager.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.billing.common;

import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
public class LManager {
    // Fields
    private static com.gameloft.android.GAND.GloftGGSS.GLUtils.Device F;
    public static java.lang.String a;
    public static java.lang.String b;
    public static int c;
    public static int d;
    public static int e;
    public static boolean h;
    private final java.lang.String A;
    private final java.lang.String B;
    private final java.lang.String C;
    private final java.lang.String D;
    private final java.lang.String E;
    private com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer G;
    private com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter H;
    private final long I;
    private final int J;
    private final int K;
    private final int L;
    private final long M;
    private final long N;
    private final long O;
    private final byte P;
    private final byte Q;
    private final byte R;
    public final int f;
    public final int g;
    private final java.lang.String i;
    private final java.lang.String j;
    private final java.lang.String k;
    private final java.lang.String l;
    private final java.lang.String m;
    private final java.lang.String n;
    private final java.lang.String o;
    private final java.lang.String p;
    private final java.lang.String q;
    private final java.lang.String r;
    private final java.lang.String s;
    private final int t;
    private final int u;
    private final int v;
    private final int w;
    private final int x;
    private final int y;
    private final java.lang.String z;

    // Methods
    static
    {
      h = false;
    }

    public LManager()
    {
      super();
      this.i = "PREFERENCES_GAME_UNLOCKED";
      this.j = "PREFERENCES_NEED_VALIDATION_ON_SERVER";
      this.k = "PREFERENCES_GAME_UNLOCK_CODE";
      this.l = "PREFERENCES_GAME_RANDOM_CODE";
      this.m = "PREFERENCES_GAME_SERVER_NUMBER";
      this.n = "PREFERENCES_USER_IDVALID";
      this.o = "PREFERENCES_USER_CC";
      this.p = "PREFERENCES_USER_CC_LAST_NUMBERS";
      this.q = "PREFERENCES_USER_EMAIL";
      this.r = "PREFERENCES_USER_PASSWORD";
      this.s = "PREFERENCES_USER_LAST_PAYMENT";
      this.f = 1;
      this.g = 2;
      this.t = -1;
      this.u = 0;
      this.v = 1;
      this.w = 0;
      this.x = 1;
      this.y = 3;
      this.z = "PREFERENCES_FULL_LICENSE";
      this.A = "PREFERENCES_MRC_ACTIVE";
      this.B = "PREFERENCES_MRC_COUNT";
      this.C = "PREFERENCES_MRC_VALID";
      this.D = "PREFERENCES_MRC_LICENSE";
      this.E = "$JS6&GJH5$3%H&4@KECVF$56$Y$N792$&44O8B";
      this.H = null;
      this.I = -999;
      this.J = 1;
      this.K = 0;
      this.L = 31;
      this.M = 0;
      this.N = 86400000;
      this.O = 2678400000L;
      this.P = -1;
      this.Q = -1;
      this.R = 0;
      if ( F == null )
        F = new com.gameloft.android.GAND.GloftGGSS.GLUtils.Device();
      if ( this.H == null )
        this.H = new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(Device.getDemoCode()
                                                                                      + Device.getHDIDFV());
    }

    private static boolean ContainsUnlockCode(String p0)
    {
      boolean v1;
      v1 = false;
      try
      {
        return Integer.parseInt(p0.substring(p0.indexOf("(") + 1, p0.indexOf(")"))) != -1;
      }
      catch ( Exception e )
      {
      }
      return v1;
    }

    private static boolean TrackingPurchaseFailed$134632()
    {
      return true;
    }

    private static boolean TrackingPurchaseSuccess$134632()
    {
      return true;
    }

    private int a()
    {
      return this.a("PREFERENCES_MRC_COUNT", -1);
    }

    private int a(String p0, int p1)
    {
      String PreferenceString; // RETVAL
      int v4;
      String[] v5; // RETVAL
      Object[] v6;
      this.H = new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(Device.getDemoCode()
                                                                                    + Device.getHDIDFV());
      PreferenceString = SUtils.getPreferenceString(p0, "GameBInfo");
      v4 = -1;
      try
      {
        if ( PreferenceString != "" )
        {
          v5 = this.H.b(PreferenceString).split("#");
          v6 = v5;
          if ( v5.length == 3 && v5[1].compareTo(Device.getHDIDFV()) == 0 )
            return Integer.parseInt((String)v6[2]);
        }
        return v4;
      }
      catch ( Exception e )
      {
      }
      return v4;
    }

    private String a(String p0)
    {
      return this.H.a(new java.util.Random(System.currentTimeMillis()).nextLong() + "#" + Device.getHDIDFV() + "#" + p0);
    }

    private void a(boolean p0)
    {
      SUtils.setPreference("PREFERENCES_GAME_UNLOCKED", Integer.valueOf(1), "GameBInfo");
      SUtils.setPreference("PREFERENCES_NEED_VALIDATION_ON_SERVER", Boolean.valueOf(false), "GameBInfo");
    }

    private int b()
    {
      return this.a("PREFERENCES_GAME_UNLOCKED", -1);
    }

    private String b(int p0)
    {
      this.H = new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(Device.getDemoCode()
                                                                                    + Device.getHDIDFV());
      return this.H.a(new java.util.Random(System.currentTimeMillis()).nextLong() + "#" + Device.getHDIDFV() + "#" + p0);
    }

    private String b(String p0)
    {
      String PreferenceString; // RETVAL
      String v3;
      String[] v4; // RETVAL
      Object[] v5;
      this.H = new com.gameloft.android.GAND.GloftGGSS.billing.common.StringEncrypter(Device.getDemoCode()
                                                                                    + Device.getHDIDFV());
      PreferenceString = SUtils.getPreferenceString(p0, "GameBInfo");
      v3 = PreferenceString;
      try
      {
        if ( PreferenceString != "" )
        {
          v3 = this.H.b(PreferenceString);
          v4 = v3.split("#");
          v5 = v4;
          if ( v4.length == 3 && v4[1].compareTo(Device.getHDIDFV()) == 0 )
            return (String)v5[2];
        }
        return v3;
      }
      catch ( Exception e )
      {
      }
      return v3;
    }

    private String c(int p0)
    {
      return this.b(p0);
    }

    private boolean c(String p0)
    {
      boolean v2;
      int v3;
      v2 = false;
      try
      {
        v3 = Integer.parseInt(p0.substring(p0.indexOf("(") + 1, p0.indexOf(")")));
        if ( this.a(v3) )
        {
          SUtils.setPreference("PREFERENCES_GAME_UNLOCK_CODE", Integer.valueOf(v3), "GameBInfo");
          return true;
        }
        return v2;
      }
      catch ( Exception e )
      {
      }
      return v2;
    }

    private String d(int p0)
    {
      return this.b(p0);
    }

    private static void debugSavedValues()
    {
      ;
    }

    private static String getIMEI_HDIDVF()
    {
      return Device.getHDIDFV();
    }

    public static int getRandomCodeNumber()
    {
      return SUtils.getPreferenceInt("PREFERENCES_GAME_RANDOM_CODE", -1, "GameBInfo");
    }

    private static String getServerNumber()
    {
      return SUtils.getPreferenceString("PREFERENCES_GAME_SERVER_NUMBER", "GameBInfo");
    }

    private static int getUnlockCodeNumber()
    {
      return SUtils.getPreferenceInt("PREFERENCES_GAME_UNLOCK_CODE", -1, "GameBInfo");
    }

    public static void setRandomCodeNumber(int p0)
    {
      SUtils.setPreference("PREFERENCES_GAME_RANDOM_CODE", Integer.valueOf(p0), "GameBInfo");
    }

    private static void setServerNumber(String p0)
    {
      SUtils.setPreference("PREFERENCES_GAME_SERVER_NUMBER", p0, "GameBInfo");
    }

    private static void setUnlockCodeNumber(int p0)
    {
      SUtils.setPreference("PREFERENCES_GAME_UNLOCK_CODE", Integer.valueOf(p0), "GameBInfo");
    }

    private static long today()
    {
      return new java.util.Date().getTime();
    }

    public final boolean a(int p0)
    {
      return p0 == (getRandomCodeNumber() ^ 0xD0A4);
    }

}
