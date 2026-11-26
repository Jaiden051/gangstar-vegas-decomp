// Decompiled from classes.dex (SourceFile: MRAIDBanner.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.net.Uri;
public class MRAIDBanner implements com.gameloft.glads.mraid.MRAIDNativeFeatureListener, com.gameloft.glads.mraid.MRAIDViewListener {
    // Fields
    private static java.lang.String a;
    private static com.gameloft.glads.mraid.MRAIDView b;
    private static android.view.ViewGroup.LayoutParams c;
    private static int d;
    private static int e;
    private static int f;
    private static boolean g;
    private static long h;
    private static long i;
    private static long j;
    private static com.gameloft.glads.mraid.MRAIDView$TrackingData k;
    private static boolean l;
    private static boolean m;
    private static java.lang.String n;
    private static java.lang.String o;
    private static java.lang.String[] p;

    // Methods
    static
    {
      String[] v0;
      b = null;
      c = null;
      d = 0;
      e = 0;
      f = 3;
      g = false;
      h = 0;
      i = 0;
      j = 0;
      k = null;
      l = false;
      m = false;
      n = null;
      o = null;
      v0 = new String[5];
      v0[0] = "calendar";
      v0[1] = "inlineVideo";
      v0[2] = "sms";
      v0[3] = "storePicture";
      v0[4] = "tel";
      p = v0;
    }

    public MRAIDBanner()
    {
      super();
    }

    /* synthetic */ static com.gameloft.glads.mraid.MRAIDView access$000()
    {
      return b;
    }

    /* synthetic */ static com.gameloft.glads.mraid.MRAIDView access$002(com.gameloft.glads.mraid.MRAIDView p0)
    {
      b = p0;
      return p0;
    }

    /* synthetic */ static android.view.ViewGroup.LayoutParams access$100()
    {
      return c;
    }

    /* synthetic */ static boolean access$200()
    {
      return g;
    }

    /* synthetic */ static boolean access$202(boolean p0)
    {
      g = p0;
      return p0;
    }

    /* synthetic */ static void access$300()
    {
      setLayoutParams();
    }

    /* synthetic */ static com.gameloft.glads.mraid.MRAIDView$TrackingData access$402(
            com.gameloft.glads.mraid.MRAIDView$TrackingData p0)
    {
      k = p0;
      return p0;
    }

    /* synthetic */ static String[] access$500()
    {
      return p;
    }

    /* synthetic */ static void access$600(int p0, int p1, int p2, String p3)
    {
      trackEvent(p0, p1, p2, p3);
    }

    public static void closeExpandedBanner()
    {
      if ( l && b != null )
        b.sendCloseCommand();
    }

    public static void destroyBanner()
    {
      try
      {
        if ( b != null )
        {
          b.sendCloseCommand();
          GLAds.getParentView().removeView(b);
        }
      }
      catch ( Exception e )
      {
      }
      g = false;
    }

    public static void handleBackKey()
    {
      if ( l )
        b.closeFromExpanded();
    }

    public static void hideBanner()
    {
      m = false;
      GLAds.getParentView().post((Runnable)new com.gameloft.glads.aq());
    }

    public static boolean isBannerVisible()
    {
      boolean v0;
      v0 = false;
      try
      {
        return b.getVisibility() == 0;
      }
      catch ( Exception e )
      {
      }
      return v0;
    }

    public static boolean isExpanded()
    {
      return l;
    }

    public static void pause()
    {
      try
      {
        i = System.currentTimeMillis();
        if ( b != null && GLAds.getParentView() != null )
          GLAds.getParentView().removeView(b);
      }
      catch ( Exception e )
      {
      }
    }

