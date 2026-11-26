// Decompiled from classes.dex (SourceFile: FacebookAppLinkResolver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.net.Uri;
import bolts.Task;
import org.json.JSONObject;
public class FacebookAppLinkResolver implements bolts.g {
    // Fields
    private static java.lang.String APP_LINK_ANDROID_TARGET_KEY;
    private static java.lang.String APP_LINK_KEY;
    private static java.lang.String APP_LINK_TARGET_APP_NAME_KEY;
    private static java.lang.String APP_LINK_TARGET_CLASS_KEY;
    private static java.lang.String APP_LINK_TARGET_PACKAGE_KEY;
    private static java.lang.String APP_LINK_TARGET_SHOULD_FALLBACK_KEY;
    private static java.lang.String APP_LINK_TARGET_URL_KEY;
    private static java.lang.String APP_LINK_WEB_TARGET_KEY;
    private final java.util.HashMap cachedAppLinks;

    // Methods
    public FacebookAppLinkResolver()
    {
      super();
      this.cachedAppLinks = new java.util.HashMap();
    }

    /* synthetic */ static bolts.e access$000(org.json.JSONObject p0)
    {
      return getAndroidTargetFromJson(p0);
    }

    /* synthetic */ static android.net.Uri access$100(android.net.Uri p0, org.json.JSONObject p1)
    {
      return getWebFallbackUriFromJson(p0, p1);
    }

    /* synthetic */ static java.util.HashMap access$200(com.facebook.FacebookAppLinkResolver p0)
    {
      return p0.cachedAppLinks;
    }

    private static bolts.e getAndroidTargetFromJson(org.json.JSONObject p0)
    {
      android.net.Uri v1;
      String StringFromJson;
      String v4;
      String v5;
      String v6; // RETVAL
    
      v1 = null;
      StringFromJson = tryGetStringFromJson(p0, "package", null);
      if ( StringFromJson != null )
      {
        v4 = tryGetStringFromJson(p0, "class", null);
        v5 = tryGetStringFromJson(p0, "app_name", null);
        v6 = tryGetStringFromJson(p0, "url", null);
        if ( v6 != null )
          v1 = Uri.parse(v6);
        return new bolts.e(StringFromJson, v4, v1, v5);
      }
      return (bolts.e)(Object)v1;
    }

    private static android.net.Uri getWebFallbackUriFromJson(
            android.net.Uri p0,
            org.json.JSONObject p1)
    {
      android.net.Uri v2;
      org.json.JSONObject JSONObject;
      String StringFromJson; // RETVAL
    
      v2 = null;
      try
      {
        JSONObject = p1.getJSONObject("web");
        if ( tryGetBooleanFromJson(JSONObject, "should_fallback", true) )
        {
          StringFromJson = tryGetStringFromJson(JSONObject, "url", null);
          if ( StringFromJson != null )
            v2 = Uri.parse(StringFromJson);
          if ( v2 != null )
            return v2;
        }
        else
        {
          return null;
        }
        return p0;
      }
      catch ( org.json.JSONException e )
      {
      }
      return p0;
    }

    private static boolean tryGetBooleanFromJson(org.json.JSONObject p0, String p1, boolean p2)
    {
      try
      {
        return p0.getBoolean(p1);
      }
      catch ( org.json.JSONException e )
      {
      }
      return p2;
    }

    private static String tryGetStringFromJson(org.json.JSONObject p0, String p1, String p2)
    {
      try
      {
        return p0.getString(p1);
      }
      catch ( org.json.JSONException e )
      {
      }
      return p2;
    }

    public bolts.Task<bolts.d> getAppLinkFromUrlInBackground(android.net.Uri p0)
    {
      java.util.ArrayList v2;
      v2 = new java.util.ArrayList();
      v2.add(p0);
      return this.getAppLinkFromUrlsInBackground(v2).c((bolts.l)new com.facebook.FacebookAppLinkResolver$1(this, p0));
    }

    public bolts.Task<java.util.Map<android.net.Uri, bolts.d>> getAppLinkFromUrlsInBackground(
            java.util.List<android.net.Uri> p0)
    {
      java.util.Map v2;
      java.util.HashSet v3;
      StringBuilder v4;
      java.util.Iterator v5;
      android.net.Uri v6;
      java.util.HashMap cachedAppLinks;
      bolts.d v8;
      String v10;
      bolts.w v13;
      android.os.Bundle v14;
      Object[] v15;
      v2 = new java.util.HashMap();
      v3 = new java.util.HashSet();
      v4 = new StringBuilder();
      v5 = p0.iterator();
      while ( v5.hasNext() )
      {
        v6 = (android.net.Uri)v5.next();
        cachedAppLinks = this.cachedAppLinks;
        synchronized ( cachedAppLinks )
        {
          v8 = (bolts.d)this.cachedAppLinks.get(v6);
        }
        if ( v8 != null )
        {
          v2.put(v6, v8);
        }
        else
        {
          if ( !v3.isEmpty() )
            v4.append(',');
          v10 = v6.toString();
          v4.append(v10);
          v3.add(v6);
        }
      }
      if ( v3.isEmpty() )
        return Task.forResult(v2);
      v13 = Task.create();
      v14 = new android.os.Bundle();
      v14.putString("ids", v4.toString());
      v15 = new Object[3];
      v15[0] = "app_links";
      v15[1] = "android";
      v15[2] = "web";
      v14.putString("fields", String.format("%s.fields(%s,%s)", v15));
      new com.facebook.Request(null, "", v14, null, (com.facebook.Request$Callback)new com.facebook.FacebookAppLinkResolver$2(this, v13, v2, v3)).executeAsync();
      return v13.a();
    }

}
