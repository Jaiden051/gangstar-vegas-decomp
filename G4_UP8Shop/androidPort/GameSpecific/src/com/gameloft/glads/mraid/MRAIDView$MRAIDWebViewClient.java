// Decompiled from classes.dex (SourceFile: MRAIDView$MRAIDWebViewClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

import com.gameloft.glads.mraid.internal.MRAIDLog;
class MRAIDView$MRAIDWebViewClient extends android.webkit.WebViewClient {
    // Fields
    final com.gameloft.glads.mraid.MRAIDView a;

    // Methods
    private MRAIDView$MRAIDWebViewClient(com.gameloft.glads.mraid.MRAIDView p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ MRAIDView$MRAIDWebViewClient(com.gameloft.glads.mraid.MRAIDView p0, int p1)
    {
      this(p0);
    }

    public void onPageFinished(android.webkit.WebView p0, String p1)
    {
      com.gameloft.glads.mraid.MRAIDView a;
      StringBuilder v4;
      String v5;
      MRAIDLog.d("MRAIDView", "onPageFinished: " + p1);
      super.onPageFinished(p0, p1);
      if ( MRAIDView.access$1100(this.a) == 0 )
      {
        MRAIDView.access$2602(this.a, true);
        a = this.a;
        v4 = new StringBuilder("mraid.setPlacementType('");
        if ( MRAIDView.access$500(a) )
          v5 = "interstitial";
        else
          v5 = "inline";
        MRAIDView.access$2700(a, v4.append(v5).append("');").toString());
        MRAIDLog.d("MRAIDViewdsadsdasa", "onPageFinished injecting: " + p1);
        MRAIDView.access$2700(
          this.a,
          "javascript:GLAdsTracking.setTrackingVariables((typeof creative_id === 'undefined')?(-1):(creative_id), (typeof cam" +
          "paign_id === 'undefined')?(-1):(campaign_id),(typeof location_id === 'undefined')?(-1):(location_id));");
        MRAIDView.access$2800(this.a);
        if ( MRAIDView.access$2900(this.a) )
        {
          MRAIDView.access$3000(this.a);
          MRAIDView.access$3100(this.a);
          MRAIDView.access$3200(this.a);
          MRAIDView.access$3300(this.a);
          MRAIDView.access$1102(this.a, 1);
          MRAIDView.access$2300(this.a);
          MRAIDView.access$3400(this.a);
          if ( MRAIDView.access$3500(this.a) )
            MRAIDView.access$3600(this.a);
        }
        if ( MRAIDView.access$2400(this.a) != null )
          MRAIDView.access$2400(this.a).mraidViewLoaded(this.a);
      }
      if ( MRAIDView.access$2100(this.a) )
      {
        MRAIDView.access$2102(this.a, false);
        MRAIDView.access$3700(this.a).post((Runnable)new com.gameloft.glads.mraid.MRAIDView$MRAIDWebViewClient$1(this));
      }
    }

    public void onReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      MRAIDLog.d("MRAIDView", "onReceivedError: " + p2);
      super.onReceivedError(p0, p1, p2, p3);
      MRAIDView.access$2400(this.a).mraidViewReceivedError(p0, p1, p2, p3);
    }

    public boolean shouldOverrideUrlLoading(android.webkit.WebView p0, String p1)
    {
      boolean v3;
      v3 = true;
      MRAIDLog.d("MRAIDView", "shouldOverrideUrlLoading: " + p1);
      if ( p1.startsWith("mraid://") )
      {
        MRAIDView.access$3800(this.a, p1);
      }
      else if ( p1.startsWith("sms:") )
      {
        if ( MRAIDView.access$300(this.a) != null && MRAIDView.access$3900(this.a).isSmsSupported() )
          MRAIDView.access$300(this.a).mraidNativeFeatureSendSms(p1);
      }
      else if ( p1.startsWith("tel:") )
      {
        if ( MRAIDView.access$300(this.a) != null && MRAIDView.access$3900(this.a).isTelSupported() )
          MRAIDView.access$300(this.a).mraidNativeFeatureCallTel(p1);
      }
      else if ( !p1.startsWith("track:") )
      {
        return super.shouldOverrideUrlLoading(p0, p1);
      }
      return v3;
    }

}
