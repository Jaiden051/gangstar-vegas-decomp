// Decompiled from classes.dex (SourceFile: GLAds.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.os.Build;
import android.text.format.Time;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import java.io.File;
import java.util.Locale;
public class GLAds {
    // Fields
    private static java.lang.String A;
    private static int B;
    private static java.lang.String C;
    private static java.lang.String D;
    private static java.lang.String E;
    private static java.lang.String F;
    private static java.lang.String G;
    private static java.lang.String H;
    private static java.lang.String I;
    private static java.lang.String J;
    private static android.view.ViewGroup K;
    private static com.gameloft.glads.an L;
    private static com.gameloft.glads.al M;
    private static com.gameloft.glads.am N;
    private static java.lang.String O;
    private static java.lang.String P;
    private static java.lang.String Q;
    private static java.lang.String R;
    private static java.lang.String S;
    private static java.lang.String T;
    private static java.lang.String U;
    private static java.lang.String V;
    private static int W;
    private static int X;
    private static int Y;
    private static int Z;
    public static int a;
    private static int aa;
    private static boolean ab;
    private static int ac;
    private static boolean ad;
    private static boolean ae;
    private static boolean af;
    private static boolean ag;
    private static boolean ah;
    private static boolean ai;
    private static boolean aj;
    private static boolean ak;
    public static int b;
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    public static int i;
    public static int j;
    public static int k;
    public static int l;
    public static int m;
    public static int n;
    public static int o;
    public static int p;
    public static int q;
    public static int r;
    public static int s;
    public static int t;
    static int u;
    static int v;
    static java.lang.String[] w;
    static java.lang.String[] x;
    static java.lang.String[] y;
    private static java.lang.String z;

    // Methods
    static
    {
      String[] v0;
      String[] v1;
      String[] v2;
      z = Utils.getGameVersion();
      A = Utils.getGameCode();
      B = 0;
      C = "";
      D = "";
      E = "";
      F = "";
      G = "";
      H = "";
      I = "";
      J = null;
      K = null;
      u = 2;
      v = 2;
      L = null;
      M = null;
      N = null;
      O = "game=FROM&os=android&device_country=COUNTRY&device_lang=DV_LG&game_lang=LANG&udid=UDIDPHONE&game_ver=VERSION&devic" +
          "e_model=DEVICE_MDL&firmware=FIRMWARE_D&jb=JAILBRAKE&anonymous=ANONYMOUS_ACCOUNT&fbid=FACEBOOK_ID&facebook_access_t" +
          "oken=FACEBOOK_ACCESS_TOKEN_GAME&gliveusername=GLIVE_USERNAME&gcid=GAMECENTER_UID&clientid=CLIENT_ID&data_center=DA" +
          "TA_CENTER_GAME&width=DVC_PIXEL_WIDTH&height=DVC_PIXEL_HEIGHT&google_adid=GOOGLE_AD_ID&google_optout=GOOGLE_OPT_OUT" +
          "&hdidfv=D_HDIDFV&androidid=D_ANDROIDID&device_date=DEV_DATE&adult_content=USER_ADULT_CONTENT&user_age=CURRENT_USER" +
          "_AGE&vast=1&mraid=1&nt=NETWORK_TYPE&igb=USE_IGB";
      P = "data=ENC_DATA&enc=1";
      Q = "?event=init";
      R = "?ad=banner&location=LOCATION";
      S = "?ad=fullscreen&location=LOCATION&notifyrd=1";
      T = "?ad=banner&offline=1&timeoutvalue=1";
      U = "?ad=fullscreen&offline=1&timeoutvalue=1";
      V = "?ad=fullscreen&location=LOCATION&check=2";
      W = 10;
      X = 8;
      Y = 15;
      Z = getBannerTimeoutValue();
      aa = getInterstitialTimeoutValue();
      ab = false;
      ac = 0;
      ad = isRooted();
      v0 = new String[25];
      v0[0] = "en";
      v0[1] = "fr";
      v0[2] = "de";
      v0[3] = "it";
      v0[4] = "es";
      v0[5] = "jp";
      v0[6] = "kr";
      v0[7] = "zh";
      v0[8] = "bz";
      v0[9] = "ru";
      v0[10] = "tr";
      v0[11] = "ar";
      v0[12] = "th";
      v0[13] = "id";
      v0[14] = "vi";
      v0[15] = "zt";
      v0[16] = "cz";
      v0[17] = "da";
      v0[18] = "nl";
      v0[19] = "et";
      v0[20] = "fi";
      v0[21] = "pl";
      v0[22] = "pt";
      v0[23] = "ro";
      v0[24] = "se";
      w = v0;
      v1 = new String[16];
      v1[0] = "OK";
      v1[1] = "OK";
      v1[2] = "OK";
      v1[3] = "OK";
      v1[4] = "Acep.";
      v1[5] = "OK";
      v1[6] = "OK";
      v1[7] = "OK";
      v1[8] = "OK";
      v1[9] = "OK";
      v1[10] = "OK";
      v1[11] = "Ù\u0085Ù\u0088Ø§Ù\u0081Ù\u0082";
      v1[12] = "à¸\u0095à¸\u0081à¸¥à¸\u0087";
      v1[13] = "OK";
      v1[14] = "OK";
      v1[15] = "OK";
      x = v1;
      v2 = new String[16];
      v2[0] = "Close";
      v2[1] = "Fermer";
      v2[2] = "SchlieÃ\u009Fen";
      v2[3] = "Chiudi";
      v2[4] = "Cerrar";
      v2[5] = "é\u0096\u0089ã\u0081\u0098ã\u0082\u008B";
      v2[6] = "ë\u008B«ê¸°";
      v2[7] = "å\u0085³é\u0097­";
      v2[8] = "Fechar";
      v2[9] = "Ð\u0097Ð°ÐºÑ\u0080Ñ\u008BÑ\u0082Ñ\u008C";
      v2[10] = "Kapat";
      v2[11] = "Ø¥ØºÙ\u0084Ø§Ù\u0082";
      v2[12] = "à¸\u009Bà¸´à¸\u0094";
      v2[13] = "Tutup";
      v2[14] = "Ä\u0090Ã³ng";
      v2[15] = "é\u0097\u009Cé\u0096\u0089";
      y = v2;
      ae = false;
      af = false;
      ag = false;
      ah = false;
      ai = false;
      aj = false;
      ak = false;
    }

