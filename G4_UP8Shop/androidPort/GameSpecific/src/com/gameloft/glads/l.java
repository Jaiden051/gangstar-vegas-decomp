// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class l implements java.lang.Runnable {
    // Methods
    l()
    {
      super();
    }

    public final void run()
    {
      try
      {
        if ( GLAdFullScreen.access$500() && GLAdFullScreen.access$600() != null )
        {
          try
          {
            GLAdFullScreen.access$502(false);
            GLAdFullScreen.access$800().removeView(GLAdFullScreen.access$700());
            GLAdFullScreen.access$600().stopPlayback();
            GLAdFullScreen.access$602(null);
          }
          catch ( Exception e )
          {
          }
        }
        if ( GLAdFullScreen.access$400() != null )
        {
          try
          {
            GLAdFullScreen.access$400().loadUrl("javascript:onHide()");
            GLAdFullScreen.access$800().removeView(GLAdFullScreen.access$400());
            GLAdFullScreen.access$400().destroy();
            GLAdFullScreen.access$402(null);
            GLAdFullScreen.access$902(null);
          }
          catch ( Exception e )
          {
          }
        }
        GLAdFullScreen.access$800().removeAllViews();
        if ( !GLAdFullScreen.access$1000() )
          GLAds.getParentView().removeView(GLAdFullScreen.access$800());
        GLAdFullScreen.access$802(null);
      }
      catch ( Exception e )
      {
      }
      GLAdFullScreen.access$1102(false);
      if ( GLAdFullScreen.access$1000() )
      {
        GLAdFullScreen.access$002(true);
        GLAdFullScreen.access$1200().finish();
      }
    }

}
