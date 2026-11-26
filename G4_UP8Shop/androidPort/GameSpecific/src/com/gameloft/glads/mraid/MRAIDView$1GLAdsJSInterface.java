// Decompiled from classes.dex (SourceFile: MRAIDView$1GLAdsJSInterface.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

class MRAIDView$1GLAdsJSInterface {
    // Fields
    final com.gameloft.glads.mraid.MRAIDView a;
    private com.gameloft.glads.mraid.MRAIDView$TrackingData mTrackingData;

    // Methods
    public MRAIDView$1GLAdsJSInterface(com.gameloft.glads.mraid.MRAIDView p0, com.gameloft.glads.mraid.MRAIDView$TrackingData p1)
    {
      super();
      this.a = p0;
      this.mTrackingData = p1;
    
    }

    public void setTrackingVariables(String p0, String p1, String p2)
    {
      this.mTrackingData.mCreativeId = p0;
      this.mTrackingData.mCampainId = p1;
      this.mTrackingData.mLocationId = p2;
      this.mTrackingData.isLoaded = true;
      MRAIDView.access$300(this.a).mraidNativeFeatureTrackDataLoaded();
    }

}
