// Decompiled from classes.dex (SourceFile: bh.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import java.util.Arrays;
public final class bh implements com.google.android.gms.internal.bd {
    // Fields
    private final com.google.android.gms.internal.be a;

    // Methods
    public bh(com.google.android.gms.internal.be p0)
    {
      super();
      this.a = p0;
    }

    private static boolean a(java.util.Map<String, String> p0)
    {
      return "1".equals(p0.get("custom_close"));
    }

    private static int b(java.util.Map<String, String> p0)
    {
      String v1;
      v1 = (String)p0.get("o");
      if ( v1 == null )
        return -1;
      if ( !"p".equalsIgnoreCase(v1) )
      {
        if ( "l".equalsIgnoreCase(v1) )
          return ep.bM();
        return -1;
      }
      return ep.bN();
    }

    public final void a(com.google.android.gms.internal.ey p0, java.util.Map<String, String> p1)
    {
      String v3;
      com.google.android.gms.internal.ez v4;
      String v5;
      String v6;
      String v7;
      v3 = (String)p1.get("a");
      if ( v3 != null )
      {
        v4 = p0.f();
        if ( "expand".equalsIgnoreCase(v3) )
        {
          if ( p0.i() )
            ev.D("Cannot expand WebView that is already expanded.");
          else
            v4.a(a(p1), b(p1));
        }
        else if ( "webapp".equalsIgnoreCase(v3) )
        {
          v5 = (String)p1.get("u");
          if ( v5 != null )
            v4.a(a(p1), b(p1), v5);
          else
            v4.a(a(p1), b(p1), (String)p1.get("html"), (String)p1.get("baseurl"));
        }
        else if ( "in_app_purchase".equalsIgnoreCase(v3) )
        {
          v6 = (String)p1.get("product_id");
          v7 = (String)p1.get("report_urls");
          if ( this.a != null )
          {
            if ( v7 == null || v7.isEmpty() )
              this.a.a(v6, new java.util.ArrayList());
            else
              this.a.a(v6, new java.util.ArrayList(Arrays.asList(v7.split(" "))));
          }
        }
        else
        {
          v4.a(new com.google.android.gms.internal.cf((String)p1.get("i"), (String)p1.get("u"), (String)p1.get("m"), (String)p1.get("p"), (String)p1.get("c"), (String)p1.get("f"), (String)p1.get("e")));
        }
      }
      else
      {
        ev.D("Action missing from an open GMSG.");
      }
    }

}
