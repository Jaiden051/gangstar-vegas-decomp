// Decompiled from classes.dex (SourceFile: Settings.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.model.GraphObject$Factory;
import android.content.pm.ApplicationInfo;
import android.content.pm.PackageInfo;
import android.net.Uri;
import android.util.Base64;
import android.util.Log;
import com.facebook.internal.AttributionIdentifiers;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import com.facebook.model.GraphObject;
import java.security.MessageDigest;
import java.util.Arrays;
import java.util.Collections;
import java.util.concurrent.TimeUnit;
public final class Settings {
    // Fields
    private static java.lang.String ANALYTICS_EVENT;
    public static java.lang.String APPLICATION_ID_PROPERTY;
    private static java.lang.String ATTRIBUTION_ID_COLUMN_NAME;
    private static final android.net.Uri ATTRIBUTION_ID_CONTENT_URI;
    private static java.lang.String ATTRIBUTION_PREFERENCES;
    public static java.lang.String CLIENT_TOKEN_PROPERTY;
    private static int DEFAULT_CORE_POOL_SIZE;
    private static int DEFAULT_KEEP_ALIVE;
    private static int DEFAULT_MAXIMUM_POOL_SIZE;
    private static final java.util.concurrent.ThreadFactory DEFAULT_THREAD_FACTORY;
    private static final java.util.concurrent.BlockingQueue DEFAULT_WORK_QUEUE;
    private static java.lang.String FACEBOOK_COM;
    private static final java.lang.Object LOCK;
    private static java.lang.String MOBILE_INSTALL_EVENT;
    private static java.lang.String PUBLISH_ACTIVITY_PATH;
    private static final java.lang.String TAG;
    private static volatile java.lang.String appClientToken;
    private static volatile java.lang.String appVersion;
    private static volatile java.lang.String applicationId;
    private static volatile boolean defaultsLoaded;
    private static volatile java.util.concurrent.Executor executor;
    private static volatile java.lang.String facebookDomain;
    private static volatile boolean isDebugEnabled;
    private static final java.util.HashSet loggingBehaviors;
    private static java.util.concurrent.atomic.AtomicLong onProgressThreshold;
    private static volatile boolean platformCompatibilityEnabled;
    public static boolean s_isDebug;
    private static java.lang.Boolean sdkInitialized;

    // Methods
    static
    {
      com.facebook.LoggingBehavior[] v0;
      TAG = com.facebook.Settings.class.getCanonicalName();
      s_isDebug = false;
      v0 = new com.facebook.LoggingBehavior[1];
      v0[0] = LoggingBehavior.DEVELOPER_ERRORS;
      loggingBehaviors = new java.util.HashSet(Arrays.asList(v0));
      defaultsLoaded = false;
      facebookDomain = "facebook.com";
      onProgressThreshold = new java.util.concurrent.atomic.AtomicLong(0x10000);
      isDebugEnabled = false;
      LOCK = new Object();
      ATTRIBUTION_ID_CONTENT_URI = Uri.parse("content://com.facebook.katana.provider.AttributionIdProvider");
      DEFAULT_WORK_QUEUE = new java.util.concurrent.LinkedBlockingQueue(10);
      DEFAULT_THREAD_FACTORY = (java.util.concurrent.ThreadFactory)new com.facebook.Settings$1();
      sdkInitialized = Boolean.valueOf(false);
    }

    public Settings()
    {
      super();
    }

    public static final void addLoggingBehavior(com.facebook.LoggingBehavior p0)
    {
      java.util.HashSet v1;
      v1 = loggingBehaviors;
      synchronized ( v1 )
      {
        loggingBehaviors.add(p0);
      }
    }

    public static final void clearLoggingBehaviors()
    {
      java.util.HashSet v0;
      v0 = loggingBehaviors;
      synchronized ( v0 )
      {
        loggingBehaviors.clear();
      }
    }

    public static String getAppVersion()
    {
      return appVersion;
    }

    public static String getApplicationId()
    {
      return applicationId;
    }

