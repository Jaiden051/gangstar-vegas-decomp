// Decompiled from classes.dex (SourceFile: GLAdBanner.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.graphics.Color;
import android.os.Build;
class GLAdBanner {
    // Fields
    public static int a;
    public static int b;
    public static int c;
    private static int d;
    private static int e;
    private static int f;
    private static int g;
    private static int h;
    private static android.webkit.WebView i;
    private static android.view.ViewGroup.LayoutParams j;
    private static boolean k;
    private static long l;
    private static boolean m;
    private static int n;
    private static int o;
    private static int p;
    private static int q;
    private static int r;
    private static int s;
    private static int t;
    private static int u;

    // Methods
    static
    {
      d = 0;
      e = 0;
      f = 3;
      g = 320;
      h = 50;
      i = null;
      j = null;
      k = false;
      l = 0;
      a = -1;
      b = -1;
      c = -1;
      m = false;
      n = 165062;
      o = 165063;
      p = 165064;
      q = 165065;
      r = 165089;
      s = 165088;
      t = 165090;
      u = 0;
    }

    GLAdBanner()
    {
      super();
    }

    /* synthetic */ static android.webkit.WebView access$000()
    {
      return i;
    }

    /* synthetic */ static android.webkit.WebView access$002(android.webkit.WebView p0)
    {
      i = p0;
      return p0;
    }

    /* synthetic */ static android.view.ViewGroup.LayoutParams access$100()
    {
      return j;
    }

    /* synthetic */ static android.view.ViewGroup.LayoutParams access$102(
            android.view.ViewGroup.LayoutParams p0)
    {
      j = p0;
      return p0;
    }

    /* synthetic */ static void access$200()
    {
      setup();
    }

    /* synthetic */ static long access$300()
    {
      return l;
    }

    /* synthetic */ static long access$302(long p0)
    {
      l = p0;
      return p0;
    }

    /* synthetic */ static boolean access$402(boolean p0)
    {
      m = p0;
      return p0;
    }

    /* synthetic */ static boolean access$502(boolean p0)
    {
      k = p0;
      return p0;
    }

    /* synthetic */ static int access$600()
    {
      return n;
    }

    /* synthetic */ static int access$700()
    {
      return p;
    }

    /* synthetic */ static int access$800()
    {
      return r;
    }

    public static void destroyBanner()
    {
      GLAds.getParentView().post((Runnable)new com.gameloft.glads.e());
    }

    private static int dip(int p0, float p1)
    {
      return (int)((float)p0 * p1);
    }

