// Decompiled from classes.dex (SourceFile: cd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.content.Intent;
final class cd extends android.webkit.WebViewClient {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.InGameBrowser a;

    // Methods
    cd(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onPageFinished(android.webkit.WebView p0, String p1)
    {
      InGameBrowser.access$1800(this.a);
    }

    public final void onPageStarted(android.webkit.WebView p0, String p1, android.graphics.Bitmap p2)
    {
      InGameBrowser.access$2000(this.a);
    }

    public final void onReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      this.a.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.ce(this, p0));
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
        }
      }
      else if ( p1.startsWith("mailto:") )
      {
        try
        {
          this.a.startActivity(Intent.parseUri(p1, 1));
        }
        catch ( Exception e )
        {
        }
      }
      else if ( p1.startsWith("goto:") )
      {
        Game.splashScreenFunc(p1.replace("goto:", ""));
      }
      else if ( p1.equals("exit:") || p1.equals("unavailable:") )
      {
        InGameBrowser.access$2100(this.a);
      }
      else if ( p1.startsWith("market://") )
      {
        InGameBrowser.access$2200(this.a, p1);
      }
      else if ( p1.startsWith("amzn://") )
      {
        InGameBrowser.access$2300(this.a, p1);
      }
      else if ( p1.contains("www.amazon.com") )
      {
        InGameBrowser.access$2300(this.a, p1.replaceAll("http://", "amzn://").replaceAll("https://", "amzn://"));
      }
      else if ( p1.startsWith("skt:") )
      {
        InGameBrowser.access$2400(this.a, p1.replaceAll("skt:", ""));
      }
      else if ( p1.startsWith("link:") )
      {
        v6 = p1.replaceAll("link:", "");
        if ( v6.contains("www.amazon.com") )
          InGameBrowser.access$2300(this.a, v6.replaceAll("http://", "amzn://").replaceAll("https://", "amzn://"));
        else
          InGameBrowser.access$2500(this.a, v6);
      }
      else if ( p1.contains("ingameads.gameloft.com/redir/") )
      {
        if ( p1.contains("type=SKTMARKET") )
          p0.loadUrl(p1.replaceAll("&pp=1", ""));
        else
          return false;
      }
      else
      {
        return false;
      }
      return v3;
    }

}