    public static String getApplicationSignature(android.content.Context p0)
    {
      String v1;
      android.content.pm.PackageManager PackageManager;
      String PackageName; // RETVAL
      android.content.pm.PackageInfo PackageInfo;
      android.content.pm.Signature[] v6;
      java.security.MessageDigest Instance;
      v1 = null;
      if ( p0 == null )
        return v1;
      PackageManager = p0.getPackageManager();
      if ( PackageManager == null )
        return v1;
      PackageName = p0.getPackageName();
      try
      {
        PackageInfo = PackageManager.getPackageInfo(PackageName, 64);
        v6 = PackageInfo.signatures;
        if ( v6 != null && v6.length != 0 )
        {
          try
          {
            Instance = MessageDigest.getInstance("SHA-1");
            Instance.update(PackageInfo.signatures[0].toByteArray());
            return Base64.encodeToString(Instance.digest(), 9);
          }
          catch ( java.security.NoSuchAlgorithmException e )
          {
          }
        }
        return v1;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
      }
      return v1;
    }

    private static java.util.concurrent.Executor getAsyncTaskExecutor()
    {
      java.lang.reflect.Field Field; // RETVAL
      Object v1; // RETVAL
    
      try
      {
        Field = android.os.AsyncTask.class.getField("THREAD_POOL_EXECUTOR");
        try
        {
          v1 = Field.get(null);
          if ( v1 != null )
          {
            if ( v1 instanceof java.util.concurrent.Executor )
              return (java.util.concurrent.Executor)v1;
            else
              return null;
          }
          else
          {
            return null;
          }
        }
        catch ( IllegalAccessException e )
        {
          return null;
        }
      }
      catch ( NoSuchFieldException e )
      {
        return null;
      }
    }

