// Decompiled from classes.dex (SourceFile: VASTFullScreen.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

public class VASTFullScreen {
    // Fields
    private static java.lang.String a;
    private static com.gameloft.glads.vast.VASTPlayer b;
    private static boolean c;
    private static int d;
    private static int e;
    private static int f;
    private static boolean g;
    private static java.lang.String h;
    private static int i;
    private static int j;
    private static int k;
    private static int l;
    private static int m;
    private static int n;
    private static int o;
    private static int p;
    private static long q;
    private static long r;
    private static long s;
    private static boolean t;
    private static boolean u;
    private static boolean v;
    private static com.gameloft.glads.VASTFullScreen w;

    // Methods
    static
    {
      a = "GLAds VAST";
      b = null;
      c = false;
      i = 165062;
      j = 165063;
      k = 165064;
      l = 165065;
      m = 165089;
      n = 165088;
      o = 165090;
      p = 0;
      q = 0;
      r = 0;
      s = 0;
      t = false;
      u = false;
      v = false;
      w = null;
    }

    VASTFullScreen(String p0, int p1, int p2, int p3, boolean p4, String p5)
    {
      super();
      com.gameloft.glads.vast.VASTPlayer v7;
      d = p1;
      e = p2;
      f = p3;
      g = p4;
      h = p5;
      t = false;
      u = false;
      r = 0;
      s = 0;
      v = false;
      setup();
      v7 = new com.gameloft.glads.vast.VASTPlayer(GLAds.getParentView().getContext(), (com.gameloft.glads.vast.VASTPlayer$VASTPlayerListener)new com.gameloft.glads.as(this));
      b = v7;
      v7.loadVideoWithData(p0);
    
    }

    /* synthetic */ static com.gameloft.glads.vast.VASTPlayer access$000()
    {
      return b;
    }

    /* synthetic */ static String access$100()
    {
      return a;
    }

    /* synthetic */ static boolean access$200()
    {
      return g;
    }

    /* synthetic */ static com.gameloft.glads.VASTFullScreen access$302(
            com.gameloft.glads.VASTFullScreen p0)
    {
      w = p0;
      return p0;
    }

    /* synthetic */ static void access$400()
    {
      setup();
    }

    static void closeFullScreenAd()
    {
      destroyFullScreenAd(false);
    }

    static void closeFullScreenAd(boolean p0)
    {
      destroyFullScreenAd(p0);
    }

    static void destroyFullScreenAd()
    {
      destroyFullScreenAd(false);
    }

    static void destroyFullScreenAd(boolean p0)
    {
      w = null;
      c = false;
      GLAds.cancelFullScreenAd(p0, false);
    }

    static void handleBackKey()
    {
      GLAds.cancelFullScreenAd(false, false);
    }

    public static void handleGLOTTracking(com.gameloft.glads.vast.model.TRACKING_EVENTS_TYPE p0)
    {
      com.gameloft.glads.aj v1 = null;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v1 = new com.gameloft.glads.aj();
            v1.h = "video";
            v1.e = e;
            v1.d = d;
            v1.f = f;
            v1.i = "0";
            v1.a = i;
            _sw_1 = (VASTFullScreen$3.a[p0.ordinal()]);
            if ( (_sw_1 == (1)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (3)) ) { _pc = 4; continue _sm; }
            _pc = 5;
            continue _sm;
          case 1:
            v1.c = p;
            v1.g = 0;
            v1.b = j;
            q = System.currentTimeMillis();
            _pc = 3;
            continue _sm;
          case 2:
            v1.g = (int)((System.currentTimeMillis() - q - r) / 1000);
            v = true;
            if ( t )
            {
            v1.b = l;
            v1.c = p;
            if ( g )
            GLAds.checkProfileForReward(h, true);
            }
            else
            {
            v1.b = k;
            v1.c = m;
            }
            _pc = 3;
            continue _sm;
          case 3:
            GLAds.trackEvent(v1);
            _pc = 6;
            continue _sm;
          case 4:
            t = true;
            _pc = 6;
            continue _sm;
          case 5:
            return;
          case 6:
            return;
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

    public static void onVastActivityPause()
    {
      if ( !v )
        sendPauseEvent();
      u = false;
      s = System.currentTimeMillis();
    }

    public static void onVastActivityResume()
    {
      if ( s != 0 )
        r += System.currentTimeMillis() - s;
    }

    static void resume()
    {
      if ( w != null )
        closeFullScreenAd(false);
    }

    public static void sendClickEvent()
    {
      com.gameloft.glads.aj v0;
      u = true;
      v0 = new com.gameloft.glads.aj();
      v0.a = i;
      v0.b = k;
      v0.c = o;
      v0.d = d;
      v0.e = e;
      v0.f = f;
      v0.h = "video";
      v0.i = "0";
      v0.g = (int)((System.currentTimeMillis() - q - r) / 1000);
      GLAds.trackEvent(v0);
    }

    private static void sendPauseEvent()
    {
      com.gameloft.glads.aj v0;
      if ( !u )
      {
        v0 = new com.gameloft.glads.aj();
        v0.a = i;
        v0.b = k;
        v0.c = n;
        v0.d = d;
        v0.e = e;
        v0.f = f;
        v0.h = "video";
        v0.i = "0";
        v0.g = (int)((System.currentTimeMillis() - q - r) / 1000);
        GLAds.trackEvent(v0);
      }
    }

    private static void setup()
    {
      if ( !c && GLAds.getParentView() != null )
        c = true;
    }

    static void show(String p0, int p1, int p2, int p3, boolean p4, String p5)
    {
      if ( GLAds.u != 1 && GLAds.getParentView() != null )
        GLAds.getParentView().post((Runnable)new com.gameloft.glads.at(p0, p1, p2, p3, p4, p5));
    }

}
