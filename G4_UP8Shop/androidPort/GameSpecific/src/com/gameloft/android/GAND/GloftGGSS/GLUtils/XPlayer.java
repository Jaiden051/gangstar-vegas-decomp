// Decompiled from classes.dex (SourceFile: XPlayer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

import com.gameloft.android.GAND.GloftGGSS.billing.common.LManager;
import java.security.MessageDigest;
import java.util.Locale;
import javax.crypto.Mac;
public final class XPlayer implements com.gameloft.android.GAND.GloftGGSS.GLUtils.Config, com.gameloft.android.GAND.GloftGGSS.billing.common.b {
    // Fields
    public static java.lang.String A;
    public static java.lang.String B;
    public static java.lang.String C;
    public static java.lang.String D;
    public static java.lang.String E;
    public static java.lang.String F;
    public static java.lang.String G;
    public static java.lang.String H;
    public static java.lang.String I;
    public static boolean J;
    public static int K;
    public static int L;
    public static boolean M;
    public static boolean N;
    public static java.lang.String O;
    public static java.lang.String P;
    public static int Q;
    public static int R;
    public static int S;
    public static int T;
    public static int U;
    public static int V;
    public static int W;
    public static int X;
    public static int Y;
    public static int Z;
    public static int aA;
    public static int aB;
    public static int aC;
    public static int aD;
    public static int aE;
    public static int aF;
    public static int aG;
    public static int aH;
    public static int aI;
    public static int aJ;
    public static int aK;
    public static int aL;
    public static int aM;
    public static int aN;
    public static int aO;
    public static int aP;
    public static int aQ;
    public static int aR;
    public static int aS;
    public static int aT;
    public static int aU;
    public static int aV;
    public static int aW;
    public static int aX;
    public static int aY;
    public static int aZ;
    public static int aa;
    public static int ab;
    public static int ac;
    public static int ad;
    public static int ae;
    public static int af;
    public static int ag;
    public static int ah;
    public static int ai;
    public static int aj;
    public static int ak;
    public static int al;
    public static int am;
    public static int an;
    public static int ao;
    public static int ap;
    public static int aq;
    public static int ar;
    public static int as;
    public static int at;
    public static int au;
    public static int av;
    public static int aw;
    public static int ax;
    public static int ay;
    public static int az;
    private static java.lang.String bA;
    private static java.lang.String bB;
    private static java.lang.String bC;
    private static java.lang.String bD;
    private static java.lang.String bE;
    private static byte bF;
    private static byte bG;
    private static byte bH;
    private static byte bI;
    private static byte bJ;
    private static byte bK;
    private static byte bL;
    private static int bN;
    public static int ba;
    public static int bb;
    public static int bc;
    public static int bd;
    public static int be;
    public static int bf;
    public static int bg;
    public static int bh;
    public static int bi;
    public static int bj;
    public static long bk;
    public static java.lang.String bl;
    protected static com.gameloft.android.GAND.GloftGGSS.GLUtils.HTTP bm;
    public static long bn;
    public static com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer$Error[] bo;
    private static java.lang.String bx;
    private static java.lang.String by;
    private static java.lang.String bz;
    static com.gameloft.android.GAND.GloftGGSS.GLUtils.Device t;
    private java.lang.String bM;
    private int bw;
    public final java.lang.String u;
    public final java.lang.String v;
    public java.lang.String w;
    public boolean x;
    public final java.lang.String y;
    com.gameloft.android.GAND.GloftGGSS.billing.common.c z;

    // Methods
    static
    {
      A = null;
      B = null;
      C = null;
      D = null;
      E = null;
      F = null;
      G = null;
      H = null;
      bx = null;
      I = "";
      bk = 0;
      bl = null;
      bo = new com.gameloft.android.GAND.GloftGGSS.GLUtils.XPlayer$Error[0];
    }

    public XPlayer(com.gameloft.android.GAND.GloftGGSS.GLUtils.Device p0)
    {
      super();
      this.u = "https://secure.gameloft.com/tryandbuy/notifications/";
      this.v = "http://ingameads.gameloft.com/redir/hdloading.php";
      this.x = false;
      this.y = "https://secure.gameloft.com/android/3g_carrier.php";
      this.z = null;
      this.bw = -1;
      t = p0;
      HTTP.w = a_;
      bl = null;
      if ( this.bM != null && this.bM.length() != 0 )
        this.bM = this.bM.trim();
      bm = new com.gameloft.android.GAND.GloftGGSS.GLUtils.HTTP();
      if ( bl != null )
        bl = bl.trim();
      else
        bl = "";
    }

