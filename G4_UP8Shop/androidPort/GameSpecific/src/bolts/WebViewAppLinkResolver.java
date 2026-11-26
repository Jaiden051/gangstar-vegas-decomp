// Decompiled from classes.dex (SourceFile: WebViewAppLinkResolver.java) via IDA Pro 9.5 Dalvik Decompiler
package bolts;

import android.net.Uri;
import java.util.Arrays;
import java.util.Collections;
import org.json.JSONObject;
public class WebViewAppLinkResolver implements bolts.g {
    // Fields
    private static java.lang.String b;
    private static java.lang.String c;
    private static java.lang.String d;
    private static java.lang.String e;
    private static java.lang.String f;
    private static java.lang.String g;
    private static java.lang.String h;
    private static java.lang.String i;
    private static java.lang.String j;
    private static java.lang.String k;
    private static java.lang.String l;
    private static java.lang.String m;
    private final android.content.Context a;

    // Methods
    public WebViewAppLinkResolver(android.content.Context p0)
    {
      super();
      this.a = p0;
    }

    /* synthetic */ static java.util.Map access$000(org.json.JSONArray p0) throws org.json.JSONException
    {
      return parseAlData(p0);
    }

    /* synthetic */ static bolts.d access$100(java.util.Map p0, android.net.Uri p1)
    {
      return makeAppLinkFromAlData(p0, p1);
    }

    /* synthetic */ static android.content.Context access$200(bolts.WebViewAppLinkResolver p0)
    {
      return p0.a;
    }

    /* synthetic */ static String access$300(java.net.URLConnection p0) throws java.io.IOException
    {
      return readFromConnection(p0);
    }

    private static java.util.List<java.util.Map<String, Object>> getAlList(
            java.util.Map<String, Object> p0,
            String p1)
    {
      java.util.List v2;
      v2 = (java.util.List)p0.get(p1);
      if ( v2 == null )
        return Collections.emptyList();
      return v2;
    }

    private static bolts.d makeAppLinkFromAlData(
            java.util.Map<String, Object> p0,
            android.net.Uri p1)
    {
      java.util.List v2;
      java.util.List v3;
      java.util.Iterator v4;
      java.util.Map v5;
      java.util.List AlList;
      java.util.List v7;
      java.util.List v8;
      java.util.List v9;
      int v10;
      int i;
      Object v12;
      android.net.Uri Url;
      Object v14;
      String v15;
      Object v16;
      String v17;
      Object v18;
      java.util.List v19;
      java.util.Map v20;
      java.util.List v21;
      java.util.List v22;
      String[] v23;
      android.net.Uri v24;
      v2 = new java.util.ArrayList();
      v3 = (java.util.List)p0.get("android");
      if ( v3 == null )
        v3 = Collections.emptyList();
      v4 = v3.iterator();
      while ( v4.hasNext() )
      {
        v5 = (java.util.Map)v4.next();
        AlList = getAlList(v5, "url");
        v7 = getAlList(v5, "package");
        v8 = getAlList(v5, "class");
        v9 = getAlList(v5, "app_name");
        v10 = Math.max(AlList.size(), Math.max(v7.size(), Math.max(v8.size(), v9.size())));
        for ( i = 0; i < v10; ++i )
        {
          if ( AlList.size() <= i )
            v12 = null;
          else
            v12 = ((java.util.Map)AlList.get(i)).get("value");
          Url = tryCreateUrl((String)v12);
          if ( v7.size() <= i )
            v14 = null;
          else
            v14 = ((java.util.Map)v7.get(i)).get("value");
          v15 = (String)v14;
          if ( v8.size() <= i )
            v16 = null;
          else
            v16 = ((java.util.Map)v8.get(i)).get("value");
          v17 = (String)v16;
          if ( v9.size() <= i )
            v18 = null;
          else
            v18 = ((java.util.Map)v9.get(i)).get("value");
          v2.add(new bolts.e(v15, v17, Url, (String)v18));
        }
      }
      v19 = (java.util.List)p0.get("web");
      if ( v19 != null && v19.size() > 0 )
      {
        v20 = (java.util.Map)v19.get(0);
        v21 = (java.util.List)v20.get("url");
        v22 = (java.util.List)v20.get("should_fallback");
        if ( v22 != null
          && v22.size() > 0
          && (com.gameloft.android.DecompRT.comma((v23 = new String[3]), com.gameloft.android.DecompRT.comma((v23[0] = "no"), com.gameloft.android.DecompRT.comma((v23[1] = "false"), com.gameloft.android.DecompRT.comma((v23[2] = "0"), (Arrays.asList(v23).contains(((String)((java.util.Map)v22.get(0)).get("value")).toLowerCase()))))))) )
        {
          v24 = null;
        }
        else
        {
          v24 = p1;
        }
        if ( v24 != null && v21 != null && v21.size() > 0 )
          v24 = tryCreateUrl((String)((java.util.Map)v21.get(0)).get("value"));
      }
      else
      {
        v24 = p1;
      }
      return new bolts.d(p1, v2, v24);
    }

