// Decompiled from classes.dex (SourceFile: ab.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import android.location.Location;
import android.text.Html;
final class ab implements java.util.concurrent.Callable {
    // Fields
    final android.net.Uri a;
    final bolts.k b;
    final bolts.k c;
    final bolts.WebViewAppLinkResolver d;

    // Methods
    ab(bolts.WebViewAppLinkResolver p0, android.net.Uri p1, bolts.k p2, bolts.k p3)
    {
      super();
      this.d = p0;
      this.a = p1;
      this.b = p2;
      this.c = p3;
    
    }

    private Void a() throws Exception
    {
      java.net.URL v1;
      java.net.URLConnection v2;
      java.net.URLConnection v3; // RETVAL
      java.net.URLConnection v4;
      java.net.HttpURLConnection v5;
      java.net.URL v6;
      v1 = new java.net.URL(this.a.toString());
      v2 = null;
      while ( v1 != null )
      {
        v3 = v1.openConnection();
        v4 = v3;
        if ( v3 instanceof java.net.HttpURLConnection )
          ((java.net.HttpURLConnection)v3).setInstanceFollowRedirects(true);
        v3.setRequestProperty("Prefer-Html-Meta-Tags", "al");
        v3.connect();
        if ( v3 instanceof java.net.HttpURLConnection )
        {
          v5 = (java.net.HttpURLConnection)v3;
          if ( v5.getResponseCode() < 300 || v5.getResponseCode() >= 400 )
          {
            v2 = v4;
            v1 = null;
          }
          else
          {
            v6 = new java.net.URL(v5.getHeaderField("Location"));
            v5.disconnect();
            v2 = v4;
            v1 = v6;
          }
        }
        else
        {
          v2 = v3;
          v1 = null;
        }
      }
      try
      {
        this.b.a(WebViewAppLinkResolver.access$300(v2));
        this.c.a(v2.getContentType());
      }
      finally
      {
        if ( v2 instanceof java.net.HttpURLConnection )
          ((java.net.HttpURLConnection)v2).disconnect();
      }
      return null;
    }

    /* synthetic */ public final Object call() throws Exception
    {
      return this.a();
    }

}
