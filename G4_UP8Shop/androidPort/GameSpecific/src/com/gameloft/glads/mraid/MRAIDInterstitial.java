// Decompiled from classes.dex (SourceFile: MRAIDInterstitial.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

import com.gameloft.glads.mraid.internal.MRAIDLog;
public class MRAIDInterstitial implements com.gameloft.glads.mraid.MRAIDViewListener {
    // Fields
    private static java.lang.String TAG;
    private boolean isReady;
    private com.gameloft.glads.mraid.MRAIDInterstitialListener listener;
    private com.gameloft.glads.mraid.MRAIDView mraidView;

    // Methods
    public MRAIDInterstitial(
            android.content.Context p0,
            String p1,
            String p2,
            String[] p3,
            com.gameloft.glads.mraid.MRAIDInterstitialListener p4,
            com.gameloft.glads.mraid.MRAIDNativeFeatureListener p5)
    {
      super();
      this.listener = p4;
      this.mraidView = new com.gameloft.glads.mraid.MRAIDView(p0, p1, p2, p3, (com.gameloft.glads.mraid.MRAIDViewListener)this, p5, true);
    }

    public com.gameloft.glads.mraid.MRAIDView getMraidView()
    {
      return this.mraidView;
    }

    public void mraidViewClose(com.gameloft.glads.mraid.MRAIDView p0)
    {
      this.isReady = false;
      if ( this.listener != null )
        this.listener.mraidInterstitialHide(this);
    }

    public void mraidViewExpand(com.gameloft.glads.mraid.MRAIDView p0)
    {
      if ( this.listener != null )
        this.listener.mraidInterstitialShow(this);
    }

    public void mraidViewLoaded(com.gameloft.glads.mraid.MRAIDView p0)
    {
      this.isReady = true;
      if ( this.listener != null )
        this.listener.mraidInterstitialLoaded(this);
    }

    public void mraidViewReceivedError(android.webkit.WebView p0, int p1, String p2, String p3)
    {
      this.listener.mraidInterstitialReceivedError(p0, p1, p2, p3);
    }

    public boolean mraidViewResize(com.gameloft.glads.mraid.MRAIDView p0, int p1, int p2, int p3, int p4)
    {
      return true;
    }

    public void mraidViewVisibilityChanged(int p0)
    {
      if ( this.listener != null )
        this.listener.mraidInterstitialVisibilityChanged(this, p0);
    }

    public void show()
    {
      if ( this.isReady )
        this.mraidView.showAsInterstitial();
      else
        MRAIDLog.w("MRAIDInterstitial", "interstitial is not ready to show");
    }

}
