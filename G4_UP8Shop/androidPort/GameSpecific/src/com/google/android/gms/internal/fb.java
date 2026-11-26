// Decompiled from classes.dex (SourceFile: fb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

public class fb extends com.google.android.gms.internal.ez {
    // Methods
    public fb(com.google.android.gms.internal.ey p0, boolean p1)
    {
      super(p0, p1);
    }

    private static android.webkit.WebResourceResponse c(android.content.Context p0, String p1, String p2)
 throws java.io.IOException, java.io.UnsupportedEncodingException, java.net.MalformedURLException {
      java.net.HttpURLConnection v3;
      android.webkit.WebResourceResponse v4;
      v3 = (java.net.HttpURLConnection)new java.net.URL(p2).openConnection();
      try
      {
        ep.a(p0, p1, true, v3);
        v3.connect();
        v4 = new android.webkit.WebResourceResponse("application/javascript", "UTF-8", new java.io.ByteArrayInputStream(ep.a(new java.io.InputStreamReader(v3.getInputStream())).getBytes("UTF-8")));
      }
      finally
      {
        v3.disconnect();
      }
      return v4;
    }

    public android.webkit.WebResourceResponse shouldInterceptRequest(android.webkit.WebView p0, String p1)
    {
      com.google.android.gms.internal.ey v5;
      try
      {
        if ( "mraid.js".equalsIgnoreCase(new java.io.File(p1).getName()) )
        {
          if ( p0 instanceof com.google.android.gms.internal.ey )
          {
            v5 = (com.google.android.gms.internal.ey)p0;
            v5.f().c();
            if ( v5.e().e )
            {
              ev.C("shouldInterceptRequest(http://media.admob.com/mraid/v1/mraid_app_interstitial.js)");
              return c(v5.getContext(), this.a.h().b, "http://media.admob.com/mraid/v1/mraid_app_interstitial.js");
            }
            else if ( v5.i() )
            {
              ev.C("shouldInterceptRequest(http://media.admob.com/mraid/v1/mraid_app_expanded_banner.js)");
              return c(v5.getContext(), this.a.h().b, "http://media.admob.com/mraid/v1/mraid_app_expanded_banner.js");
            }
            else
            {
              ev.C("shouldInterceptRequest(http://media.admob.com/mraid/v1/mraid_app_banner.js)");
              return c(v5.getContext(), this.a.h().b, "http://media.admob.com/mraid/v1/mraid_app_banner.js");
            }
          }
          else
          {
            ev.D("Tried to intercept request from a WebView that wasn't an AdWebView.");
            return super.shouldInterceptRequest(p0, p1);
          }
        }
        else
        {
          return super.shouldInterceptRequest(p0, p1);
        }
      }
      catch ( java.io.IOException v6 )
      {
        ev.D("Could not fetching MRAID JS. " + v6.getMessage());
        return super.shouldInterceptRequest(p0, p1);
      }
    }

}
