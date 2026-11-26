// Decompiled from classes.dex (SourceFile: MRAIDView$MRAIDWebChromeClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

import com.gameloft.glads.mraid.internal.MRAIDLog;
class MRAIDView$MRAIDWebChromeClient extends android.webkit.WebChromeClient {
    // Fields
    final com.gameloft.glads.mraid.MRAIDView a;

    // Methods
    private MRAIDView$MRAIDWebChromeClient(com.gameloft.glads.mraid.MRAIDView p0)
    {
      super();
      this.a = p0;
    
    }

    /* synthetic */ MRAIDView$MRAIDWebChromeClient(com.gameloft.glads.mraid.MRAIDView p0, int p1)
    {
      this(p0);
    }

    private boolean handlePopups(android.webkit.JsResult p0)
    {
      p0.cancel();
      return true;
    }

    public boolean onConsoleMessage(android.webkit.ConsoleMessage p0)
    {
      StringBuilder v2;
      String v3;
      if ( !p0.message().contains("Uncaught ReferenceError") )
      {
        v2 = new StringBuilder().append(p0.message());
        if ( p0.sourceId() != null )
          v3 = " at " + p0.sourceId();
        else
          v3 = "";
        MRAIDLog.i("JS console", v2.append(v3).append(":").append(p0.lineNumber()).toString());
      }
      return true;
    }

    public boolean onJsConfirm(
            android.webkit.WebView p0,
            String p1,
            String p2,
            android.webkit.JsResult p3)
    {
      MRAIDLog.d("JS confirm", p2);
      return this.handlePopups(p3);
    }

    public boolean onJsPrompt(
            android.webkit.WebView p0,
            String p1,
            String p2,
            String p3,
            android.webkit.JsPromptResult p4)
    {
      MRAIDLog.d("JS prompt", p2);
      return this.handlePopups(p4);
    }

}
