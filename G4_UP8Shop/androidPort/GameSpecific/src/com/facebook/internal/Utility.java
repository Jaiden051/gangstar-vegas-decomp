// Decompiled from classes.dex (SourceFile: Utility.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.content.pm.PackageInfo;
import android.os.Bundle;
import android.text.TextUtils;
import android.util.Log;
import android.webkit.CookieManager;
import android.webkit.CookieSyncManager;
import com.facebook.Request;
import com.facebook.Settings;
import java.net.URLDecoder;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.Collections;
public final class Utility {
    // Fields
    private static java.lang.String APPLICATION_FIELDS;
    private static java.lang.String APP_SETTINGS_PREFS_KEY_FORMAT;
    private static java.lang.String APP_SETTINGS_PREFS_STORE;
    private static java.lang.String APP_SETTING_DIALOG_CONFIGS;
    private static final java.lang.String[] APP_SETTING_FIELDS;
    private static java.lang.String APP_SETTING_NUX_CONTENT;
    private static java.lang.String APP_SETTING_NUX_ENABLED;
    private static java.lang.String APP_SETTING_SUPPORTS_IMPLICIT_SDK_LOGGING;
    public static int DEFAULT_STREAM_BUFFER_SIZE;
    private static java.lang.String DIALOG_CONFIG_DIALOG_NAME_FEATURE_NAME_SEPARATOR;
    private static java.lang.String DIALOG_CONFIG_NAME_KEY;
    private static java.lang.String DIALOG_CONFIG_URL_KEY;
    private static java.lang.String DIALOG_CONFIG_VERSIONS_KEY;
    private static java.lang.String EXTRA_APP_EVENTS_INFO_FORMAT_VERSION;
    private static java.lang.String HASH_ALGORITHM_MD5;
    private static java.lang.String HASH_ALGORITHM_SHA1;
    private static java.lang.String URL_SCHEME;
    private static java.lang.String UTF8;
    static java.lang.String UT_LOG_TAG;
    private static java.util.Map fetchedAppSettings;
    private static android.os.AsyncTask initialAppSettingsLoadTask;
    public static boolean s_isDebug;

    // Methods
    static
    {
      String[] v0;
      s_isDebug = false;
      v0 = new String[4];
      v0[0] = "supports_implicit_sdk_logging";
      v0[1] = "gdpv4_nux_content";
      v0[2] = "gdpv4_nux_enabled";
      v0[3] = "android_dialog_configs";
      APP_SETTING_FIELDS = v0;
      fetchedAppSettings = new java.util.concurrent.ConcurrentHashMap();
    }

    public Utility()
    {
      super();
    }

    /* synthetic */ static com.facebook.model.GraphObject access$000(String p0)
    {
      return getAppSettingsQueryResponse(p0);
    }

    /* synthetic */ static com.facebook.internal.Utility$FetchedAppSettings access$100(
            String p0,
            org.json.JSONObject p1)
    {
      return parseAppSettingsFromJSON(p0, p1);
    }

    /* synthetic */ static android.os.AsyncTask access$202(android.os.AsyncTask p0)
    {
      initialAppSettingsLoadTask = p0;
      return p0;
    }

    public static <T> boolean areObjectsEqual(T p0, T p1)
    {
      if ( p0 != null )
        return p0.equals(p1);
      else
        return p1 == null;
    }

    public static <T> java.util.ArrayList<T> arrayList(T[] p0)
    {
      java.util.ArrayList v1;
      int v2;
      int i;
      v1 = new java.util.ArrayList(p0.length);
      v2 = p0.length;
      for ( i = 0; i < v2; ++i )
        v1.add(p0[i]);
      return v1;
    }

    public static <T> java.util.List<T> asListNoNulls(T[] p0)
    {
      java.util.ArrayList v1;
      int v2;
      int i;
      Object v4;
      v1 = new java.util.ArrayList();
      v2 = p0.length;
      for ( i = 0; i < v2; ++i )
      {
        v4 = p0[i];
        if ( v4 != null )
          v1.add(v4);
      }
      return v1;
    }

    public static android.net.Uri buildUri(String p0, String p1, android.os.Bundle p2)
    {
      android.net.Uri.Builder v3;
      java.util.Iterator v4;
      String v5;
      Object v6; // RETVAL
    
      v3 = new android.net.Uri.Builder();
      v3.scheme("https");
      v3.authority(p0);
      v3.path(p1);
      v4 = p2.keySet().iterator();
      while ( v4.hasNext() )
      {
        v5 = (String)v4.next();
        v6 = p2.get(v5);
        if ( v6 instanceof String )
          v3.appendQueryParameter(v5, (String)v6);
      }
      return v3.build();
    }