    public GLAds()
    {
      super();
    }

    public static void SetBannerChangeStateCallback(com.gameloft.glads.al p0)
    {
      M = p0;
    }

    public static void SetCheckRewardCallback(com.gameloft.glads.am p0)
    {
      N = p0;
    }

    public static void SetFullscreenAdChangeCallback(com.gameloft.glads.an p0)
    {
      L = p0;
    }

    /* synthetic */ static void access$000()
    {
      nativeCheckGLAdsMethods();
    }

    /* synthetic */ static String access$100()
    {
      return J;
    }

    /* synthetic */ static void access$1000(String p0, int p1)
    {
      nativeNotifyAdAvailable(p0, p1);
    }

    /* synthetic */ static String access$1100()
    {
      return R;
    }

    /* synthetic */ static boolean access$1200()
    {
      return ah;
    }

    /* synthetic */ static void access$1300(String p0)
    {
      showOfflineOrEmbeddedBanner(p0);
    }

    /* synthetic */ static String access$1400()
    {
      return S;
    }

    /* synthetic */ static boolean access$1500()
    {
      return ai;
    }

    /* synthetic */ static void access$1600(String p0)
    {
      showOfflineOrEmbeddedFullscreenAd(p0);
    }

    /* synthetic */ static int access$1700()
    {
      return aa;
    }

    /* synthetic */ static boolean access$1800()
    {
      return aj;
    }

    /* synthetic */ static boolean access$1900()
    {
      return ak;
    }

    /* synthetic */ static String access$200()
    {
      return Q;
    }

    /* synthetic */ static String access$300()
    {
      return getGameDeviceIdentifiers();
    }

    /* synthetic */ static String access$400(String p0, String p1, int p2)
    {
      return postData(p0, p1, p2);
    }

    /* synthetic */ static void access$500()
    {
      startBannerOfflineConnection();
    }