    public static String getAttributionId(android.content.ContentResolver p0)
    {
      int v1 = 0;
      String[] v2 = null;
      android.database.Cursor v4 = null; // RETVAL
      android.database.Cursor v5 = null;
      String String = null;
      Exception _cv_1 = null;
      Throwable _cv_2 = null;
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
              v1 = 1;
              _ehCatchPc = 10;
              v2 = new String[1];
              v2[0] = "aid";
              v4 = p0.query(ATTRIBUTION_ID_CONTENT_URI, v2, null, null, null);
              v5 = v4;
              if ( !(v4 == null) ) { _pc = 2; continue _sm; }
              _pc = 1;
              continue _sm;
            case 1:
              if ( v5 != null )
              v5.close();
              return null;
            case 2:
              _ehCatchPc = 7;
              _ehCatchPc = 3;
              if ( !v4.moveToFirst() )
              { _pc = 1; continue _sm; }
              String = v5.getString(v5.getColumnIndex("aid"));
              if ( v5 != null )
              v5.close();
              return String;
            case 3:
              _ehCatchPc = 7;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 5; continue _sm; }
              _cv_1 = (Exception)_ehCaught;
              _pc = 4;
              continue _sm;
            case 4:
              Log.d(TAG, "Caught unexpected exception in getAttributionId(): " + _cv_1.toString());
              _pc = 6;
              continue _sm;
            case 5:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 6:
              _ehCatchPc = 10;
              _pc = 9;
              continue _sm;
            case 7:
              _ehCatchPc = 10;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 8; continue _sm; }
              _pc = 12;
              continue _sm;
            case 8:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 9:
              if ( v5 != null )
              v5.close();
              return null;
            case 10:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof Exception) ) { _pc = 11; continue _sm; }
              v5 = null;
              _pc = 4;
              continue _sm;
            case 11:
              if ( !(_ehCaught instanceof Throwable) ) { _pc = 13; continue _sm; }
              _cv_2 = (Throwable)_ehCaught;
              v5 = null;
              _pc = 12;
              continue _sm;
            case 12:
              if ( v5 != null )
              v5.close();
              throw _cv_2;
            case 13:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
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

    public static String getClientToken()
    {
      return appClientToken;
    }

    public static java.util.concurrent.Executor getExecutor()
    {
      Object v0;
      java.util.concurrent.Executor v1;
      java.util.concurrent.Executor AsyncTaskExecutor;
      v0 = LOCK;
      synchronized ( v0 )
      {
        v1 = executor;
        if ( v1 == null )
        {
          AsyncTaskExecutor = getAsyncTaskExecutor();
          if ( AsyncTaskExecutor == null )
            AsyncTaskExecutor = new java.util.concurrent.ThreadPoolExecutor(5, 128, 1, TimeUnit.SECONDS, DEFAULT_WORK_QUEUE, DEFAULT_THREAD_FACTORY);
          executor = AsyncTaskExecutor;
        }
        return executor;
      }
    }

    public static String getFacebookDomain()
    {
      return facebookDomain;
    }

    public static boolean getLimitEventAndDataUsage(android.content.Context p0)
    {
      return p0.getSharedPreferences("com.facebook.sdk.appEventPreferences", 0).getBoolean("limitEventUsage", false);
    }

    public static final java.util.Set<com.facebook.LoggingBehavior> getLoggingBehaviors()
    {
      java.util.HashSet v0;
      v0 = loggingBehaviors;
      synchronized ( v0 )
      {
        return Collections.unmodifiableSet(new java.util.HashSet(loggingBehaviors));
      }
    }

    public static long getOnProgressThreshold()
    {
      return onProgressThreshold.get();
    }

    public static boolean getPlatformCompatibilityEnabled()
    {
      return platformCompatibilityEnabled;
    }

    public static String getSdkVersion()
    {
      return "3.23.0";
    }

    public static final boolean isDebugEnabled()
    {
      return isDebugEnabled;
    }

    public static final boolean isLoggingBehaviorEnabled(com.facebook.LoggingBehavior p0)
    {
      java.util.HashSet v1;
      v1 = loggingBehaviors;
      synchronized ( v1 )
      {
        return s_isDebug && loggingBehaviors.contains(p0);
      }
    }

    public static final boolean isLoggingEnabled()
    {
      return isDebugEnabled();
    }

    public static void loadDefaultsFromMetadata(android.content.Context p0)
    {
      android.content.pm.ApplicationInfo ApplicationInfo; // RETVAL
      android.content.pm.ApplicationInfo v2;
      String v3;
      String v4;
      defaultsLoaded = true;
      if ( p0 == null )
        return;
      try
      {
        ApplicationInfo = p0.getPackageManager().getApplicationInfo(p0.getPackageName(), 128);
        v2 = ApplicationInfo;
        if ( ApplicationInfo != null && ApplicationInfo.metaData != null )
        {
          v3 = applicationId;
          if ( v3 == null )
            applicationId = ApplicationInfo.metaData.getString("com.facebook.sdk.ApplicationId");
          v4 = appClientToken;
          if ( v4 == null )
            appClientToken = v2.metaData.getString("com.facebook.sdk.ClientToken");
        }
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
      }
    }

    static void loadDefaultsFromMetadataIfNeeded(android.content.Context p0)
    {
      if ( !defaultsLoaded )
        loadDefaultsFromMetadata(p0);
    }

    static com.facebook.Response publishInstallAndWaitForResponse(android.content.Context p0, String p1)
    {
      Exception v2 = null;
      com.facebook.internal.AttributionIdentifiers AttributionIdentifiers = null;
      android.content.SharedPreferences SharedPreferences = null;
      String v6 = null;
      String v7 = null;
      long Long = 0L;
      String String = null;
      com.facebook.model.GraphObject v10 = null;
      Object[] v11 = null;
      com.facebook.Request v12 = null; // RETVAL
      com.facebook.Request v13 = null;
      com.facebook.model.GraphObject v14 = null;
      com.facebook.model.GraphObject v15 = null;
      com.facebook.Request[] v16 = null;
      com.facebook.Response v17 = null;
      android.content.SharedPreferences.Editor v18 = null;
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
              if ( !(p0 == null || p1 == null) ) { _pc = 1; continue _sm; }
              _ehEx = null;
              _ehCatchPc = 8;
              throw new IllegalArgumentException("Both context and applicationId must be non-null");
            case 1:
              AttributionIdentifiers = AttributionIdentifiers.getAttributionIdentifiers(p0);
              SharedPreferences = p0.getSharedPreferences("com.facebook.sdk.attributionTracking", 0);
              v6 = p1 + "ping";
              v7 = p1 + "json";
              Long = SharedPreferences.getLong(v6, 0);
              String = SharedPreferences.getString(v7, null);
              v10 = GraphObject$Factory.create();
              v10.setProperty("event", "MOBILE_APP_INSTALL");
              Utility.setAppEventAttributionParameters(
              v10,
              AttributionIdentifiers,
              AppEventsLogger.getAnonymousAppDeviceGUID(p0),
              getLimitEventAndDataUsage(p0));
              v10.setProperty("application_package_name", p0.getPackageName());
              v11 = new Object[1];
              v11[0] = p1;
              v12 = Request.newPostRequest(null, String.format("%s/activities", v11), v10, null);
              v13 = v12;
              if ( !(Long != 0) ) { _pc = 7; continue _sm; }
              if ( !(String != null) ) { _pc = 6; continue _sm; }
              _ehCatchPc = 3;
              v14 = GraphObject$Factory.create(new org.json.JSONObject(String));
              _pc = 2;
              continue _sm;
            case 2:
              v15 = v14;
              _ehCatchPc = -1;
              _pc = 5;
              continue _sm;
            case 3:
              _ehCatchPc = -1;
              _ehCaught = _ehEx; _ehEx = null;
              if ( !(_ehCaught instanceof org.json.JSONException) ) { _pc = 4; continue _sm; }
              v15 = null;
              _pc = 5;
              continue _sm;
            case 4:
              throw com.gameloft.android.DecompRT.sneakyThrow(_ehCaught);
            case 5:
              if ( v15 != null )
              return new com.facebook.Response(null, null, null, v15, true);
              v16 = new com.facebook.Request[1];
              v16[0] = v13;
              return (com.facebook.Response)Response.createResponsesFromString(
              "true",
              null,
              new com.facebook.RequestBatch(v16),
              true).get(0);
            case 6:
              v14 = null;
              _pc = 2;
              continue _sm;
            case 7:
              v17 = v12.executeAndWait();
              v18 = SharedPreferences.edit();
              v18.putLong(v6, System.currentTimeMillis());
              if ( v17.getGraphObject() != null && v17.getGraphObject().getInnerJSONObject() != null )
              v18.putString(v7, v17.getGraphObject().getInnerJSONObject().toString());
              v18.apply();
              _ehCatchPc = -1;
              _pc = 10;
              continue _sm;
            case 8:
              _ehCatchPc = -1;
              if ( !((_ehEx != null && (_ehEx instanceof Exception))) ) { _pc = 9; continue _sm; }
              _ehCaught = _ehEx; _ehEx = null;
              v2 = (Exception)_ehCaught;
              Utility.logd("Facebook-publish", v2);
              return new com.facebook.Response(null, null, new com.facebook.FacebookRequestError(null, v2));
            case 9:
              if ( _ehEx != null ) { Throwable _tEx = _ehEx; _ehEx = null; throw com.gameloft.android.DecompRT.sneakyThrow(_tEx); }
              _pc = 10;
              continue _sm;
            case 10:
              _ehCatchPc = -1;
              return v17;
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

    static void publishInstallAsync(android.content.Context p0, String p1, com.facebook.Request$Callback p2)
    {
      getExecutor().execute((Runnable)new com.facebook.Settings$2(p0.getApplicationContext(), p1, p2));
    }

    public static final void removeLoggingBehavior(com.facebook.LoggingBehavior p0)
    {
      java.util.HashSet v1;
      v1 = loggingBehaviors;
      synchronized ( v1 )
      {
        loggingBehaviors.remove(p0);
      }
    }

    public static synchronized void sdkInitialize(android.content.Context p0)
    {
      if ( !sdkInitialized.booleanValue() )
      {
        try
        {
          loadDefaultsFromMetadataIfNeeded(p0);
          Utility.loadAppSettingsAsync(p0, getApplicationId());
          BoltsMeasurementEventListener.getInstance(p0.getApplicationContext());
          sdkInitialized = Boolean.valueOf(true);
        }
        finally
        {
        }
      }
    }

    public static void setAppVersion(String p0)
    {
      appVersion = p0;
    }

    public static void setApplicationId(String p0)
    {
      applicationId = p0;
    }

    public static void setClientToken(String p0)
    {
      appClientToken = p0;
    }

    public static void setExecutor(java.util.concurrent.Executor p0)
    {
      Object v1;
      Validate.notNull(p0, "executor");
      v1 = LOCK;
      synchronized ( v1 )
      {
        executor = p0;
      }
    }

    public static void setFacebookDomain(String p0)
    {
      facebookDomain = p0;
    }

    public static final void setIsDebugEnabled(boolean p0)
    {
      isDebugEnabled = p0;
    }

    public static final void setIsLoggingEnabled(boolean p0)
    {
      isDebugEnabled = p0;
    }

    public static void setLimitEventAndDataUsage(android.content.Context p0, boolean p1)
    {
      p0.getSharedPreferences("com.facebook.sdk.appEventPreferences", 0).edit().putBoolean("limitEventUsage", p1).apply();
    }

    public static void setOnProgressThreshold(long p0)
    {
      onProgressThreshold.set(p0);
    }

    public static void setPlatformCompatibilityEnabled(boolean p0)
    {
      platformCompatibilityEnabled = p0;
    }

}