    public static void clearCaches(android.content.Context p0)
    {
      ImageDownloader.clearCache(p0);
    }

    private static void clearCookiesForDomain(android.content.Context p0, String p1)
    {
      android.webkit.CookieManager Instance;
      String Cookie; // RETVAL
      String[] v4;
      int v5;
      int i;
      String[] v7; // RETVAL
    
      CookieSyncManager.createInstance(p0).sync();
      Instance = CookieManager.getInstance();
      Cookie = Instance.getCookie(p1);
      if ( Cookie != null )
      {
        v4 = Cookie.split(";");
        v5 = v4.length;
        for ( i = 0; i < v5; ++i )
        {
          v7 = v4[i].split("=");
          if ( v7.length > 0 )
            Instance.setCookie(p1, v7[0].trim() + "=;expires=Sat, 1 Jan 2000 00:00:01 UTC;");
        }
        Instance.removeExpiredCookie();
      }
    }

    public static void clearFacebookCookies(android.content.Context p0)
    {
      clearCookiesForDomain(p0, "facebook.com");
      clearCookiesForDomain(p0, ".facebook.com");
      clearCookiesForDomain(p0, "https://facebook.com");
      clearCookiesForDomain(p0, "https://.facebook.com");
    }

    public static void closeQuietly(java.io.Closeable p0)
    {
      if ( p0 != null )
      {
        try
        {
          p0.close();
        }
        catch ( java.io.IOException e )
        {
        }
      }
    }

    public static String coerceValueIfNullOrEmpty(String p0, String p1)
    {
      if ( !isNullOrEmpty(p0) )
        return p0;
      return p1;
    }

    static java.util.Map<String, Object> convertJSONObjectToHashMap(org.json.JSONObject p0)
    {
      java.util.HashMap v1;
      org.json.JSONArray v2;
      int i;
      String String;
      Object v5; // RETVAL
      java.util.Map v6;
      v1 = new java.util.HashMap();
      v2 = p0.names();
      for ( i = 0; i < v2.length(); ++i )
      {
        try
        {
          String = v2.getString(i);
          v5 = p0.get(String);
          v6 = (java.util.Map)v5;
          if ( v5 instanceof org.json.JSONObject )
            v6 = Utility.convertJSONObjectToHashMap((org.json.JSONObject)v5);
          v1.put(String, v6);
          continue;
        }
        catch ( org.json.JSONException e )
        {
        }
      }
      return v1;
    }

    public static void deleteDirectory(java.io.File p0)
    {
      java.io.File[] v1; // RETVAL
      int v2;
      int i;
      if ( p0.exists() )
      {
        if ( p0.isDirectory() )
        {
          v1 = p0.listFiles();
          v2 = v1.length;
          for ( i = 0; i < v2; ++i )
            Utility.deleteDirectory(v1[i]);
        }
        p0.delete();
      }
    }

    public static void disconnectQuietly(java.net.URLConnection p0)
    {
      if ( p0 instanceof java.net.HttpURLConnection )
        ((java.net.HttpURLConnection)p0).disconnect();
    }

    public static String getActivityName(android.content.Context p0)
    {
      if ( p0 == null )
        return "null";
      if ( p0 == p0.getApplicationContext() )
        return "unknown";
      return p0.getClass().getSimpleName();
    }

    private static com.facebook.model.GraphObject getAppSettingsQueryResponse(String p0)
    {
      android.os.Bundle v1;
      com.facebook.Request v2; // RETVAL
    
      v1 = new android.os.Bundle();
      v1.putString("fields", TextUtils.join(",", APP_SETTING_FIELDS));
      v2 = Request.newGraphPathRequest(null, p0, null);
      v2.setSkipClientToken(true);
      v2.setParameters(v1);
      return v2.executeAndWait().getGraphObject();
    }

    public static com.facebook.internal.Utility$DialogFeatureConfig getDialogFeatureConfig(
            String p0,
            String p1,
            String p2)
    {
      com.facebook.internal.Utility$FetchedAppSettings v5;
      java.util.Map v6;
      if ( isNullOrEmpty(p1) || isNullOrEmpty(p2) )
        return null;
      v5 = (com.facebook.internal.Utility$FetchedAppSettings)fetchedAppSettings.get(p0);
      if ( v5 != null && (v6 = (java.util.Map)v5.getDialogConfigurations().get(p1)) != null )
        return (com.facebook.internal.Utility$DialogFeatureConfig)v6.get(p2);
      else
        return null;
    }

