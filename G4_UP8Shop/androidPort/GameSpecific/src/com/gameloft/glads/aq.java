// Decompiled from classes.dex (SourceFile: aq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class aq implements java.lang.Runnable {
    // Methods
    aq()
    {
      super();
    }

    public final void run()
    {
      try
      {
        if ( MRAIDBanner.access$000() != null )
        {
          MRAIDBanner.access$600(GLAdsConstants.c, GLAdsConstants.e, GLAdsConstants.g, "0");
          MRAIDBanner.destroyBanner();
        }
      }
      catch ( Exception e )
      {
      }
      MRAIDBanner.access$202(false);
    }

}
