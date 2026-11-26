// Decompiled from classes.dex (SourceFile: AppEventsLogger.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.content.Intent;
import android.os.Bundle;
import android.support.v4.content.LocalBroadcastManager;
import android.util.Log;
import bolts.AppLinks;
import com.facebook.internal.AttributionIdentifiers;
import com.facebook.internal.Logger;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
import java.util.UUID;
import java.util.concurrent.TimeUnit;
public class AppEventsLogger {
    // Fields
    public static java.lang.String ACTION_APP_EVENTS_FLUSHED;
    public static java.lang.String APP_EVENTS_EXTRA_FLUSH_RESULT;
    public static java.lang.String APP_EVENTS_EXTRA_NUM_EVENTS_FLUSHED;
    static java.lang.String APP_EVENT_PREFERENCES;
    private static int APP_SUPPORTS_ATTRIBUTION_ID_RECHECK_PERIOD_IN_SECONDS;
    private static int FLUSH_APP_SESSION_INFO_IN_SECONDS;
    private static int FLUSH_PERIOD_IN_SECONDS;
    private static int NUM_LOG_EVENTS_TO_TRY_TO_FLUSH_AFTER;
    private static java.lang.String SOURCE_APPLICATION_HAS_BEEN_SET_BY_THIS_INTENT;
    private static final java.lang.String TAG;
    private static java.lang.String anonymousAppDeviceGUID;
    private static android.content.Context applicationContext;
    private static java.util.concurrent.ScheduledThreadPoolExecutor backgroundExecutor;
    private static com.facebook.AppEventsLogger$FlushBehavior flushBehavior;
    private static boolean isOpenedByApplink;
    private static boolean requestInFlight;
    private static java.lang.String sourceApplication;
    private static java.util.Map stateMap;
    private static java.lang.Object staticLock;
    private final com.facebook.AppEventsLogger$AccessTokenAppIdPair accessTokenAppId;
    private final android.content.Context context;

    // Methods
    static
    {
      TAG = com.facebook.AppEventsLogger.class.getCanonicalName();
      stateMap = new java.util.concurrent.ConcurrentHashMap();
      flushBehavior = AppEventsLogger$FlushBehavior.AUTO;
      staticLock = new Object();
    }

    private AppEventsLogger(android.content.Context p0, String p1, com.facebook.Session p2)
    {
      super();
      Object v4;
      Validate.notNull(p0, "context");
      this.context = p0;
      if ( p2 == null )
        p2 = Session.getActiveSession();
      if ( p2 != null && (p1 == null || p1.equals(p2.getApplicationId())) )
      {
        this.accessTokenAppId = new com.facebook.AppEventsLogger$AccessTokenAppIdPair(p2);
      }
      else
      {
        if ( p1 == null )
          p1 = Utility.getMetadataApplicationId(p0);
        this.accessTokenAppId = new com.facebook.AppEventsLogger$AccessTokenAppIdPair(null, p1);
      }
      v4 = staticLock;
      synchronized ( v4 )
      {
        if ( applicationContext == null )
          applicationContext = p0.getApplicationContext();
      }
      initializeTimersIfNeeded();
    
    }

    /* synthetic */ static void access$100(com.facebook.AppEventsLogger p0, long p1, String p3)
    {
      p0.logAppSessionResumeEvent(p1, p3);
    }

    /* synthetic */ static android.content.Context access$1000()
    {
      return applicationContext;
    }

    /* synthetic */ static String access$1300()
    {
      return TAG;
    }

    /* synthetic */ static java.util.concurrent.ScheduledThreadPoolExecutor access$1400()
    {
      return backgroundExecutor;
    }

    /* synthetic */ static void access$200(com.facebook.AppEventsLogger p0, long p1)
    {
      p0.logAppSessionSuspendEvent(p1);
    }

    /* synthetic */ static void access$300(com.facebook.AppEventsLogger$FlushReason p0)
    {
      flushAndWait(p0);
    }

    /* synthetic */ static Object access$400()
    {
      return staticLock;
    }

    /* synthetic */ static java.util.Map access$500()
    {
      return stateMap;
    }

