// Decompiled from classes.dex (SourceFile: ap.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ap implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    ap(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      Game.validateSecondElapsed(1);
      try
      {
        Thread.sleep(999);
        Game.validateSecondElapsed(2);
      }
      catch ( InterruptedException e )
      {
        Game.validateSecondElapsed(3);
      }
    }

}
