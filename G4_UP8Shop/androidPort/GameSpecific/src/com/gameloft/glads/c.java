// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class c implements java.lang.Runnable {
    // Methods
    c()
    {
      super();
    }

    public final void run()
    {
      try
      {
        GLAdBanner.access$000().loadUrl("javascript:onPause()");
      }
      catch ( Exception e )
      {
      }
    }

}
