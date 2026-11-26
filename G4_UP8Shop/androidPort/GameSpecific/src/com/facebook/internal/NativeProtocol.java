// Decompiled from classes.dex (SourceFile: NativeProtocol.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.content.ContentResolver;
import android.net.Uri;
import android.text.TextUtils;
import com.facebook.Settings;
import java.util.Arrays;
import java.util.UUID;
public final class NativeProtocol {
    // Fields
    public static java.lang.String ACTION_FEED_DIALOG;
    public static java.lang.String ACTION_FEED_DIALOG_REPLY;
    public static java.lang.String ACTION_LIKE_DIALOG;
    public static java.lang.String ACTION_LIKE_DIALOG_REPLY;
    public static java.lang.String ACTION_MESSAGE_DIALOG;
    public static java.lang.String ACTION_MESSAGE_DIALOG_REPLY;
    public static java.lang.String ACTION_OGACTIONPUBLISH_DIALOG;
    public static java.lang.String ACTION_OGACTIONPUBLISH_DIALOG_REPLY;
    public static java.lang.String ACTION_OGMESSAGEPUBLISH_DIALOG;
    public static java.lang.String ACTION_OGMESSAGEPUBLISH_DIALOG_REPLY;
    public static java.lang.String AUDIENCE_EVERYONE;
    public static java.lang.String AUDIENCE_FRIENDS;
    public static java.lang.String AUDIENCE_ME;
    public static java.lang.String BRIDGE_ARG_ACTION_ID_STRING;
    public static java.lang.String BRIDGE_ARG_APP_NAME_STRING;
    public static java.lang.String BRIDGE_ARG_ERROR_BUNDLE;
    public static java.lang.String BRIDGE_ARG_ERROR_CODE;
    public static java.lang.String BRIDGE_ARG_ERROR_DESCRIPTION;
    public static java.lang.String BRIDGE_ARG_ERROR_JSON;
    public static java.lang.String BRIDGE_ARG_ERROR_SUBCODE;
    public static java.lang.String BRIDGE_ARG_ERROR_TYPE;
    private static java.lang.String CONTENT_SCHEME;
    public static int DIALOG_REQUEST_CODE;
    public static java.lang.String ERROR_APPLICATION_ERROR;
    public static java.lang.String ERROR_NETWORK_ERROR;
    public static java.lang.String ERROR_PERMISSION_DENIED;
    public static java.lang.String ERROR_PROTOCOL_ERROR;
    public static java.lang.String ERROR_SERVICE_DISABLED;
    public static java.lang.String ERROR_UNKNOWN_ERROR;
    public static java.lang.String ERROR_USER_CANCELED;
    public static java.lang.String EXTRA_ACCESS_TOKEN;
    public static java.lang.String EXTRA_ACTION;
    public static java.lang.String EXTRA_ACTION_TYPE;
    public static java.lang.String EXTRA_APPLICATION_ID;
    public static java.lang.String EXTRA_APPLICATION_NAME;
    public static java.lang.String EXTRA_DATA_FAILURES_FATAL;
    public static java.lang.String EXTRA_DESCRIPTION;
    public static java.lang.String EXTRA_EXPIRES_SECONDS_SINCE_EPOCH;
    public static java.lang.String EXTRA_FRIEND_TAGS;
    public static java.lang.String EXTRA_GET_INSTALL_DATA_PACKAGE;
    public static java.lang.String EXTRA_IMAGE;
    public static java.lang.String EXTRA_LIKE_COUNT_STRING_WITHOUT_LIKE;
    public static java.lang.String EXTRA_LIKE_COUNT_STRING_WITH_LIKE;
    public static java.lang.String EXTRA_LINK;
    public static java.lang.String EXTRA_OBJECT_ID;
    public static java.lang.String EXTRA_OBJECT_IS_LIKED;
    public static java.lang.String EXTRA_PERMISSIONS;
    public static java.lang.String EXTRA_PHOTOS;
    public static java.lang.String EXTRA_PLACE_TAG;
    public static java.lang.String EXTRA_PREVIEW_PROPERTY_NAME;
    public static java.lang.String EXTRA_PROTOCOL_ACTION;
    public static java.lang.String EXTRA_PROTOCOL_BRIDGE_ARGS;
    public static java.lang.String EXTRA_PROTOCOL_CALL_ID;
    public static java.lang.String EXTRA_PROTOCOL_METHOD_ARGS;
    public static java.lang.String EXTRA_PROTOCOL_METHOD_RESULTS;
    public static java.lang.String EXTRA_PROTOCOL_VERSION;
    static java.lang.String EXTRA_PROTOCOL_VERSIONS;
    public static java.lang.String EXTRA_REF;
    public static java.lang.String EXTRA_SOCIAL_SENTENCE_WITHOUT_LIKE;
    public static java.lang.String EXTRA_SOCIAL_SENTENCE_WITH_LIKE;
    public static java.lang.String EXTRA_SUBTITLE;
    public static java.lang.String EXTRA_TITLE;
    public static java.lang.String EXTRA_UNLIKE_TOKEN;
    private static final com.facebook.internal.NativeProtocol$NativeAppInfo FACEBOOK_APP_INFO;
    private static java.lang.String FACEBOOK_PROXY_AUTH_ACTIVITY;
    public static java.lang.String FACEBOOK_PROXY_AUTH_APP_ID_KEY;
    public static java.lang.String FACEBOOK_PROXY_AUTH_E2E_KEY;
    public static java.lang.String FACEBOOK_PROXY_AUTH_PERMISSIONS_KEY;
    private static java.lang.String FACEBOOK_TOKEN_REFRESH_ACTIVITY;
    public static java.lang.String IMAGE_URL_KEY;
    public static java.lang.String IMAGE_USER_GENERATED_KEY;
    static java.lang.String INTENT_ACTION_PLATFORM_ACTIVITY;
    static java.lang.String INTENT_ACTION_PLATFORM_SERVICE;
    private static final java.util.List KNOWN_PROTOCOL_VERSIONS;
    public static int MESSAGE_GET_ACCESS_TOKEN_REPLY;
    public static int MESSAGE_GET_ACCESS_TOKEN_REQUEST;
    public static int MESSAGE_GET_INSTALL_DATA_REPLY;
    public static int MESSAGE_GET_INSTALL_DATA_REQUEST;
    public static int MESSAGE_GET_LIKE_STATUS_REPLY;
    public static int MESSAGE_GET_LIKE_STATUS_REQUEST;
    static int MESSAGE_GET_PROTOCOL_VERSIONS_REPLY;
    static int MESSAGE_GET_PROTOCOL_VERSIONS_REQUEST;
    public static java.lang.String METHOD_ARGS_ACTION;
    public static java.lang.String METHOD_ARGS_ACTION_TYPE;
    public static java.lang.String METHOD_ARGS_DATA_FAILURES_FATAL;
    public static java.lang.String METHOD_ARGS_DESCRIPTION;
    public static java.lang.String METHOD_ARGS_FRIEND_TAGS;
    public static java.lang.String METHOD_ARGS_IMAGE;
    public static java.lang.String METHOD_ARGS_LINK;
    public static java.lang.String METHOD_ARGS_OBJECT_ID;
    public static java.lang.String METHOD_ARGS_PHOTOS;
    public static java.lang.String METHOD_ARGS_PLACE_TAG;
    public static java.lang.String METHOD_ARGS_PREVIEW_PROPERTY_NAME;
    public static java.lang.String METHOD_ARGS_REF;
    public static java.lang.String METHOD_ARGS_SUBTITLE;
    public static java.lang.String METHOD_ARGS_TITLE;
    public static java.lang.String METHOD_ARGS_VIDEO;
    public static int NO_PROTOCOL_AVAILABLE;
    public static java.lang.String OPEN_GRAPH_CREATE_OBJECT_KEY;
    private static java.lang.String PLATFORM_PROVIDER_VERSIONS;
    private static java.lang.String PLATFORM_PROVIDER_VERSION_COLUMN;
    public static int PROTOCOL_VERSION_20121101;
    public static int PROTOCOL_VERSION_20130502;
    public static int PROTOCOL_VERSION_20130618;
    public static int PROTOCOL_VERSION_20131107;
    public static int PROTOCOL_VERSION_20140204;
    public static int PROTOCOL_VERSION_20140324;
    public static int PROTOCOL_VERSION_20140701;
    public static int PROTOCOL_VERSION_20141001;
    public static int PROTOCOL_VERSION_20141028;
    public static int PROTOCOL_VERSION_20141107;
    public static int PROTOCOL_VERSION_20141218;
    public static java.lang.String RESULT_ARGS_ACCESS_TOKEN;
    public static java.lang.String RESULT_ARGS_EXPIRES_SECONDS_SINCE_EPOCH;
    public static java.lang.String RESULT_ARGS_PERMISSIONS;
    public static java.lang.String STATUS_ERROR_CODE;
    public static java.lang.String STATUS_ERROR_DESCRIPTION;
    public static java.lang.String STATUS_ERROR_JSON;
    public static java.lang.String STATUS_ERROR_SUBCODE;
    public static java.lang.String STATUS_ERROR_TYPE;
    private static java.util.Map actionToAppInfoMap;
    private static java.util.List facebookAppInfoList;

