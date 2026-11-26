// Decompiled from classes.dex (SourceFile: MRAIDInterstitialListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

public interface MRAIDInterstitialListener {
    // Methods
    public abstract void mraidInterstitialHide(com.gameloft.glads.mraid.MRAIDInterstitial p0);

    public abstract void mraidInterstitialLoaded(com.gameloft.glads.mraid.MRAIDInterstitial p0);

    public abstract void mraidInterstitialReceivedError(android.webkit.WebView p0, int p1, java.lang.String p2, java.lang.String p3);

    public abstract void mraidInterstitialShow(com.gameloft.glads.mraid.MRAIDInterstitial p0);

    public abstract void mraidInterstitialVisibilityChanged(com.gameloft.glads.mraid.MRAIDInterstitial p0, int p1);

}