    /* synthetic */ static com.facebook.AppEventsLogger$SessionEventsState access$600(
            android.content.Context p0,
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p1)
    {
      return getSessionEventsState(p0, p1);
    }

    /* synthetic */ static void access$700()
    {
      flushIfNecessary();
    }

    /* synthetic */ static void access$900(
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p0,
            com.facebook.Request p1,
            com.facebook.Response p2,
            com.facebook.AppEventsLogger$SessionEventsState p3,
            com.facebook.AppEventsLogger$FlushStatistics p4)
    {
      handleResponse(p0, p1, p2, p3, p4);
    }

    private static int accumulatePersistedEvents()
    {
      com.facebook.AppEventsLogger$PersistedEvents v0;
      java.util.Iterator v1;
      int v2;
      com.facebook.AppEventsLogger$AccessTokenAppIdPair v3;
      com.facebook.AppEventsLogger$SessionEventsState SessionEventsState;
      java.util.List Events; // RETVAL
    
      v0 = AppEventsLogger$PersistedEvents.readAndClearStore(applicationContext);
      v1 = v0.keySet().iterator();
      v2 = 0;
      while ( v1.hasNext() )
      {
        v3 = (com.facebook.AppEventsLogger$AccessTokenAppIdPair)v1.next();
        SessionEventsState = getSessionEventsState(applicationContext, v3);
        Events = v0.getEvents(v3);
        SessionEventsState.accumulatePersistedEvents(Events);
        v2 += Events.size();
      }
      return v2;
    }

    public static void activateApp(android.content.Context p0)
    {
      Settings.sdkInitialize(p0);
      activateApp(p0, Utility.getMetadataApplicationId(p0));
    }

    public static void activateApp(android.content.Context p0, String p1)
    {
      if ( p0 == null || p1 == null )
        throw new IllegalArgumentException("Both context and applicationId must be non-null");
      if ( p0 instanceof android.app.Activity )
      {
        setSourceApplication((android.app.Activity)p0);
      }
      else
      {
        resetSourceApplication();
        Log.d(
          com.facebook.AppEventsLogger.class.getName(),
          "To set source application the context of activateApp must be an instance of Activity");
      }
      Settings.publishInstallAsync(p0, p1, null);
      backgroundExecutor.execute((Runnable)new com.facebook.AppEventsLogger$1(new com.facebook.AppEventsLogger(p0, p1, null), System.currentTimeMillis(), getSourceApplication()));
    }

    private static com.facebook.AppEventsLogger$FlushStatistics buildAndExecuteRequests(
            com.facebook.AppEventsLogger$FlushReason p0,
            java.util.Set<com.facebook.AppEventsLogger$AccessTokenAppIdPair> p1)
    {
      com.facebook.AppEventsLogger$FlushStatistics v2;
      boolean LimitEventAndDataUsage;
      java.util.List v4;
      java.util.Iterator v5;
      com.facebook.AppEventsLogger$AccessTokenAppIdPair v6;
      com.facebook.AppEventsLogger$SessionEventsState SessionEventsState; // RETVAL
      com.facebook.Request v8; // RETVAL
      Object[] v9;
      java.util.Iterator i;
      v2 = new com.facebook.AppEventsLogger$FlushStatistics(null);
      LimitEventAndDataUsage = Settings.getLimitEventAndDataUsage(applicationContext);
      v4 = new java.util.ArrayList();
      v5 = p1.iterator();
      while ( v5.hasNext() )
      {
        v6 = (com.facebook.AppEventsLogger$AccessTokenAppIdPair)v5.next();
        SessionEventsState = getSessionEventsState(v6);
        if ( SessionEventsState != null )
        {
          v8 = buildRequestForSession(v6, SessionEventsState, LimitEventAndDataUsage, v2);
          if ( v8 != null )
            v4.add(v8);
        }
      }
      if ( v4.size() <= 0 )
        return null;
      v9 = new Object[2];
      v9[0] = Integer.valueOf(v2.numEvents);
      v9[1] = p0.toString();
      Logger.log(LoggingBehavior.APP_EVENTS, TAG, "Flushing %d events due to %s.", v9);
      for ( i = v4.iterator(); i.hasNext(); ((com.facebook.Request)i.next()).executeAndWait() )
        ;
      return v2;
    }

