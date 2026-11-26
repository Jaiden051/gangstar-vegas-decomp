// Decompiled from classes.dex (SourceFile: ba.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

public class ba implements com.amazon.device.associates.LinkService {
    // Fields
    private com.amazon.device.associates.ab a;

    // Methods
    protected ba(android.content.Context p0, String p1, java.util.Set<String> p2)
    {
      super();
      this.a = ab.a(p0, p1, p2);
    }

    public void openRetailPage(com.amazon.device.associates.OpenRetailPageRequest p0)
    {
      an.a(p0, "request");
      this.a.a(p0);
    }

    public boolean overrideLinkInvocation(android.webkit.WebView p0, String p1)
    {
      an.a(p0, "webView");
      an.a(p1, "url");
      this.a.a(p0, p1);
      return true;
    }

}