    private static String GetResultValue(int p0)
    {
      String v1;
      switch ( p0 )
      {
        case 0:
          v1 = "X/UdzsidlhgyU1XvCAmFlFD1ENkvNoVcrGXq7CvZ1Oo=";
          break;
        case 1:
          v1 = "3JHvql5Lf+PtFSCKPZM28s1Z+25b0rLO39DqQFrYGtZQ9RDZLzaFXKxl6uwr2dTq";
          break;
        case 2:
          v1 = "vmumwPhxuzoLGRoR4dvl9FD1ENkvNoVcrGXq7CvZ1Oo=";
          break;
        case 3:
          v1 = "wX4NLAtn5Jp0o/qCUQHvXVD1ENkvNoVcrGXq7CvZ1Oo=";
          break;
        default:
          v1 = "INVALID_VALUE";
          break;
      }
      return v1;
    }

    private String a(int p0)
    {
      String v2; // RETVAL
      String v3;
      v2 = buildBaseTracking();
      v3 = v2;
      switch ( p0 )
      {
        case 0:
          v3 = v2 + "&action=HTTPBillingSuccess";
          break;
        case 1:
          v3 = v2 + "&action=PSMSBillingSuccess";
          break;
        case 2:
        case 3:
        case 4:
          v3 = v2 + "&action=CCBillingSuccess";
          break;
        default:
          return v3;
      }
      return v3;
    }

    private void a(com.gameloft.android.GAND.GloftGGSS.billing.common.c p0)
    {
      this.z = p0;
    }

    private String b(int p0)
    {
      String v2; // RETVAL
      String v3;
      v2 = buildBaseTracking();
      v3 = v2;
      switch ( p0 )
      {
        case 0:
          v3 = v2 + "&action=HTTPBillingError|" + bN;
          break;
        case 1:
          v3 = v2 + "&action=PSMSBillingError";
          break;
        case 2:
        case 3:
        case 4:
          v3 = v2 + "&action=CCBillingError|" + bN;
          break;
        default:
          return v3;
      }
      return v3;
    }

    private void b(String p0)
    {
      bm.b();
      SUtils.getLManager();
      LManager.setRandomCodeNumber(Device.createUniqueCode());
      this.bM = p0;
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(this.bM, "gettimestamprequest=1");
    }

    private static String buildBaseTracking()
    {
      return "version=2&game="
           + Device.getDemoCode()
           + "&network_country_ISO="
           + Device.getNetworkCountryIso()
           + "&network_operator="
           + Device.getNetworkOperator()
           + "&network_operator_name="
           + Device.getNetworkOperatorName()
           + "&sim_country_iso="
           + Device.getSimCountryIso()
           + "&sim_operator="
           + Device.getSimOperator()
           + "&sim_operator_name="
           + Device.getSimOperatorName()
           + "&is_network_roaming="
           + Device.getIsRoaming()
           + "&android_build_device="
           + Device.getDevice()
           + "&android_build_model="
           + Device.getPhoneModel()
           + "&d="
           + SUtils.GetSerialKey();
    }

    private void c(int p0)
    {
      String v2; // RETVAL
      String v3;
      bm.b();
      v2 = buildBaseTracking();
      v3 = v2;
      switch ( p0 )
      {
        case 0:
          v3 = v2 + "&action=HTTPBillingSuccess";
          break;
        case 1:
          v3 = v2 + "&action=PSMSBillingSuccess";
          break;
        case 2:
        case 3:
        case 4:
          v3 = v2 + "&action=CCBillingSuccess";
          break;
        default:
          break;
      }
      this.bM = "https://secure.gameloft.com/tryandbuy/notifications/";
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(this.bM, v3);
    }

    private void c(String p0)
    {
      String v2;
      bm.b();
      v2 = buildBaseTracking() + p0;
      this.bM = "http://ingameads.gameloft.com/redir/hdloading.php";
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(this.bM, v2);
    }

    private static void cancel()
    {
      bn = 0;
      bm.b();
    }

    private static void cleanup()
    {
      bn = 0;
      bm.c();
    }

