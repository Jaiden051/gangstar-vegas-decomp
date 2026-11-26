// Decompiled from classes.dex (SourceFile: MRAIDFullScreen.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.net.Uri;
public class MRAIDFullScreen implements com.gameloft.glads.mraid.MRAIDInterstitialListener, com.gameloft.glads.mraid.MRAIDNativeFeatureListener {
    // Fields
    private static java.lang.String a;
    private static long b;
    private static long c;
    private static long d;
    private static com.gameloft.glads.mraid.MRAIDInterstitial e;
    private static com.gameloft.glads.MRAIDFullScreen f;
    private static boolean g;
    private static com.gameloft.glads.mraid.MRAIDView$TrackingData h;
    private static java.lang.String[] i;

    // Methods
    static
    {
      String[] v0;
      a = "GLAds-MRAIDFullscreen";
      b = 0;
      c = 0;
      d = 0;
      e = null;
      f = null;
      g = false;
      h = null;
      v0 = new String[5];
      v0[0] = "calendar";
      v0[1] = "inlineVideo";
      v0[2] = "sms";
      v0[3] = "storePicture";
      v0[4] = "tel";
      i = v0;
    }

    public MRAIDFullScreen()
    {
      super();
    }

    /* synthetic */ static boolean access$002(boolean p0)
    {
      g = p0;
      return p0;
    }

    /* synthetic */ static com.gameloft.glads.MRAIDFullScreen access$100()
    {
      return f;
    }

    /* synthetic */ static com.gameloft.glads.MRAIDFullScreen access$102(
            com.gameloft.glads.MRAIDFullScreen p0)
    {
      f = p0;
      return p0;
    }

    /* synthetic */ static com.gameloft.glads.mraid.MRAIDInterstitial access$202(
            com.gameloft.glads.mraid.MRAIDInterstitial p0)
    {
      e = p0;
      return p0;
    }

    /* synthetic */ static String[] access$300()
    {
      return i;
    }

    public static void closeFullScreenAd()
    {
      if ( e != null && e.getMraidView() != null && e.getMraidView() != null )
      {
        trackEvent(GLAdsConstants.c, GLAdsConstants.e, GLAdsConstants.g, "0");
        GLAds.getParentView().removeView(e.getMraidView());
      }
      g = false;
      destroyFullScreenAd();
    }

    public static void destroyFullScreenAd()
    {
      e = null;
      f = null;
    }

    public static void handleBackKey()
    {
      if ( e != null && e.getMraidView() != null )
        e.getMraidView().closeFromExpanded();
    }

    public static boolean isInFullScreenAd()
    {
      return g;
    }

    public static void pause()
    {
      c = System.currentTimeMillis();
    }

    public static void resume()
    {
      if ( c != 0 )
      {
        d += System.currentTimeMillis() - c;
        c = 0;
      }
    }

    public static void show(String p0, String p1, boolean p2)
    {
      if ( GLAds.u != 1 && GLAds.getParentView() != null )
        GLAds.getParentView().post((Runnable)new com.gameloft.glads.ar(p0));
    }

    private static void trackEvent(int p0, int p1, int p2, String p3)
    {
      com.gameloft.glads.aj v4;
      int v5;
      v4 = new com.gameloft.glads.aj();
      v5 = (int)((System.currentTimeMillis() - b - d) / 1000);
      if ( h != null && h.isLoaded )
      {
        v4.a = p0;
        v4.b = p1;
        v4.c = p2;
        v4.d = Integer.parseInt(h.mCreativeId);
        v4.e = Integer.parseInt(h.mCampainId);
        v4.f = Integer.parseInt(h.mLocationId);
        v4.h = "interstitial";
        v4.i = p3;
        v4.g = v5;
        GLAds.trackEvent(v4);
      }
    }

    public void mraidInterstitialHide(com.gameloft.glads.mraid.MRAIDInterstitial p0)
    {
      g = false;
      GLAds.cancelFullScreenAd();
      GLAds.setFullScreenAdState(2, false);
    }

    public void mraidInterstitialLoaded(com.gameloft.glads.mraid.MRAIDInterstitial p0)
    {
      e.show();
      b = System.currentTimeMillis();
      d = 0;
      c = 0;
      GLAds.stopFullscreenAdTimer();
      GLAds.setFullScreenAdState(1, false);
    }

    public void mraidInterstitialReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      GLAds.setFullScreenAdState(2, false);
      try
      {
        GLAds.nativeFullScreenAdWillNotDisplayCallback(1);
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
    }

    public void mraidInterstitialShow(com.gameloft.glads.mraid.MRAIDInterstitial p0)
    {
      g = true;
    }

    public void mraidInterstitialVisibilityChanged(com.gameloft.glads.mraid.MRAIDInterstitial p0, int p1)
    {
      if ( p1 != 0 )
      {
        c = System.currentTimeMillis();
      }
      else if ( c != 0 )
      {
        d += System.currentTimeMillis() - c;
        c = 0;
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
      if ( e != null && e.getMraidView() != null )
      {
        h = e.getMraidView().getMRAIDTrackingData();
        d = 0;
        c = 0;
        b = System.currentTimeMillis();
        trackEvent(GLAdsConstants.c, GLAdsConstants.d, GLAdsConstants.j, "");
      }
    }

}