    private static com.facebook.Request buildRequestForSession(
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p0,
            com.facebook.AppEventsLogger$SessionEventsState p1,
            boolean p2,
            com.facebook.AppEventsLogger$FlushStatistics p3)
    {
      String ApplicationId;
      com.facebook.internal.Utility$FetchedAppSettings AppSettings;
      Object[] v6;
      com.facebook.Request v7;
      android.os.Bundle Parameters;
      int v11; // RETVAL
    
      ApplicationId = p0.getApplicationId();
      AppSettings = Utility.queryAppSettings(ApplicationId, false);
      v6 = new Object[1];
      v6[0] = ApplicationId;
      v7 = Request.newPostRequest(null, String.format("%s/activities", v6), null, null);
      Parameters = v7.getParameters();
      if ( Parameters == null )
        Parameters = new android.os.Bundle();
      Parameters.putString("access_token", p0.getAccessToken());
      v7.setParameters(Parameters);
      if ( AppSettings == null )
        return null;
      v11 = p1.populateRequest(v7, AppSettings.supportsImplicitLogging(), p2);
      if ( v11 == 0 )
        return null;
      p3.numEvents += v11;
      v7.setCallback((com.facebook.Request$Callback)new com.facebook.AppEventsLogger$7(p0, v7, p1, p3));
      return v7;
    }

    public static void deactivateApp(android.content.Context p0)
    {
      deactivateApp(p0, Utility.getMetadataApplicationId(p0));
    }

    public static void deactivateApp(android.content.Context p0, String p1)
    {
      if ( p0 == null || p1 == null )
        throw new IllegalArgumentException("Both context and applicationId must be non-null");
      resetSourceApplication();
      backgroundExecutor.execute((Runnable)new com.facebook.AppEventsLogger$2(new com.facebook.AppEventsLogger(p0, p1, null), System.currentTimeMillis()));
    }

    static void eagerFlush()
    {
      if ( getFlushBehavior() != AppEventsLogger$FlushBehavior.EXPLICIT_ONLY )
        flush(AppEventsLogger$FlushReason.EAGER_FLUSHING_EVENT);
    }

    private static void flush(com.facebook.AppEventsLogger$FlushReason p0)
    {
      Settings.getExecutor().execute((Runnable)new com.facebook.AppEventsLogger$6(p0));
    }

    private static void flushAndWait(com.facebook.AppEventsLogger$FlushReason p0)
    {
      Object v1;
      java.util.Set v2;
      com.facebook.AppEventsLogger$FlushStatistics v3;
      Object v4;
      android.content.Intent v5;
      v1 = staticLock;
      synchronized ( v1 )
      {
        if ( requestInFlight )
          return;
        requestInFlight = true;
        v2 = new java.util.HashSet(stateMap.keySet());
      }
      accumulatePersistedEvents();
      v3 = null;
      try
      {
        v3 = buildAndExecuteRequests(p0, v2);
      }
      catch ( Exception v7 )
      {
        Utility.logd(TAG, "Caught unexpected exception while flushing: ", v7);
      }
      v4 = staticLock;
      synchronized ( v4 )
      {
        requestInFlight = false;
      }
      if ( v3 != null )
      {
        v5 = new android.content.Intent("com.facebook.sdk.APP_EVENTS_FLUSHED");
        v5.putExtra("com.facebook.sdk.APP_EVENTS_NUM_EVENTS_FLUSHED", v3.numEvents);
        v5.putExtra("com.facebook.sdk.APP_EVENTS_FLUSH_RESULT", v3.result);
        LocalBroadcastManager.getInstance(applicationContext).sendBroadcast(v5);
      }
    }

    private static void flushIfNecessary()
    {
      Object v0;
      v0 = staticLock;
      synchronized ( v0 )
      {
        if ( getFlushBehavior() != AppEventsLogger$FlushBehavior.EXPLICIT_ONLY && getAccumulatedEventCount() > 100 )
          flush(AppEventsLogger$FlushReason.EVENT_THRESHOLD);
      }
    }

