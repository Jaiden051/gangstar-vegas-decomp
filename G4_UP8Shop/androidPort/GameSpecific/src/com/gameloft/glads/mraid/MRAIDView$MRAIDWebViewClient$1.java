// Decompiled from classes.dex (SourceFile: MRAIDView$MRAIDWebViewClient$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

import com.gameloft.glads.mraid.internal.MRAIDLog;
class MRAIDView$MRAIDWebViewClient$1 implements java.lang.Runnable {
    // Fields
    final com.gameloft.glads.mraid.MRAIDView$MRAIDWebViewClient a;

    // Methods
    MRAIDView$MRAIDWebViewClient$1(com.gameloft.glads.mraid.MRAIDView$MRAIDWebViewClient p0)
    {
      super();
      this.a = p0;
    
    }

    public void run()
    {
      com.gameloft.glads.mraid.MRAIDView a;
      StringBuilder v2;
      String v3;
      a = this.a.a;
      v2 = new StringBuilder("mraid.setPlacementType('");
      if ( MRAIDView.access$500(a) )
        v3 = "interstitial";
      else
        v3 = "inline";
      MRAIDView.access$2700(a, v2.append(v3).append("');").toString());
      MRAIDView.access$2700(
        this.a.a,
        "javascript:GLAdsTracking.setTrackingVariables((typeof creative_id === 'undefined')?(-1):(creative_id), (typeof campa" +
        "ign_id === 'undefined')?(-1):(campaign_id),(typeof location_id === 'undefined')?(-1):(location_id));");
      MRAIDView.access$2800(this.a.a);
      MRAIDView.access$3000(this.a.a);
      MRAIDView.access$3300(this.a.a);
      MRAIDLog.d("MRAIDView", "calling fireStateChangeEvent 2");
      MRAIDView.access$2300(this.a.a);
      MRAIDView.access$3400(this.a.a);
      if ( MRAIDView.access$3500(this.a.a) )
        MRAIDView.access$3600(this.a.a);
    }

}
