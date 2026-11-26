// Decompiled from classes.dex (SourceFile: SplashScreenActivity.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.content.Intent;
import android.location.Location;
import android.net.Uri;
import android.os.Build;
import android.os.Environment;
import android.webkit.WebSettings;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Device;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.Encrypter;
import com.gameloft.android.GAND.GloftGGSS.GLUtils.SUtils;
import com.gameloft.android.hdidfv.HDIDFV;
import java.util.Locale;
public class SplashScreenActivity extends android.app.Activity {
    // Fields
    public static int a;
    public static boolean b;
    static int e;
    static int f;
    static int g;
    static int h;
    public static java.lang.String i;
    public static java.lang.String j;
    public static java.lang.String k;
    public static java.lang.String[] l;
    static boolean m;
    private static boolean n;
    private static boolean p;
    private static boolean q;
    public android.widget.RelativeLayout c;
    public android.webkit.WebView d;
    private android.view.Display o;

    // Methods
    static
    {
      String[] v0;
      a = 0;
      b = false;
      n = false;
      e = 800;
      f = 480;
      i = "";
      j = "https://ingameads.gameloft.com/redir/ads/splashscreen_view.php?from=FROM&country=COUNTRY&lg=LANG&udid=UDIDPHONE&hd" +
          "idfv=HDIDFV&androidid=ANDROIDID&d=DEVICE&f=FIRMWARE&game_ver=VERSION&igp_rev=1005&os=android";
      k = "https://ingameads.gameloft.com/redir/ads/hocscreen.php?from=FROM&country=COUNTRY&lg=LANG&udid=UDIDPHONE&hdidfv=HDI" +
          "DFV&androidid=ANDROIDID&d=DEVICE&f=FIRMWARE&game_ver=VERSION&igp_rev=1005&os=android";
      v0 = new String[16];
      v0[0] = "EN";
      v0[1] = "FR";
      v0[2] = "DE";
      v0[3] = "IT";
      v0[4] = "SP";
      v0[5] = "JP";
      v0[6] = "KR";
      v0[7] = "CN";
      v0[8] = "BR";
      v0[9] = "RU";
      v0[10] = "TR";
      v0[11] = "AR";
      v0[12] = "TH";
      v0[13] = "ID";
      v0[14] = "VI";
      v0[15] = "ZT";
      l = v0;
      p = false;
      m = false;
      q = false;
    }

    public SplashScreenActivity()
    {
      super();
      SUtils.setContext(this);
    }