    // Methods
    static
    {
      Integer[] v0;
      FACEBOOK_APP_INFO = new com.facebook.internal.NativeProtocol$KatanaAppInfo(null);
      facebookAppInfoList = buildFacebookAppList();
      actionToAppInfoMap = buildActionToAppInfoMap();
      v0 = new Integer[11];
      v0[0] = Integer.valueOf(20141218);
      v0[1] = Integer.valueOf(20141107);
      v0[2] = Integer.valueOf(20141028);
      v0[3] = Integer.valueOf(20141001);
      v0[4] = Integer.valueOf(20140701);
      v0[5] = Integer.valueOf(20140324);
      v0[6] = Integer.valueOf(20140204);
      v0[7] = Integer.valueOf(20131107);
      v0[8] = Integer.valueOf(20130618);
      v0[9] = Integer.valueOf(20130502);
      v0[10] = Integer.valueOf(20121101);
      KNOWN_PROTOCOL_VERSIONS = Arrays.asList(v0);
    }

    public NativeProtocol()
    {
      super();
    }

    private static java.util.Map<String, java.util.List<com.facebook.internal.NativeProtocol$NativeAppInfo>> buildActionToAppInfoMap()
    {
      java.util.HashMap v0;
      java.util.ArrayList v1;
      v0 = new java.util.HashMap();
      v1 = new java.util.ArrayList();
      v1.add(new com.facebook.internal.NativeProtocol$MessengerAppInfo(null));
      v0.put("com.facebook.platform.action.request.OGACTIONPUBLISH_DIALOG", facebookAppInfoList);
      v0.put("com.facebook.platform.action.request.FEED_DIALOG", facebookAppInfoList);
      v0.put("com.facebook.platform.action.request.LIKE_DIALOG", facebookAppInfoList);
      v0.put("com.facebook.platform.action.request.MESSAGE_DIALOG", v1);
      v0.put("com.facebook.platform.action.request.OGMESSAGEPUBLISH_DIALOG", v1);
      return v0;
    }

