// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class h extends java.lang.Thread {
    // Fields
    final com.gameloft.glads.GLAdFullScreen a;

    // Methods
    h(com.gameloft.glads.GLAdFullScreen p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try
      {
        Thread.sleep(100);
      }
      catch ( InterruptedException e )
      {
      }
      GLAdFullScreen.access$002(false);
    }

}