    private static int getAccumulatedEventCount()
    {
      Object v0;
      java.util.Iterator v1;
      int v2;
      v0 = staticLock;
      synchronized ( v0 )
      {
        v1 = stateMap.values().iterator();
        v2 = 0;
        while ( v1.hasNext() )
          v2 += ((com.facebook.AppEventsLogger$SessionEventsState)v1.next()).getAccumulatedEventCount();
        return v2;
      }
    }

    static String getAnonymousAppDeviceGUID(android.content.Context p0)
    {
      Object v1;
      String String; // RETVAL
    
      if ( anonymousAppDeviceGUID != null )
        return anonymousAppDeviceGUID;
      v1 = staticLock;
      synchronized ( v1 )
      {
        if ( anonymousAppDeviceGUID == null )
        {
          String = p0.getSharedPreferences("com.facebook.sdk.appEventPreferences", 0).getString("anonymousAppDeviceGUID", null);
          anonymousAppDeviceGUID = String;
          if ( String == null )
          {
            anonymousAppDeviceGUID = "XZ" + UUID.randomUUID().toString();
            p0.getSharedPreferences("com.facebook.sdk.appEventPreferences", 0).edit().putString("anonymousAppDeviceGUID", anonymousAppDeviceGUID).apply();
          }
        }
        return anonymousAppDeviceGUID;
      }
    }

    public static com.facebook.AppEventsLogger$FlushBehavior getFlushBehavior()
    {
      Object v0;
      v0 = staticLock;
      synchronized ( v0 )
      {
        return flushBehavior;
      }
    }

    public static boolean getLimitEventUsage(android.content.Context p0)
    {
      return Settings.getLimitEventAndDataUsage(p0);
    }

    private static com.facebook.AppEventsLogger$SessionEventsState getSessionEventsState(
            android.content.Context p0,
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p1)
    {
      com.facebook.AppEventsLogger$SessionEventsState v2;
      com.facebook.internal.AttributionIdentifiers v3;
      com.facebook.internal.AttributionIdentifiers AttributionIdentifiers = null;
      Object v5;
      com.facebook.AppEventsLogger$SessionEventsState v6;
      v2 = (com.facebook.AppEventsLogger$SessionEventsState)stateMap.get(p1);
      v3 = null;
      if ( v2 == null )
      {
        AttributionIdentifiers = AttributionIdentifiers.getAttributionIdentifiers(p0);
        v3 = AttributionIdentifiers;
      }
      v5 = staticLock;
      synchronized ( v5 )
      {
        v6 = (com.facebook.AppEventsLogger$SessionEventsState)stateMap.get(p1);
        if ( v6 == null )
        {
          v6 = new com.facebook.AppEventsLogger$SessionEventsState(v3, p0.getPackageName(), getAnonymousAppDeviceGUID(p0));
          stateMap.put(p1, v6);
        }
        return v6;
      }
    }

    private static com.facebook.AppEventsLogger$SessionEventsState getSessionEventsState(
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p0)
    {
      Object v1;
      v1 = staticLock;
      synchronized ( v1 )
      {
        return (com.facebook.AppEventsLogger$SessionEventsState)stateMap.get(p0);
      }
    }

    static String getSourceApplication()
    {
      String v0;
      v0 = "Unclassified";
      if ( isOpenedByApplink )
        v0 = "Applink";
      if ( sourceApplication != null )
        return v0 + "(" + sourceApplication + ")";
      return v0;
    }

