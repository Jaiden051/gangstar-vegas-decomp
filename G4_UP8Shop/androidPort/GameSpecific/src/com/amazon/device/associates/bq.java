// Decompiled from classes.dex (SourceFile: bq.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

import android.net.Uri;
import java.net.URLEncoder;
import java.util.Locale;
public class bq {
    // Methods
    public bq()
    {
      super();
    }

    public static String a()
    {
      com.amazon.device.associates.i v0;
      String v1;
      v0 = (com.amazon.device.associates.i)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).j();
      if ( v0 != null && v0.a().containsKey(i.b) )
        v1 = (String)v0.a().get(i.b);
      else
        v1 = null;
      if ( v1 == null )
        v1 = (String)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).a().a().get(i.b);
      if ( !v1.startsWith("http://") )
        v1 = "http://" + v1;
      return v1.replace("$SUBTAG", bo.b());
    }

    public static String a(com.amazon.device.associates.OpenSearchPageRequest p0)
    {
      com.amazon.device.associates.i v1;
      com.amazon.device.associates.i v2;
      com.amazon.device.associates.bx v3;
      String v4;
      String v5;
      String v6;
      String v7;
      String v8;
      String v9;
      CharSequence v10;
      v1 = (com.amazon.device.associates.i)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).j();
      if ( v1 != null )
        v2 = v1;
      else
        v2 = ((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).a();
      v3 = (com.amazon.device.associates.bx)((com.amazon.device.associates.f)ah.a(com.amazon.device.associates.f.class)).j();
      if ( v3 == null )
        v3 = ((com.amazon.device.associates.f)ah.a(com.amazon.device.associates.f.class)).a();
      v4 = a(p0.getSearchTerm());
      v5 = a(p0.getBrand());
      v6 = a(v3, p0.getCategory());
      v7 = "";
      if ( p0.getSortType() != null )
        v7 = b(v3, p0.getSortType().toString());
      v8 = (String)v2.a().get(i.d);
      if ( v8 != null )
        v9 = v8;
      else
        v9 = a();
      if ( v6 == null )
        v6 = "";
      if ( v5 != null )
        v10 = v5;
      else
        v10 = "";
      if ( !v9.startsWith("http://") )
        v9 = "http://" + v9;
      if ( v9.contains("$SEARCH") )
        v9 = v9.replace("$SEARCH", v4);
      if ( v9.contains("$CATEGORY") )
        v9 = v9.replace("$CATEGORY", v6);
      if ( v9.contains("$BRAND") )
        v9 = v9.replace("$BRAND", v10);
      if ( v9.contains("$SORTTYPE") )
        v9 = v9.replace("$SORTTYPE", v7);
      return v9.replace("$SUBTAG", bo.b());
    }

    private static String a(com.amazon.device.associates.bx p0, String p1)
    {
      String v2;
      if ( p1 == null )
        return (String)p0.e().get("All");
      v2 = (String)p0.e().get(p1);
      if ( v2 == null )
        return (String)p0.e().get("All");
      return v2;
    }

    protected static String a(String p0)
    {
      String v1;
      v1 = null;
      if ( p0 != null && !"".equals(p0) )
      {
        try
        {
          return URLEncoder.encode(p0.replace("\n", " ").trim(), "UTF-8");
        }
        catch ( java.io.UnsupportedEncodingException e )
        {
        }
      }
      return v1;
    }

    public static String a(String p0, String p1)
    {
      return Uri.parse(p0).getQueryParameter(p1);
    }

    private static String b(com.amazon.device.associates.bx p0, String p1)
    {
      String v2;
      if ( p1 == null )
        return "";
      v2 = (String)p0.a().get(p1);
      if ( v2 == null )
        return "";
      return v2;
    }

    public static String b(String p0)
    {
      String v1;
      com.amazon.device.associates.i v2;
      String v3;
      v1 = a(p0);
      v2 = (com.amazon.device.associates.i)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).j();
      if ( v1 != null )
      {
        if ( v2 != null && v2.a().containsKey(i.a) )
          v3 = (String)v2.a().get(i.a);
        else
          v3 = null;
      }
      else
      {
        v3 = a();
      }
      if ( v3 == null )
        v3 = (String)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).a().a().get(i.a);
      if ( !v3.startsWith("http://") )
        v3 = "http://" + v3;
      if ( v3.contains("$ASIN") )
        v3 = v3.replace("$ASIN", v1);
      return v3.replace("$SUBTAG", bo.b());
    }

    public static String c(String p0)
    {
      String v1;
      com.amazon.device.associates.i v2;
      String v3;
      v1 = a(p0);
      v2 = (com.amazon.device.associates.i)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).j();
      if ( v1 != null )
      {
        if ( v2 != null && v2.a().containsKey(i.e) )
          v3 = (String)v2.a().get(i.e);
        else
          v3 = null;
      }
      else
      {
        v3 = a();
      }
      if ( v3 == null )
        v3 = (String)((com.amazon.device.associates.bb)ah.a(com.amazon.device.associates.bb.class)).a().a().get(i.e);
      if ( !v3.startsWith("http://") )
        v3 = "http://" + v3;
      if ( v3.contains("$ASIN") )
        v3 = v3.replace("$ASIN", v1);
      return v3.replace("$SUBTAG", bo.b());
    }

    static void d(String p0)
    {
      android.content.Intent v1;
      v1 = new android.content.Intent("android.intent.action.VIEW", Uri.parse(p0));
      v1.addCategory("android.intent.category.BROWSABLE");
      v1.setFlags(0x10000000);
      bo.a().startActivity(v1);
    }

    public static String e(String p0)
    {
      StringBuilder v1;
      int v2; // RETVAL
      int v3;
      String v4;
      String v5;
      int v6;
      String[] v7;
      int i;
      v1 = new StringBuilder();
      v2 = p0.indexOf("?");
      v3 = v2;
      if ( v2 == -1 )
      {
        v5 = "";
        v6 = 0;
      }
      else
      {
        v4 = p0.substring(v2 + 1);
        v5 = p0.substring(0, v3 + 1);
        v6 = 1;
        p0 = v4;
      }
      v7 = p0.split("&");
      for ( i = 0; i < v7.length; ++i )
      {
        if ( !v7[i].toLowerCase(Locale.getDefault()).contains("tag=")
          && !v7[i].toLowerCase(Locale.getDefault()).contains("linkcode=") )
        {
          if ( v1.length() != 0 && v6 == 0 )
          {
            v1.append("&");
            v1.append(v7[i]);
          }
          else
          {
            v1.append(v7[i]);
            v6 = 0;
          }
        }
      }
      v1.insert(0, v5);
      p.a("DirectShoppingHelper", "Url after stripping off linkcode and tag params : " + v1.toString());
      return v1.toString();
    }

}