    private static java.util.List<com.facebook.internal.NativeProtocol$NativeAppInfo> buildFacebookAppList()
    {
      java.util.ArrayList v0;
      v0 = new java.util.ArrayList();
      v0.add(FACEBOOK_APP_INFO);
      v0.add(new com.facebook.internal.NativeProtocol$WakizashiAppInfo(null));
      return v0;
    }

    private static android.net.Uri buildPlatformProviderVersionURI(
            com.facebook.internal.NativeProtocol$NativeAppInfo p0)
    {
      return Uri.parse("content://" + p0.getPackage() + ".provider.PlatformProvider/versions");
    }

    public static int computeLatestAvailableVersionFromVersionSpec(
            java.util.TreeSet<Integer> p0,
            int p1,
            int[] p2)
    {
      int v3;
      java.util.Iterator v4;
      int v5;
      int v6;
      int v7;
      int v8; // RETVAL
      int i;
      v3 = -1;
      v4 = p0.descendingIterator();
      v5 = -1;
      v6 = p2.length - 1;
      while ( v4.hasNext() )
      {
        v7 = ((Integer)v4.next()).intValue();
        v8 = Math.max(v5, v7);
        for ( i = v6; i >= 0 && p2[i] > v7; --i )
          ;
        if ( i < 0 )
          break;
        if ( p2[i] == v7 )
        {
          if ( i % 2 == 0 )
            return Math.min(v8, p1);
          return v3;
        }
        v6 = i;
        v5 = v8;
      }
      return v3;
    }

