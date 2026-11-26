// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class p implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.o a;

    // Methods
    p(com.gameloft.glads.o p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try
      {
        GLAdFullScreen.access$400().loadUrl("javascript:onResume()");
      }
      catch ( Exception e )
      {
      }
    }

}
