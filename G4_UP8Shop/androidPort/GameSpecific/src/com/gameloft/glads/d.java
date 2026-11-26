// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class d implements java.lang.Runnable {
    // Fields
    final java.lang.String a;

    // Methods
    d(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      GLAdBanner.access$200();
      GLAdBanner.access$302(System.currentTimeMillis());
      GLAdBanner.a = -1;
      GLAdBanner.b = -1;
      GLAdBanner.c = -1;
      GLAdBanner.access$402(false);
      GLAdBanner.access$000().loadDataWithBaseURL(GLAds.getGLAdsBaseURL(), this.a, "text/html", "UTF-8", null);
    }

}
