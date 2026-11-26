// Decompiled from classes.dex (SourceFile: GLAdFullScreen.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.content.Intent;
import android.graphics.Color;
import android.os.Build;
import android.webkit.WebSettings;
public class GLAdFullScreen extends android.app.Activity {
    // Fields
    private static java.lang.String A;
    public static int a;
    public static int b;
    public static int c;
    private static android.webkit.WebView d;
    private static android.view.ViewGroup.LayoutParams e;
    private static android.widget.FrameLayout f;
    private static android.widget.RelativeLayout g;
    private static android.widget.VideoView h;
    private static boolean i;
    private static boolean j;
    private static boolean k;
    private static long l;
    private static int m;
    private static boolean n;
    private static int o;
    private static int p;
    private static int q;
    private static int r;
    private static int s;
    private static int t;
    private static int u;
    private static int v;
    private static long w;
    private static boolean x;
    private static android.app.Activity y;
    private static boolean z;

    // Methods
    static
    {
      d = null;
      e = null;
      i = false;
      j = false;
      k = false;
      l = 0;
      a = -1;
      b = -1;
      c = -1;
      o = 165062;
      p = 165063;
      q = 165064;
      r = 165065;
      s = 165089;
      t = 165088;
      u = 165090;
      v = 0;
      w = 0;
      x = false;
      y = null;
      z = false;
      A = null;
    }

    public GLAdFullScreen()
    {
      super();
    }

    /* synthetic */ static boolean access$000()
    {
      return z;
    }

    /* synthetic */ static boolean access$002(boolean p0)
    {
      z = p0;
      return p0;
    }

    /* synthetic */ static boolean access$1000()
    {
      return x;
    }

    /* synthetic */ static String access$102(String p0)
    {
      A = p0;
      return p0;
    }

    /* synthetic */ static boolean access$1102(boolean p0)
    {
      i = p0;
      return p0;
    }

    /* synthetic */ static android.app.Activity access$1200()
    {
      return y;
    }

    /* synthetic */ static long access$1300()
    {
      return w;
    }

    /* synthetic */ static long access$1302(long p0)
    {
      w = p0;
      return p0;
    }

    /* synthetic */ static long access$1402(long p0)
    {
      l = p0;
      return p0;
    }

    /* synthetic */ static boolean access$1502(boolean p0)
    {
      k = p0;
      return p0;
    }

    /* synthetic */ static android.graphics.Bitmap access$1600(String p0)
    {
      return fetchImage(p0);
    }

    /* synthetic */ static void access$200()
    {
      setup();
    }

    /* synthetic */ static boolean access$302(boolean p0)
    {
      n = p0;
      return p0;
    }

    /* synthetic */ static android.webkit.WebView access$400()
    {
      return d;
    }

    /* synthetic */ static android.webkit.WebView access$402(android.webkit.WebView p0)
    {
      d = p0;
      return p0;
    }

    /* synthetic */ static boolean access$500()
    {
      return j;
    }

    /* synthetic */ static boolean access$502(boolean p0)
    {
      j = p0;
      return p0;
    }

    /* synthetic */ static android.widget.VideoView access$600()
    {
      return h;
    }

    /* synthetic */ static android.widget.VideoView access$602(android.widget.VideoView p0)
    {
      h = p0;
      return p0;
    }

    /* synthetic */ static android.widget.RelativeLayout access$700()
    {
      return g;
    }

    /* synthetic */ static android.widget.RelativeLayout access$702(android.widget.RelativeLayout p0)
    {
      g = p0;
      return p0;
    }

    /* synthetic */ static android.widget.FrameLayout access$800()
    {
      return f;
    }

    /* synthetic */ static android.widget.FrameLayout access$802(android.widget.FrameLayout p0)
    {
      f = p0;
      return p0;
    }

    /* synthetic */ static android.view.ViewGroup.LayoutParams access$902(
            android.view.ViewGroup.LayoutParams p0)
    {
      e = p0;
      return p0;
    }

    static void closeFullScreenAd()
    {
      GLAds.getParentView().post((Runnable)new com.gameloft.glads.l());
    }

    static void destroyFullScreenAd()
    {
      GLAds.getParentView().post((Runnable)new com.gameloft.glads.k());
    }

    private static android.graphics.Bitmap fetchImage(String p0)
    {
      return null;
    }

    static void handleBackKey()
    {
      if ( j )
      {
        GLAdFullScreen$JSInterface.handleBackKey();
      }
      else if ( k && d != null )
      {
        d.loadUrl("javascript:onBackPressed()");
      }
      else
      {
        GLAds.cancelFullScreenAd(false, false);
      }
    }

    static void handleTrackEvent(String p0)
    {
      com.gameloft.glads.aj v1;
      org.json.JSONObject v2;
      String v3;
      v1 = new com.gameloft.glads.aj();
      try
      {
        v2 = new org.json.JSONObject(p0);
      }
      catch ( org.json.JSONException e )
      {
        v2 = null;
      }
      if ( v2 != null )
      {
        a = v2.optInt("creative_id", -1);
        b = v2.optInt("campaign_id", -1);
        c = v2.optInt("location_id", -1);
        m = v2.optString("ad", "").equals("video") ? 1 : 0;
        l = System.currentTimeMillis();
        if ( a != -1 )
        {
          v1.a = o;
          v1.b = p;
          v1.c = v;
          v1.d = a;
          v1.e = b;
          v1.f = c;
          if ( m == 1 )
            v3 = "video";
          else
            v3 = "interstitial";
          v1.h = v3;
          v1.g = 0;
          v1.i = "0";
          GLAds.trackEvent(v1);
        }
      }
    }