    public static android.content.Intent createPlatformActivityIntent(
            android.content.Context p0,
            String p1,
            String p2,
            int p3,
            String p4,
            android.os.Bundle p5)
    {
      android.content.Intent ActivityIntent;
      android.os.Bundle v8;
      ActivityIntent = findActivityIntent(p0, "com.facebook.platform.PLATFORM_ACTIVITY", p2);
      if ( ActivityIntent == null )
        return null;
      ActivityIntent.putExtra("com.facebook.platform.protocol.PROTOCOL_VERSION", p3).putExtra("com.facebook.platform.protocol" +
                                                                                              ".PROTOCOL_ACTION", p2).putExtra("com.facebook.platform.extra.APPLICATION_ID", Utility.getMetadataApplicationId(p0));
      if ( isVersionCompatibleWithBucketedIntent(p3) )
      {
        v8 = new android.os.Bundle();
        v8.putString("action_id", p1);
        v8.putString("app_name", p4);
        ActivityIntent.putExtra("com.facebook.platform.protocol.BRIDGE_ARGS", v8);
        if ( p5 == null )
          p5 = new android.os.Bundle();
        ActivityIntent.putExtra("com.facebook.platform.protocol.METHOD_ARGS", p5);
      }
      else
      {
        ActivityIntent.putExtra("com.facebook.platform.protocol.CALL_ID", p1);
        ActivityIntent.putExtra("com.facebook.platform.extra.APPLICATION_NAME", p4);
        ActivityIntent.putExtras(p5);
      }
      return ActivityIntent;
    }

    public static android.content.Intent createPlatformServiceIntent(android.content.Context p0)
    {
      java.util.Iterator v1;
      com.facebook.internal.NativeProtocol$NativeAppInfo v2;
      android.content.Intent v3;
      v1 = facebookAppInfoList.iterator();
      while ( v1.hasNext() )
      {
        v2 = (com.facebook.internal.NativeProtocol$NativeAppInfo)v1.next();
        v3 = validateServiceIntent(
               p0,
               new android.content.Intent("com.facebook.platform.PLATFORM_SERVICE").setPackage(v2.getPackage()).addCategory("android.intent.category.DEFAULT"),
               v2);
        if ( v3 != null )
          return v3;
      }
      return null;
    }

    public static android.content.Intent createProxyAuthIntent(
            android.content.Context p0,
            String p1,
            java.util.List<String> p2,
            String p3,
            boolean p4,
            com.facebook.SessionDefaultAudience p5)
    {
      java.util.Iterator v6;
      com.facebook.internal.NativeProtocol$NativeAppInfo v7;
      android.content.Intent v8;
      android.content.Intent v9;
      v6 = facebookAppInfoList.iterator();
      while ( v6.hasNext() )
      {
        v7 = (com.facebook.internal.NativeProtocol$NativeAppInfo)v6.next();
        v8 = new android.content.Intent().setClassName(v7.getPackage(), "com.facebook.katana.ProxyAuth").putExtra("client_id", p1);
        if ( !Utility.isNullOrEmpty(p2) )
          v8.putExtra("scope", TextUtils.join(",", p2));
        if ( !Utility.isNullOrEmpty(p3) )
          v8.putExtra("e2e", p3);
        v8.putExtra("response_type", "token");
        v8.putExtra("return_scopes", "true");
        v8.putExtra("default_audience", p5.getNativeProtocolAudience());
        if ( !Settings.getPlatformCompatibilityEnabled() )
        {
          v8.putExtra("legacy_override", "v2.2");
          if ( p4 )
            v8.putExtra("auth_type", "rerequest");
        }
        v9 = validateActivityIntent(p0, v8, v7);
        if ( v9 != null )
          return v9;
      }
      return null;
    }

    public static android.content.Intent createTokenRefreshIntent(android.content.Context p0)
    {
      java.util.Iterator v1;
      com.facebook.internal.NativeProtocol$NativeAppInfo v2;
      android.content.Intent v3;
      v1 = facebookAppInfoList.iterator();
      while ( v1.hasNext() )
      {
        v2 = (com.facebook.internal.NativeProtocol$NativeAppInfo)v1.next();
        v3 = validateServiceIntent(
               p0,
               new android.content.Intent().setClassName(v2.getPackage(), "com.facebook.katana.platform.TokenRefreshService"),
               v2);
        if ( v3 != null )
          return v3;
      }
      return null;
    }

    private static android.content.Intent findActivityIntent(
            android.content.Context p0,
            String p1,
            String p2)
    {
      java.util.List v3;
      android.content.Intent i;
      java.util.Iterator v6;
      com.facebook.internal.NativeProtocol$NativeAppInfo v7;
      v3 = (java.util.List)actionToAppInfoMap.get(p2);
      if ( v3 == null )
        return null;
      v6 = v3.iterator();
      for ( i = null;
            i == null;
            i = validateActivityIntent(
                  p0,
                  new android.content.Intent().setAction(p1).setPackage(v7.getPackage()).addCategory("android.intent.category.DEFAULT"),
                  v7) )
      {
        if ( !v6.hasNext() )
          break;
        v7 = (com.facebook.internal.NativeProtocol$NativeAppInfo)v6.next();
      }
      return i;
    }

