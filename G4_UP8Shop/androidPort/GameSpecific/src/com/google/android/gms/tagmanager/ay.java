// Decompiled from classes.dex (SourceFile: ay.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import android.net.Uri;
class ay {
    // Fields
    static java.util.Map a;
    private static java.lang.String b;

    // Methods
    static
    {
      a = new java.util.HashMap();
    }

    ay()
    {
      super();
    }

    static void bX(String p0)
    {
      Object v1;
      v1 = com.google.android.gms.tagmanager.ay.class;
      synchronized ( v1 )
      {
        b = p0;
      }
    }

    static String d(android.content.Context p0, String p1, String p2)
    {
      String String;
      android.content.SharedPreferences SharedPreferences; // RETVAL
    
      String = (String)a.get(p1);
      if ( String == null )
      {
        SharedPreferences = p0.getSharedPreferences("gtm_click_referrers", 0);
        if ( SharedPreferences != null )
          String = SharedPreferences.getString(p1, "");
        else
          String = "";
        a.put(p1, String);
      }
      return p(String, p2);
    }

    static void d(android.content.Context p0, String p1)
    {
      cy.a(p0, "gtm_install_referrer", "referrer", p1);
      f(p0, p1);
    }

    static String e(android.content.Context p0, String p1)
    {
      Object v2;
      android.content.SharedPreferences SharedPreferences; // RETVAL
    
      if ( b != null )
        return p(b, p1);
      v2 = com.google.android.gms.tagmanager.ay.class;
      synchronized ( v2 )
      {
        if ( b == null )
        {
          SharedPreferences = p0.getSharedPreferences("gtm_install_referrer", 0);
          if ( SharedPreferences != null )
            b = SharedPreferences.getString("referrer", "");
          else
            b = "";
        }
        return p(b, p1);
      }
    }

    static void f(android.content.Context p0, String p1)
    {
      String v2; // RETVAL
      Object v3;
      v2 = p(p1, "conv");
      v3 = v2;
      if ( v2 != null && v2.length() > 0 )
      {
        a.put(v3, p1);
        cy.a(p0, "gtm_click_referrers", (String)v3, p1);
      }
    }

    static String p(String p0, String p1)
    {
      if ( p1 != null )
        return Uri.parse("http://hostname/?" + p0).getQueryParameter(p1);
      if ( p0.length() <= 0 )
        return null;
      return p0;
    }

}