    static boolean isInFullScreenAd()
    {
      boolean v0;
      v0 = false;
      try
      {
        return GLAds.u != 2;
      }
      catch ( Exception e )
      {
      }
      return v0;
    }

    static void pause()
    {
      if ( GLAds.u == 1 )
      {
        if ( !n )
          sendPauseEvent();
        if ( j && h != null )
        {
          try
          {
            h.suspend();
          }
          catch ( Exception e )
          {
          }
        }
        if ( d != null )
          GLAds.getParentView().post((Runnable)new com.gameloft.glads.m());
      }
    }

    static void resume()
    {
      if ( GLAds.u == 1 )
        new com.gameloft.glads.n().start();
    }

    static void sendClickEvent()
    {
      com.gameloft.glads.aj v0;
      String v1;
      if ( a != -1 )
      {
        v0 = new com.gameloft.glads.aj();
        v0.a = o;
        v0.b = q;
        v0.c = u;
        v0.d = a;
        v0.e = b;
        v0.f = c;
        if ( m == 1 )
          v1 = "video";
        else
          v1 = "interstitial";
        v0.h = v1;
        v0.i = "0";
        v0.g = (int)((System.currentTimeMillis() - l) / 1000);
        GLAds.trackEvent(v0);
        n = true;
      }
    }

    static void sendFinishEvent()
    {
      com.gameloft.glads.aj v0;
      String v1;
      if ( a != -1 )
      {
        v0 = new com.gameloft.glads.aj();
        v0.a = o;
        v0.b = r;
        v0.c = v;
        v0.d = a;
        v0.e = b;
        v0.f = c;
        if ( m == 1 )
          v1 = "video";
        else
          v1 = "interstitial";
        v0.h = v1;
        v0.i = "0";
        v0.g = (int)((System.currentTimeMillis() - l) / 1000);
        GLAds.trackEvent(v0);
      }
    }

    static void sendPauseEvent()
    {
      com.gameloft.glads.aj v0;
      String v1;
      if ( a != -1 )
      {
        v0 = new com.gameloft.glads.aj();
        v0.a = o;
        v0.b = q;
        v0.c = t;
        v0.d = a;
        v0.e = b;
        v0.f = c;
        if ( m == 1 )
          v1 = "video";
        else
          v1 = "interstitial";
        v0.h = v1;
        v0.i = "0";
        v0.g = (int)((System.currentTimeMillis() - l) / 1000);
        GLAds.trackEvent(v0);
      }
    }

    private static void setup()
    {
      android.content.Context v0;
      android.webkit.WebView v1;
      if ( !i )
      {
        v0 = x ? y : (android.app.Activity)Utils.getContext();
        if ( GLAds.getParentView() != null )
        {
          f = new android.widget.FrameLayout(v0);
          if ( A.contains("</video>") )
            f.setBackgroundColor(-16777216);
          else
            f.setBackgroundColor(0);
          if ( x )
            y.setContentView(f);
          else
            GLAds.getParentView().addView(f, -1, -1);
          v1 = new android.webkit.WebView(v0);
          d = v1;
          v1.setVisibility(8);
          d.setBackgroundColor(Color.argb(1, 255, 255, 255));
          d.setVerticalScrollBarEnabled(false);
          d.setHorizontalScrollBarEnabled(false);
          d.getSettings().setJavaScriptEnabled(true);
          d.getSettings().setAppCacheEnabled(false);
          d.getSettings().setSupportZoom(false);
          d.getSettings().setDefaultTextEncodingName("UTF-8");
          d.getSettings().setDefaultZoom(WebSettings.ZoomDensity.FAR);
          d.setOnTouchListener((android.view.View.OnTouchListener)new com.gameloft.glads.q());
          if ( Build.VERSION.SDK_INT >= 21 )
            d.getSettings().setMixedContentMode(0);
          if ( Build.VERSION.SDK_INT >= 19 )
            d.getSettings().setLoadWithOverviewMode(true);
          if ( Build.VERSION.SDK_INT >= 17 )
            d.getSettings().setMediaPlaybackRequiresUserGesture(false);
          d.setWebChromeClient(new com.gameloft.glads.r());
          d.setWebViewClient(new com.gameloft.glads.y(GLWebViewClient.c));
          d.addJavascriptInterface(new com.gameloft.glads.GLAdFullScreen$JSInterface(v0, f), "Android");
          ((android.view.WindowManager)v0.getSystemService("window")).getDefaultDisplay();
          new android.util.DisplayMetrics();
          e = new android.view.ViewGroup.LayoutParams(-1, -1);
          f.addView(d, e);
          i = true;
        }
      }
    }

    static void show(String p0, String p1, boolean p2)
    {
      if ( GLAds.u != 1 && GLAds.getParentView() != null )
        new com.gameloft.glads.i(p0, p2).start();
    }

    public void onBackPressed()
    {
      handleBackKey();
    }

    protected void onCreate(android.os.Bundle p0)
    {
      android.content.Intent Intent; // RETVAL
    
      super.onCreate(p0);
      x = true;
      y = this;
      Intent = this.getIntent();
      if ( A != null )
      {
        if ( Intent.getBooleanExtra("landscape", false) )
          this.setRequestedOrientation(6);
        else
          this.setRequestedOrientation(7);
        setup();
        n = false;
        d.loadDataWithBaseURL(GLAds.getGLAdsBaseURL(), A, "text/html", "UTF-8", null);
        A = null;
      }
      else
      {
        z = true;
        this.finish();
      }
    }

    protected void onDestroy()
    {
      x = false;
      y = null;
      super.onDestroy();
      new com.gameloft.glads.h(this).start();
    }

    protected void onPause()
    {
      pause();
      super.onPause();
    }

    protected void onResume()
    {
      resume();
      super.onResume();
    }

}