    private static java.util.TreeSet<Integer> getAllAvailableProtocolVersionsForAppInfo(
            android.content.Context p0,
            com.facebook.internal.NativeProtocol$NativeAppInfo p1)
    {
      java.util.TreeSet v2 = null;
      android.content.ContentResolver ContentResolver = null;
      String[] v4 = null;
      android.net.Uri v5 = null; // RETVAL
      android.database.Cursor v6 = null; // RETVAL
      android.database.Cursor v7 = null;
      Throwable _cv_1 = null;
      int _ehCatchPc = -1;
      Throwable _ehEx = null;
      Throwable _ehCaught = null;
      int _pc = 0;
      _sm:
      while ( true )
      {
        try
        {
          switch ( _pc )
          {
            case 0:
              v2 = new java.util.TreeSet();
              ContentResolver = p0.getContentResolver();
              v4 = new String[1];
              v4[0] = "version";
              v5 = buildPlatformProviderVersionURI(p1);
              _ehCatchPc = 1;
              v6 = ContentResolver.query(v5, v4, null, null, null);
              _ehCatchPc = -1;
              _pc = 4;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v7 = null;
              _pc = 2;
              continue _sm;
            case 2:
              if ( v7 != null )
              v7.close();
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              v7 = v6;
              if ( v6 != null )
              {
              while ( true )
              {
              try
              {
              if ( !v7.moveToNext() )
              break;
              v2.add(Integer.valueOf(v7.getInt(v7.getColumnIndex("version"))));
              }
              catch ( Throwable v8 )
              {
              { _pc = 2; continue _sm; }
              }
              }
              }
              if ( v7 != null )
              v7.close();
              return v2;
          }
        }
        catch ( Throwable _ehT )
        {
          if ( _ehCatchPc >= 0 )
          {
            _ehEx = _ehT;
            _pc = _ehCatchPc;
            continue _sm;
          }
          throw com.gameloft.android.DecompRT.sneakyThrow(_ehT);
        }
      }
}

    public static android.os.Bundle getBridgeArgumentsFromIntent(android.content.Intent p0)
    {
      if ( isVersionCompatibleWithBucketedIntent(getProtocolVersionFromIntent(p0)) )
        return p0.getBundleExtra("com.facebook.platform.protocol.BRIDGE_ARGS");
      else
        return null;
    }

    public static java.util.UUID getCallIdFromIntent(android.content.Intent p0)
    {
      java.util.UUID v1;
      android.os.Bundle BundleExtra; // RETVAL
      String StringExtra;
      v1 = null;
      if ( p0 != null )
      {
        if ( isVersionCompatibleWithBucketedIntent(getProtocolVersionFromIntent(p0)) )
        {
          BundleExtra = p0.getBundleExtra("com.facebook.platform.protocol.BRIDGE_ARGS");
          StringExtra = BundleExtra != null ? BundleExtra.getString("action_id") : null;
        }
        else
        {
          StringExtra = p0.getStringExtra("com.facebook.platform.protocol.CALL_ID");
        }
        if ( StringExtra != null )
        {
          try
          {
            return UUID.fromString(StringExtra);
          }
          catch ( IllegalArgumentException e )
          {
          }
        }
      }
      return v1;
    }

    public static android.os.Bundle getErrorDataFromResultIntent(android.content.Intent p0)
    {
      android.os.Bundle BridgeArgumentsFromIntent; // RETVAL
    
      if ( !isErrorResult(p0) )
        return null;
      BridgeArgumentsFromIntent = getBridgeArgumentsFromIntent(p0);
      if ( BridgeArgumentsFromIntent != null )
        return BridgeArgumentsFromIntent.getBundle("error");
      else
        return p0.getExtras();
    }

    public static Exception getExceptionFromErrorData(android.os.Bundle p0)
    {
      String String;
      String v4;
      if ( p0 == null )
        return null;
      String = p0.getString("error_type");
      if ( String == null )
        String = p0.getString("com.facebook.platform.status.ERROR_TYPE");
      v4 = p0.getString("error_description");
      if ( v4 == null )
        v4 = p0.getString("com.facebook.platform.status.ERROR_DESCRIPTION");
      if ( String != null && String.equalsIgnoreCase("UserCanceled") )
        return new com.facebook.FacebookOperationCanceledException(v4);
      else
        return new com.facebook.FacebookException(v4);
    }

