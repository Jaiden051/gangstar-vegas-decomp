// Decompiled from classes.dex (SourceFile: ad.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class ad {
    // Methods
    ad()
    {
      super();
    }

    public static boolean a(android.webkit.WebView p0, String p1)
    {
      com.amazon.device.associates.i v2 = null;
      String v5 = null;
      String v6 = null;
      String v7 = null;
      String v8 = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = (com.amazon.device.associates.i)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).j();
            if ( !(p1 != null && !p1.trim().contentEquals("")) ) { _pc = 5; continue _sm; }
            v5 = p1.trim();
            if ( !(a(v5)) ) { _pc = 3; continue _sm; }
            if ( !v5.contains("amazon.com") || v2 == null )
            { _pc = 1; continue _sm; }
            System.out.println("Map received");
            if ( v2.a().containsKey(i.c) )
            {
            v6 = (String)v2.a().get(i.c);
            p.c("OverrideLink", "Parameter template: " + v6);
            }
            else
            {
            v6 = null;
            }
            if ( !(v6 != null) ) { _pc = 1; continue _sm; }
            {
            v7 = bq.e(v5);
            if ( v7.contains("?") )
            v8 = v7.concat("&" + v6);
            else
            v8 = v7.concat("?" + v6);
            }
            _pc = 2;
            continue _sm;
          case 1:
            v8 = v5;
            _pc = 2;
            continue _sm;
          case 2:
            p.c("OverrideLink", "Loading amazon url in browser with additional parameters: " + v8);
            bq.d(v8);
            return true;
          case 3:
            {
            p.c("OverrideLink", "Loading specified url in webview: " + v5);
            p0.loadUrl(v5);
            return false;
            }
          case 5:
            {
            p.c("OverrideLink", "Invalid input parameter. Input url " + p1);
            return false;
            }
        }
      }
}

    private static boolean a(String p0)
    {
      return p0 != null
          && (p0.matches("^((http|https)://)(www[.])?(amazon[.])(com|ca|cn|de|es|fr|it|in|co[.]jp|co[.]uk)(/)?.*")
           || p0.matches("^((http|https)://)(www[.])?(myhabit|amazonwireless|amazonsupply)([.]com)(/)?.*"));
    }

}
