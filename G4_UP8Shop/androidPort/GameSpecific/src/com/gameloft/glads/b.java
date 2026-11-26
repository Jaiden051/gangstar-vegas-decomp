// Decompiled from classes.dex (SourceFile: b.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class b implements java.lang.Runnable {
    // Methods
    b()
    {
      super();
    }

    public final void run()
    {
      try
      {
        GLAdBanner.access$000().loadUrl("javascript:onResume()");
      }
      catch ( Exception e )
      {
      }
    }

}
