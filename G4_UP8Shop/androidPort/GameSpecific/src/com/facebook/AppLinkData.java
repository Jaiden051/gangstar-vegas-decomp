// Decompiled from classes.dex (SourceFile: AppLinkData.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.model.GraphObject$Factory;
import android.content.Intent;
import android.net.Uri;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import com.facebook.internal.AttributionIdentifiers;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import com.facebook.model.GraphObject;
import org.json.JSONObject;
public class AppLinkData {
    // Fields
    private static java.lang.String APPLINK_BRIDGE_ARGS_KEY;
    private static java.lang.String APPLINK_METHOD_ARGS_KEY;
    private static java.lang.String APPLINK_VERSION_KEY;
    public static java.lang.String ARGUMENTS_NATIVE_CLASS_KEY;
    public static java.lang.String ARGUMENTS_NATIVE_URL;
    public static java.lang.String ARGUMENTS_REFERER_DATA_KEY;
    public static java.lang.String ARGUMENTS_TAPTIME_KEY;
    private static java.lang.String BRIDGE_ARGS_METHOD_KEY;
    private static java.lang.String BUNDLE_AL_APPLINK_DATA_KEY;
    static java.lang.String BUNDLE_APPLINK_ARGS_KEY;
    private static java.lang.String DEFERRED_APP_LINK_ARGS_FIELD;
    private static java.lang.String DEFERRED_APP_LINK_CLASS_FIELD;
    private static java.lang.String DEFERRED_APP_LINK_CLICK_TIME_FIELD;
    private static java.lang.String DEFERRED_APP_LINK_EVENT;
    private static java.lang.String DEFERRED_APP_LINK_PATH;
    private static java.lang.String DEFERRED_APP_LINK_URL_FIELD;
    private static java.lang.String METHOD_ARGS_REF_KEY;
    private static java.lang.String METHOD_ARGS_TARGET_URL_KEY;
    private static java.lang.String REFERER_DATA_REF_KEY;
    private static final java.lang.String TAG;
    private android.os.Bundle argumentBundle;
    private org.json.JSONObject arguments;
    private java.lang.String ref;
    private android.net.Uri targetUri;

    // Methods
    static
    {
      TAG = com.facebook.AppLinkData.class.getCanonicalName();
    }

    private AppLinkData()
    {
      super();
    }

    /* synthetic */ static void access$000(
            android.content.Context p0,
            String p1,
            com.facebook.AppLinkData$CompletionHandler p2)
    {
      fetchDeferredAppLinkFromServer(p0, p1, p2);
    }

    public static com.facebook.AppLinkData createFromActivity(android.app.Activity p0)
    {
      android.content.Intent Intent; // RETVAL
      android.content.Intent v2;
      com.facebook.AppLinkData v3;
      Validate.notNull(p0, "activity");
      Intent = p0.getIntent();
      v2 = Intent;
      if ( Intent == null )
        return null;
      v3 = createFromAlApplinkData(Intent);
      if ( v3 == null )
        v3 = createFromJson(v2.getStringExtra("com.facebook.platform.APPLINK_ARGS"));
      if ( v3 == null )
        return createFromUri(v2.getData());
      return v3;
    }

    private static com.facebook.AppLinkData createFromAlApplinkData(android.content.Intent p0)
    {
      com.facebook.AppLinkData v1;
      android.os.Bundle BundleExtra;
      com.facebook.AppLinkData v4;
      String String; // RETVAL
      android.os.Bundle Bundle; // RETVAL
    
      v1 = null;
      BundleExtra = p0.getBundleExtra("al_applink_data");
      if ( BundleExtra != null )
      {
        v4 = new com.facebook.AppLinkData();
        v4.targetUri = p0.getData();
        if ( v4.targetUri == null )
        {
          String = BundleExtra.getString("target_url");
          if ( String != null )
            v4.targetUri = Uri.parse(String);
        }
        v4.argumentBundle = BundleExtra;
        v4.arguments = null;
        Bundle = BundleExtra.getBundle("referer_data");
        if ( Bundle != null )
          v4.ref = Bundle.getString("fb_ref");
        return v4;
      }
      return v1;
    }