    public static void resume()
    {
      try
      {
        if ( m && n != null && o != null )
        {
          if ( b != null )
          {
            GLAds.getParentView().addView(b);
          }
          else
          {
            if ( GLAds.getParentView().findViewById(b.getId()) != null )
              GLAds.getParentView().removeView(b);
            show(n, o);
          }
        }
        if ( i != 0 )
        {
          j += System.currentTimeMillis() - i;
          i = 0;
        }
      }
      catch ( Exception e )
      {
      }
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
      int Height; // RETVAL
      int v17; // RETVAL
      int v18;
      int v19; // RETVAL
      android.view.ViewGroup.LayoutParams v20;
      v0 = 0;
      g = true;
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
        v5 = (int)(density * (float)GLAdsConstants.b);
        v6 = (int)((float)GLAdsConstants.a * density);
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
          v15 = d + (DefaultDisplay.getWidth() - v6) / 2;
          Height = DefaultDisplay.getHeight();
          v7[0] = 14;
          v7[1] = 12;
          v9 = v15;
          v8 = Height - v5 + e;
          break;
        case 4:
          v17 = DefaultDisplay.getHeight();
          v7[0] = 9;
          v7[1] = 12;
          v9 = d;
          v8 = v17 - v5 + e;
          break;
        case 5:
          v18 = d + DefaultDisplay.getWidth() - v6;
          v19 = DefaultDisplay.getHeight();
          v7[0] = 11;
          v7[1] = 12;
          v9 = v18;
          v8 = v19 - v5 + e;
          break;
        default:
          v8 = 0;
          v9 = 0;
          break;
      }
      if ( GLAds.getParentView() instanceof android.widget.RelativeLayout )
      {
        v10 = new android.widget.RelativeLayout.LayoutParams(v6, v5);
        c = v10;
        ((android.widget.RelativeLayout.LayoutParams)v10).addRule(v7[0]);
        ((android.widget.RelativeLayout.LayoutParams)c).addRule(v7[1]);
        v11 = (android.widget.RelativeLayout.LayoutParams)c;
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
        v20 = new android.widget.FrameLayout.LayoutParams(v6, v5);
        c = v20;
        ((android.widget.FrameLayout.LayoutParams)v20).setMargins(v9, v8, 0, 0);
      }
      else if ( GLAds.getParentView() instanceof android.widget.AbsoluteLayout )
      {
        c = new android.widget.AbsoluteLayout.LayoutParams(v6, v5, v9, v8);
      }
    }

    public static void setPositionAndAnchor(int p0, int p1, int p2)
    {
      d = p0;
      e = p1;
      f = p2;
      setLayoutParams();
      GLAds.getParentView().post((Runnable)new com.gameloft.glads.ao());
    }

    public static void show(String p0, String p1)
    {
      n = p0;
      o = p1;
      m = true;
      if ( GLAds.v != 1 && GLAds.getParentView() != null )
        GLAds.getParentView().post((Runnable)new com.gameloft.glads.ap(p0, new com.gameloft.glads.MRAIDBanner()));
    }

    private static void trackEvent(int p0, int p1, int p2, String p3)
    {
      com.gameloft.glads.aj v4;
      int v5;
      v4 = new com.gameloft.glads.aj();
      v5 = (int)((System.currentTimeMillis() - h - j) / 1000);
      if ( k != null && k.isLoaded )
      {
        v4.a = p0;
        v4.b = p1;
        v4.c = p2;
        v4.d = Integer.parseInt(k.mCreativeId);
        v4.e = Integer.parseInt(k.mCampainId);
        v4.f = Integer.parseInt(k.mLocationId);
        v4.h = "banner";
        v4.i = p3;
        v4.g = v5;
        GLAds.trackEvent(v4);
      }
    }

    public void mraidNativeFeatureCallTel(String p0)
    {
      ;
    }

    public void mraidNativeFeatureCreateCalendarEvent(String p0)
    {
      ;
    }

    public void mraidNativeFeatureOpenBrowser(String p0)
    {
      try
      {
        trackEvent(GLAdsConstants.c, GLAdsConstants.e, GLAdsConstants.i, "0");
        GLAds.getParentView().getContext().startActivity(new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0)));
      }
      catch ( Exception e )
      {
      }
    }

    public void mraidNativeFeaturePlayVideo(String p0)
    {
      android.content.Intent v2;
      try
      {
        trackEvent(GLAdsConstants.c, GLAdsConstants.e, GLAdsConstants.i, "0");
        v2 = new android.content.Intent("android.intent.action.VIEW");
        v2.setDataAndType(Uri.parse(p0), "video/*");
        GLAds.getParentView().getContext().startActivity(v2);
      }
      catch ( Exception e )
      {
      }
    }

    public void mraidNativeFeatureSendSms(String p0)
    {
      ;
    }

    public void mraidNativeFeatureStorePicture(String p0)
    {
      ;
    }

    public void mraidNativeFeatureTrackDataLoaded()
    {
      if ( b != null )
      {
        k = b.getMRAIDTrackingData();
        j = 0;
        i = 0;
        h = System.currentTimeMillis();
        trackEvent(GLAdsConstants.c, GLAdsConstants.d, GLAdsConstants.j, "");
      }
    }

    public void mraidViewClose(com.gameloft.glads.mraid.MRAIDView p0)
    {
      if ( !l )
        m = false;
      l = false;
      trackEvent(GLAdsConstants.c, GLAdsConstants.e, GLAdsConstants.i, "closed");
      try
      {
        GLAds.nativeFullScreenAdWillHideCallback(false);
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
    }

    public void mraidViewExpand(com.gameloft.glads.mraid.MRAIDView p0)
    {
      l = true;
      trackEvent(GLAdsConstants.c, GLAdsConstants.e, GLAdsConstants.i, "expanded");
      try
      {
        GLAds.nativeFullScreenAdWillDisplayCallback();
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
    }

    public void mraidViewLoaded(com.gameloft.glads.mraid.MRAIDView p0)
    {
      j = 0;
      i = 0;
      GLAds.stopBannerTimer();
      h = System.currentTimeMillis();
    }

    public void mraidViewReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      ;
    }

    public boolean mraidViewResize(com.gameloft.glads.mraid.MRAIDView p0, int p1, int p2, int p3, int p4)
    {
      return false;
    }

    public void mraidViewVisibilityChanged(int p0)
    {
      if ( p0 != 0 )
      {
        i = System.currentTimeMillis();
      }
      else if ( i != 0 )
      {
        j += System.currentTimeMillis() - i;
        i = 0;
      }
    }

}