    public static void clearLastEComTxId()
    {
      B = null;
    }

    private void d(int p0)
    {
      String v2; // RETVAL
      String v3;
      bm.b();
      v2 = buildBaseTracking();
      v3 = v2;
      switch ( p0 )
      {
        case 0:
          v3 = v2 + "&action=HTTPBillingError|" + bN;
          break;
        case 1:
          v3 = v2 + "&action=PSMSBillingError";
          break;
        case 2:
        case 3:
        case 4:
          v3 = v2 + "&action=CCBillingError|" + bN;
          break;
        default:
          break;
      }
      this.bM = "https://secure.gameloft.com/tryandbuy/notifications/";
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(this.bM, v3);
    }

    private static String encodeQuery(String p0)
    {
      return Encoder.String2Blob(p0);
    }

    private com.gameloft.android.GAND.GloftGGSS.billing.common.c g()
    {
      return this.z;
    }

    public static com.gameloft.android.GAND.GloftGGSS.GLUtils.a getCarrier()
    {
      return Device.getCarrier();
    }

    public static com.gameloft.android.GAND.GloftGGSS.GLUtils.Device getDevice()
    {
      return t;
    }

    public static String getLastEComTxId()
    {
      if ( B == null || B.equals("") )
        return null;
      else
        return B;
    }

    public static int getLastErrorCode()
    {
      return bN;
    }

    public static String getLastErrorCodeString()
    {
      if ( A != null )
        return A;
      else
        return "ERROR";
    }

    public static String getLastErrorMessage()
    {
      return "";
    }

    public static int getLastErrorMessageId()
    {
      int i;
      for ( i = 0; i < bo.length; ++i )
      {
        if ( bN == XPlayer$Error.access$000(bo[i]) )
          return XPlayer$Error.access$100(bo[i]);
      }
      return 2131165342;
    }

    public static String getUMPMO1()
    {
      if ( G != null )
        return G;
      else
        return "ERROR";
    }

    public static String getUMPMO2()
    {
      if ( H != null )
        return H;
      else
        return "ERROR";
    }

    private static String getValue(String p0, int p1)
    {
      int v2;
      String v3;
      int v4;
      int i;
      char[] v7;
      v2 = 0;
      v3 = null;
      v4 = p0.indexOf(124, 1);
      for ( i = p1; i > 0; --i )
      {
        if ( v2 == -1 )
          return v3;
        v2 = v4;
        v4 = p0.indexOf(124, v4 + 1);
      }
      if ( v2 != -1 )
      {
        if ( v4 == -1 )
          v4 = p0.length();
        if ( p1 > 0 )
          ++v2;
        if ( v2 == v4 )
        {
          return "";
        }
        else if ( v2 <= v4 )
        {
          try
          {
            v7 = new char[(v4 - v2)];
            p0.getChars(v2, v4, v7, 0);
            return new String(v7);
          }
          catch ( IndexOutOfBoundsException e )
          {
          }
        }
      }
      return v3;
    }

    public static com.gameloft.android.GAND.GloftGGSS.GLUtils.HTTP getWHTTP()
    {
      return bm;
    }

    private void h()
    {
      HTTP.w = a_;
      bl = null;
      if ( this.bM != null && this.bM.length() != 0 )
        this.bM = this.bM.trim();
    }

    public static final String hmacSha1(String p0, String p1)
    {
      javax.crypto.spec.SecretKeySpec v2;
      javax.crypto.Mac Instance;
      byte[] v4;
      StringBuffer v5;
      int i;
      String j;
      try
      {
        v2 = new javax.crypto.spec.SecretKeySpec(p0.getBytes(), "HmacSHA1");
        Instance = Mac.getInstance("HmacSHA1");
        Instance.init(v2);
        v4 = Instance.doFinal(p1.getBytes());
        v5 = new StringBuffer();
        for ( i = 0; i < v4.length; ++i )
        {
          for ( j = Integer.toHexString((int)v4[i]); j.length() < 2; j = "0" + j )
            ;
          v5.append(j);
        }
        return v5.toString();
      }
      catch ( Exception e )
      {
        return "";
      }
    }