    private static com.facebook.AppLinkData createFromJson(String p0)
    {
      com.facebook.AppLinkData v1;
      org.json.JSONObject v3;
      String String;
      com.facebook.AppLinkData v5;
      org.json.JSONObject JSONObject;
      v1 = null;
      if ( p0 != null )
      {
        try
        {
          v3 = new org.json.JSONObject(p0);
          String = v3.getString("version");
          if ( v3.getJSONObject("bridge_args").getString("method").equals("applink") && String.equals("2") )
          {
            v5 = new com.facebook.AppLinkData();
            v5.arguments = v3.getJSONObject("method_args");
            if ( v5.arguments.has("ref") )
            {
              v5.ref = v5.arguments.getString("ref");
            }
            else if ( v5.arguments.has("referer_data") )
            {
              JSONObject = v5.arguments.getJSONObject("referer_data");
              if ( JSONObject.has("fb_ref") )
                v5.ref = JSONObject.getString("fb_ref");
            }
            if ( v5.arguments.has("target_url") )
              v5.targetUri = Uri.parse(v5.arguments.getString("target_url"));
            v5.argumentBundle = toBundle(v5.arguments);
            v1 = v5;
          }
        }
        catch ( org.json.JSONException v7 )
        {
          Log.d(TAG, "Unable to parse AppLink JSON", v7);
          return v1;
        }
        catch ( com.facebook.FacebookException v8 )
        {
          Log.d(TAG, "Unable to parse AppLink JSON", v8);
        }
      }
      return v1;
    }

    private static com.facebook.AppLinkData createFromUri(android.net.Uri p0)
    {
      com.facebook.AppLinkData v1;
      if ( p0 == null )
        return null;
      v1 = new com.facebook.AppLinkData();
      v1.targetUri = p0;
      return v1;
    }

    public static void fetchDeferredAppLinkData(
            android.content.Context p0,
            com.facebook.AppLinkData$CompletionHandler p1)
    {
      fetchDeferredAppLinkData(p0, null, p1);
    }

    public static void fetchDeferredAppLinkData(
            android.content.Context p0,
            String p1,
            com.facebook.AppLinkData$CompletionHandler p2)
    {
      Validate.notNull(p0, "context");
      Validate.notNull(p2, "completionHandler");
      if ( p1 == null )
        p1 = Utility.getMetadataApplicationId(p0);
      Validate.notNull(p1, "applicationId");
      Settings.getExecutor().execute((Runnable)new com.facebook.AppLinkData$1(p0.getApplicationContext(), p1, p2));
    }

