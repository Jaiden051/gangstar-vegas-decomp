// Decompiled from classes.dex (SourceFile: af.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class af implements java.lang.Runnable {
    // Fields
    final int a;
    final java.lang.String b;

    // Methods
    af(int p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      long v1;
      v1 = System.currentTimeMillis();
      while ( !GLAds.access$1800() )
      {
        try
        {
          Thread.sleep(100);
        }
        catch ( InterruptedException e )
        {
        }
        if ( System.currentTimeMillis() - v1 >= 1000 * this.a )
          break;
      }
      if ( !GLAds.access$1800() )
      {
        GLAdBanner.destroyBanner();
        GLAds.access$1300(this.b);
      }
    }

}
