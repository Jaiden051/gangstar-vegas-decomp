// Decompiled from classes.dex (SourceFile: as.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.util.Log;
final class as implements com.gameloft.glads.vast.VASTPlayer$VASTPlayerListener {
    // Fields
    final com.gameloft.glads.VASTFullScreen a;

    // Methods
    as(com.gameloft.glads.VASTFullScreen p0)
    {
      super();
      this.a = p0;
    
    }

    public final void vastClosed()
    {
      VASTFullScreen.closeFullScreenAd(VASTFullScreen.access$200());
    }

    public final void vastError(int p0)
    {
      GLAds.setFullScreenAdState(2, false);
      try
      {
        GLAds.nativeFullScreenAdWillNotDisplayCallback(1);
      }
      catch ( UnsatisfiedLinkError e )
      {
      }
      Log.e(VASTFullScreen.access$100(), "Unable to play VAST Document: Error: " + p0);
      VASTFullScreen.closeFullScreenAd();
    }

    public final void vastReady()
    {
      GLAds.setFullScreenAdState(1, false);
      GLAds.stopFullscreenAdTimer();
      VASTFullScreen.access$000().play();
    }

}