    private static void fetchDeferredAppLinkFromServer(
            android.content.Context p0,
            String p1,
            com.facebook.AppLinkData$CompletionHandler p2)
    {
      com.facebook.AppLinkData v3 = null;
      com.facebook.model.GraphObject v4;
      Object[] v5;
      String v6; // RETVAL
      com.facebook.model.GraphObject GraphObject; // RETVAL
      org.json.JSONObject InnerJSONObject;
      String v9;
      long v10;
      String v11;
      String v12;
      com.facebook.AppLinkData v13; // RETVAL
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            v3 = null;
            v4 = GraphObject$Factory.create();
            v4.setProperty("event", "DEFERRED_APP_LINK");
            Utility.setAppEventAttributionParameters(
            v4,
            AttributionIdentifiers.getAttributionIdentifiers(p0),
            AppEventsLogger.getAnonymousAppDeviceGUID(p0),
            Settings.getLimitEventAndDataUsage(p0));
            v4.setProperty("application_package_name", p0.getPackageName());
            v5 = new Object[1];
            v5[0] = p1;
            v6 = String.format("%s/activities", v5);
            try
            {
            GraphObject = Request.newPostRequest(null, v6, v4, null).executeAndWait().getGraphObject();
            if ( GraphObject != null )
            InnerJSONObject = GraphObject.getInnerJSONObject();
            else
            InnerJSONObject = null;
            if ( InnerJSONObject == null )
            { _pc = 1; continue _sm; }
            v9 = InnerJSONObject.optString("applink_args");
            v10 = InnerJSONObject.optLong("click_time", -1);
            v11 = InnerJSONObject.optString("applink_class");
            v12 = InnerJSONObject.optString("applink_url");
            if ( TextUtils.isEmpty(v9) )
            { _pc = 1; continue _sm; }
            v13 = createFromJson(v9);
            v3 = v13;
            if ( v10 != -1 )
            {
            try
            {
            if ( v13.arguments != null )
            v13.arguments.put("com.facebook.platform.APPLINK_TAP_TIME_UTC", v10);
            if ( v3.argumentBundle != null )
            v3.argumentBundle.putString("com.facebook.platform.APPLINK_TAP_TIME_UTC", Long.toString(v10));
            }
            catch ( org.json.JSONException e )
            {
            Log.d(TAG, "Unable to put tap time in AppLinkData.arguments");
            }
            }
            if ( v11 != null )
            {
            try
            {
            if ( v3.arguments != null )
            v3.arguments.put("com.facebook.platform.APPLINK_NATIVE_CLASS", v11);
            if ( v3.argumentBundle != null )
            v3.argumentBundle.putString("com.facebook.platform.APPLINK_NATIVE_CLASS", v11);
            }
            catch ( org.json.JSONException e )
            {
            Log.d(TAG, "Unable to put tap time in AppLinkData.arguments");
            }
            }
            if ( v12 == null )
            { _pc = 1; continue _sm; }
            try
            {
            if ( v3.arguments != null )
            v3.arguments.put("com.facebook.platform.APPLINK_NATIVE_URL", v12);
            if ( v3.argumentBundle != null )
            v3.argumentBundle.putString("com.facebook.platform.APPLINK_NATIVE_URL", v12);
            }
            catch ( org.json.JSONException e )
            {
            Log.d(TAG, "Unable to put tap time in AppLinkData.arguments");
            }
            }
            catch ( Exception e )
            {
            Utility.logd(TAG, "Unable to fetch deferred applink from server");
            }
            _pc = 1;
            continue _sm;
          }
          case 1: {
            p2.onDeferredAppLinkDataFetched(v3);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    private static android.os.Bundle toBundle(org.json.JSONObject p0)
 throws org.json.JSONException {
      android.os.Bundle v1;
      java.util.Iterator v2;
      String v3;
      Object v4; // RETVAL
      org.json.JSONArray v5;
      Object v6; // RETVAL
      android.os.Bundle[] v7;
      int i;
      String[] v9;
      int j;
      v1 = new android.os.Bundle();
      v2 = p0.keys();
      while ( v2.hasNext() )
      {
        v3 = (String)v2.next();
        v4 = p0.get(v3);
        if ( v4 instanceof org.json.JSONObject )
        {
          v1.putBundle(v3, AppLinkData.toBundle((org.json.JSONObject)v4));
        }
        else if ( v4 instanceof org.json.JSONArray )
        {
          v5 = (org.json.JSONArray)v4;
          if ( v5.length() != 0 )
          {
            v6 = v5.get(0);
            if ( v6 instanceof org.json.JSONObject )
            {
              v7 = new android.os.Bundle[v5.length()];
              for ( i = 0; i < v5.length(); ++i )
                v7[i] = AppLinkData.toBundle(v5.getJSONObject(i));
              v1.putParcelableArray(v3, v7);
            }
            else
            {
              if ( v6 instanceof org.json.JSONArray )
                throw new com.facebook.FacebookException("Nested arrays are not supported.");
              v9 = new String[v5.length()];
              for ( j = 0; j < v5.length(); ++j )
                v9[j] = v5.get(j).toString();
              v1.putStringArray(v3, v9);
            }
          }
          else
          {
            v1.putStringArray(v3, new String[0]);
          }
        }
        else
        {
          v1.putString(v3, v4.toString());
        }
      }
      return v1;
    }

    public android.os.Bundle getArgumentBundle()
    {
      return this.argumentBundle;
    }

    public org.json.JSONObject getArguments()
    {
      return this.arguments;
    }

    public String getRef()
    {
      return this.ref;
    }

    public android.os.Bundle getRefererData()
    {
      if ( this.argumentBundle != null )
        return this.argumentBundle.getBundle("referer_data");
      else
        return null;
    }

    public android.net.Uri getTargetUri()
    {
      return this.targetUri;
    }

}