    public static void handleTrackEvent(String p0)
    {
      com.gameloft.glads.aj v1;
      org.json.JSONObject v2;
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
        if ( !m && a >= 0 )
        {
          v1.a = n;
          v1.b = q;
          v1.c = u;
          v1.d = a;
          v1.e = b;
          v1.f = c;
          v1.h = "banner";
          v1.i = "0";
          v1.g = (int)((System.currentTimeMillis() - l) / 1000);
          m = false;
          GLAds.trackEvent(v1);
        }
        a = v2.optInt("creative_id", -1);
        b = v2.optInt("campaign_id", -1);
        c = v2.optInt("location_id", -1);
        l = System.currentTimeMillis();
        m = false;
        v1.a = n;
        v1.b = o;
        v1.c = u;
        v1.d = a;
        v1.e = b;
        v1.f = c;
        v1.h = "banner";
        v1.i = "";
        v1.g = 0;
        GLAds.trackEvent(v1);
      }
    }

    public static void hideBanner()
    {
      GLAds.getParentView().post((Runnable)new com.gameloft.glads.f());
    }

    public static boolean isBannerVisible()
    {
      boolean v0;
      v0 = false;
      try
      {
        return i.getVisibility() == 0;
      }
      catch ( Exception e )
      {
      }
      return v0;
    }

    public static void pause()
    {
      if ( k )
        GLAds.getParentView().post((Runnable)new com.gameloft.glads.c());
    }

    public static void resume()
    {
      if ( k )
        GLAds.getParentView().post((Runnable)new com.gameloft.glads.b());
    }

    public static void sendClickEvent()
    {
      com.gameloft.glads.aj v0;
      v0 = new com.gameloft.glads.aj();
      v0.a = n;
      v0.b = p;
      v0.c = t;
      v0.d = a;
      v0.e = b;
      v0.f = c;
      v0.h = "banner";
      v0.i = "0";
      v0.g = (int)((System.currentTimeMillis() - l) / 1000);
      GLAds.trackEvent(v0);
      m = true;
    }

    private static void setLayoutParams()
    {
      int v0;
      android.view.Display DefaultDisplay;
      android.util.DisplayMetrics v2;
      float density;
      int v4; // RETVAL
      int v5;
      int v6;
      int[] v7;
      int v8;
      int v9;
      android.view.ViewGroup.LayoutParams v10;
      android.widget.RelativeLayout.LayoutParams v11;
      int v12;
      int v13;
      int v14;
      int v15;
      int v16;
      int Height; // RETVAL
      int v18; // RETVAL
      int v19;
      int v20; // RETVAL
      android.view.ViewGroup.LayoutParams v21;
      v0 = 0;
      DefaultDisplay = ((android.view.WindowManager)Utils.getContext().getSystemService("window")).getDefaultDisplay();
      v2 = new android.util.DisplayMetrics();
      DefaultDisplay.getMetrics(v2);
      density = v2.density;
      if ( GLAds.isBigScreen() )
      {
        v4 = Math.min(DefaultDisplay.getWidth(), DefaultDisplay.getHeight());
        v5 = 90 * (int)(0.9f * (float)v4) / 728;
        v6 = (int)(0.9f * (float)v4);
      }
      else
      {
        v15 = dip(g, density);
        v5 = dip(h, density);
        v6 = v15;
      }
      v7 = new int[] { 14, 12 };
      switch ( f )
      {
        case 0:
          v7[0] = 10;
          v7[1] = 9;
          v9 = d;
          v8 = e;
          break;
        case 1:
          v7[0] = 10;
          v7[1] = 11;
          v9 = d + DefaultDisplay.getWidth() - v6;
          v8 = e;
          break;
        case 2:
          v7[0] = 10;
          v7[1] = 14;
          v9 = d + (DefaultDisplay.getWidth() - v6) / 2;
          v8 = e;
          break;
        case 3:
          v16 = d + (DefaultDisplay.getWidth() - v6) / 2;
          Height = DefaultDisplay.getHeight();
          v7[0] = 14;
          v7[1] = 12;
          v9 = v16;
          v8 = Height - v5 + e;
          break;
        case 4:
          v18 = DefaultDisplay.getHeight();
          v7[0] = 9;
          v7[1] = 12;
          v9 = d;
          v8 = v18 - v5 + e;
          break;
        case 5:
          v19 = d + DefaultDisplay.getWidth() - v6;
          v20 = DefaultDisplay.getHeight();
          v7[0] = 11;
          v7[1] = 12;
          v9 = v19;
          v8 = v20 - v5 + e;
          break;
        default:
          v8 = 0;
          v9 = 0;
          break;
      }
      if ( GLAds.getParentView() instanceof android.widget.RelativeLayout )
      {
        v10 = new android.widget.RelativeLayout.LayoutParams(v6, v5);
        j = v10;
        ((android.widget.RelativeLayout.LayoutParams)v10).addRule(v7[0]);
        ((android.widget.RelativeLayout.LayoutParams)j).addRule(v7[1]);
        v11 = (android.widget.RelativeLayout.LayoutParams)j;
        if ( d < 0 )
          v12 = 0;
        else
          v12 = d;
        if ( e < 0 )
          v13 = 0;
        else
          v13 = e;
        if ( d >= 0 )
          v14 = 0;
        else
          v14 = -d;
        if ( e < 0 )
          v0 = -e;
        v11.setMargins(v12, v13, v14, v0);
      }
      else if ( GLAds.getParentView() instanceof android.widget.FrameLayout )
      {
        v21 = new android.widget.FrameLayout.LayoutParams(v6, v5);
        j = v21;
        ((android.widget.FrameLayout.LayoutParams)v21).setMargins(v9, v8, 0, 0);
      }
      else if ( GLAds.getParentView() instanceof android.widget.AbsoluteLayout )
      {
        j = new android.widget.AbsoluteLayout.LayoutParams(v6, v5, v9, v8);
      }
    }

    public static void setPositionAndAnchor(int p0, int p1, int p2)
    {
      d = p0;
      e = p1;
      f = p2;
      setLayoutParams();
      GLAds.getParentView().post((Runnable)new com.gameloft.glads.a());
    }

    private static void setup()
    {
      android.webkit.WebView v0;
      if ( !k && GLAds.getParentView() != null )
      {
        v0 = new android.webkit.WebView(Utils.getContext());
        i = v0;
        v0.setVisibility(8);
        i.setBackgroundColor(Color.argb(1, 255, 255, 255));
        i.setVerticalScrollBarEnabled(false);
        i.setHorizontalScrollBarEnabled(false);
        i.getSettings().setJavaScriptEnabled(true);
        i.getSettings().setAppCacheEnabled(false);
        i.getSettings().setSupportZoom(false);
        i.getSettings().setDefaultTextEncodingName("UTF-8");
        i.getSettings().setUseWideViewPort(false);
        if ( Build.VERSION.SDK_INT >= 21 )
          i.getSettings().setMixedContentMode(0);
        i.setOnTouchListener((android.view.View.OnTouchListener)new com.gameloft.glads.g());
        if ( Build.VERSION.SDK_INT >= 17 )
          i.getSettings().setMediaPlaybackRequiresUserGesture(false);
        i.setWebViewClient(new com.gameloft.glads.GLWebViewClient(GLWebViewClient.b));
        setLayoutParams();
        GLAds.getParentView().addView(i, j);
        k = true;
      }
    }

    public static void show(String p0, String p1)
    {
      if ( GLAds.v != 1 && GLAds.getParentView() != null )
        GLAds.getParentView().post((Runnable)new com.gameloft.glads.d(p0));
    }

}
