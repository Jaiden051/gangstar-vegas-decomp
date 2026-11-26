// Decompiled from classes.dex (SourceFile: x.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

final class x implements bolts.l {
    // Fields
    final android.net.Uri a;
    final bolts.WebViewAppLinkResolver b;

    // Methods
    x(bolts.WebViewAppLinkResolver p0, android.net.Uri p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    private bolts.d a(bolts.Task<org.json.JSONArray> p0) throws Exception
    {
      return WebViewAppLinkResolver.access$100(WebViewAppLinkResolver.access$000((org.json.JSONArray)p0.c()), this.a);
    }

    /* synthetic */ public final Object then(bolts.Task p0) throws Exception
    {
      return WebViewAppLinkResolver.access$100(WebViewAppLinkResolver.access$000((org.json.JSONArray)p0.c()), this.a);
    }

}