    private boolean i()
    {
      boolean v1 = false;
      String Value = null; // RETVAL
      String v4 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = true;
            if ( bm.a() )
            {
            if ( System.currentTimeMillis() - bn <= 8000 )
            return false;
            cancel();
            bN = -2;
            return v1;
            }
            if ( bm.v )
            return v1;
            if ( !(bm.t == null || bm.t == "") ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            bN = 40;
            return v1;
          case 2:
            Value = getValue(bm.t, 0);
            v4 = Value;
            if ( !(Value == null) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            if ( v4 != null && Encrypter.crypt(v4).equals("T7WxMl1MuYnllpIJnNJtoFD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = 0;
            return v1;
            }
            _pc = 1;
            continue _sm;
          case 4:
            try
            {
            if ( Encrypter.crypt(Value).equals("RS4zxSt6TWQHptj38oDsSlD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = Integer.parseInt(getValue(bm.t, 1));
            return v1;
            }
            { _pc = 3; continue _sm; }
            }
            catch ( NumberFormatException e )
            {
            bN = 40;
            getValue(bm.t, 1);
            }
            
            return v1;
        }
      }
}

    private boolean j()
    {
      boolean v1 = false;
      String Value = null; // RETVAL
      String v4 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = true;
            if ( bm.a() )
            {
            if ( System.currentTimeMillis() - bn <= 8000 )
            return false;
            cancel();
            bN = -2;
            return v1;
            }
            if ( bm.v )
            return v1;
            if ( !(bm.t == null || bm.t == "") ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            bN = 40;
            return v1;
          case 2:
            Value = getValue(bm.t, 0);
            v4 = Value;
            if ( !(Value == null) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            if ( v4 != null && Encrypter.crypt(v4).equals("T7WxMl1MuYnllpIJnNJtoFD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = 0;
            return v1;
            }
            _pc = 1;
            continue _sm;
          case 4:
            try
            {
            if ( Encrypter.crypt(Value).equals("RS4zxSt6TWQHptj38oDsSlD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = Integer.parseInt(getValue(bm.t, 1));
            return v1;
            }
            { _pc = 3; continue _sm; }
            }
            catch ( NumberFormatException e )
            {
            bN = 40;
            getValue(bm.t, 1);
            }
            
            return v1;
        }
      }
}

    private boolean k()
    {
      boolean v1;
      v1 = true;
      if ( bm.a() )
      {
        if ( System.currentTimeMillis() - bn <= 60000 )
        {
          return false;
        }
        else
        {
          cancel();
          bN = -2;
        }
      }
      else if ( !bm.v )
      {
        if ( bm.t == null || bm.t == "" )
        {
          bN = 40;
        }
        else
        {
          A = bm.t;
          bN = 0;
        }
      }
      return v1;
    }

    private boolean l()
    {
      boolean v1 = false;
      String Value = null; // RETVAL
      String v4 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = true;
            if ( bm.a() )
            {
            if ( System.currentTimeMillis() - bn <= 8000 )
            return false;
            cancel();
            bN = -2;
            return v1;
            }
            if ( bm.v )
            return v1;
            if ( !(bm.t == null || bm.t == "") ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            bN = 40;
            return v1;
          case 2:
            Value = getValue(bm.t, 0);
            v4 = Value;
            if ( !(Value == null) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            if ( v4.equals("T7WxMl1MuYnllpIJnNJtoFD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = 0;
            return v1;
            }
            _pc = 1;
            continue _sm;
          case 4:
            try
            {
            if ( Encrypter.crypt(Value).equals("RS4zxSt6TWQHptj38oDsSlD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = Integer.parseInt(getValue(bm.t, 1));
            return v1;
            }
            { _pc = 3; continue _sm; }
            }
            catch ( NumberFormatException e )
            {
            bN = 40;
            getValue(bm.t, 1);
            }
            
            return v1;
        }
      }
}

    public static final String md5(String p0)
    {
      java.security.MessageDigest Instance;
      byte[] v2;
      StringBuffer v3;
      int i;
      String j;
      try
      {
        Instance = MessageDigest.getInstance("MD5");
        Instance.update(p0.getBytes());
        v2 = Instance.digest();
        v3 = new StringBuffer();
        for ( i = 0; i < v2.length; ++i )
        {
          for ( j = Integer.toHexString((int)v2[i]); j.length() < 2; j = "0" + j )
            ;
          v3.append(j);
        }
        return v3.toString();
      }
      catch ( java.security.NoSuchAlgorithmException e )
      {
        return "";
      }
    }

    public static void sendIABProfileRequest(String p0)
    {
      String v1;
      bm.b();
      v1 = ""
         + "game="
         + Device.ValidateStringforURL(Device.getDemoCode())
         + "&network_country_ISO="
         + Device.ValidateStringforURL(Device.getNetworkCountryIso())
         + "&network_operator="
         + Device.ValidateStringforURL(Device.getNetworkOperator())
         + "&network_operator_name="
         + Device.getNetworkOperatorName()
         + "&sim_country_iso="
         + Device.ValidateStringforURL(Device.getSimCountryIso())
         + "&sim_operator="
         + Device.ValidateStringforURL(Device.getSimOperator())
         + "&sim_operator_name="
         + Device.getSimOperatorName()
         + "&line_number="
         + Device.ValidateStringforURL(Device.getLineNumber())
         + "&is_network_roaming="
         + Device.getIsRoaming()
         + "&android_build_device="
         + Device.getDevice()
         + "&android_build_model="
         + Device.getPhoneModel()
         + "&supportswap=1&supports_sms=1"
         + "&supports_wapother=1&supports_wappp=1"
         + "&game_version=1.8.2"
         + "&lang="
         + Device.ValidateStringforURL(Locale.getDefault().getLanguage().toLowerCase());
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(p0, v1);
    }

    public static void setDataCenter(String p0)
    {
      F = p0;
    }

    public static void setGGIUID(String p0, String p1)
    {
      C = p1;
      D = p0;
    }

    public static void setGGIUID(String p0, String p1, String p2)
    {
      C = p1;
      D = p0;
      E = p2;
    }

    public static void setLastErrorMessage(int p0)
    {
      bN = p0;
    }

    public static void setUserCreds(String p0, String p1)
    {
      C = p0;
      D = "53689";
      E = p1;
    }

    private static String toIntegerFormat(String p0)
    {
      char[] v1;
      String v2;
      int i;
      v1 = p0.toCharArray();
      v2 = "";
      for ( i = 0; i < v1.length; ++i )
      {
        if ( v1[i] != 46 && v1[i] != 44 )
          v2 = v2 + v1[i];
      }
      return v2;
    }

    public final void a()
    {
      String v1;
      bm.b();
      v1 = buildBaseTracking() + "&return_allowed=1" + "&http=1_0";
      this.bM = "https://secure.gameloft.com/android/3g_carrier.php";
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(this.bM, v1);
    }

    public final void a(int p0, String p1)
    {
      StringBuilder v3;
      String v4;
      this.bw = 0;
      bm.b();
      SUtils.getLManager();
      LManager.setRandomCodeNumber(Device.createUniqueCode());
      v3 = new StringBuilder("b=").append(p1).append("|").append(Device.ValidateStringforURL(t.e().b())).append("|").append(Device.ValidateStringforURL(t.e().c())).append("|").append(Device.ValidateStringforURL(t.e().u())).append("|");
      SUtils.getLManager();
      v4 = v3.append(LManager.getRandomCodeNumber()).toString();
      this.bM = t.e().t();
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(this.bM, v4);
    }

    public final void a(String p0)
    {
      String v2;
      bm.b();
      v2 = buildBaseTracking() + p0;
      this.bM = "https://secure.gameloft.com/tryandbuy/notifications/";
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(this.bM, v2);
    }

    public final void a(String p0, String p1)
    {
      this.w = null;
      bm.b();
      bN = -100;
      bn = System.currentTimeMillis();
      bm.a(p0, p1);
    }

    public final boolean b()
    {
      boolean v1;
      String t;
      v1 = true;
      if ( bm.a() )
      {
        if ( System.currentTimeMillis() - bn <= 8000 )
        {
          return false;
        }
        else
        {
          cancel();
          bN = -2;
        }
      }
      else if ( !bm.v )
      {
        if ( bm.t != null
          && bm.t != ""
          && ((com.gameloft.android.DecompRT.comma((t = bm.t), (t.contains("WIFI_ONLY")))) || t.contains("WIFI_3G") || t.contains("WIFI_3G_ORANGE_IL")) )
        {
          bN = 0;
        }
        else
        {
          bN = 40;
        }
      }
      return v1;
    }

    public final boolean c()
    {
      boolean v1 = false;
      String Value = null; // RETVAL
      String v4 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = true;
            if ( bm.a() )
            {
            if ( System.currentTimeMillis() - bn <= 8000 )
            return false;
            cancel();
            bN = -2;
            return v1;
            }
            if ( bm.v )
            return v1;
            if ( !(bm.t == null || bm.t == "") ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            bN = 40;
            return v1;
          case 2:
            Value = getValue(bm.t, 0);
            v4 = Value;
            if ( !(Value == null) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            if ( v4 != null && Encrypter.crypt(v4).equals("T7WxMl1MuYnllpIJnNJtoFD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = 0;
            return v1;
            }
            _pc = 1;
            continue _sm;
          case 4:
            try
            {
            if ( Encrypter.crypt(Value).equals("RS4zxSt6TWQHptj38oDsSlD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = Integer.parseInt(getValue(bm.t, 1));
            return v1;
            }
            { _pc = 3; continue _sm; }
            }
            catch ( NumberFormatException e )
            {
            bN = 40;
            getValue(bm.t, 1);
            }
            
            return v1;
        }
      }
}

    public final boolean d()
    {
      boolean v1;
      v1 = true;
      if ( bm.a() )
      {
        if ( System.currentTimeMillis() - bn <= 10000 )
        {
          return false;
        }
        else
        {
          cancel();
          bN = -2;
        }
      }
      else if ( !bm.v )
      {
        if ( bm.t == null || bm.t == "" || (com.gameloft.android.DecompRT.comma((bN = 0), (bm.t.contains("error")))) )
          bN = 40;
      }
      return v1;
    }

    public final boolean e()
    {
      boolean v1 = false;
      String Value = null; // RETVAL
      String v4 = null;
      String v5 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = true;
            if ( bm.a() )
            {
            if ( System.currentTimeMillis() - bn <= 60000 )
            return false;
            cancel();
            bN = -2;
            C = null;
            D = null;
            E = null;
            return v1;
            }
            C = null;
            D = null;
            E = null;
            if ( bm.v )
            return v1;
            if ( !(bm.t == null || bm.t == "") ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            bN = 40;
            return v1;
          case 2:
            if ( bm.t.indexOf("|") == -1 )
            bm.t = Encoder.Blob2String(bm.t);
            Value = getValue(bm.t, 0);
            v4 = Value;
            if ( !(Value == null) ) { _pc = 4; continue _sm; }
            _pc = 3;
            continue _sm;
          case 3:
            if ( v4 != null
            && Encrypter.crypt(v4).equals("T7WxMl1MuYnllpIJnNJtoFD1ENkvNoVcrGXq7CvZ1Oo=")
            && SUtils.getLManager().a(Integer.parseInt(getValue(bm.t, 2))) )
            {
            bN = 0;
            B = getValue(bm.t, 3);
            return v1;
            }
            _pc = 1;
            continue _sm;
          case 4:
            try
            {
            if ( Encrypter.crypt(Value).equals("RS4zxSt6TWQHptj38oDsSlD1ENkvNoVcrGXq7CvZ1Oo=") )
            {
            bN = Integer.parseInt(getValue(bm.t, 1));
            return v1;
            }
            { _pc = 3; continue _sm; }
            }
            catch ( NumberFormatException e )
            {
            bN = 40;
            v5 = getValue(bm.t, 1);
            if ( v5.contains("PB") )
            {
            try
            {
            bN = Integer.parseInt(v5.substring(2, v5.length()));
            }
            catch ( NumberFormatException e2 )
            {
            }
            }
            }
            
            return v1;
        }
      }
}

    public final boolean f()
    {
      boolean v1;
      String t;
      String v4; // RETVAL
    
      v1 = true;
      this.w = null;
      if ( bm.a() )
      {
        if ( System.currentTimeMillis() - bn <= 15000 )
        {
          return false;
        }
        else
        {
          cancel();
          bN = -2;
        }
      }
      else if ( !bm.v )
      {
        t = bm.t;
        v4 = bm.a("X-Mandatory");
        if ( v4 != null && v4.equals("1") )
          this.x = true;
        if ( t.contains("VERSION_AVAILABLE") && t.contains("DOWNLOAD_URL") || t.contains("Error: No live release") )
        {
          this.w = t;
        }
        else if ( !t.contains("Error") )
        {
          bN = 40;
          return false;
        }
      }
      return v1;
    }

}
