// Decompiled from classes.dex (SourceFile: ServerProtocol.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import com.facebook.LoggingBehavior;
import com.facebook.Settings;
public final class ServerProtocol {
    // Fields
    private static java.lang.String DIALOG_AUTHORITY_FORMAT;
    public static java.lang.String DIALOG_PARAM_ACCESS_TOKEN;
    public static java.lang.String DIALOG_PARAM_APP_ID;
    public static java.lang.String DIALOG_PARAM_AUTH_TYPE;
    public static java.lang.String DIALOG_PARAM_CLIENT_ID;
    public static java.lang.String DIALOG_PARAM_DEFAULT_AUDIENCE;
    public static java.lang.String DIALOG_PARAM_DISPLAY;
    public static java.lang.String DIALOG_PARAM_E2E;
    public static java.lang.String DIALOG_PARAM_LEGACY_OVERRIDE;
    public static java.lang.String DIALOG_PARAM_REDIRECT_URI;
    public static java.lang.String DIALOG_PARAM_RESPONSE_TYPE;
    public static java.lang.String DIALOG_PARAM_RETURN_SCOPES;
    public static java.lang.String DIALOG_PARAM_SCOPE;
    public static java.lang.String DIALOG_PATH;
    public static java.lang.String DIALOG_REREQUEST_AUTH_TYPE;
    public static java.lang.String DIALOG_RESPONSE_TYPE_TOKEN;
    public static java.lang.String DIALOG_RETURN_SCOPES_TRUE;
    public static java.lang.String FALLBACK_DIALOG_DISPLAY_VALUE_TOUCH;
    public static java.lang.String FALLBACK_DIALOG_PARAM_APP_ID;
    public static java.lang.String FALLBACK_DIALOG_PARAM_BRIDGE_ARGS;
    public static java.lang.String FALLBACK_DIALOG_PARAM_KEY_HASH;
    public static java.lang.String FALLBACK_DIALOG_PARAM_METHOD_ARGS;
    public static java.lang.String FALLBACK_DIALOG_PARAM_METHOD_RESULTS;
    public static java.lang.String FALLBACK_DIALOG_PARAM_VERSION;
    public static java.lang.String GRAPH_API_VERSION;
    private static java.lang.String GRAPH_URL_FORMAT;
    private static java.lang.String GRAPH_VIDEO_URL_FORMAT;
    private static java.lang.String LEGACY_API_VERSION;
    private static final java.lang.String TAG;
    public static final java.util.Collection errorsProxyAuthDisabled;
    public static final java.util.Collection errorsUserCanceled;

    // Methods
    static
    {
      String[] v0;
      String[] v1;
      TAG = com.facebook.internal.ServerProtocol.class.getName();
      v0 = new String[2];
      v0[0] = "service_disabled";
      v0[1] = "AndroidAuthKillSwitchException";
      errorsProxyAuthDisabled = Utility.unmodifiableCollection(v0);
      v1 = new String[2];
      v1[0] = "access_denied";
      v1[1] = "OAuthAccessDeniedException";
      errorsUserCanceled = Utility.unmodifiableCollection(v1);
    }

    public ServerProtocol()
    {
      super();
    }

    public static final String getAPIVersion()
    {
      if ( Settings.getPlatformCompatibilityEnabled() )
        return "v1.0";
      else
        return "v2.2";
    }

    public static final String getDialogAuthority()
    {
      Object[] v0;
      v0 = new Object[1];
      v0[0] = Settings.getFacebookDomain();
      return String.format("m.%s", v0);
    }

    public static final String getGraphUrlBase()
    {
      Object[] v0;
      v0 = new Object[1];
      v0[0] = Settings.getFacebookDomain();
      return String.format("https://graph.%s", v0);
    }

    public static final String getGraphVideoUrlBase()
    {
      Object[] v0;
      v0 = new Object[1];
      v0[0] = Settings.getFacebookDomain();
      return String.format("https://graph-video.%s", v0);
    }

    public static android.os.Bundle getQueryParamsForPlatformActivityIntentWebFallback(
            android.content.Context p0,
            String p1,
            int p2,
            String p3,
            android.os.Bundle p4)
    {
      android.os.Bundle v5;
      String ApplicationSignature;
      android.os.Bundle v8;
      android.os.Bundle v9;
      org.json.JSONObject v10;
      org.json.JSONObject v11; // RETVAL
      org.json.JSONObject v12;
      v5 = null;
      ApplicationSignature = Settings.getApplicationSignature(p0);
      if ( !Utility.isNullOrEmpty(ApplicationSignature) )
      {
        v8 = new android.os.Bundle();
        v8.putString("android_key_hash", ApplicationSignature);
        v8.putString("app_id", Settings.getApplicationId());
        v8.putInt("version", p2);
        v8.putString("display", "touch");
        v9 = new android.os.Bundle();
        v9.putString("action_id", p1);
        v9.putString("app_name", p3);
        if ( p4 == null )
          p4 = new android.os.Bundle();
        try
        {
          v10 = BundleJSONConverter.convertToJSON(v9);
          v11 = BundleJSONConverter.convertToJSON(p4);
          v12 = v11;
          if ( v10 == null || v11 == null )
            return v5;
          v8.putString("bridge_args", v10.toString());
          v8.putString("method_args", v12.toString());
          return v8;
        }
        catch ( org.json.JSONException v13 )
        {
          Logger.log(LoggingBehavior.DEVELOPER_ERRORS, 6, TAG, "Error creating Url -- " + v13);
          return null;
        }
      }
      return v5;
    }

}
