// Decompiled from classes.dex (SourceFile: bv.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bv extends java.lang.Thread {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.InGameBrowser a;

    // Methods
    bv(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      while ( InGameBrowser.f )
      {
        InGameBrowser.access$202(this.a, InGameBrowser.access$300(this.a, 16777232));
        this.a.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.bw(this));
        try
        {
          Thread.sleep(10000);
        }
        catch ( Exception e )
        {
        }
      }
    }

}