    private static String GetRedirectUrl(String p0)
    {
      java.net.HttpURLConnection v1 = null;
      java.net.HttpURLConnection v2 = null;
      String HeaderField = null; // RETVAL
      String v4 = null;
      Object v7 = null;
      Object v8 = null;
      Throwable _cv_1 = null;
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
              v1 = null;
              _ehCatchPc = 1;
              v2 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
              try
              {
              v2.setAllowUserInteraction(false);
              v2.setInstanceFollowRedirects(false);
              v2.setRequestMethod("GET");
              v2.connect();
              HeaderField = v2.getHeaderField("Location");
              if ( v2 != null )
              v2.disconnect();
              v4 = HeaderField;
              }
              catch ( java.net.MalformedURLException e )
              {
              { _pc = 2; continue _sm; }
              }
              catch ( Exception e )
              {
              { _pc = 5; continue _sm; }
              }
              catch ( Throwable v6 )
              {
              v7 = v6;
              v1 = v2;
              v8 = v7;
              { _pc = 7; continue _sm; }
              }
              
              _ehCatchPc = -1;
              _pc = 9;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.net.MalformedURLException) ) { _pc = 4; continue _sm; }
              v2 = null;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v2 != null )
              {
              v2.disconnect();
              v4 = null;
              { _pc = 9; continue _sm; }
              }
              _pc = 3;
              continue _sm;
            case 3:
              v4 = null;
              _pc = 9;
              continue _sm;
            case 4:
              if ( !(_ehCaught instanceof Exception) ) { _pc = 6; continue _sm; }
              v2 = null;
              _pc = 5;
              continue _sm;
            case 5:
              if ( v2 != null )
              {
              v2.disconnect();
              v4 = null;
              { _pc = 9; continue _sm; }
              }
              _pc = 3;
              continue _sm;
            case 6:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v8 = _cv_1;
              _pc = 7;
              continue _sm;
            case 7:
              if ( v1 != null )
              v1.disconnect();
              throw com.gameloft.android.DecompRT.sneakyThrow(v8);
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              System.gc();
              return v4;
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

    public static void SetWSLanguage(int p0)
    {
      a = p0;
      if ( p0 < 0 || a >= l.length )
        a = 0;
    }

    private void a(int p0)
    {
      StringBuilder v2; // RETVAL
      String v3;
      String v4; // RETVAL
      String[] v5;
      a = p0;
      if ( p0 < 0 || a >= l.length )
        a = 0;
      Device.getDeviceId();
      i = j.replace("VERSION", "1.8.2f").replace("LANG", l[a]).replace("COUNTRY", Locale.getDefault().getCountry()).replace("FROM", "GGSS").replace("DEVICE", Build.MANUFACTURER + "_" + Build.MODEL).replace("FIRMWARE", Build.VERSION.RELEASE).replace("ANDROIDID", Device.getAndroidId()).replace("UDIDPHONE", Device.getSerial()).replace("HDIDFV", Device.getHDIDFV()).replaceAll(" ", "");
      i = i + "&width=" + h;
      i = i + "&height=" + g;
      i = i + "&ingamebrowser=1";
      v2 = new StringBuilder().append(i);
      if ( p )
        v3 = "&is_pau=1";
      else
        v3 = "&is_pau=0";
      v4 = v2.append(v3).toString();
      i = v4;
      v5 = v4.split("[?]");
      i = v5[0] + "?data=" + Encrypter.crypt(v5[1]) + "&enc=1";
      this.d.loadUrl(i);
    }

    /* synthetic */ static boolean access$100()
    {
      return q;
    }

    /* synthetic */ static boolean access$102(boolean p0)
    {
      q = p0;
      return p0;
    }

    /* synthetic */ static boolean access$200()
    {
      return p;
    }

    /* synthetic */ static boolean access$302(boolean p0)
    {
      n = p0;
      return p0;
    }

    /* synthetic */ static void access$400(String p0)
    {
      splashScreenFuncGLOT(p0);
    }

    /* synthetic */ static void access$500(
            com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity p0,
            String p1)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1));
      if ( p0.getPackageManager().queryIntentActivities(v2, 0x10000).size() == 0 )
        v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                        "http://market.android.com/"
                                                                      + p1.replace("market://", "")));
      p0.startActivity(v2);
    }

    /* synthetic */ static void access$600(
            com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity p0,
            String p1)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1));
      if ( p0.getPackageManager().queryIntentActivities(v2, 0x10000).size() == 0 )
        v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1.replace("amzn://", "http://")));
      p0.startActivity(v2);
    }

    /* synthetic */ static String access$700(
            com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity p0,
            String p1)
    {
      return GetRedirectUrl(p1);
    }

    /* synthetic */ static void access$800(
            com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity p0,
            String p1)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1));
      if ( p0.getPackageManager().queryIntentActivities(v2, 0x10000).size() == 0 )
        v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                        "http://www.youtube.com/watch?v="
                                                                      + p1.replace("vnd.youtube:", "")));
      p0.startActivity(v2);
    }

    private void b(String p0)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0));
      if ( this.getPackageManager().queryIntentActivities(v2, 0x10000).size() == 0 )
        v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                        "http://www.youtube.com/watch?v="
                                                                      + p0.replace("vnd.youtube:", "")));
      this.startActivity(v2);
    }

    private void c(String p0)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0));
      if ( this.getPackageManager().queryIntentActivities(v2, 0x10000).size() == 0 )
        v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(
                                                                        "http://market.android.com/"
                                                                      + p0.replace("market://", "")));
      this.startActivity(v2);
    }

    public static void cacheAndStart(int p0)
    {
      startSplash(p0);
    }

    private void d(String p0)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0));
      if ( this.getPackageManager().queryIntentActivities(v2, 0x10000).size() == 0 )
        v2 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0.replace("amzn://", "http://")));
      this.startActivity(v2);
    }

    static void deleteDirWithSubdirs(java.io.File p0)
    {
      String[] v1; // RETVAL
      int i;
      java.io.File v3;
      try
      {
        if ( p0.isDirectory() )
        {
          v1 = p0.list();
          for ( i = 0; i < v1.length; ++i )
            SplashScreenActivity.deleteDirWithSubdirs(new java.io.File(p0, v1[i]));
        }
        v3 = new java.io.File(p0.getAbsolutePath() + System.currentTimeMillis());
        p0.renameTo(v3);
        v3.delete();
      }
      catch ( Exception e )
      {
      }
    }

    public static void deleteWS(String p0)
    {
      String[] v1;
      int v2;
      int i;
      String v4;
      String v5;
      v1 = p0.replaceAll(" ", "").split(",");
      v2 = v1.length;
      for ( i = 0; i < v2; ++i )
      {
        v4 = v1[i];
        if ( Environment.getExternalStorageState().equals("mounted") )
        {
          if ( Build.VERSION.SDK_INT < 8 )
            v5 = Environment.getDownloadCacheDirectory() + "/WelcomeScreens/GGSS" + "/" + v4;
          else
            v5 = SUtils.getContext().getExternalFilesDir(null) + "/WelcomeScreens/" + v4;
          deleteDirWithSubdirs(new java.io.File(v5));
        }
      }
    }

    static void downloadFile(String p0, String p1, String p2)
    {
      java.io.BufferedOutputStream v3 = null;
      java.io.File v4 = null;
      java.net.HttpURLConnection v5 = null;
      String Etag = null; // RETVAL
      int v7 = 0;
      String HeaderField = null; // RETVAL
      java.io.BufferedInputStream v9 = null;
      Exception _cv_1 = null;
      Throwable _cv_2 = null;
      Exception _cv_3 = null;
      Throwable _cv_4 = null;
      Exception _cv_5 = null;
      Throwable _cv_6 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      java.io.BufferedInputStream _tmpIn = null;
      java.io.BufferedOutputStream v10 = null;
      int v11 = 0;
      java.io.BufferedOutputStream v13 = null;
      java.net.HttpURLConnection v14 = null;
      Object v15 = null;
      java.io.BufferedOutputStream v16 = null;
      Object v17 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v3 = null;
              v4 = new java.io.File(p1);
              _ehCatchPc = 1;
              v5 = (java.net.HttpURLConnection)new java.net.URL(p0).openConnection();
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 2; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              v15 = _cv_1;
              v16 = null;
              v14 = null;
              _pc = 14;
              continue _sm;
            case 2:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 4; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v17 = _cv_2;
              v9 = null;
              v14 = null;
              _pc = 3;
              continue _sm;
            case 3:
              if ( v3 != null )
              {
              v3.flush();
              v3.close();
              }
              if ( v9 != null )
              v9.close();
              if ( v14 != null )
              v14.disconnect();
              throw com.gameloft.android.DecompRT.sneakyThrow(v17);
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _ehCatchPc = 8;
              Etag = getEtag(p1);
              if ( Etag != null )
              v5.setRequestProperty("If-None-Match", Etag);
              v7 = 200;
              if ( !(v5.getResponseCode() != 200) ) { _pc = 7; continue _sm; }
              v10 = null;
              v9 = null;
              _pc = 6;
              continue _sm;
            case 6:
              if ( v10 != null )
              {
              v10.flush();
              v10.close();
              }
              if ( v9 != null )
              v9.close();
              if ( v5 != null )
              v5.disconnect();
              return;
            case 7:
              deleteDirWithSubdirs(v4);
              v4.mkdirs();
              HeaderField = v5.getHeaderField("Etag");
              if ( HeaderField != null )
              saveEtag(HeaderField, p1);
              v9 = new java.io.BufferedInputStream(v5.getInputStream());
              _ehCatchPc = -1;
              _pc = 11;
              continue _sm;
            case 8:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 9; continue _sm; }
              _cv_3 = (Exception)_ehCaught;
              v14 = v5;
              v15 = _cv_3;
              v16 = null;
              _pc = 14;
              continue _sm;
            case 9:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 10; continue _sm; }
              _cv_4 = (Throwable)_ehCaught;
              v9 = null;
              v14 = v5;
              v17 = _cv_4;
              _pc = 3;
              continue _sm;
            case 10:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 11:
              try
              {
              v10 = new java.io.BufferedOutputStream(new java.io.FileOutputStream(p1 + "/" + p2));
              }
              catch ( Exception v22 )
              {
              v14 = v5;
              v15 = v22;
              v16 = null;
              _tmpIn = v9;
              { _pc = 14; continue _sm; }
              }
              catch ( Throwable v19 )
              {
              v14 = v5;
              v17 = v19;
              { _pc = 3; continue _sm; }
              }
              
              _pc = 12;
              continue _sm;
            case 12:
              _ehCatchPc = 13;
              v11 = v9.read();
              if ( v11 == -1 )
              { _pc = 6; continue _sm; }
              v10.write(v11);
              _ehCatchPc = -1;
              _pc = 17;
              continue _sm;
            case 13:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 15; continue _sm; }
              _cv_5 = (Exception)_ehCaught;
              _tmpIn = v9;
              v13 = v10;
              v14 = v5;
              v15 = _cv_5;
              v16 = v13;
              _pc = 14;
              continue _sm;
            case 14:
              try
              {
              deleteDirWithSubdirs(v4);
              throw com.gameloft.android.DecompRT.sneakyThrow(v15);
              }
              catch ( Throwable v25 )
              {
              v17 = v25;
              v9 = _tmpIn;
              v3 = v16;
              { _pc = 3; continue _sm; }
              }
              


            case 15:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 16; continue _sm; }
              _cv_6 = (Throwable)_ehCaught;
              v3 = v10;
              v14 = v5;
              v17 = _cv_6;
              _pc = 3;
              continue _sm;
            case 16:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 17:
              _pc = 12;
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

    public static void downloadWS(String p0)
    {
      if ( a < 0 || a >= l.length )
        a = 0;
      downloadWS(p0, a);
    }

    public static void downloadWS(String p0, int p1)
    {
      new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.dm(p1, p0)).start();
    }

    private static String getEtag(String p0)
    {
      java.io.FileReader v1;
      String Line;
      try
      {
        v1 = new java.io.FileReader(new java.io.File(p0, "saved.etags"));
        Line = new java.io.BufferedReader(v1).readLine();
        v1.close();
        return Line;
      }
      catch ( Exception e )
      {
        return null;
      }
    }

    public static String getHttpResponse(String p0)
    {
      String v1 = null;
      String[] v2 = null;
      java.io.BufferedReader v3 = null;
      StringBuffer i = null;
      String Line = null; // RETVAL
      Object v8 = null;
      Object v9 = null;
      Throwable _cv_1 = null;
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
              v1 = null;
              _ehCatchPc = 1;
              v2 = p0.split("[?]");
              v3 = new java.io.BufferedReader(new java.io.InputStreamReader(new org.apache.http.impl.client.DefaultHttpClient().execute(new org.apache.http.client.methods.HttpGet(v2[0] + "?data=" + Encrypter.crypt(v2[1]) + "&enc=1")).getEntity().getContent()));
              try
              {
              for ( i = new StringBuffer(""); ; i.append(Line) )
              {
              Line = v3.readLine();
              if ( Line == null )
              break;
              }
              v3.close();
              v1 = i.toString();
              try
              {
              v3.close();
              }
              catch ( Exception e )
              {
              }
              return v1;
              }
              catch ( Exception e )
              {
              { _pc = 2; continue _sm; }
              }
              catch ( Throwable v10 )
              {
              v9 = v10;
              { _pc = 4; continue _sm; }
              }
              



            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 3; continue _sm; }
              v3 = null;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v3 != null )
              {
              try
              {
              v3.close();
              return v1;
              }
              catch ( Exception e2 )
              {
              }
              }
              return v1;
            case 3:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 5; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v8 = _cv_1;
              v3 = null;
              v9 = v8;
              _pc = 4;
              continue _sm;
            case 4:
              if ( v3 != null )
              {
              try
              {
              v3.close();
              }
              catch ( Exception e )
              {
              }
              }
              throw com.gameloft.android.DecompRT.sneakyThrow(v9);
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              throw new IllegalStateException("Unreachable");
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

    public static void init(android.content.Context p0)
    {
      SUtils.setContext(p0);
      if ( !m )
      {
        nativeInit(p0);
        m = true;
      }
    }

    public static int isActive()
    {
      return b ? 1 : 0;
    }

    public static int isWSReady(String p0)
    {
      if ( a < 0 || a >= l.length )
        a = 0;
      return isWSReady(p0, a);
    }

    public static int isWSReady(String p0, int p1)
    {
      String v2;
      java.io.File v3;
      if ( !Environment.getExternalStorageState().equals("mounted") )
        return 0;
      if ( Build.VERSION.SDK_INT < 8 )
        v2 = Environment.getDownloadCacheDirectory() + "/WelcomeScreens/GGSS" + "/" + p0 + "/" + l[p1];
      else
        v2 = SUtils.getContext().getExternalFilesDir(null) + "/WelcomeScreens/" + p0 + "/" + l[p1];
      v3 = new java.io.File(v2);
      return v3.exists() && v3.list() != null && v3.list().length != 0 ? 1 : 0;
    }

    public static native void nativeInit(android.content.Context p0);

    private static void saveEtag(String p0, String p1)
    {
      java.io.FileWriter v2;
      try
      {
        v2 = new java.io.FileWriter(new java.io.File(p1, "saved.etags"), false);
        v2.write(p0);
        v2.flush();
        v2.close();
      }
      catch ( Exception e )
      {
      }
    }

    public static void setIsPAU(boolean p0)
    {
      p = p0;
    }

    public static void showLocalWS(String p0)
    {
      if ( a < 0 || a >= l.length )
        a = 0;
      showLocalWS(p0, a);
    }

    public static void showLocalWS(String p0, int p1)
    {
      a = p1;
      if ( p1 < 0 || a >= l.length )
        a = 0;
      if ( !n )
      {
        n = true;
        new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.dn(p0, p1)).start();
      }
    }

    private static native void splashScreenFuncGLOT(java.lang.String p0);

    public static void startSplash(int p0)
    {
      String Country;
      String v2;
      CharSequence v3;
      android.view.Display DefaultDisplay;
      int v5;
      int v6;
      int v7;
      StringBuilder v8; // RETVAL
      String v9;
      String v10; // RETVAL
      String[] v11;
      a = p0;
      if ( p0 < 0 || a >= l.length )
        a = 0;
      Device.getDeviceId();
      Country = Locale.getDefault().getCountry();
      v2 = Build.MANUFACTURER + "_" + Build.MODEL;
      v3 = Build.VERSION.RELEASE;
      DefaultDisplay = ((android.view.WindowManager)SUtils.getContext().getSystemService("window")).getDefaultDisplay();
      f = DefaultDisplay.getHeight();
      e = DefaultDisplay.getWidth();
      v5 = Math.round(0.8f * (float)e);
      v6 = Math.round(0.835f * (float)f);
      g = 0;
      for ( h = 0; h <= v5 && g <= v6; h = Math.round((float)v7 * 1.5079365f) )
      {
        v7 = g + 1;
        g = v7;
      }
      i = j.replace("VERSION", "1.8.2f").replace("LANG", l[a]).replace("COUNTRY", Country).replace("FROM", "GGSS").replace("DEVICE", v2).replace("FIRMWARE", v3).replace("ANDROIDID", Device.getAndroidId()).replace("UDIDPHONE", Device.getSerial()).replace("HDIDFV", Device.getHDIDFV()).replaceAll(" ", "");
      i = i + "&width=" + h;
      i = i + "&height=" + g;
      i = i + "&dl=1";
      i = i + "&ingamebrowser=1";
      v8 = new StringBuilder().append(i);
      if ( p )
        v9 = "&is_pau=1";
      else
        v9 = "&is_pau=0";
      v10 = v8.append(v9).toString();
      i = v10;
      v11 = v10.split("[?]");
      i = v11[0] + "?data=" + Encrypter.crypt(v11[1]) + "&enc=1";
      new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.dl(p0)).start();
    }

    final void a()
    {
      splashScreenFuncGLOT("quit");
      try
      {
        b = false;
        this.finish();
      }
      catch ( Exception e )
      {
      }
    }

    public final void a(String p0)
    {
      android.content.Intent LaunchIntentForPackage;
      try
      {
        new android.content.Intent("android.intent.action.MAIN");
        LaunchIntentForPackage = this.getPackageManager().getLaunchIntentForPackage(p0);
        LaunchIntentForPackage.addCategory("android.intent.category.LAUNCHER");
        this.startActivity(LaunchIntentForPackage);
      }
      catch ( Exception e )
      {
      }
    }

    public void onCreate(android.os.Bundle p0)
    {
      android.content.Intent Intent;
      int Int; // RETVAL
      int v4;
      boolean Boolean;
      String String;
      int v7;
      int v8;
      float v9;
      int v10;
      android.widget.RelativeLayout.LayoutParams v11;
      StringBuilder v12; // RETVAL
      String v13;
      String v14; // RETVAL
      String[] v15;
      super.onCreate(p0);
      if ( Game.az != null )
      {
        if ( b )
          this.finish();
        b = true;
        Intent = this.getIntent();
        Int = Intent.getExtras().getInt("language", a);
        if ( Int >= 0 && Int < l.length )
          v4 = Int;
        else
          v4 = 0;
        Boolean = Intent.getExtras().getBoolean("wasCached", false);
        String = Intent.getExtras().getString("filePath");
        this.o = ((android.view.WindowManager)this.getSystemService("window")).getDefaultDisplay();
        f = this.o.getHeight();
        e = this.o.getWidth();
        this.c = new android.widget.RelativeLayout(this);
        this.d = new com.gameloft.android.GAND.GloftGGSS.Decomp_do(this, this);
        this.d.setHorizontalScrollBarEnabled(false);
        this.d.setVerticalScrollBarEnabled(false);
        this.d.setBackgroundColor(0);
        this.d.setInitialScale(100);
        this.d.getSettings().setJavaScriptEnabled(true);
        this.d.getSettings().setAppCacheEnabled(false);
        this.d.getSettings().setSupportZoom(false);
        this.d.getSettings().setBuiltInZoomControls(false);
        this.d.getSettings().setLoadWithOverviewMode(true);
        this.d.getSettings().setUseWideViewPort(true);
        this.d.getSettings().setDefaultZoom(WebSettings.ZoomDensity.FAR);
        if ( Build.VERSION.SDK_INT >= 21 )
          this.d.getSettings().setMixedContentMode(0);
        this.d.setWebViewClient(new com.gameloft.android.GAND.GloftGGSS.dp(this, 0));
        this.d.setWebChromeClient(new com.gameloft.android.GAND.GloftGGSS.dj(this));
        this.d.setOnLongClickListener((android.view.View.OnLongClickListener)new com.gameloft.android.GAND.GloftGGSS.dk(this));
        v7 = Math.round(0.8f * (float)e);
        v8 = Math.round(0.835f * (float)f);
        g = 0;
        h = 0;
        v9 = 1.5079365f;
        if ( e < f )
          v9 = 0.6631579f;
        while ( h <= v7 && g <= v8 )
        {
          v10 = g + 1;
          g = v10;
          h = Math.round((float)v10 * v9);
        }
        v11 = new android.widget.RelativeLayout.LayoutParams(h, g);
        v11.addRule(13);
        this.c.addView(this.d, v11);
        this.setContentView(this.c);
        if ( Boolean && String != null )
        {
          this.d.loadUrl("file://" + String);
        }
        else
        {
          a = v4;
          if ( a >= l.length )
            a = 0;
          Device.getDeviceId();
          i = j.replace("VERSION", "1.8.2f").replace("LANG", l[a]).replace("COUNTRY", Locale.getDefault().getCountry()).replace("FROM", "GGSS").replace("DEVICE", Build.MANUFACTURER + "_" + Build.MODEL).replace("FIRMWARE", Build.VERSION.RELEASE).replace("ANDROIDID", Device.getAndroidId()).replace("UDIDPHONE", Device.getSerial()).replace("HDIDFV", Device.getHDIDFV()).replaceAll(" ", "");
          i = i + "&width=" + h;
          i = i + "&height=" + g;
          i = i + "&ingamebrowser=1";
          v12 = new StringBuilder().append(i);
          if ( p )
            v13 = "&is_pau=1";
          else
            v13 = "&is_pau=0";
          v14 = v12.append(v13).toString();
          i = v14;
          v15 = v14.split("[?]");
          i = v15[0] + "?data=" + Encrypter.crypt(v15[1]) + "&enc=1";
          this.d.loadUrl(i);
        }
      }
      else
      {
        this.a();
      }
    }

    public void onDestroy()
    {
      super.onDestroy();
    }

    public boolean onKeyUp(int p0, android.view.KeyEvent p1)
    {
      boolean v3 = false;
      int _sw_1 = 0;
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
              v3 = true;
              _sw_1 = (p0);
              if ( (_sw_1 == (4)) || (_sw_1 == (97)) ) { _pc = 1; continue _sm; }
              if ( (_sw_1 == (96)) ) { _pc = 2; continue _sm; }
              if ( (_sw_1 == (99)) || (_sw_1 == (100)) || (_sw_1 == (102)) || (_sw_1 == (103)) || (_sw_1 == (108)) || (_sw_1 == (109)) ) { _pc = 6; continue _sm; }
              _pc = 7;
              continue _sm;
            case 1:
              this.a();
              _pc = 8;
              continue _sm;
            case 2:
              _ehEx = null;
              _ehCatchPc = 3;
              if ( this.d != null )
              {
              this.d.dispatchKeyEvent(new android.view.KeyEvent(0, 66));
              this.d.dispatchKeyEvent(new android.view.KeyEvent(1, 66));
              }
              _ehCatchPc = -1;
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              if ( !((_ehEx != null && (_ehEx instanceof Exception))) ) { _pc = 4; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              _pc = 4;
              continue _sm;
            case 4:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 5;
              continue _sm;
            case 5:
              _ehCatchPc = -1;
              _pc = 8;
              continue _sm;
            case 6:
              return v3;
            case 7:
              v3 = super.onKeyUp(p0, p1);
              _pc = 8;
              continue _sm;
            case 8:
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

    protected void onStart()
    {
      super.onStart();
    }

    protected void onStop()
    {
      super.onStop();
    }

}
