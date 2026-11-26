// Decompiled from classes.dex (SourceFile: ar.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class ar implements java.lang.Runnable {
    // Fields
    final java.lang.String a;

    // Methods
    ar(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try
      {
        MRAIDFullScreen.access$002(true);
        MRAIDFullScreen.access$102(new com.gameloft.glads.MRAIDFullScreen());
        MRAIDFullScreen.access$202(
          new com.gameloft.glads.mraid.MRAIDInterstitial(GLAds.getParentView().getContext(), GLAds.getGLAdsBaseURL(), this.a, MRAIDFullScreen.access$300(), (com.gameloft.glads.mraid.MRAIDInterstitialListener)MRAIDFullScreen.access$100(), (com.gameloft.glads.mraid.MRAIDNativeFeatureListener)MRAIDFullScreen.access$100()));
      }
      catch ( Exception e )
      {
      }
    }

}
