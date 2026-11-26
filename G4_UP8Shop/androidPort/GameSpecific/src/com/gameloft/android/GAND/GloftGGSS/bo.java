// Decompiled from classes.dex (SourceFile: bo.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bo extends android.webkit.WebViewClient {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity a;

    // Methods
    bo(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onPageFinished(android.webkit.WebView p0, String p1)
    {
      IGPFreemiumActivity.access$1200(this.a);
      p0.loadUrl("javascript:window.Android.checkBackPressed(isBackPressed)");
      p0.loadUrl("javascript:window.JSInterface.getRewardsAvailable(REWARDS_AVAILABLE)");
      p0.loadUrl("javascript:window.JSInterface.getRewardsUser(REWARDS_USER)");
      p0.loadUrl("javascript:window.JSInterface.getInstalledGames(REWARDS_GAMES_INSTALLED)");
    }

    public final void onPageStarted(android.webkit.WebView p0, String p1, android.graphics.Bitmap p2)
    {
      IGPFreemiumActivity.access$1100(this.a);
    }

    public final void onReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      this.a.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.bp(this, p0));
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
      boolean v3;
      android.content.Intent LaunchIntentForPackage;
      String v6;
      v3 = true;
      if ( p1.startsWith("play:") )
      {
        try
        {
          LaunchIntentForPackage = this.a.getPackageManager().getLaunchIntentForPackage(p1.replace("play:", "").split("[?]")[0]);
          LaunchIntentForPackage.addCategory("android.intent.category.LAUNCHER");
          this.a.startActivity(LaunchIntentForPackage);
          return v3;
        }
        catch ( Exception e )
        {
          if ( IGPFreemiumActivity.access$1300(this.a) != null )
          {
            p0.loadUrl(IGPFreemiumActivity.access$1300(this.a));
            IGPFreemiumActivity.access$1302(this.a, null);
          }
        }
      }
      else if ( p1.equals("exit:") || p1.equals("unavailable:") )
      {
        this.a.a();
      }
      else if ( p1.startsWith("market://") )
      {
        IGPFreemiumActivity.access$1400(this.a, p1);
      }
      else if ( p1.startsWith("amzn://") )
      {
        IGPFreemiumActivity.access$1500(this.a, p1);
      }
      else if ( p1.contains("www.amazon.com") )
      {
        IGPFreemiumActivity.access$1500(this.a, p1.replaceAll("http://", "amzn://").replaceAll("https://", "amzn://"));
      }
      else if ( p1.startsWith("skt:") )
      {
        IGPFreemiumActivity.access$1600(this.a, p1.replaceAll("skt:", ""));
      }
      else if ( p1.startsWith("link:") )
      {
        v6 = p1.replaceAll("link:", "");
        if ( v6.contains("www.amazon.com") )
          IGPFreemiumActivity.access$1500(this.a, v6.replaceAll("http://", "amzn://").replaceAll("https://", "amzn://"));
        else
          IGPFreemiumActivity.access$1700(this.a, v6);
      }
      else if ( p1.contains("ingameads.gameloft.com/redir/") )
      {
        if ( p1.contains("ctg=PLAY") )
          IGPFreemiumActivity.access$1302(
            this.a,
            p1.replace("t=bundle", "t=game").replace("ctg=PLAY", "ctg=FRINSTALL&old_ctg=PLAY"));
        if ( p1.contains("type=SKTMARKET") && p1.contains("&pp=1") )
        {
          if ( p1.contains("ctg=PLAY") )
            IGPFreemiumActivity.access$1302(this.a, IGPFreemiumActivity.access$1300(this.a).replaceAll("&pp=1", ""));
          p0.loadUrl(p1.replaceAll("&pp=1", ""));
        }
        else
        {
          return false;
        }
      }
      else
      {
        IGPFreemiumActivity.access$1700(this.a, p1);
      }
      return v3;
    }

}
