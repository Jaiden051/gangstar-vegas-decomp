// Decompiled from classes.dex (SourceFile: y.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class y implements bolts.l {
    // Fields
    final bolts.k a;
    final android.net.Uri b;
    final bolts.k c;
    final bolts.WebViewAppLinkResolver d;

    // Methods
    y(bolts.WebViewAppLinkResolver p0, bolts.k p1, android.net.Uri p2, bolts.k p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    private bolts.Task<org.json.JSONArray> a()
    {
      bolts.w v1;
      android.webkit.WebView v2;
      String v3;
      v1 = Task.create();
      v2 = new android.webkit.WebView(WebViewAppLinkResolver.access$200(this.d));
      v2.getSettings().setJavaScriptEnabled(true);
      v2.setNetworkAvailable(false);
      v2.setWebViewClient(new bolts.z(this));
      v2.addJavascriptInterface(new bolts.aa(this, v1), "boltsWebViewAppLinkResolverResult");
      if ( this.a.a() != null )
        v3 = ((String)this.a.a()).split(";")[0];
      else
        v3 = null;
      v2.loadDataWithBaseURL(this.b.toString(), (String)this.c.a(), v3, null, null);
      return v1.a;
    }

    /* synthetic */ public final Object then(bolts.Task p0)
    {
      bolts.w v2;
      android.webkit.WebView v3;
      String v4;
      v2 = Task.create();
      v3 = new android.webkit.WebView(WebViewAppLinkResolver.access$200(this.d));
      v3.getSettings().setJavaScriptEnabled(true);
      v3.setNetworkAvailable(false);
      v3.setWebViewClient(new bolts.z(this));
      v3.addJavascriptInterface(new bolts.aa(this, v2), "boltsWebViewAppLinkResolverResult");
      if ( this.a.a() != null )
        v4 = ((String)this.a.a()).split(";")[0];
      else
        v4 = null;
      v3.loadDataWithBaseURL(this.b.toString(), (String)this.c.a(), v4, null, null);
      return v2.a;
    }

}
