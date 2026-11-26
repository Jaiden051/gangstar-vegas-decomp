// Decompiled from classes.dex (SourceFile: y.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class y extends com.gameloft.glads.GLWebViewClient {
    // Methods
    y(int p0)
    {
      super(p0);
    }

    public final void onPageFinished(android.webkit.WebView p0, String p1)
    {
      GLAdFullScreen.access$1402(System.currentTimeMillis());
      GLAdFullScreen.access$1302(System.currentTimeMillis());
      GLAdFullScreen.access$1502(false);
      p0.loadUrl("javascript:window.Android.checkBackPressed(isBackPressed)");
      super.onPageFinished(p0, p1);
    }

    public final void onPageStarted(android.webkit.WebView p0, String p1, android.graphics.Bitmap p2)
    {
      super.onPageStarted(p0, p1, p2);
    }

}
