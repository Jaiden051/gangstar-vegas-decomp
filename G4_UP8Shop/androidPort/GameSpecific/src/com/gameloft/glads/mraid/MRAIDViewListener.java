// Decompiled from classes.dex (SourceFile: MRAIDViewListener.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

public interface MRAIDViewListener {
    // Methods
    public abstract void mraidViewClose(com.gameloft.glads.mraid.MRAIDView p0);

    public abstract void mraidViewExpand(com.gameloft.glads.mraid.MRAIDView p0);

    public abstract void mraidViewLoaded(com.gameloft.glads.mraid.MRAIDView p0);

    public abstract void mraidViewReceivedError(android.webkit.WebView p0, int p1, java.lang.String p2, java.lang.String p3);

    public abstract boolean mraidViewResize(com.gameloft.glads.mraid.MRAIDView p0, int p1, int p2, int p3, int p4);

    public abstract void mraidViewVisibilityChanged(int p0);

}