    /* synthetic */ static void access$600()
    {
      startFullScreenAdOfflineConnection();
    }

    /* synthetic */ static boolean access$702(boolean p0)
    {
      ae = p0;
      return p0;
    }

    /* synthetic */ static String access$800()
    {
      return V;
    }

    /* synthetic */ static int access$900()
    {
      return Z;
    }

    private static boolean canExecuteCommand(String p0)
    {
      try
      {
        Runtime.getRuntime().exec(p0);
        return true;
      }
      catch ( Exception e )
      {
        return false;
      }
    }

    private static void cancelCurrentOfflineContentDownload()
    {
      af = true;
      ag = true;
      GLOfflineAdBannerManager.cancelCurrentDownloads();
      GLOfflineAdFullScreenManager.cancelCurrentDownloads();
    }

    public static void cancelFullScreenAd()
    {
      cancelFullScreenAd(false, true);
    }

    public static void cancelFullScreenAd(boolean p0)
    {
      cancelFullScreenAd(p0, true);
    }

    public static void cancelFullScreenAd(boolean p0, boolean p1)
    {
      if ( u != 2 )
        ai = true;
      stopFullscreenAdTimer();
      if ( isInFullScreenAd() || u == 0 )
      {
        GLAdFullScreen.closeFullScreenAd();
        MRAIDFullScreen.closeFullScreenAd();
        MRAIDBanner.closeExpandedBanner();
      }
      setFullScreenAdState(2, p0);
      if ( p1 )
      {
        try
        {
          nativeFullScreenAdWillNotDisplayCallback(2);
        }
        catch ( UnsatisfiedLinkError e )
        {
        }
      }
    }

    public static void checkAdAvailable(String p0)
    {
      new com.gameloft.glads.ac(p0).start();
    }

