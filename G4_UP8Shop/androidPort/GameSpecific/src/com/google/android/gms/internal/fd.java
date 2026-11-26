// Decompiled from classes.dex (SourceFile: fd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.text.TextUtils;
public class fd extends android.webkit.WebViewClient {
    // Fields
    private final java.lang.String a;
    private boolean b;
    private final com.google.android.gms.internal.ey c;
    private final com.google.android.gms.internal.dp d;

    // Methods
    public fd(com.google.android.gms.internal.dp p0, com.google.android.gms.internal.ey p1, String p2)
    {
      super();
      this.a = G(p2);
      this.b = false;
      this.c = p1;
      this.d = p0;
    }

    private static String G(String p0)
    {
      if ( !TextUtils.isEmpty(p0) )
      {
        try
        {
          if ( p0.endsWith("/") )
            return p0.substring(0, p0.length() - 1);
          return p0;
        }
        catch ( IndexOutOfBoundsException v2 )
        {
          ev.A(v2.getMessage());
        }
      }
      return p0;
    }

    private boolean a(String p0)
    {
      boolean v2;
      String v3;
      java.net.URI v5;
      java.net.URI v6;
      String Host;
      String v8;
      String Path;
      String v10;
      v2 = false;
      v3 = G(p0);
      if ( !TextUtils.isEmpty(v3) )
      {
        try
        {
          v5 = new java.net.URI(v3);
          if ( "passback".equals(v5.getScheme()) )
          {
            ev.z("Passback received");
            this.d.b();
            v2 = true;
          }
          else if ( !TextUtils.isEmpty(this.a) )
          {
            v6 = new java.net.URI(this.a);
            Host = v6.getHost();
            v8 = v5.getHost();
            Path = v6.getPath();
            v10 = v5.getPath();
            if ( hl.equal(Host, v8) && hl.equal(Path, v10) )
            {
              ev.z("Passback received");
              this.d.b();
              return true;
            }
          }
        }
        catch ( java.net.URISyntaxException v11 )
        {
          ev.A(v11.getMessage());
        }
      }
      return v2;
    }

    public void onLoadResource(android.webkit.WebView p0, String p1)
    {
      ev.z("JavascriptAdWebViewClient::onLoadResource: " + p1);
      if ( !this.a(p1) )
        this.c.f().onLoadResource(this.c, p1);
    }

    public void onPageFinished(android.webkit.WebView p0, String p1)
    {
      ev.z("JavascriptAdWebViewClient::onPageFinished: " + p1);
      if ( !this.b )
      {
        this.d.a();
        this.b = true;
      }
    }

    public boolean shouldOverrideUrlLoading(android.webkit.WebView p0, String p1)
    {
      ev.z("JavascriptAdWebViewClient::shouldOverrideUrlLoading: " + p1);
      if ( !this.a(p1) )
        return this.c.f().shouldOverrideUrlLoading(this.c, p1);
      ev.z("shouldOverrideUrlLoading: received passback url");
      return true;
    }

}
