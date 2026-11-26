// Decompiled from classes.dex (SourceFile: c$a$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class c$a$4 extends android.webkit.WebViewClient {
    // Fields
    boolean a;
    final int b;
    final int c;
    final java.lang.String d;
    final com.amazon.device.associates.c$a e;

    // Methods
    c$a$4(com.amazon.device.associates.c$a p0, int p1, int p2, String p3)
    {
      super();
      this.e = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.a = false;
    
    }

    public void onPageFinished(android.webkit.WebView p0, String p1)
    {
      float density;
      String v4;
      String v5;
      if ( !this.a )
      {
        if ( c$a.e(this.e) )
        {
          density = this.e.getContext().getResources().getDisplayMetrics().density;
          v4 = c$a.f(this.e).replace("$DIMENSION", "height:"
                                                 + String.valueOf((float)this.b / density)
                                                 + "px;width:"
                                                 + String.valueOf((float)this.c / density)
                                                 + "px");
          if ( com.amazon.device.associates.c.b().booleanValue() )
            v5 = v4.replace("$CHARACTER", "<br />");
          else
            v5 = v4.replace("$CHARACTER", "");
          c$a.b(this.e).loadDataWithBaseURL("blarg://ignored", v5, "text/html", "UTF-8", "");
          c$a.b(this.e).setVerticalScrollBarEnabled(false);
          c$a.b(this.e).setHorizontalScrollBarEnabled(false);
        }
        else
        {
          if ( !c$a.b(this.e, p1) )
          {
            bq.d(p1);
            this.e.a();
            p.c(com.amazon.device.associates.c.a(), "Popover dismissed due to security reasons. Opening the url in browser");
            return;
          }
          p.a(com.amazon.device.associates.c.a(), "onPageFinished: " + p1);
          c$a.b(this.e).loadUrl(this.d);
        }
        c$a.b(this.e).setVisibility(0);
        c$a.g(this.e).setVisibility(0);
        if ( !com.amazon.device.associates.c.b().booleanValue() || com.amazon.device.associates.c.b().booleanValue() && c$a.e(this.e) )
        {
          this.a = true;
          p.a(com.amazon.device.associates.c.a(), "onPageFinished completed. Setting flag to true!!");
        }
      }
    }

    public void onReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      super.onReceivedError(p0, p1, p2, p3);
      c$a.b(this.e, true);
    }

    public boolean shouldOverrideUrlLoading(android.webkit.WebView p0, String p1)
    {
      if ( (com.amazon.device.associates.c.b().booleanValue()
         && p1.matches("^((http|https)://)(www[.])?(amazon[.])(com)(/gp/dmusic/device/mp3/store)([/])?(\\Q?ie=UTF8&*Version*=" +
                       "1&*entries*=0#\\E)(album|track)(/)?(([A-Za-z0-9])*)?.*")
         || p1.matches("^((http|https)://)(www[.])?(amazon[.])(com)(/gp/dmusic/device/mp3/store/)(album|track)(/)?(([A-Za-z0-9])*)?.*"))
        && !this.a )
      {
        p.a(com.amazon.device.associates.c.a(), "Avoiding the redirect for " + p1);
        return false;
      }
      else
      {
        p.a(com.amazon.device.associates.c.a(), "Calling OverrideLinkInvocation for url : " + p1);
        bq.d(c$a.a(this.e, p1));
        this.e.a();
        return true;
      }
    }

}