    private static void handleResponse(
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p0,
            com.facebook.Request p1,
            com.facebook.Response p2,
            com.facebook.AppEventsLogger$SessionEventsState p3,
            com.facebook.AppEventsLogger$FlushStatistics p4)
    {
      com.facebook.FacebookRequestError Error; // RETVAL
      com.facebook.FacebookRequestError v6;
      com.facebook.AppEventsLogger$FlushResult v7;
      String v8;
      com.facebook.AppEventsLogger$FlushResult v9;
      String v10;
      String v11;
      Object[] v12;
      Object[] v13;
      Error = p2.getError();
      v6 = Error;
      v7 = AppEventsLogger$FlushResult.SUCCESS;
      if ( Error != null )
      {
        if ( Error.getErrorCode() == -1 )
        {
          v8 = "Failed: No Connectivity";
          v9 = AppEventsLogger$FlushResult.NO_CONNECTIVITY;
        }
        else
        {
          v13 = new Object[2];
          v13[0] = p2.toString();
          v13[1] = v6.toString();
          v8 = String.format("Failed:\n  Response: %s\n  Error %s", v13);
          v9 = AppEventsLogger$FlushResult.SERVER_ERROR;
        }
      }
      else
      {
        v8 = "Success";
        v9 = v7;
      }
      if ( Settings.isLoggingBehaviorEnabled(LoggingBehavior.APP_EVENTS) )
      {
        v10 = (String)p1.getTag();
        try
        {
          v11 = new org.json.JSONArray(v10).toString(2);
        }
        catch ( org.json.JSONException e )
        {
          v11 = "<Can't encode events for debug logging>";
        }
        v12 = new Object[3];
        v12[0] = p1.getGraphObject().toString();
        v12[1] = v8;
        v12[2] = v11;
        Logger.log(LoggingBehavior.APP_EVENTS, TAG, "Flush completed\nParams: %s\n  Result: %s\n  Events JSON: %s", v12);
      }
      p3.clearInFlightAndStats(v6 != null);
      if ( v9 == AppEventsLogger$FlushResult.NO_CONNECTIVITY )
        AppEventsLogger$PersistedEvents.persistEvents(applicationContext, p0, p3);
      if ( v9 != AppEventsLogger$FlushResult.SUCCESS && p4.result != AppEventsLogger$FlushResult.NO_CONNECTIVITY )
        p4.result = v9;
    }

    private static void initializeTimersIfNeeded()
    {
      Object v0;
      v0 = staticLock;
      synchronized ( v0 )
      {
        if ( backgroundExecutor != null )
          return;
        backgroundExecutor = new java.util.concurrent.ScheduledThreadPoolExecutor(1);
      }
      backgroundExecutor.scheduleAtFixedRate((Runnable)new com.facebook.AppEventsLogger$3(), 0, 15, TimeUnit.SECONDS);
      backgroundExecutor.scheduleAtFixedRate((Runnable)new com.facebook.AppEventsLogger$4(), 0, 86400, TimeUnit.SECONDS);
    }

    private void logAppSessionResumeEvent(long p0, String p2)
    {
      AppEventsLogger$PersistedAppSessionInfo.onResume(applicationContext, this.accessTokenAppId, this, p0, p2);
    }

    private void logAppSessionSuspendEvent(long p0)
    {
      AppEventsLogger$PersistedAppSessionInfo.onSuspend(applicationContext, this.accessTokenAppId, this, p0);
    }

    private static void logEvent(
            android.content.Context p0,
            com.facebook.AppEventsLogger$AppEvent p1,
            com.facebook.AppEventsLogger$AccessTokenAppIdPair p2)
    {
      Settings.getExecutor().execute((Runnable)new com.facebook.AppEventsLogger$5(p0, p2, p1));
    }

    private void logEvent(String p0, Double p1, android.os.Bundle p2, boolean p3)
    {
      logEvent(this.context, new com.facebook.AppEventsLogger$AppEvent(this.context, p0, p1, p2, p3), this.accessTokenAppId);
    }

    public static com.facebook.AppEventsLogger newLogger(android.content.Context p0)
    {
      return new com.facebook.AppEventsLogger(p0, null, null);
    }

    public static com.facebook.AppEventsLogger newLogger(
            android.content.Context p0,
            com.facebook.Session p1)
    {
      return new com.facebook.AppEventsLogger(p0, null, p1);
    }

    public static com.facebook.AppEventsLogger newLogger(android.content.Context p0, String p1)
    {
      return new com.facebook.AppEventsLogger(p0, p1, null);
    }

    public static com.facebook.AppEventsLogger newLogger(
            android.content.Context p0,
            String p1,
            com.facebook.Session p2)
    {
      return new com.facebook.AppEventsLogger(p0, p1, p2);
    }

    private static void notifyDeveloperError(String p0)
    {
      Logger.log(LoggingBehavior.DEVELOPER_ERRORS, "AppEvents", p0);
    }