    public static String getMetadataApplicationId(android.content.Context p0)
    {
      Validate.notNull(p0, "context");
      Settings.loadDefaultsFromMetadata(p0);
      return Settings.getApplicationId();
    }

    public static java.lang.reflect.Method getMethodQuietly(Class<?> p0, String p1, Class<?>[] p2)
    {
      try
      {
        return p0.getMethod(p1, p2);
      }
      catch ( NoSuchMethodException e )
      {
        return null;
      }
    }

    public static java.lang.reflect.Method getMethodQuietly(String p0, String p1, Class<?>[] p2)
    {
      try
      {
        return getMethodQuietly(Class.forName(p0), p1, p2);
      }
      catch ( ClassNotFoundException e )
      {
        return null;
      }
    }

    public static Object getStringPropertyAsJSON(org.json.JSONObject p0, String p1, String p2)
 throws org.json.JSONException {
      Object v3; // RETVAL
      Object Value;
      org.json.JSONObject v5;
      v3 = p0.opt(p1);
      if ( v3 != null && v3 instanceof String )
        Value = new org.json.JSONTokener((String)v3).nextValue();
      else
        Value = v3;
      if ( Value == null || Value instanceof org.json.JSONObject || Value instanceof org.json.JSONArray )
        return Value;
      if ( p2 == null )
        throw new com.facebook.FacebookException("Got an unexpected non-JSON object.");
      v5 = new org.json.JSONObject();
      v5.putOpt(p2, Value);
      return v5;
    }

    private static String hashBytes(java.security.MessageDigest p0, byte[] p1)
    {
      byte[] v2;
      StringBuilder v3;
      int v4;
      int i;
      int v6;
      p0.update(p1);
      v2 = p0.digest();
      v3 = new StringBuilder();
      v4 = v2.length;
      for ( i = 0; i < v4; ++i )
      {
        v6 = v2[i];
        v3.append(Integer.toHexString((v6 >> 4) & 0xF));
        v3.append(Integer.toHexString(v6 & 0xF));
      }
      return v3.toString();
    }

    private static String hashWithAlgorithm(String p0, String p1)
    {
      return hashWithAlgorithm(p0, p1.getBytes());
    }

    private static String hashWithAlgorithm(String p0, byte[] p1)
    {
      try
      {
        return hashBytes(MessageDigest.getInstance(p0), p1);
      }
      catch ( java.security.NoSuchAlgorithmException e )
      {
        return null;
      }
    }