    public static void checkProfileForReward(String p0, boolean p1)
    {
      try
      {
        nativeCheckRewardCallback(p0, p1);
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
    }

    static String getAnonymous()
    {
      return C;
    }

    public static int getBannerState()
    {
      return v;
    }

    private static int getBannerTimeoutValue()
    {
      String File; // RETVAL
    
      File = Utils.readFile("glads", "banner.to");
      if ( File != null )
      {
        try
        {
          return Integer.parseInt(File);
        }
        catch ( Exception e )
        {
        }
      }
      return W;
    }

    static String getFbId()
    {
      return D;
    }

    public static int getFullScreenAdState()
    {
      return u;
    }

    public static String getGLAdsBaseURL()
    {
      if ( J != null )
        return J;
      else
        return "";
    }

    private static String getGameDeviceIdentifiers()
    {
      String v0;
      String v1;
      String v2; // RETVAL
      String v3;
      String v4; // RETVAL
      String v5;
      android.view.Display DefaultDisplay;
      String v7;
      String v8;
      String v9;
      String v10;
      android.text.format.Time v11;
      String v12; // RETVAL
      CharSequence v13;
      v0 = O;
      if ( isBigScreen() )
        v0 = v0 + "&tablet=1";
      if ( isHD() )
        v1 = v0 + "&hd=1";
      else
        v1 = v0 + "&hd=0";
      v2 = v1.replace("VERSION", z).replace("FROM", A).replace("LANG", w[B]).replace("DV_LG", Locale.getDefault().getLanguage()).replace("COUNTRY", Locale.getDefault().getCountry());
      if ( ad )
        v3 = v2.replace("JAILBRAKE", "1");
      else
        v3 = v2.replace("JAILBRAKE", "0");
      v4 = v3.replace("D_HDIDFV", Utils.getHDIDFV()).replace("D_ANDROIDID", Utils.getAndroidId());
      v5 = v4;
      if ( K != null )
      {
        DefaultDisplay = ((android.view.WindowManager)Utils.getContext().getSystemService("window")).getDefaultDisplay();
        v7 = v5.replace("DVC_PIXEL_WIDTH", String.valueOf(DefaultDisplay.getWidth())).replace("DVC_PIXEL_HEIGHT", String.valueOf(DefaultDisplay.getHeight()));
      }
      else
      {
        v7 = v4;
      }
      v8 = v7.replace("ANONYMOUS_ACCOUNT", C);
      D = SUtils.getPreferenceString("FBID", "SAVE_INFO_LOGIN");
      v9 = v8.replace("FACEBOOK_ID", D);
      F = SUtils.getPreferenceString("FBToken", "SAVE_INFO_LOGIN");
      v10 = v9.replace("FACEBOOK_ACCESS_TOKEN_GAME", F).replace("GLIVE_USERNAME", E).replace("GAMECENTER_UID", G).replace("CLIENT_ID", H).replace("DATA_CENTER_GAME", I).replace("DEVICE_MDL", (Build.MANUFACTURER + "_" + Build.MODEL).replaceAll(" ", "")).replace("FIRMWARE_D", Build.VERSION.RELEASE).replace("UDIDPHONE", Utils.getDeviceId()).replace("GOOGLE_AD_ID", Utils.getGoogleAdId()).replace("GOOGLE_OPT_OUT", String.valueOf(Utils.getGoogleAdIdStatus()))
          + "&op_country="
          + Utils.getNetworkCountryIso()
          + "&op_mccmnc="
          + Utils.getNetworkOperator();
      v11 = new android.text.format.Time(Time.getCurrentTimezone());
      v11.setToNow();
      v12 = v10.replace("DEV_DATE", v11.format("%Y-%m-%d_%H:%M:%S"));
      if ( ab )
        v13 = "1";
      else
        v13 = "0";
      return P.replace("ENC_DATA", Utils.crypt(
                                     v12.replace("USER_ADULT_CONTENT", v13).replace("CURRENT_USER_AGE", String.valueOf(ac)).replace("NETWORK_TYPE", Utils.getConnectionType()).replace("USE_IGB", "1")));
    }

    static String getGlAcc()
    {
      return E;
    }

    private static int getInterstitialTimeoutValue()
    {
      String File; // RETVAL
    
      File = Utils.readFile("glads", "interstitial.to");
      if ( File != null )
      {
        try
        {
          return Integer.parseInt(File);
        }
        catch ( Exception e )
        {
        }
      }
      return X;
    }

    static int getLgIdx()
    {
      return B;
    }

    public static android.view.ViewGroup getParentView()
    {
      return K;
    }

    public static void handleBackKey()
    {
      if ( K != null )
        K.post((Runnable)new com.gameloft.glads.aa());
    }

    static boolean hasInternetConnection()
    {
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      try
      {
        ActiveNetworkInfo = ((android.net.ConnectivityManager)Utils.getContext().getSystemService("connectivity")).getActiveNetworkInfo();
        return ActiveNetworkInfo != null && ActiveNetworkInfo.isConnected();
      }
      catch ( Exception e )
      {
      }
      return false;
    }

    public static void hideBanner()
    {
      if ( v != 2 )
        ah = true;
      stopBannerTimer();
      if ( isBannerVisible() || v == 0 )
      {
        GLAdBanner.hideBanner();
        MRAIDBanner.hideBanner();
      }
      setBannerState(2);
    }

    public static void ingameRedirectTo(String p0)
    {
      try
      {
        nativeIngameRedirectTo(p0);
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
    }

    public static void initGLAds()
    {
      if ( J != null )
        new com.gameloft.glads.ab().start();
    }

    public static boolean isBannerVisible()
    {
      return GLAdBanner.isBannerVisible() || MRAIDBanner.isBannerVisible();
    }

    static boolean isBigScreen()
    {
      android.view.Display DefaultDisplay;
      android.util.DisplayMetrics v1;
      float xdpi;
      float ydpi;
      float Width;
      int Height; // RETVAL
    
      DefaultDisplay = ((android.view.WindowManager)Utils.getContext().getSystemService("window")).getDefaultDisplay();
      v1 = new android.util.DisplayMetrics();
      DefaultDisplay.getMetrics(v1);
      xdpi = v1.xdpi;
      ydpi = v1.ydpi;
      Width = (float)DefaultDisplay.getWidth();
      Height = DefaultDisplay.getHeight();
      return (int)Math.sqrt((float)Height / ydpi * ((float)Height / ydpi) + Width / xdpi * (Width / xdpi)) >= 6;
    }

    static boolean isHD()
    {
      android.view.Display DefaultDisplay;
      DefaultDisplay = ((android.view.WindowManager)Utils.getContext().getSystemService("window")).getDefaultDisplay();
      return Math.min((float)DefaultDisplay.getWidth(), (float)DefaultDisplay.getHeight()) > 800.0f;
    }

    public static boolean isInFullScreenAd()
    {
      return GLAdFullScreen.isInFullScreenAd() || MRAIDFullScreen.isInFullScreenAd() || MRAIDBanner.isExpanded();
    }

    private static boolean isRooted()
    {
      boolean v0;
      String v1;
      v0 = true;
      v1 = Build.TAGS;
      if ( v1 == null || !v1.contains("test-keys") )
      {
        try
        {
          if ( new java.io.File("/system/app/Superuser.apk").exists() )
            return v0;
          return false;
        }
        catch ( Exception e )
        {
        }
        return false;
      }
      return v0;
    }

    private static native void nativeBannerChangeStateCallback(int p0);

    private static native void nativeCheckGLAdsMethods();

    private static native void nativeCheckRewardCallback(java.lang.String p0, boolean p1);

    private static native void nativeFullScreenAdChangeStateCallback(int p0);

    static native void nativeFullScreenAdWillDisplayCallback();

    static native void nativeFullScreenAdWillHideCallback(boolean p0);

    static native void nativeFullScreenAdWillNotDisplayCallback(int p0);

    private static native void nativeIngameRedirectTo(java.lang.String p0);

    private static native void nativeNotifyAdAvailable(java.lang.String p0, int p1);

    private static native void nativeTrackEvent(int p0, int p1, int p2, int p3, int p4, int p5, int p6, java.lang.String p7, java.lang.String p8);

    public static void pause()
    {
      GLAdBanner.pause();
      GLAdFullScreen.pause();
      MRAIDBanner.pause();
      MRAIDFullScreen.pause();
    }

    private static String postData(String p0, String p1, int p2)
    {
      int v3;
      org.apache.http.client.HttpClient v4;
      org.apache.http.client.methods.HttpPost v5;
      java.util.List v6;
      String[] v7;
      int v8;
      String[] v9; // RETVAL
      java.io.BufferedReader v11;
      StringBuffer v12;
      char[] v13;
      int v14; // RETVAL
    
      v3 = 0;
      v4 = new org.apache.http.impl.client.DefaultHttpClient();
      v5 = new org.apache.http.client.methods.HttpPost(p0);
      if ( p2 >= 0 )
      {
        v4.getParams().setParameter("http.connection.timeout", new Integer(1000 * p2 + 1));
        v4.getParams().setParameter("http.socket.timeout", new Integer(1000 * p2 + 1));
      }
      try
      {
        v6 = new java.util.ArrayList(2);
        v7 = p1.split("[&]");
        v8 = v7.length;
        while ( v3 < v8 )
        {
          v9 = v7[v3].split("[=]");
          if ( v9.length == 2 )
          {
            v6.add(new org.apache.http.message.BasicNameValuePair(v9[0], v9[1]));
          }
          else if ( v9.length == 1 )
          {
            v6.add(new org.apache.http.message.BasicNameValuePair(v9[0], ""));
          }
          ++v3;
        }
        v5.setEntity(new org.apache.http.client.entity.UrlEncodedFormEntity(v6));
        v11 = new java.io.BufferedReader(new java.io.InputStreamReader(v4.execute(v5).getEntity().getContent()));
        v12 = new StringBuffer("");
        v13 = new char[4096];
        while ( true )
        {
          v14 = v11.read(v13);
          if ( v14 == -1 )
            break;
          if ( v14 == 4096 )
            v12.append(new String(v13));
          else
            v12.append(new String(v13).substring(0, v14));
        }
        v11.close();
        return v12.toString();
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static void resume()
    {
      GLAdBanner.resume();
      GLAdFullScreen.resume();
      VASTFullScreen.resume();
      if ( ae )
      {
        cancelCurrentOfflineContentDownload();
        new com.gameloft.glads.ai().start();
      }
      MRAIDBanner.resume();
      MRAIDFullScreen.resume();
    }

    private static void saveTimeoutValueForBanner(int p0)
    {
      Z = p0;
      Utils.writeFile("glads", "banner.to", String.valueOf(p0));
    }

    private static void saveTimeoutValueForInterstitial(int p0)
    {
      aa = p0;
      Utils.writeFile("glads", "interstitial.to", String.valueOf(p0));
    }

    public static void setAllowAdultContent(boolean p0)
    {
      ab = p0;
    }

    public static void setAnonymousAccount(String p0)
    {
      C = p0;
    }

    public static void setBannerPositionAndAnchor(int p0, int p1, int p2)
    {
      GLAdBanner.setPositionAndAnchor(p0, p1, p2);
      MRAIDBanner.setPositionAndAnchor(p0, p1, p2);
    }

    public static void setBannerState(int p0)
    {
      v = p0;
      try
      {
        nativeBannerChangeStateCallback(p0);
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
    }

    public static void setClientID(String p0)
    {
      H = p0;
    }

    public static void setDataCenter(String p0)
    {
      I = p0;
    }

    public static void setFacebookAccessToken(String p0)
    {
      SUtils.setPreference("FBToken", p0, "SAVE_INFO_LOGIN");
      F = p0;
    }

    public static void setFacebookID(String p0)
    {
      SUtils.setPreference("FBID", p0, "SAVE_INFO_LOGIN");
      D = p0;
    }

    public static void setFullScreenAdState(int p0, boolean p1)
    {
      try
      {
        nativeFullScreenAdChangeStateCallback(p0);
        if ( p0 == 2 && u == 1 )
          nativeFullScreenAdWillHideCallback(p1);
        if ( p0 == 1 )
          nativeFullScreenAdWillDisplayCallback();
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
      u = p0;
    }

    public static void setGLAdsBaseURL(String p0)
    {
      J = p0;
    }

    public static void setGameCenterUID(String p0)
    {
      G = p0;
    }

    public static void setGameLanguage(String p0)
    {
      int i = 0;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            for ( i = 0; i < w.length; ++i )
            {
            if ( w[i].equals(p0) )
            { _pc = 1; continue _sm; }
            }
            i = 0;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            GLOfflineAdBannerManager.setLangIndex(i);
            GLOfflineAdFullScreenManager.setLangIndex(i);
            if ( i != B )
            {
            cancelCurrentOfflineContentDownload();
            B = i;
            new com.gameloft.glads.ah().start();
            }
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    public static void setGameVersion(String p0)
    {
      z = p0;
    }

    public static void setGliveAccount(String p0)
    {
      E = p0;
    }

    public static void setIgpCode(String p0)
    {
      A = p0;
    }

    public static void setParentView(android.view.ViewGroup p0)
    {
      K = p0;
      p0.post((Runnable)new com.gameloft.glads.z());
    }

    public static void setUserAge(int p0)
    {
      ac = p0;
    }

    public static void showBanner(String p0)
    {
      if ( v == 2 )
      {
        ah = false;
        setBannerState(0);
        new com.gameloft.glads.ad(p0).start();
      }
    }

    public static void showBanner(String p0, int p1, int p2, int p3)
    {
      setBannerPositionAndAnchor(p1, p2, p3);
      showBanner(p0);
    }

    public static void showFullScreenAd(String p0)
    {
      showFullScreenAd(p0, false);
    }

    public static void showFullScreenAd(String p0, boolean p1)
    {
      if ( u == 2 )
      {
        ai = false;
        setFullScreenAdState(0, false);
        new com.gameloft.glads.ae(p0, p1).start();
      }
    }

    private static void showOfflineOrEmbeddedBanner(String p0)
    {
      String ContentForBanner = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            ContentForBanner = GLOfflineAdBannerManager.getContentForBanner(B);
            if ( !(ContentForBanner.length() > 0) ) { _pc = 1; continue _sm; }
            {
            if ( !ah )
            { _pc = 2; continue _sm; }
            }
          case 1:
            ContentForBanner = GLOfflineAdBannerManager.getContentForEmbeddedBanner(B);
            if ( ContentForBanner.length() <= 0 )
            {
            setBannerState(2);
            return;
            }
            if ( !ah ) { _pc = 2; continue _sm; } else { _pc = 3; continue _sm; }
          case 2:
            GLAdBanner.show(ContentForBanner, p0);
            _pc = 3;
            continue _sm;
          case 3:
            return;
        }
      }
}

    private static void showOfflineOrEmbeddedFullscreenAd(String p0)
    {
      String ContentForFullScreenAd;
      String ContentForEmbeddedFullScreenAd;
      android.view.Display v3;
      android.view.Display DefaultDisplay;
      ContentForFullScreenAd = GLOfflineAdFullScreenManager.getContentForFullScreenAd(B);
      if ( ContentForFullScreenAd.length() > 0 )
      {
        if ( !ai )
        {
          DefaultDisplay = ((android.view.WindowManager)Utils.getContext().getSystemService("window")).getDefaultDisplay();
          GLAdFullScreen.show(
            ContentForFullScreenAd,
            p0,
            (float)DefaultDisplay.getWidth() > (float)DefaultDisplay.getHeight());
        }
      }
      else
      {
        ContentForEmbeddedFullScreenAd = GLOfflineAdFullScreenManager.getContentForEmbeddedFullScreenAd(B);
        if ( ContentForEmbeddedFullScreenAd.length() > 0 )
        {
          if ( !ai )
          {
            v3 = ((android.view.WindowManager)Utils.getContext().getSystemService("window")).getDefaultDisplay();
            GLAdFullScreen.show(ContentForEmbeddedFullScreenAd, p0, (float)v3.getWidth() > (float)v3.getHeight());
          }
        }
        else
        {
          setFullScreenAdState(2, false);
          try
          {
            nativeFullScreenAdWillNotDisplayCallback(2);
          }
          catch ( UnsatisfiedLinkError e )
          {
          }
        }
      }
    }

    private static void startBannerOfflineConnection()
    {
      String v0; // RETVAL
      org.json.JSONObject v1;
      int v2; // RETVAL
    
      af = false;
      v0 = postData(J + T, getGameDeviceIdentifiers(), -1);
      if ( !af && v0 != null )
      {
        try
        {
          v1 = new org.json.JSONObject(v0);
          v2 = v1.optInt("timeout", -1);
          if ( v2 != -1 )
            saveTimeoutValueForBanner(v2);
          GLOfflineAdBannerManager.downloadBannersWithIdArray(v1.getJSONArray("assets"), B);
        }
        catch ( org.json.JSONException e )
        {
        }
      }
    }

    static void startBannerTimer(String p0, int p1)
    {
      aj = false;
      new Thread((Runnable)new com.gameloft.glads.af(p1, p0)).start();
    }

    private static void startFullScreenAdOfflineConnection()
    {
      String v0; // RETVAL
      org.json.JSONObject v1;
      int v2; // RETVAL
    
      ag = false;
      v0 = postData(J + U, getGameDeviceIdentifiers(), -1);
      if ( !ag && v0 != null )
      {
        try
        {
          v1 = new org.json.JSONObject(v0);
          v2 = v1.optInt("timeout", -1);
          if ( v2 != -1 )
            saveTimeoutValueForInterstitial(v2);
          GLOfflineAdFullScreenManager.downloadAdFullscreenWithIdArray(v1.getJSONArray("assets"), B);
        }
        catch ( org.json.JSONException e )
        {
        }
      }
    }

    static void startFullscreenAdTimer(String p0, int p1, boolean p2)
    {
      ak = false;
      new Thread((Runnable)new com.gameloft.glads.ag(p1, p2, p0)).start();
    }

    static synchronized void stopBannerTimer()
    {
      aj = true;
    }

    static synchronized void stopFullscreenAdTimer()
    {
      ak = true;
    }

    public static void trackEvent(com.gameloft.glads.aj p0)
    {
      try
      {
        nativeTrackEvent(p0.a, p0.b, p0.c, p0.d, p0.e, p0.f, p0.g, p0.h, p0.i);
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
      catch ( Exception e )
      {
      }
    }

}