    public static void onContextStop()
    {
      AppEventsLogger$PersistedEvents.persistEvents(applicationContext, stateMap);
    }

    static void resetSourceApplication()
    {
      sourceApplication = null;
      isOpenedByApplink = false;
    }

    public static void setFlushBehavior(com.facebook.AppEventsLogger$FlushBehavior p0)
    {
      Object v1;
      v1 = staticLock;
      synchronized ( v1 )
      {
        flushBehavior = p0;
      }
    }

    public static void setLimitEventUsage(android.content.Context p0, boolean p1)
    {
      Settings.setLimitEventAndDataUsage(p0, p1);
    }

    private static void setSourceApplication(android.app.Activity p0)
    {
      android.content.ComponentName CallingActivity = null; // RETVAL
      String PackageName = null;
      android.content.Intent Intent = null; // RETVAL
      android.content.Intent v4 = null;
      android.os.Bundle AppLinkData = null; // RETVAL
      android.os.Bundle Bundle = null; // RETVAL
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            CallingActivity = p0.getCallingActivity();
            if ( !(CallingActivity != null) ) { _pc = 3; continue _sm; }
            PackageName = CallingActivity.getPackageName();
            if ( !(PackageName.equals(p0.getPackageName())) ) { _pc = 2; continue _sm; }
            _pc = 1;
            continue _sm;
          case 1:
            resetSourceApplication();
            return;
          case 2:
            sourceApplication = PackageName;
            _pc = 3;
            continue _sm;
          case 3:
            Intent = p0.getIntent();
            v4 = Intent;
            if ( Intent == null )
            { _pc = 1; continue _sm; }
            if ( Intent.getBooleanExtra("_fbSourceApplicationHasBeenSet", false) )
            { _pc = 1; continue _sm; }
            AppLinkData = AppLinks.getAppLinkData(v4);
            if ( AppLinkData == null )
            { _pc = 1; continue _sm; }
            isOpenedByApplink = true;
            Bundle = AppLinkData.getBundle("referer_app_link");
            if ( Bundle != null )
            {
            sourceApplication = Bundle.getString("package");
            v4.putExtra("_fbSourceApplicationHasBeenSet", true);
            }
            else
            {
            sourceApplication = null;
            }
            return;
        }
      }
}

    static void setSourceApplication(String p0, boolean p1)
    {
      sourceApplication = p0;
      isOpenedByApplink = p1;
    }

    public void flush()
    {
      flush(AppEventsLogger$FlushReason.EXPLICIT);
    }

    public String getApplicationId()
    {
      return this.accessTokenAppId.getApplicationId();
    }

    boolean isValidForSession(com.facebook.Session p0)
    {
      return this.accessTokenAppId.equals(new com.facebook.AppEventsLogger$AccessTokenAppIdPair(p0));
    }

    public void logEvent(String p0)
    {
      this.logEvent(p0, null);
    }

    public void logEvent(String p0, double p1)
    {
      this.logEvent(p0, p1, null);
    }

    public void logEvent(String p0, double p1, android.os.Bundle p3)
    {
      this.logEvent(p0, Double.valueOf(p1), p3, false);
    }

    public void logEvent(String p0, android.os.Bundle p1)
    {
      this.logEvent(p0, null, p1, false);
    }

    public void logPurchase(java.math.BigDecimal p0, java.util.Currency p1)
    {
      this.logPurchase(p0, p1, null);
    }

    public void logPurchase(java.math.BigDecimal p0, java.util.Currency p1, android.os.Bundle p2)
    {
      if ( p0 != null )
      {
        if ( p1 != null )
        {
          if ( p2 == null )
            p2 = new android.os.Bundle();
          p2.putString("fb_currency", p1.getCurrencyCode());
          this.logEvent("fb_mobile_purchase", p0.doubleValue(), p2);
          eagerFlush();
        }
        else
        {
          notifyDeveloperError("currency cannot be null");
        }
      }
      else
      {
        notifyDeveloperError("purchaseAmount cannot be null");
      }
    }

    public void logSdkEvent(String p0, Double p1, android.os.Bundle p2)
    {
      this.logEvent(p0, p1, p2, true);
    }

}