    public static int[] intersectRanges(int[] p0, int[] p1)
    {
      int v2 = 0;
      int[] v4 = null;
      int v5 = 0;
      int v6 = 0;
      int v7 = 0;
      int v8 = 0;
      int v9 = 0;
      int v10 = 0;
      int v11 = 0;
      int v12 = 0;
      int v13 = 0;
      int v14 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v2 = 0;
            if ( !(p0 != null) ) { _pc = 3; continue _sm; }
            if ( p1 == null )
            return (int[])p0;
            v4 = new int[(p0.length + p1.length)];
            v5 = 0;
            v6 = 0;
            _pc = 1;
            continue _sm;
          case 1:
            if ( v5 >= p0.length || v2 >= p1.length )
            return Arrays.copyOf(v4, v6);
            v7 = p0[v5];
            v8 = p1[v2];
            if ( v5 >= p0.length - 1 )
            v9 = 0x7FFFFFFF;
            else
            v9 = p0[v5 + 1];
            if ( v2 >= p1.length - 1 )
            v10 = 0x7FFFFFFF;
            else
            v10 = p1[v2 + 1];
            if ( v7 >= v8 )
            {
            if ( v10 <= v7 )
            {
            v11 = 0x7FFFFFFF;
            v12 = 0x80000000;
            }
            else
            {
            if ( v10 > v9 )
            {
            v5 += 2;
            v13 = v9;
            v8 = v7;
            { _pc = 2; continue _sm; }
            }
            v11 = v10;
            v12 = v7;
            }
            }
            else
            {
            if ( v9 <= v8 )
            {
            v5 += 2;
            v13 = 0x7FFFFFFF;
            v8 = 0x80000000;
            { _pc = 2; continue _sm; }
            }
            if ( v9 <= v10 )
            {
            v5 += 2;
            v13 = v9;
            { _pc = 2; continue _sm; }
            }
            v11 = v10;
            v12 = v8;
            }
            v2 += 2;
            v8 = v12;
            v13 = v11;
            _pc = 2;
            continue _sm;
          case 2:
            if ( v8 != 0x80000000 )
            {
            v14 = v6 + 1;
            v4[v6] = v8;
            if ( v13 == 0x7FFFFFFF )
            return Arrays.copyOf(v4, ++v6);
            v6 += 2;
            v4[v14] = v13;
            }
            _pc = 1;
            continue _sm;
          case 3:
            return (int[])p1;
        }
      }
}

    public static Object invokeMethodQuietly(Object p0, java.lang.reflect.Method p1, Object[] p2)
    {
      Object v3;
      v3 = null;
      try
      {
        return p1.invoke(p0, p2);
      }
      catch ( IllegalAccessException e )
      {
        return v3;
      }
      catch ( java.lang.reflect.InvocationTargetException e )
      {
      }
      return v3;
    }

    public static boolean isNullOrEmpty(String p0)
    {
      return p0 == null || p0.length() == 0;
    }

    public static <T> boolean isNullOrEmpty(java.util.Collection<T> p0)
    {
      return p0 == null || p0.size() == 0;
    }

    public static <T> boolean isSubset(java.util.Collection<T> p0, java.util.Collection<T> p1)
    {
      boolean v2;
      java.util.HashSet v4;
      java.util.Iterator v5;
      v2 = false;
      if ( p1 != null && p1.size() != 0 )
      {
        v4 = new java.util.HashSet(p1);
        v5 = p0.iterator();
        while ( v5.hasNext() )
        {
          if ( !v4.contains(v5.next()) )
            return v2;
        }
        return true;
      }
      else if ( p0 == null || p0.size() == 0 )
      {
        return true;
      }
      return v2;
    }

    public static void loadAppSettingsAsync(android.content.Context p0, String p1)
    {
      Object[] v2;
      String v3;
      com.facebook.internal.Utility$1 v4;
      String String = null;
      org.json.JSONObject v7;
      if ( !isNullOrEmpty(p1) && !fetchedAppSettings.containsKey(p1) && initialAppSettingsLoadTask == null )
      {
        v2 = new Object[1];
        v2[0] = p1;
        v3 = String.format("com.facebook.internal.APP_SETTINGS.%s", v2);
        v4 = new com.facebook.internal.Utility$1(p1, p0, v3);
        initialAppSettingsLoadTask = v4;
        v4.execute((Void[])null);
        String = p0.getSharedPreferences("com.facebook.internal.preferences.APP_SETTINGS", 0).getString(v3, null);
        if ( !isNullOrEmpty(String) )
        {
          try
          {
            v7 = new org.json.JSONObject(String);
          }
          catch ( org.json.JSONException v8 )
          {
            logd("GAME", v8);
            v7 = null;
          }
          if ( v7 != null )
            parseAppSettingsFromJSON(p1, v7);
        }
      }
    }

    public static void logd(String p0, Exception p1)
    {
      if ( s_isDebug && p0 != null && p1 != null )
        Log.d(p0, p1.getClass().getSimpleName() + ": " + p1.getMessage());
    }

    public static void logd(String p0, String p1)
    {
      if ( s_isDebug && p0 != null && p1 != null )
        Log.d(p0, p1);
    }

    public static void logd(String p0, String p1, Throwable p2)
    {
      if ( s_isDebug && p0 != null && p1 != null )
        Log.d(p0, p1, p2);
    }

    static String md5hash(String p0)
    {
      return hashWithAlgorithm("MD5", p0);
    }

    private static com.facebook.internal.Utility$FetchedAppSettings parseAppSettingsFromJSON(
            String p0,
            org.json.JSONObject p1)
    {
      com.facebook.internal.Utility$FetchedAppSettings v2;
      v2 = new com.facebook.internal.Utility$FetchedAppSettings(p1.optBoolean("supports_implicit_sdk_logging", false), p1.optString("gdpv4_nux_content", ""), p1.optBoolean("gdpv4_nux_enabled", false), parseDialogConfigurations(p1.optJSONObject("android_dialog_configs")), null);
      fetchedAppSettings.put(p0, v2);
      return v2;
    }

    private static java.util.Map<String, java.util.Map<String, com.facebook.internal.Utility$DialogFeatureConfig>> parseDialogConfigurations(
            org.json.JSONObject p0)
    {
      java.util.HashMap v1;
      org.json.JSONArray v2;
      int i;
      com.facebook.internal.Utility$DialogFeatureConfig v4; // RETVAL
      com.facebook.internal.Utility$DialogFeatureConfig v5;
      String DialogName;
      java.util.Map v7;
      v1 = new java.util.HashMap();
      if ( p0 != null )
      {
        v2 = p0.optJSONArray("data");
        if ( v2 != null )
        {
          for ( i = 0; i < v2.length(); ++i )
          {
            v4 = Utility$DialogFeatureConfig.access$400(v2.optJSONObject(i));
            v5 = v4;
            if ( v4 != null )
            {
              DialogName = v4.getDialogName();
              v7 = (java.util.Map)v1.get(DialogName);
              if ( v7 == null )
              {
                v7 = new java.util.HashMap();
                v1.put(DialogName, v7);
              }
              v7.put(v5.getFeatureName(), v5);
            }
          }
        }
      }
      return v1;
    }

    public static android.os.Bundle parseUrlQueryString(String p0)
    {
      android.os.Bundle v1 = null;
      String[] v2 = null;
      int v3 = 0;
      int v4 = 0;
      String[] v5 = null; // RETVAL
      java.io.UnsupportedEncodingException _cv_1 = null;
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
              v1 = new android.os.Bundle();
              if ( !(!isNullOrEmpty(p0)) ) { _pc = 6; continue _sm; }
              v2 = p0.split("&");
              v3 = v2.length;
              v4 = 0;
              _pc = 1;
              continue _sm;
            case 1:
              if ( v4 >= v3 )
              return v1;
              v5 = v2[v4].split("=");
              _ehCatchPc = 2;
              if ( v5.length == 2 )
              {
              v1.putString(URLDecoder.decode(v5[0], "UTF-8"), URLDecoder.decode(v5[1], "UTF-8"));
              }
              else if ( v5.length == 1 )
              {
              v1.putString(URLDecoder.decode(v5[0], "UTF-8"), "");
              }
              _pc = 3;
              continue _sm;
            case 2:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof java.io.UnsupportedEncodingException) ) { _pc = 4; continue _sm; }
              _cv_1 = (java.io.UnsupportedEncodingException)_ehCaught;
              logd("GAME", _cv_1);
              _pc = 3;
              continue _sm;
            case 3:
              ++v4;
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              _pc = 1;
              continue _sm;
            case 6:
              return v1;
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

    public static void putObjectInBundle(android.os.Bundle p0, String p1, Object p2)
    {
      if ( p2 instanceof String )
      {
        p0.putString(p1, (String)p2);
      }
      else if ( p2 instanceof android.os.Parcelable )
      {
        p0.putParcelable(p1, (android.os.Parcelable)p2);
      }
      else
      {
        if ( !(p2 instanceof byte[]) )
          throw new com.facebook.FacebookException("attempted to add unsupported type to Bundle");
        p0.putByteArray(p1, (byte[])p2);
      }
    }

    public static com.facebook.internal.Utility$FetchedAppSettings queryAppSettings(String p0, boolean p1)
    {
      com.facebook.model.GraphObject AppSettingsQueryResponse; // RETVAL
    
      if ( !p1 && fetchedAppSettings.containsKey(p0) )
        return (com.facebook.internal.Utility$FetchedAppSettings)fetchedAppSettings.get(p0);
      AppSettingsQueryResponse = getAppSettingsQueryResponse(p0);
      if ( AppSettingsQueryResponse != null )
        return parseAppSettingsFromJSON(p0, AppSettingsQueryResponse.getInnerJSONObject());
      else
        return null;
    }

    public static String readStreamToString(java.io.InputStream p0)
    {
      java.io.Closeable v1 = null;
      java.io.Closeable v2 = null;
      java.io.InputStream v3 = null;
      java.io.InputStreamReader v4 = null;
      StringBuilder v5 = null;
      char[] i = null;
      int v7 = 0; // RETVAL
      String result = null; // RETVAL
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
              v2 = null;
              _ehCatchPc = 1;
              v3 = new java.io.BufferedInputStream(p0);
              _ehCatchPc = -1;
              _pc = 4;
              continue _sm;
            case 1:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 3; continue _sm; }
              _cv_1 = (Throwable)_ehCaught;
              v1 = null;
              _pc = 2;
              continue _sm;
            case 2:
              closeQuietly(v2);
              closeQuietly(v1);
              throw _cv_1;
            case 3:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 4:
              try
              {
              try
              {
              v4 = new java.io.InputStreamReader(v3);
              }
              catch ( Throwable v8 )
              {
              v1 = null;
              v2 = v3;
              { _pc = 2; continue _sm; }
              }
              v5 = new StringBuilder();
              for ( i = new char[2048]; ; v5.append(i, 0, v7) )
              {
              v7 = v4.read(i);
              if ( v7 == -1 )
              break;
              }
              result = v5.toString();
              }
              catch ( Throwable v8 )
              {
              v2 = v3;
              { _pc = 2; continue _sm; }
              }
              
              closeQuietly(v3);
              closeQuietly(v4);
              return result;
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

    public static boolean safeGetBooleanFromResponse(com.facebook.model.GraphObject p0, String p1)
    {
      Object Property;
      Property = Boolean.valueOf(false);
      if ( p0 != null )
        Property = (String)p0.getProperty(p1);
      if ( !(Property instanceof Boolean) )
        Property = Boolean.valueOf(false);
      return ((Boolean)Property).booleanValue();
    }

    public static String safeGetStringFromResponse(com.facebook.model.GraphObject p0, String p1)
    {
      String Property;
      Property = "";
      if ( p0 != null )
        Property = (String)p0.getProperty(p1);
      if ( !(Property instanceof String) )
        Property = "";
      return (String)Property;
    }

    public static void setAppEventAttributionParameters(
            com.facebook.model.GraphObject p0,
            com.facebook.internal.AttributionIdentifiers p1,
            String p2,
            boolean p3)
    {
      boolean v4;
      v4 = true;
      if ( p1 != null && p1.getAttributionId() != null )
        p0.setProperty("attribution", p1.getAttributionId());
      if ( p1 != null && p1.getAndroidAdvertiserId() != null )
      {
        p0.setProperty("advertiser_id", p1.getAndroidAdvertiserId());
        p0.setProperty("advertiser_tracking_enabled", Boolean.valueOf(!p1.isTrackingLimited()));
      }
      p0.setProperty("anon_id", p2);
      if ( p3 )
        v4 = false;
      p0.setProperty("application_tracking_enabled", Boolean.valueOf(v4));
    }

    public static void setAppEventExtendedDeviceInfoParameters(
            com.facebook.model.GraphObject p0,
            android.content.Context p1)
    {
      org.json.JSONArray v2;
      String PackageName;
      int v4;
      String v5;
      android.content.pm.PackageInfo PackageInfo; // RETVAL
    
      v2 = new org.json.JSONArray();
      v2.put("a1");
      PackageName = p1.getPackageName();
      v4 = -1;
      v5 = "";
      try
      {
        PackageInfo = p1.getPackageManager().getPackageInfo(PackageName, 0);
        v4 = PackageInfo.versionCode;
        v5 = PackageInfo.versionName;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
      }
      v2.put(PackageName);
      v2.put(v4);
      v2.put(v5);
      p0.setProperty("extinfo", v2.toString());
    }

    static String sha1hash(String p0)
    {
      return hashWithAlgorithm("SHA-1", p0);
    }

    static String sha1hash(byte[] p0)
    {
      return hashWithAlgorithm("SHA-1", p0);
    }

    public static boolean stringsEqualOrEmpty(String p0, String p1)
    {
      boolean isEmpty;
      boolean v3; // RETVAL
    
      isEmpty = TextUtils.isEmpty(p0);
      v3 = TextUtils.isEmpty(p1);
      return isEmpty && v3 || !isEmpty && !v3 && p0.equals(p1);
    }

    public static org.json.JSONArray tryGetJSONArrayFromResponse(com.facebook.model.GraphObject p0, String p1)
    {
      Object Property; // RETVAL
    
      if ( p0 == null )
        return null;
      Property = (String)p0.getProperty(p1);
      if ( Property instanceof org.json.JSONArray )
        return (org.json.JSONArray)Property;
      else
        return null;
    }

    public static org.json.JSONObject tryGetJSONObjectFromResponse(com.facebook.model.GraphObject p0, String p1)
    {
      Object Property; // RETVAL
    
      if ( p0 == null )
        return null;
      Property = (String)p0.getProperty(p1);
      if ( Property instanceof org.json.JSONObject )
        return (org.json.JSONObject)Property;
      else
        return null;
    }

    public static <T> java.util.Collection<T> unmodifiableCollection(T[] p0)
    {
      return Collections.unmodifiableCollection(Arrays.asList(p0));
    }

}
