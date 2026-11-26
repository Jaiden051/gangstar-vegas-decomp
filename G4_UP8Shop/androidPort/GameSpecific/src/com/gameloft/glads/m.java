// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class m implements java.lang.Runnable {
    // Methods
    m()
    {
      super();
    }

    public final void run()
    {
      try
      {
        GLAdFullScreen.access$400().loadUrl("javascript:onPause()");
      }
      catch ( Exception e )
      {
      }
    }

}
