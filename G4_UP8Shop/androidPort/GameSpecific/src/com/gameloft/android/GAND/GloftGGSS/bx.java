// Decompiled from classes.dex (SourceFile: bx.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bx extends java.lang.Thread {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.InGameBrowser a;

    // Methods
    bx(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      while ( InGameBrowser.f )
      {
        if ( Math.abs(InGameBrowser.access$500(this.a)) >= 0.3
          || Math.abs(InGameBrowser.access$600(this.a)) >= 0.3
          || Math.abs(InGameBrowser.access$700(this.a)) >= 0.3
          || Math.abs(InGameBrowser.access$800(this.a)) >= 0.3 )
        {
          this.a.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.by(this));
        }
        try
        {
          Thread.sleep(30);
        }
        catch ( Exception e )
        {
        }
      }
    }

}
