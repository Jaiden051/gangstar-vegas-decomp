// Decompiled from classes.dex (SourceFile: GLWebViewClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.location.Location;
import android.net.Uri;
import java.net.URLDecoder;
class GLWebViewClient extends android.webkit.WebViewClient {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    int d;

    // Methods
    static
    {
      a = 0;
      b = 1;
      c = 2;
    }

    GLWebViewClient(int p0)
    {
      super();
      this.d = a;
      this.d = p0;
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

    private static void LaunchPackage(String p0)
    {
      android.content.Intent LaunchIntentForPackage;
      try
      {
        new android.content.Intent("android.intent.action.MAIN");
        LaunchIntentForPackage = GLAds.getParentView().getContext().getPackageManager().getLaunchIntentForPackage(p0);
        LaunchIntentForPackage.addCategory("android.intent.category.LAUNCHER");
        GLAds.getParentView().getContext().startActivity(LaunchIntentForPackage);
      }
      catch ( Exception e )
      {
      }
    }

    private static void OpenBrowser(String p0)
    {
      try
      {
        GLAds.getParentView().getContext().startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0)));
      }
      catch ( Exception e )
      {
      }
    }

    private void a(boolean p0)
    {
      if ( this.d == b )
      {
        GLAds.hideBanner();
      }
      else if ( this.d == c )
      {
        GLAds.cancelFullScreenAd(p0, false);
      }
    }

    /* synthetic */ static String access$000(com.gameloft.glads.GLWebViewClient p0, String p1)
    {
      return GetRedirectUrl(p1);
    }

    /* synthetic */ static void access$100(com.gameloft.glads.GLWebViewClient p0, String p1)
    {
      OpenBrowser(p1);
    }

    public void onPageFinished(android.webkit.WebView p0, String p1)
    {
      p0.setVisibility(0);
      if ( this.d == b )
      {
        GLAds.stopBannerTimer();
        GLAds.setBannerState(1);
      }
      if ( this.d == c )
      {
        GLAds.stopFullscreenAdTimer();
        GLAds.setFullScreenAdState(1, false);
      }
    }

    public void onPageStarted(android.webkit.WebView p0, String p1, android.graphics.Bitmap p2)
    {
      ;
    }

    public void onReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      this.a(false);
    }

    public void onReceivedSslError(
            android.webkit.WebView p0,
            android.webkit.SslErrorHandler p1,
            android.net.http.SslError p2)
    {
      p1.proceed();
    }

    public boolean shouldOverrideUrlLoading(android.webkit.WebView p0, String p1)
    {
      boolean v3 = false;
      String[] v4 = null; // RETVAL
      Object[] v5 = null;
      String v7 = null; // RETVAL
      String v8 = null;
      android.content.Intent LaunchIntentForPackage = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = true;
            if ( p1.startsWith("exit:checkreward:") )
            {
            if ( this.d == c )
            GLAdFullScreen.sendFinishEvent();
            v4 = p1.replace("exit:checkreward:", "").split("[:]");
            v5 = v4;
            if ( v4.length == 1 )
            GLAds.checkProfileForReward(v4[0], true);
            if ( v4.length == 3 && v4[1].equals("delivered") )
            {
            if ( v5[2].equals("1") )
            GLAds.checkProfileForReward((String)v5[0], true);
            else
            GLAds.checkProfileForReward((String)v5[0], false);
            }
            p0.stopLoading();
            this.a(true);
            GLAdFullScreen.a = -1;
            return v3;
            }
            if ( p1.startsWith("exit:") )
            {
            if ( this.d == c )
            GLAdFullScreen.sendFinishEvent();
            p0.stopLoading();
            this.a(false);
            GLAdFullScreen.a = -1;
            return v3;
            }
            if ( p1.startsWith("unavailable:") )
            {
            if ( this.d == c )
            GLAdFullScreen.sendFinishEvent();
            p0.stopLoading();
            this.a(false);
            return v3;
            }
            if ( p1.startsWith("track:") )
            {
            v7 = URLDecoder.decode(p1.replace("track:", ""));
            if ( this.d == b )
            GLAdBanner.handleTrackEvent(v7);
            if ( this.d == c )
            GLAdFullScreen.handleTrackEvent(p1.replace("track:", ""));
            return v3;
            }
            if ( p1.startsWith("link:") )
            {
            OpenBrowser(p1.replace("link:", ""));
            if ( this.d == b )
            GLAdBanner.sendClickEvent();
            if ( this.d == c )
            { _pc = 2; continue _sm; }
            return v3;
            }
            if ( p1.startsWith("play:") )
            {
            v8 = p1.replace("play:", "").split("[?]")[0];
            try
            {
            new android.content.Intent("android.intent.action.MAIN");
            LaunchIntentForPackage = GLAds.getParentView().getContext().getPackageManager().getLaunchIntentForPackage(v8);
            LaunchIntentForPackage.addCategory("android.intent.category.LAUNCHER");
            GLAds.getParentView().getContext().startActivity(LaunchIntentForPackage);
            }
            catch ( Exception e )
            {
            }
            if ( this.d == b )
            GLAdBanner.sendClickEvent();
            if ( this.d == c )
            { _pc = 2; continue _sm; }
            return v3;
            }
            if ( !(p1.startsWith("goto:")) ) { _pc = 1; continue _sm; }
            {
            GLAds.ingameRedirectTo(p1.replace("goto:", ""));
            if ( this.d == b )
            GLAdBanner.sendClickEvent();
            if ( this.d == c )
            {
            GLAdFullScreen.sendClickEvent();
            GLAdFullScreen.handleBackKey();
            }
            GLAdFullScreen.a = -1;
            }
            _pc = 3;
            continue _sm;
          case 1:
            if ( p1.startsWith("browser:") )
            {
            Utils.openInGameBrowserWithUrl(p1.replace("browser:", ""));
            return v3;
            }
            if ( !p1.startsWith("market://")
            && !p1.startsWith("amzn://")
            && !p1.contains("www.amazon.com")
            && !p1.contains("play.google.com") )
            {
            if ( !p1.contains("ingameads.gameloft.com/redir/?from") || p1.contains("ctg=PLAY") )
            return false;
            new Thread((Runnable)new com.gameloft.glads.ak(this, p1)).start();
            return v3;
            }
            OpenBrowser(p1);
            if ( this.d == b )
            GLAdBanner.sendClickEvent();
            if ( !(this.d == c) ) { _pc = 3; continue _sm; }
            _pc = 2;
            continue _sm;
          case 2:
            GLAdFullScreen.sendClickEvent();
            GLAdFullScreen.handleBackKey();
            _pc = 3;
            continue _sm;
          case 3:
            return v3;
        }
      }
}

}
