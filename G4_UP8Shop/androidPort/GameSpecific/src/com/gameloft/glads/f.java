// Decompiled from classes.dex (SourceFile: f.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class f implements java.lang.Runnable {
    // Methods
    f()
    {
      super();
    }

    public final void run()
    {
      com.gameloft.glads.aj v1;
      try
      {
        GLAdBanner.access$000().loadUrl("javascript:onHide()");
        GLAds.getParentView().removeView(GLAdBanner.access$000());
        GLAdBanner.access$000().destroy();
        GLAdBanner.access$002(null);
        GLAdBanner.access$102(null);
      }
      catch ( Exception e )
      {
      }
      GLAdBanner.access$502(false);
      v1 = new com.gameloft.glads.aj();
      if ( GLAdBanner.a != -1 )
      {
        v1.a = GLAdBanner.access$600();
        v1.b = GLAdBanner.access$700();
        v1.c = GLAdBanner.access$800();
        v1.d = GLAdBanner.a;
        v1.e = GLAdBanner.b;
        v1.f = GLAdBanner.c;
        v1.h = "banner";
        v1.i = "0";
        v1.g = (int)((System.currentTimeMillis() - GLAdBanner.access$300()) / 1000);
        GLAds.trackEvent(v1);
        GLAdBanner.access$302(System.currentTimeMillis());
        GLAdBanner.a = -1;
        GLAdBanner.b = -1;
        GLAdBanner.c = -1;
        GLAdBanner.access$402(false);
      }
    }

}
