// Decompiled from classes.dex (SourceFile: z.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class z extends android.webkit.WebViewClient {
    // Fields
    final bolts.y a;
    private boolean b;

    // Methods
    z(bolts.y p0)
    {
      super();
      this.a = p0;
      this.b = false;
    
    }

    private void a(android.webkit.WebView p0)
    {
      if ( !this.b )
      {
        this.b = true;
        p0.loadUrl("javascript:boltsWebViewAppLinkResolverResult.setValue((function() {  var metaTags = document.getElementsB" +
                   "yTagName('meta');  var results = [];  for (var i = 0; i < metaTags.length; i++) {    var property = metaT" +
                   "ags[i].getAttribute('property');    if (property && property.substring(0, 'al:'.length) === 'al:') {     " +
                   " var tag = { \"property\": metaTags[i].getAttribute('property') };      if (metaTags[i].hasAttribute('con" +
                   "tent')) {        tag['content'] = metaTags[i].getAttribute('content');      }      results.push(tag);    " +
                   "}  }  return JSON.stringify(results);})())");
      }
    }

    public final void onLoadResource(android.webkit.WebView p0, String p1)
    {
      super.onLoadResource(p0, p1);
      this.a(p0);
    }

    public final void onPageFinished(android.webkit.WebView p0, String p1)
    {
      super.onPageFinished(p0, p1);
      this.a(p0);
    }

}
