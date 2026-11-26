// Decompiled from classes.dex (SourceFile: cd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.tagmanager;

import java.net.URLDecoder;
class cd {
    // Fields
    private static com.google.android.gms.tagmanager.cd a;
    private volatile com.google.android.gms.tagmanager.cd$a b;
    private volatile java.lang.String c;
    private volatile java.lang.String d;
    private volatile java.lang.String e;

    // Methods
    cd()
    {
      super();
      this.b = cd$a.a;
      this.d = null;
      this.c = null;
      this.e = null;
    }

    private static String ca(String p0)
    {
      return p0.split("&")[0].split("=")[1];
    }

    private void d()
    {
      this.b = cd$a.a;
      this.d = null;
      this.c = null;
      this.e = null;
    }

    private static String i(android.net.Uri p0)
    {
      return p0.getQuery().replace("&gtm_debug=x", "");
    }

    static com.google.android.gms.tagmanager.cd lY()
    {
      Object v0;
      v0 = com.google.android.gms.tagmanager.cd.class;
      synchronized ( v0 )
      {
        if ( a == null )
          a = new com.google.android.gms.tagmanager.cd();
        return a;
      }
    }

    final com.google.android.gms.tagmanager.cd$a a()
    {
      return this.b;
    }

    final synchronized boolean a(android.net.Uri p0)
    {
      boolean v2;
      String v3;
      com.google.android.gms.tagmanager.cd$a b;
      com.google.android.gms.tagmanager.cd$a v5;
      String e;
      String v7;
      String v10; // RETVAL
      String c;
      String v12;
      v2 = true;
      try
      {
        try
        {
          v3 = URLDecoder.decode(p0.toString(), "UTF-8");
          if ( v3.matches("^tagmanager.c.\\S+:\\/\\/preview\\/p\\?id=\\S+&gtm_auth=\\S+&gtm_preview=\\d+(&gtm_debug=x)?$") )
          {
            bh.C("Container preview url: " + v3);
            if ( v3.matches(".*?&gtm_debug=x$") )
              this.b = cd$a.c;
            else
              this.b = cd$a.b;
            this.e = p0.getQuery().replace("&gtm_debug=x", "");
            b = this.b;
            if ( b == cd$a.b || (v5 = this.b) == cd$a.c )
            {
              e = this.e;
              this.d = "/r?" + e;
            }
            v7 = this.e;
            this.c = ca(v7);
            return v2;
          }
          if ( !v3.matches("^tagmanager.c.\\S+:\\/\\/preview\\/p\\?id=\\S+&gtm_preview=$") )
          {
            bh.D("Invalid preview uri: " + v3);
            return false;
          }
          v10 = ca(p0.getQuery());
          c = this.c;
          if ( v10.equals(c) )
          {
            v12 = this.c;
            bh.C("Exit preview mode for container: " + v12);
            this.b = cd$a.a;
            this.d = null;
          }
          else
          {
            return false;
          }
          return v2;
        }
        catch ( java.io.UnsupportedEncodingException e2 )
        {
          return false;
        }
      }
      finally
      {
      }
    }

    final String b()
    {
      return this.d;
    }

    final String c()
    {
      return this.c;
    }

}
