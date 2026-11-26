// Decompiled from classes.dex (SourceFile: dp.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
final class dp extends android.webkit.WebViewClient {
    // Fields
    boolean a;
    final com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity b;

    // Methods
    private dp(com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity p0)
    {
      super();
      this.b = p0;
      this.a = false;
    
    }

    /* synthetic */ dp(com.gameloft.android.GAND.GloftGGSS.SplashScreenActivity p0, int p1)
    {
      this(p0);
    }

    public final void a(String p0)
    {
      if ( p0 != null && p0.length() > 0 )
      {
        try
        {
          this.b.startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0)));
        }
        catch ( Exception e )
        {
        }
      }
    }

    public final void onPageFinished(android.webkit.WebView p0, String p1)
    {
      if ( this.a )
        this.b.a();
      this.a = false;
    }

    public final void onPageStarted(android.webkit.WebView p0, String p1, android.graphics.Bitmap p2)
    {
      ;
    }

    public final void onReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      this.a = true;
    }

    public final void onReceivedSslError(
            android.webkit.WebView p0,
            android.webkit.SslErrorHandler p1,
            android.net.http.SslError p2)
    {
      p1.proceed();
    }

    public final boolean shouldOverrideUrlLoading(android.webkit.WebView p0, String p1)
    {
      if ( p1.startsWith("play:") )
      {
        SplashScreenActivity.access$400(p1);
        this.b.a(p1.replace("play:", "").split("[?]")[0]);
        this.b.a();
        return true;
      }
      if ( p1.startsWith("link:") )
      {
        SplashScreenActivity.access$400(p1);
        this.a(p1.replace("link:", ""));
        this.b.a();
        return true;
      }
      if ( p1.startsWith("exit:") )
      {
        this.b.a();
        return true;
      }
      if ( p1.startsWith("goto:") )
      {
        try
        {
          SplashScreenActivity.access$400(p1);
          Game.splashScreenFunc(p1.replace("goto:", ""));
        }
        catch ( Exception e )
        {
        }
        this.b.a();
        return true;
      }
      if ( !p1.startsWith("browser:") )
      {
        if ( !p1.contains("ingameads.gameloft.com/redir/ads/splashscreen_click") )
        {
          if ( p1.startsWith("market://") )
          {
            SplashScreenActivity.access$400(p1);
            SplashScreenActivity.access$500(this.b, p1);
            this.b.a();
            return true;
          }
          if ( p1.startsWith("amzn://") )
          {
            SplashScreenActivity.access$400(p1);
            SplashScreenActivity.access$600(this.b, p1);
            this.b.a();
            return true;
          }
          if ( p1.contains("ingameads.gameloft.com/redir/?from") && !p1.contains("ctg=PLAY") )
          {
            SplashScreenActivity.access$400(p1);
            new Thread((Runnable)new com.gameloft.android.GAND.GloftGGSS.dq(this, p1)).start();
            this.b.a();
            return true;
          }
          if ( p1.startsWith("vnd.youtube:") )
          {
            SplashScreenActivity.access$400(p1);
            SplashScreenActivity.access$800(this.b, p1);
            this.b.a();
            return true;
          }
        }
        p0.loadUrl(p1);
        return true;
      }
      InGameBrowser.showInGameBrowserWithUrl(p1.replace("browser:", ""));
      this.b.a();
      return true;
    }

}
