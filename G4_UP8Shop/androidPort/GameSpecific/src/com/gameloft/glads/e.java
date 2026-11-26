// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class e implements java.lang.Runnable {
    // Methods
    e()
    {
      super();
    }

    public final void run()
    {
      try
      {
        GLAdBanner.access$000().loadUrl("javascript:onHide()");
      }
      catch ( Exception e )
      {
      }
      try
      {
        GLAds.getParentView().removeView(GLAdBanner.access$000());
      }
      catch ( Exception e )
      {
      }
      try
      {
        GLAdBanner.access$000().destroy();
      }
      catch ( Exception e )
      {
      }
      GLAdBanner.access$002(null);
      GLAdBanner.access$102(null);
      GLAdBanner.access$502(false);
    }

}
