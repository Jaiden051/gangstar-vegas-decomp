// Decompiled from classes.dex (SourceFile: bw.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bw implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.bv a;

    // Methods
    bw(com.gameloft.android.GAND.GloftGGSS.bv p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      if ( InGameBrowser.access$200(this.a.a) != null )
      {
        if ( InGameBrowser.access$400(this.a.a) != null )
        {
          try
          {
            InGameBrowser.access$400(this.a.a).setVisibility(0);
          }
          catch ( Exception e )
          {
          }
        }
      }
      else if ( InGameBrowser.access$400(this.a.a) != null )
      {
        try
        {
          InGameBrowser.access$400(this.a.a).setVisibility(8);
        }
        catch ( Exception e )
        {
        }
      }
    }

}