    public static int getLatestAvailableProtocolVersionForAction(
            android.content.Context p0,
            String p1,
            int[] p2)
    {
      return getLatestAvailableProtocolVersionForAppInfoList(p0, (java.util.List)actionToAppInfoMap.get(p1), p2);
    }

    private static int getLatestAvailableProtocolVersionForAppInfo(
            android.content.Context p0,
            com.facebook.internal.NativeProtocol$NativeAppInfo p1,
            int[] p2)
    {
      return computeLatestAvailableVersionFromVersionSpec(
               getAllAvailableProtocolVersionsForAppInfo(p0, p1),
               getLatestKnownVersion(),
               p2);
    }

    private static int getLatestAvailableProtocolVersionForAppInfoList(
            android.content.Context p0,
            java.util.List<com.facebook.internal.NativeProtocol$NativeAppInfo> p1,
            int[] p2)
    {
      int LatestAvailableProtocolVersionForAppInfo;
      java.util.Iterator v5;
      if ( p1 == null )
        return -1;
      v5 = p1.iterator();
      while ( v5.hasNext() )
      {
        LatestAvailableProtocolVersionForAppInfo = getLatestAvailableProtocolVersionForAppInfo(
                                                     p0,
                                                     (com.facebook.internal.NativeProtocol$NativeAppInfo)v5.next(),
                                                     p2);
        if ( LatestAvailableProtocolVersionForAppInfo != -1 )
          return LatestAvailableProtocolVersionForAppInfo;
      }
      return -1;
    }

    public static int getLatestAvailableProtocolVersionForService(android.content.Context p0, int p1)
    {
      int[] v2;
      v2 = new int[1];
      v2[0] = p1;
      return getLatestAvailableProtocolVersionForAppInfoList(p0, facebookAppInfoList, v2);
    }

    public static final int getLatestKnownVersion()
    {
      return ((Integer)KNOWN_PROTOCOL_VERSIONS.get(0)).intValue();
    }

    public static int getProtocolVersionFromIntent(android.content.Intent p0)
    {
      return p0.getIntExtra("com.facebook.platform.protocol.PROTOCOL_VERSION", 0);
    }

    public static android.os.Bundle getSuccessResultsFromIntent(android.content.Intent p0)
    {
      int ProtocolVersionFromIntent;
      android.os.Bundle Extras;
      ProtocolVersionFromIntent = getProtocolVersionFromIntent(p0);
      Extras = p0.getExtras();
      if ( isVersionCompatibleWithBucketedIntent(ProtocolVersionFromIntent) && Extras != null )
        return Extras.getBundle("com.facebook.platform.protocol.RESULT_ARGS");
      return Extras;
    }

    public static boolean isErrorResult(android.content.Intent p0)
    {
      android.os.Bundle BridgeArgumentsFromIntent; // RETVAL
    
      BridgeArgumentsFromIntent = getBridgeArgumentsFromIntent(p0);
      if ( BridgeArgumentsFromIntent != null )
        return BridgeArgumentsFromIntent.containsKey("error");
      else
        return p0.hasExtra("com.facebook.platform.status.ERROR_TYPE");
    }

    public static boolean isVersionCompatibleWithBucketedIntent(int p0)
    {
      return KNOWN_PROTOCOL_VERSIONS.contains(Integer.valueOf(p0)) && p0 >= 20140701;
    }

    static android.content.Intent validateActivityIntent(
            android.content.Context p0,
            android.content.Intent p1,
            com.facebook.internal.NativeProtocol$NativeAppInfo p2)
    {
      android.content.pm.ResolveInfo v4; // RETVAL
    
      if ( p1 == null )
        return null;
      v4 = p0.getPackageManager().resolveActivity(p1, 0);
      if ( v4 == null )
        return null;
      if ( !p2.validateSignature(p0, (v4.activityInfo).packageName) )
        return null;
      return p1;
    }

    static android.content.Intent validateServiceIntent(
            android.content.Context p0,
            android.content.Intent p1,
            com.facebook.internal.NativeProtocol$NativeAppInfo p2)
    {
      android.content.pm.ResolveInfo v4; // RETVAL
    
      if ( p1 == null )
        return null;
      v4 = p0.getPackageManager().resolveService(p1, 0);
      if ( v4 == null )
        return null;
      if ( !p2.validateSignature(p0, v4.serviceInfo.packageName) )
        return null;
      return p1;
    }

}
