// Decompiled from classes.dex (SourceFile: cc.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class cc implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.InGameBrowser a;

    // Methods
    cc(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try
      {
        if ( InGameBrowser.access$1900(this.a) != null )
          InGameBrowser.access$1900(this.a).dismiss();
        InGameBrowser.access$1902(this.a, null);
        System.gc();
      }
      catch ( Exception e )
      {
      }
    }

}
