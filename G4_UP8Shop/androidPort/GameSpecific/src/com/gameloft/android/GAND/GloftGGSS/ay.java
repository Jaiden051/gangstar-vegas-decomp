// Decompiled from classes.dex (SourceFile: ay.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.net.Uri;
final class ay extends android.webkit.WebViewClient {
    // Fields
    android.app.ProgressDialog a;
    final com.gameloft.android.GAND.GloftGGSS.IGPActivity b;

    // Methods
    private ay(com.gameloft.android.GAND.GloftGGSS.IGPActivity p0)
    {
      super();
      this.b = p0;
      this.a = null;
    
    }

    /* synthetic */ ay(com.gameloft.android.GAND.GloftGGSS.IGPActivity p0, int p1)
    {
      this(p0);
    }

    private void a(String p0)
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
      if ( this.a != null )
      {
        try
        {
          this.a.dismiss();
        }
        catch ( Exception e )
        {
        }
        this.a = null;
      }
    }

    public final void onPageStarted(android.webkit.WebView p0, String p1, android.graphics.Bitmap p2)
    {
      Object[] v4;
      if ( p1.startsWith(IGPActivity.j) )
      {
        IGPActivity.b = true;
      }
      else if ( !p1.startsWith(IGPActivity.k) && p1.indexOf("ingameads.gameloft.com") != -1 )
      {
        IGPActivity.b = false;
      }
      if ( this.a == null )
      {
        try
        {
          this.a = new android.app.ProgressDialog(this.b);
          this.a.setProgressStyle(0);
          v4 = new Object[1];
          v4[0] = this;
          this.a.setMessage(this.b.getString(IGPActivity.l[IGPActivity.c], v4));
          this.a.show();
        }
        catch ( Exception e )
        {
        }
      }
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
      if ( p1.startsWith("http://ingameads.gameloft.com/redir/?from") )
      {
        if ( p1 != null && p1.length() > 0 )
        {
          try
          {
            this.b.startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(p1)));
          }
          catch ( Exception e )
          {
          }
        }
      }
      else if ( p1.startsWith(IGPActivity.i) )
      {
        this.b.a();
      }
      else if ( p1.startsWith("vnd.youtube:") )
      {
        IGPActivity.access$100(this.b, p1);
      }
      else
      {
        p0.loadUrl(p1);
      }
      return true;
    }

}
