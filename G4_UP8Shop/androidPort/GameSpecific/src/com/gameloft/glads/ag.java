// Decompiled from classes.dex (SourceFile: ag.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class ag implements java.lang.Runnable {
    // Fields
    final int a;
    final boolean b;
    final java.lang.String c;

    // Methods
    ag(int p0, boolean p1, String p2)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
    
    }

    public final void run()
    {
      long v1;
      v1 = System.currentTimeMillis();
      while ( !GLAds.access$1900() )
      {
        try
        {
          Thread.sleep(10);
        }
        catch ( InterruptedException e )
        {
        }
        if ( System.currentTimeMillis() - v1 >= 1000 * this.a )
          break;
      }
      if ( !GLAds.access$1900() )
      {
        GLAdFullScreen.destroyFullScreenAd();
        if ( this.b )
        {
          GLAds.setFullScreenAdState(2, false);
          try
          {
            GLAds.nativeFullScreenAdWillNotDisplayCallback(2);
          }
          catch ( UnsatisfiedLinkError e )
          {
          }
        }
        else
        {
          GLAds.access$1600(this.c);
        }
      }
    }

}