    private static java.util.Map<String, Object> parseAlData(org.json.JSONArray p0) throws org.json.JSONException
    {
      java.util.Map v1;
      int i;
      org.json.JSONObject JSONObject;
      String[] v4;
      int v5;
      java.util.Map v6;
      java.util.List v7;
      java.util.List v8;
      java.util.Map v9;
      v1 = new java.util.HashMap();
      for ( i = 0; i < p0.length(); ++i )
      {
        JSONObject = p0.getJSONObject(i);
        v4 = JSONObject.getString("property").split(":");
        if ( v4[0].equals("al") )
        {
          v5 = 1;
          v6 = v1;
          while ( v5 < v4.length )
          {
            v7 = (java.util.List)v6.get(v4[v5]);
            if ( v7 == null )
            {
              v7 = new java.util.ArrayList();
              v6.put(v4[v5], v7);
            }
            v8 = v7;
            if ( v7.size() <= 0 )
              v9 = null;
            else
              v9 = (java.util.Map)v7.get(v7.size() - 1);
            if ( v9 == null || v5 == v4.length - 1 )
            {
              v9 = new java.util.HashMap();
              v8.add(v9);
            }
            ++v5;
            v6 = v9;
          }
          if ( JSONObject.has("content") )
          {
            if ( JSONObject.isNull("content") )
              v6.put("value", null);
            else
              v6.put("value", JSONObject.getString("content"));
          }
        }
      }
      return v1;
    }

    private static String readFromConnection(java.net.URLConnection p0) throws java.io.IOException
    {
      int v1;
      java.net.HttpURLConnection v2;
      java.io.InputStream InputStream;
      java.io.ByteArrayOutputStream v4;
      byte[] i;
      int v6; // RETVAL
      String ContentEncoding;
      String[] v9;
      int v10;
      String v11;
      String v12;
      v1 = 0;
      if ( p0 instanceof java.net.HttpURLConnection )
      {
        v2 = (java.net.HttpURLConnection)p0;
        try
        {
          InputStream = p0.getInputStream();
        }
        catch ( Exception e )
        {
          InputStream = v2.getErrorStream();
        }
      }
      else
      {
        InputStream = p0.getInputStream();
      }
      try
      {
        v4 = new java.io.ByteArrayOutputStream();
        for ( i = new byte[1024]; ; v4.write(i, 0, v6) )
        {
          v6 = InputStream.read(i);
          if ( v6 == -1 )
            break;
        }
        ContentEncoding = p0.getContentEncoding();
        if ( ContentEncoding == null )
        {
          v9 = p0.getContentType().split(";");
          v10 = v9.length;
          while ( v1 < v10 )
          {
            v11 = v9[v1].trim();
            if ( v11.startsWith("charset=") )
            {
              ContentEncoding = v11.substring(8);
              break;
            }
            ++v1;
          }
          if ( ContentEncoding == null )
            ContentEncoding = "UTF-8";
        }
        v12 = new String(v4.toByteArray(), ContentEncoding);
      }
      finally
      {
        InputStream.close();
      }
      return v12;
    }

    private static android.net.Uri tryCreateUrl(String p0)
    {
      if ( p0 != null )
        return Uri.parse(p0);
      else
        return null;
    }

    public bolts.Task<bolts.d> getAppLinkFromUrlInBackground(android.net.Uri p0)
    {
      bolts.k v2;
      bolts.k v3;
      v2 = new bolts.k();
      v3 = new bolts.k();
      return Task.callInBackground((java.util.concurrent.Callable)new bolts.ab(this, p0, v2, v3)).b((bolts.l)new bolts.y(this, v3, p0, v2), Task.b).c((bolts.l)new bolts.x(this, p0));
    }

}
