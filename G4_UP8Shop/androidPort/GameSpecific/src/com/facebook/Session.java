// Decompiled from classes.dex (SourceFile: Session.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.os.Looper;
import android.support.v4.content.LocalBroadcastManager;
import android.text.TextUtils;
import android.util.Log;
import com.facebook.internal.SessionAuthorizationType;
import com.facebook.internal.Utility;
import com.facebook.internal.Validate;
public class Session implements java.io.Serializable {
    // Fields
    public static java.lang.String ACTION_ACTIVE_SESSION_CLOSED;
    public static java.lang.String ACTION_ACTIVE_SESSION_OPENED;
    public static java.lang.String ACTION_ACTIVE_SESSION_SET;
    public static java.lang.String ACTION_ACTIVE_SESSION_UNSET;
    private static java.lang.String AUTH_BUNDLE_SAVE_KEY;
    public static int DEFAULT_AUTHORIZE_ACTIVITY_CODE;
    private static java.lang.String MANAGE_PERMISSION_PREFIX;
    private static final java.util.Set OTHER_PUBLISH_PERMISSIONS;
    private static java.lang.String PUBLISH_PERMISSION_PREFIX;
    private static java.lang.String SESSION_BUNDLE_SAVE_KEY;
    private static final java.lang.Object STATIC_LOCK;
    public static final java.lang.String TAG;
    private static int TOKEN_EXTEND_RETRY_SECONDS;
    private static int TOKEN_EXTEND_THRESHOLD_SECONDS;
    public static java.lang.String WEB_VIEW_ERROR_CODE_KEY;
    public static java.lang.String WEB_VIEW_FAILING_URL_KEY;
    private static com.facebook.Session activeSession;
    private static long serialVersionUID;
    private static volatile android.content.Context staticContext;
    private com.facebook.AppEventsLogger appEventsLogger;
    private java.lang.String applicationId;
    private volatile android.os.Bundle authorizationBundle;
    private com.facebook.AuthorizationClient authorizationClient;
    private final java.util.List callbacks;
    private volatile com.facebook.Session$TokenRefreshRequest currentTokenRefreshRequest;
    private android.os.Handler handler;
    private java.util.Date lastAttemptedTokenExtendDate;
    private final java.lang.Object lock;
    private com.facebook.Session$AuthorizationRequest pendingAuthorizationRequest;
    private com.facebook.SessionState state;
    private com.facebook.TokenCachingStrategy tokenCachingStrategy;
    private com.facebook.AccessToken tokenInfo;

    // Methods
    static
    {
      TAG = com.facebook.Session.class.getCanonicalName();
      STATIC_LOCK = new Object();
      OTHER_PUBLISH_PERMISSIONS = new com.facebook.Session$1();
    }

    public Session(android.content.Context p0)
    {
      this(p0, null, null, true);
    }

    Session(android.content.Context p0, String p1, com.facebook.TokenCachingStrategy p2)
    {
      this(p0, p1, p2, true);
    }

    Session(android.content.Context p0, String p1, com.facebook.TokenCachingStrategy p2, boolean p3)
    {
      super();
      android.os.Bundle v5;
      android.content.Context v6;
      java.util.Date Date; // RETVAL
      java.util.Date v8;
      v5 = null;
      this.lastAttemptedTokenExtendDate = new java.util.Date(0);
      this.lock = new Object();
      if ( p0 != null && p1 == null )
        p1 = Utility.getMetadataApplicationId(p0);
      Validate.notNull(p1, "applicationId");
      initializeStaticContext(p0);
      if ( p2 == null )
      {
        v6 = staticContext;
        p2 = new com.facebook.SharedPreferencesTokenCachingStrategy(v6);
      }
      this.applicationId = p1;
      this.tokenCachingStrategy = p2;
      this.state = SessionState.CREATED;
      this.pendingAuthorizationRequest = null;
      this.callbacks = new java.util.ArrayList();
      this.handler = new android.os.Handler(Looper.getMainLooper());
      if ( p3 )
        v5 = p2.load();
      if ( TokenCachingStrategy.hasTokenInformation(v5) )
      {
        Date = TokenCachingStrategy.getDate(v5, "com.facebook.TokenCachingStrategy.ExpirationDate");
        v8 = new java.util.Date();
        if ( Date != null && !Date.before(v8) )
        {
          this.tokenInfo = AccessToken.createFromCache(v5);
          this.state = SessionState.CREATED_TOKEN_LOADED;
        }
        else
        {
          p2.clear();
          this.tokenInfo = AccessToken.createEmptyToken();
        }
      }
      else
      {
        this.tokenInfo = AccessToken.createEmptyToken();
      }
    
    }

    private Session(
            String p0,
            com.facebook.SessionState p1,
            com.facebook.AccessToken p2,
            java.util.Date p3,
            boolean p4,
            com.facebook.Session$AuthorizationRequest p5)
    {
      super();
      this.lastAttemptedTokenExtendDate = new java.util.Date(0);
      this.lock = new Object();
      this.applicationId = p0;
      this.state = p1;
      this.tokenInfo = p2;
      this.lastAttemptedTokenExtendDate = p3;
      this.pendingAuthorizationRequest = p5;
      this.handler = new android.os.Handler(Looper.getMainLooper());
      this.currentTokenRefreshRequest = null;
      this.tokenCachingStrategy = null;
      this.callbacks = new java.util.ArrayList();
    }

    /* synthetic */ Session(
            String p0,
            com.facebook.SessionState p1,
            com.facebook.AccessToken p2,
            java.util.Date p3,
            boolean p4,
            com.facebook.Session$AuthorizationRequest p5,
            com.facebook.Session$1 p6)
    {
      this(p0, p1, p2, p3, p4, p5);
    }

    private Session(
            String p0,
            com.facebook.SessionState p1,
            com.facebook.AccessToken p2,
            java.util.Date p3,
            boolean p4,
            com.facebook.Session$AuthorizationRequest p5,
            java.util.Set<String> p6)
    {
      super();
      this.lastAttemptedTokenExtendDate = new java.util.Date(0);
      this.lock = new Object();
      this.applicationId = p0;
      this.state = p1;
      this.tokenInfo = p2;
      this.lastAttemptedTokenExtendDate = p3;
      this.pendingAuthorizationRequest = p5;
      this.handler = new android.os.Handler(Looper.getMainLooper());
      this.currentTokenRefreshRequest = null;
      this.tokenCachingStrategy = null;
      this.callbacks = new java.util.ArrayList();
    }

    /* synthetic */ Session(
            String p0,
            com.facebook.SessionState p1,
            com.facebook.AccessToken p2,
            java.util.Date p3,
            boolean p4,
            com.facebook.Session$AuthorizationRequest p5,
            java.util.Set p6,
            com.facebook.Session$1 p7)
    {
      this(p0, p1, p2, p3, p4, p5, p6);
    }

    /* synthetic */ static void access$1100(
            com.facebook.Session p0,
            int p1,
            com.facebook.AuthorizationClient$Result p2)
    {
      p0.handleAuthorizationResult(p1, p2);
    }

    /* synthetic */ static java.util.List access$1200(com.facebook.Session p0)
    {
      return p0.callbacks;
    }

    /* synthetic */ static android.os.Handler access$1300(com.facebook.Session p0)
    {
      return p0.handler;
    }

    /* synthetic */ static void access$1400(android.os.Handler p0, Runnable p1)
    {
      runWithHandlerOrExecutor(p0, p1);
    }

    /* synthetic */ static android.content.Context access$1500()
    {
      return staticContext;
    }

    /* synthetic */ static com.facebook.Session$TokenRefreshRequest access$1600(com.facebook.Session p0)
    {
      return p0.currentTokenRefreshRequest;
    }

    /* synthetic */ static com.facebook.Session$TokenRefreshRequest access$1602(
            com.facebook.Session p0,
            com.facebook.Session$TokenRefreshRequest p1)
    {
      p0.currentTokenRefreshRequest = p1;
      return p1;
    }

    /* synthetic */ static Object access$200(com.facebook.Session p0)
    {
      return p0.lock;
    }

    /* synthetic */ static com.facebook.AccessToken access$300(com.facebook.Session p0)
    {
      return p0.tokenInfo;
    }

    /* synthetic */ static com.facebook.AccessToken access$302(
            com.facebook.Session p0,
            com.facebook.AccessToken p1)
    {
      p0.tokenInfo = p1;
      return p1;
    }

    /* synthetic */ static com.facebook.SessionState access$400(com.facebook.Session p0)
    {
      return p0.state;
    }

    private static boolean areEqual(Object p0, Object p1)
    {
      if ( p0 != null )
        return p0.equals(p1);
      else
        return p1 == null;
    }

    private void finishAuthorization(com.facebook.AccessToken p0, Exception p1)
    {
      com.facebook.SessionState state;
      state = this.state;
      if ( p0 != null )
      {
        this.tokenInfo = p0;
        this.saveTokenToCache(p0);
        this.state = SessionState.OPENED;
      }
      else if ( p1 != null )
      {
        this.state = SessionState.CLOSED_LOGIN_FAILED;
      }
      this.pendingAuthorizationRequest = null;
      this.postStateChange(state, this.state, p1);
    }

    private void finishReauthorization(com.facebook.AccessToken p0, Exception p1)
    {
      com.facebook.SessionState state;
      state = this.state;
      if ( p0 != null )
      {
        this.tokenInfo = p0;
        this.saveTokenToCache(p0);
        this.state = SessionState.OPENED_TOKEN_UPDATED;
      }
      this.pendingAuthorizationRequest = null;
      this.postStateChange(state, this.state, p1);
    }

    public static final com.facebook.Session getActiveSession()
    {
      Object v0;
      v0 = STATIC_LOCK;
      synchronized ( v0 )
      {
        return activeSession;
      }
    }

    private com.facebook.AppEventsLogger getAppEventsLogger()
    {
      Object lock;
      android.content.Context v2;
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.appEventsLogger == null )
        {
          v2 = staticContext;
          this.appEventsLogger = AppEventsLogger.newLogger(v2, this.applicationId);
        }
        return this.appEventsLogger;
      }
    }

    private android.content.Intent getLoginActivityIntent(com.facebook.Session$AuthorizationRequest p0)
    {
      android.content.Intent v2;
      v2 = new android.content.Intent();
      v2.setClass(getStaticContext(), com.facebook.LoginActivity.class);
      v2.setAction(p0.getLoginBehavior().toString());
      v2.putExtras(LoginActivity.populateIntentExtras(p0.getAuthorizationClientRequest()));
      return v2;
    }

    static android.content.Context getStaticContext()
    {
      return staticContext;
    }

    private void handleAuthorizationResult(int p0, com.facebook.AuthorizationClient$Result p1)
    {
      com.facebook.AccessToken token;
      Exception v4;
      if ( p0 == -1 )
      {
        if ( p1.code == AuthorizationClient$Result$Code.SUCCESS )
        {
          token = p1.token;
          v4 = null;
        }
        else
        {
          v4 = new com.facebook.FacebookAuthorizationException(p1.errorMessage);
          token = null;
        }
      }
      else
      {
        if ( p0 != 0 )
          v4 = null;
        else
          v4 = new com.facebook.FacebookOperationCanceledException(p1.errorMessage);
        token = null;
      }
      this.logAuthorizationComplete(p1.code, p1.loggingExtras, v4);
      this.authorizationClient = null;
      this.finishAuthOrReauth(token, v4);
    }

    static com.facebook.Session$PermissionsPair handlePermissionResponse(com.facebook.Response p0)
    {
      com.facebook.model.GraphMultiResult v3;
      com.facebook.model.GraphObjectList Data; // RETVAL
      com.facebook.model.GraphObjectList v5;
      java.util.List v6;
      java.util.List v7;
      com.facebook.model.GraphObject v8;
      java.util.Iterator v9;
      com.facebook.model.GraphObject v10;
      String v11;
      String v12;
      java.util.Iterator v13;
      java.util.Map.Entry v14;
      if ( p0.getError() != null )
        return null;
      v3 = (com.facebook.model.GraphMultiResult)p0.getGraphObjectAs(com.facebook.model.GraphMultiResult.class);
      if ( v3 == null )
        return null;
      Data = v3.getData();
      v5 = Data;
      if ( Data == null || Data.size() == 0 )
        return null;
      v6 = new java.util.ArrayList(v5.size());
      v7 = new java.util.ArrayList(v5.size());
      v8 = (com.facebook.model.GraphObject)v5.get(0);
      if ( v8.getProperty("permission") != null )
      {
        v9 = v5.iterator();
        while ( v9.hasNext() )
        {
          v10 = (com.facebook.model.GraphObject)v9.next();
          v11 = (String)v10.getProperty("permission");
          if ( !v11.equals("installed") )
          {
            v12 = (String)v10.getProperty("status");
            if ( v12.equals("granted") )
            {
              v6.add(v11);
            }
            else if ( v12.equals("declined") )
            {
              v7.add(v11);
            }
          }
        }
      }
      else
      {
        v13 = v8.asMap().entrySet().iterator();
        while ( v13.hasNext() )
        {
          v14 = (java.util.Map.Entry)v13.next();
          if ( !((String)v14.getKey()).equals("installed") && ((Integer)v14.getValue()).intValue() == 1 )
            v6.add(v14.getKey());
        }
      }
      return new com.facebook.Session$PermissionsPair(v6, v7);
    }

    static void initializeStaticContext(android.content.Context p0)
    {
      android.content.Context v1;
      android.content.Context ApplicationContext; // RETVAL
    
      if ( p0 != null )
      {
        v1 = staticContext;
        if ( v1 == null )
        {
          ApplicationContext = p0.getApplicationContext();
          if ( ApplicationContext != null )
            p0 = ApplicationContext;
          staticContext = p0;
        }
      }
    }

    public static boolean isPublishPermission(String p0)
    {
      return p0 != null && (p0.startsWith("publish") || p0.startsWith("manage") || OTHER_PUBLISH_PERMISSIONS.contains(p0));
    }

    private void logAuthorizationComplete(
            com.facebook.AuthorizationClient$Result$Code p0,
            java.util.Map<String, String> p1,
            Exception p2)
    {
      android.os.Bundle v4 = null;
      android.os.Bundle v5;
      org.json.JSONObject v6;
      org.json.JSONObject v7;
      java.util.Iterator v8;
      java.util.Map.Entry v9;
      int _pc = 0;
      _sm: while (true) {
        switch (_pc) {
          case 0: {
            if ( this.pendingAuthorizationRequest == null )
            {
            v4 = AuthorizationClient.newAuthorizationLoggingBundle("");
            v4.putString("2_result", AuthorizationClient$Result$Code.ERROR.getLoggingValue());
            v4.putString("5_error_message", "Unexpected call to logAuthorizationComplete with null pendingAuthorizationRequest.");
            { _pc = 1; continue _sm; }
            }
            v5 = AuthorizationClient.newAuthorizationLoggingBundle(this.pendingAuthorizationRequest.getAuthId());
            if ( p0 != null )
            v5.putString("2_result", p0.getLoggingValue());
            if ( p2 != null && p2.getMessage() != null )
            v5.putString("5_error_message", p2.getMessage());
            if ( Session$AuthorizationRequest.access$500(this.pendingAuthorizationRequest).isEmpty() )
            v6 = null;
            else
            v6 = new org.json.JSONObject(Session$AuthorizationRequest.access$500(this.pendingAuthorizationRequest));
            if ( p1 != null )
            {
            if ( v6 != null )
            v7 = v6;
            else
            v7 = new org.json.JSONObject();
            try
            {
            v8 = p1.entrySet().iterator();
            while ( v8.hasNext() )
            {
            v9 = (java.util.Map.Entry)v8.next();
            v7.put((String)v9.getKey(), v9.getValue());
            }
            v6 = v7;
            }
            catch ( org.json.JSONException e )
            {
            v6 = v7;
            }
            }
            if ( v6 != null )
            v5.putString("6_extras", v6.toString());
            v4 = v5;
            _pc = 1;
            continue _sm;
          }
          case 1: {
            v4.putLong("1_timestamp_ms", System.currentTimeMillis());
            this.getAppEventsLogger().logSdkEvent("fb_mobile_login_complete", null, v4);
            
            break _sm;
          }
          default: break _sm;
        }
      }
    }

    private void logAuthorizationStart()
    {
      android.os.Bundle v1;
      org.json.JSONObject v2;
      v1 = AuthorizationClient.newAuthorizationLoggingBundle(this.pendingAuthorizationRequest.getAuthId());
      v1.putLong("1_timestamp_ms", System.currentTimeMillis());
      try
      {
        v2 = new org.json.JSONObject();
        v2.put("login_behavior", Session$AuthorizationRequest.access$700(this.pendingAuthorizationRequest).toString());
        v2.put("request_code", Session$AuthorizationRequest.access$800(this.pendingAuthorizationRequest));
        v2.put("is_legacy", Session$AuthorizationRequest.access$600(this.pendingAuthorizationRequest));
        v2.put("permissions", TextUtils.join(",", Session$AuthorizationRequest.access$900(this.pendingAuthorizationRequest)));
        v2.put("default_audience", Session$AuthorizationRequest.access$1000(this.pendingAuthorizationRequest).toString());
        v1.putString("6_extras", v2.toString());
      }
      catch ( org.json.JSONException e )
      {
      }
      this.getAppEventsLogger().logSdkEvent("fb_mobile_login_start", null, v1);
    }

    private void open(com.facebook.Session$OpenRequest p0, com.facebook.internal.SessionAuthorizationType p1)
    {
      Object lock;
      com.facebook.SessionState state;
      com.facebook.SessionState v6;
      this.validatePermissions(p0, p1);
      this.validateLoginBehavior(p0);
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.pendingAuthorizationRequest != null )
        {
          this.postStateChange(this.state, this.state, new UnsupportedOperationException("Session: an attempt was made to ope" +
                                                                                         "n a session that has a pending request."));
        }
        else
        {
          state = this.state;
          switch ( Session$5.$SwitchMap$com$facebook$SessionState[state.ordinal()] )
          {
            case 1:
              v6 = SessionState.OPENING;
              this.state = v6;
              if ( p0 == null )
                throw new IllegalArgumentException("openRequest cannot be null when opening a new Session");
              this.pendingAuthorizationRequest = p0;
              break;
            case 3:
              if ( p0 != null
                && !Utility.isNullOrEmpty(p0.getPermissions())
                && !Utility.isSubset(p0.getPermissions(), this.getPermissions()) )
              {
                this.pendingAuthorizationRequest = p0;
              }
              if ( this.pendingAuthorizationRequest != null )
                v6 = SessionState.OPENING;
              else
                v6 = SessionState.OPENED;
              this.state = v6;
              break;
            default:
              throw new UnsupportedOperationException("Session: an attempt was made to open an already opened session.");
          }
          if ( p0 != null )
            this.addCallback(p0.getCallback());
          this.postStateChange(state, v6, null);
          if ( v6 == SessionState.OPENING )
            this.authorize(p0);
        }
        return;
      }
    }

    public static com.facebook.Session openActiveSession(
            android.app.Activity p0,
            boolean p1,
            com.facebook.Session$StatusCallback p2)
    {
      return openActiveSession(p0, p1, new com.facebook.Session$OpenRequest(p0).setCallback(p2));
    }

    public static com.facebook.Session openActiveSession(
            android.app.Activity p0,
            boolean p1,
            java.util.List<String> p2,
            com.facebook.Session$StatusCallback p3)
    {
      return openActiveSession(p0, p1, new com.facebook.Session$OpenRequest(p0).setCallback(p3).setPermissions(p2));
    }

    public static com.facebook.Session openActiveSession(
            android.content.Context p0,
            android.support.v4.app.Fragment p1,
            boolean p2,
            com.facebook.Session$StatusCallback p3)
    {
      return openActiveSession(p0, p2, new com.facebook.Session$OpenRequest(p1).setCallback(p3));
    }

    public static com.facebook.Session openActiveSession(
            android.content.Context p0,
            android.support.v4.app.Fragment p1,
            boolean p2,
            java.util.List<String> p3,
            com.facebook.Session$StatusCallback p4)
    {
      return openActiveSession(p0, p2, new com.facebook.Session$OpenRequest(p1).setCallback(p4).setPermissions(p3));
    }

    private static com.facebook.Session openActiveSession(
            android.content.Context p0,
            boolean p1,
            com.facebook.Session$OpenRequest p2)
    {
      com.facebook.Session v3;
      v3 = new com.facebook.Session$Builder(p0).build();
      if ( !SessionState.CREATED_TOKEN_LOADED.equals(v3.getState()) && !p1 )
        return null;
      setActiveSession(v3);
      v3.openForRead(p2);
      return v3;
    }

    public static com.facebook.Session openActiveSessionFromCache(android.content.Context p0)
    {
      return openActiveSession(p0, false, null);
    }

    public static com.facebook.Session openActiveSessionWithAccessToken(
            android.content.Context p0,
            com.facebook.AccessToken p1,
            com.facebook.Session$StatusCallback p2)
    {
      com.facebook.Session v3;
      v3 = new com.facebook.Session(p0, null, null, false);
      setActiveSession(v3);
      v3.open(p1, p2);
      return v3;
    }

    static void postActiveSessionAction(String p0)
    {
      LocalBroadcastManager.getInstance(getStaticContext()).sendBroadcast(new android.content.Intent(p0));
    }

    private void readObject(java.io.ObjectInputStream p0)
 throws java.io.InvalidObjectException {
      throw new java.io.InvalidObjectException("Cannot readObject, serialization proxy required");
    }

    private void requestNewPermissions(
            com.facebook.Session$NewPermissionsRequest p0,
            com.facebook.internal.SessionAuthorizationType p1)
    {
      Object lock;
      this.validatePermissions(p0, p1);
      this.validateLoginBehavior(p0);
      if ( p0 == null )
        return;
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.pendingAuthorizationRequest != null )
          throw new UnsupportedOperationException("Session: an attempt was made to request new permissions for a session that" +
                                                  " has a pending request.");
        if ( !this.state.isOpened() )
        {
          if ( this.state.isClosed() )
            throw new UnsupportedOperationException("Session: an attempt was made to request new permissions for a session th" +
                                                    "at has been closed.");
          throw new UnsupportedOperationException("Session: an attempt was made to request new permissions for a session that" +
                                                  " is not currently open.");
        }
        this.pendingAuthorizationRequest = p0;
        p0.setValidateSameFbidAsToken(this.getAccessToken());
        this.addCallback(p0.getCallback());
        this.authorize(p0);
        return;
      }
    }

    private boolean resolveIntent(android.content.Intent p0)
    {
      return getStaticContext().getPackageManager().resolveActivity(p0, 0) != null;
    }

    public static final com.facebook.Session restoreSession(
            android.content.Context p0,
            com.facebook.TokenCachingStrategy p1,
            com.facebook.Session$StatusCallback p2,
            android.os.Bundle p3)
    {
      com.facebook.Session v4;
      byte[] ByteArray; // RETVAL
      java.io.ByteArrayInputStream v7;
      if ( p3 == null )
        return null;
      ByteArray = p3.getByteArray("com.facebook.sdk.Session.saveSessionKey");
      if ( ByteArray != null )
      {
        v7 = new java.io.ByteArrayInputStream(ByteArray);
        try
        {
          v4 = (com.facebook.Session)new java.io.ObjectInputStream(v7).readObject();
          initializeStaticContext(p0);
          if ( p1 != null )
            v4.tokenCachingStrategy = p1;
          else
            v4.tokenCachingStrategy = new com.facebook.SharedPreferencesTokenCachingStrategy(p0);
          if ( p2 != null )
            v4.addCallback(p2);
          v4.authorizationBundle = p3.getBundle("com.facebook.sdk.Session.authBundleKey");
          return v4;
        }
        catch ( ClassNotFoundException v8 )
        {
          Log.w(TAG, "Unable to restore session", v8);
          return null;
        }
        catch ( java.io.IOException v9 )
        {
          Log.w(TAG, "Unable to restore session.", v9);
        }
      }
      return null;
    }

    private static void runWithHandlerOrExecutor(android.os.Handler p0, Runnable p1)
    {
      if ( p0 != null )
        p0.post(p1);
      else
        Settings.getExecutor().execute(p1);
    }

    public static final void saveSession(com.facebook.Session p0, android.os.Bundle p1)
    {
      java.io.ByteArrayOutputStream v2;
      android.os.Bundle authorizationBundle;
      if ( p1 != null && p0 != null && !p1.containsKey("com.facebook.sdk.Session.saveSessionKey") )
      {
        v2 = new java.io.ByteArrayOutputStream();
        try
        {
          new java.io.ObjectOutputStream(v2).writeObject(p0);
        }
        catch ( java.io.IOException v4 )
        {
          throw new com.facebook.FacebookException("Unable to save session.", v4);
        }
        p1.putByteArray("com.facebook.sdk.Session.saveSessionKey", v2.toByteArray());
        authorizationBundle = p0.authorizationBundle;
        p1.putBundle("com.facebook.sdk.Session.authBundleKey", authorizationBundle);
      }
    }

    private void saveTokenToCache(com.facebook.AccessToken p0)
    {
      if ( p0 != null && this.tokenCachingStrategy != null )
        this.tokenCachingStrategy.save(p0.toCacheBundle());
    }

    public static final void setActiveSession(com.facebook.Session p0)
    {
      Object v1;
      com.facebook.Session v2;
      v1 = STATIC_LOCK;
      synchronized ( v1 )
      {
        if ( p0 != activeSession )
        {
          v2 = activeSession;
          if ( v2 != null )
            v2.close();
          activeSession = p0;
          if ( v2 != null )
            postActiveSessionAction("com.facebook.sdk.ACTIVE_SESSION_UNSET");
          if ( p0 != null )
          {
            postActiveSessionAction("com.facebook.sdk.ACTIVE_SESSION_SET");
            if ( p0.isOpened() )
              postActiveSessionAction("com.facebook.sdk.ACTIVE_SESSION_OPENED");
          }
        }
      }
    }

    private void tryLegacyAuth(com.facebook.Session$AuthorizationRequest p0)
    {
      this.authorizationClient = new com.facebook.AuthorizationClient();
      this.authorizationClient.setOnCompletedListener((com.facebook.AuthorizationClient$OnCompletedListener)new com.facebook.Session$3(this));
      this.authorizationClient.setContext(getStaticContext());
      this.authorizationClient.startOrContinueAuth(p0.getAuthorizationClientRequest());
    }

    private boolean tryLoginActivity(com.facebook.Session$AuthorizationRequest p0)
    {
      boolean v2;
      android.content.Intent LoginActivityIntent;
      v2 = false;
      LoginActivityIntent = this.getLoginActivityIntent(p0);
      if ( this.resolveIntent(LoginActivityIntent) )
      {
        try
        {
          p0.getStartActivityDelegate().startActivityForResult(LoginActivityIntent, p0.getRequestCode());
          return true;
        }
        catch ( android.content.ActivityNotFoundException e )
        {
        }
      }
      return v2;
    }

    private void validateLoginBehavior(com.facebook.Session$AuthorizationRequest p0)
    {
      android.content.Intent v2;
      Object[] v3;
      if ( p0 != null && !Session$AuthorizationRequest.access$600(p0) )
      {
        v2 = new android.content.Intent();
        v2.setClass(getStaticContext(), com.facebook.LoginActivity.class);
        if ( !this.resolveIntent(v2) )
        {
          v3 = new Object[2];
          v3[0] = p0.getLoginBehavior();
          v3[1] = com.facebook.LoginActivity.class.getName();
          throw new com.facebook.FacebookException(String.format(
                                                     "Cannot use SessionLoginBehavior %s when %s is not declared as an activi" +
                                                     "ty in AndroidManifest.xml",
                                                     v3));
        }
      }
    }

    private void validatePermissions(
            com.facebook.Session$AuthorizationRequest p0,
            com.facebook.internal.SessionAuthorizationType p1)
    {
      java.util.Iterator v3;
      String v4;
      Object[] v5;
      Object[] v6;
      if ( p0 != null && !Utility.isNullOrEmpty(p0.getPermissions()) )
      {
        v3 = p0.getPermissions().iterator();
        while ( v3.hasNext() )
        {
          v4 = (String)v3.next();
          if ( isPublishPermission(v4) )
          {
            if ( SessionAuthorizationType.READ.equals(p1) )
            {
              v5 = new Object[1];
              v5[0] = v4;
              throw new com.facebook.FacebookException(String.format(
                                                         "Cannot pass a publish or manage permission (%s) to a request for re" +
                                                         "ad authorization",
                                                         v5));
            }
          }
          else if ( SessionAuthorizationType.PUBLISH.equals(p1) )
          {
            v6 = new Object[1];
            v6[0] = v4;
            Log.w(
              TAG,
              String.format("Should not pass a read permission (%s) to a request for publish or manage authorization", v6));
          }
        }
      }
      else if ( SessionAuthorizationType.PUBLISH.equals(p1) )
      {
        throw new com.facebook.FacebookException("Cannot request publish or manage authorization with no permissions.");
      }
    }

    private Object writeReplace()
    {
      return new com.facebook.Session$SerializationProxyV1(this.applicationId, this.state, this.tokenInfo, this.lastAttemptedTokenExtendDate, false, this.pendingAuthorizationRequest);
    }

    public final void addCallback(com.facebook.Session$StatusCallback p0)
    {
      java.util.List callbacks;
      callbacks = this.callbacks;
      synchronized ( callbacks )
      {
        if ( p0 != null && !this.callbacks.contains(p0) )
          this.callbacks.add(p0);
      }
    }

    void authorize(com.facebook.Session$AuthorizationRequest p0)
    {
      boolean v2;
      java.util.Map v3; // RETVAL
      String v4;
      int v5;
      Object lock;
      com.facebook.SessionState state;
      Exception v8;
      p0.setApplicationId(this.applicationId);
      this.logAuthorizationStart();
      v2 = this.tryLoginActivity(p0);
      v3 = Session$AuthorizationRequest.access$500(this.pendingAuthorizationRequest);
      if ( v2 )
        v4 = "1";
      else
        v4 = "0";
      v3.put("try_login_activity", v4);
      if ( v2 || !Session$AuthorizationRequest.access$600(p0) )
      {
        v5 = v2 ? 1 : 0;
      }
      else
      {
        Session$AuthorizationRequest.access$500(this.pendingAuthorizationRequest).put("try_legacy", "1");
        this.tryLegacyAuth(p0);
        v5 = 1;
      }
      if ( v5 != 0 )
        return;
      lock = this.lock;
      synchronized ( lock )
      {
        state = this.state;
        switch ( Session$5.$SwitchMap$com$facebook$SessionState[state.ordinal()] )
        {
          case 6:
          case 7:
            return;
          default:
            this.state = SessionState.CLOSED_LOGIN_FAILED;
            v8 = new com.facebook.FacebookException("Log in attempt failed: LoginActivity could not be started, and not legacy request");
            this.logAuthorizationComplete(AuthorizationClient$Result$Code.ERROR, null, v8);
            this.postStateChange(state, this.state, v8);
            break;
        }
        return;
      }
    }

    public final void close()
    {
      Object lock;
      com.facebook.SessionState state;
      lock = this.lock;
      synchronized ( lock )
      {
        state = this.state;
        switch ( Session$5.$SwitchMap$com$facebook$SessionState[state.ordinal()] )
        {
          case 1:
          case 2:
            this.state = SessionState.CLOSED_LOGIN_FAILED;
            this.postStateChange(state, this.state, new com.facebook.FacebookException("Log in attempt aborted."));
            break;
          case 3:
          case 4:
          case 5:
            this.state = SessionState.CLOSED;
            this.postStateChange(state, this.state, null);
            break;
          default:
            break;
        }
        return;
      }
    }

    public final void closeAndClearTokenInformation()
    {
      android.content.Context v1;
      android.content.Context v2;
      if ( this.tokenCachingStrategy != null )
        this.tokenCachingStrategy.clear();
      v1 = staticContext;
      Utility.clearFacebookCookies(v1);
      v2 = staticContext;
      Utility.clearCaches(v2);
      this.close();
    }

    public boolean equals(Object p0)
    {
      boolean v2;
      com.facebook.Session v4;
      android.os.Bundle authorizationBundle;
      android.os.Bundle v6;
      v2 = false;
      if ( p0 instanceof com.facebook.Session )
      {
        v4 = (com.facebook.Session)p0;
        if ( areEqual(v4.applicationId, this.applicationId) )
        {
          authorizationBundle = v4.authorizationBundle;
          v6 = this.authorizationBundle;
          if ( areEqual(authorizationBundle, v6) && areEqual(v4.state, this.state) )
            return areEqual(v4.getExpirationDate(), this.getExpirationDate());
        }
      }
      return v2;
    }

    void extendAccessToken()
    {
      com.facebook.Session$TokenRefreshRequest v1;
      Object lock;
      com.facebook.Session$TokenRefreshRequest currentTokenRefreshRequest;
      v1 = null;
      lock = this.lock;
      synchronized ( lock )
      {
        currentTokenRefreshRequest = this.currentTokenRefreshRequest;
        if ( currentTokenRefreshRequest == null )
        {
          v1 = new com.facebook.Session$TokenRefreshRequest(this);
          this.currentTokenRefreshRequest = v1;
        }
      }
      if ( v1 != null )
        v1.bind();
    }

    void extendAccessTokenIfNeeded()
    {
      if ( this.shouldExtendAccessToken() )
        this.extendAccessToken();
    }

    void extendTokenCompleted(android.os.Bundle p0)
    {
      Object lock;
      com.facebook.SessionState state;
      lock = this.lock;
      synchronized ( lock )
      {
        state = this.state;
        switch ( Session$5.$SwitchMap$com$facebook$SessionState[state.ordinal()] )
        {
          case 4:
            this.state = SessionState.OPENED_TOKEN_UPDATED;
            this.postStateChange(state, this.state, null);
          case 5:
            this.tokenInfo = AccessToken.createFromRefresh(this.tokenInfo, p0);
            if ( this.tokenCachingStrategy != null )
              this.tokenCachingStrategy.save(this.tokenInfo.toCacheBundle());
            break;
          default:
            Log.d(TAG, "refreshToken ignored in state " + this.state);
            break;
        }
        return;
      }
    }

    void finishAuthOrReauth(com.facebook.AccessToken p0, Exception p1)
    {
      Object lock;
      if ( p0 != null && p0.isInvalid() )
      {
        p0 = null;
        p1 = new com.facebook.FacebookException("Invalid access token.");
      }
      lock = this.lock;
      synchronized ( lock )
      {
        switch ( Session$5.$SwitchMap$com$facebook$SessionState[this.state.ordinal()] )
        {
          case 1:
          case 3:
          case 6:
          case 7:
            Log.d(TAG, "Unexpected call to finishAuthOrReauth in state " + this.state);
            break;
          case 2:
            this.finishAuthorization(p0, p1);
            break;
          case 4:
          case 5:
            this.finishReauthorization(p0, p1);
            break;
          default:
            break;
        }
        return;
      }
    }

    public final String getAccessToken()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.tokenInfo != null )
          return this.tokenInfo.getToken();
        else
          return null;
      }
    }

    public final String getApplicationId()
    {
      return this.applicationId;
    }

    public final android.os.Bundle getAuthorizationBundle()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        return this.authorizationBundle;
      }
    }

    public final java.util.List<String> getDeclinedPermissions()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.tokenInfo != null )
          return this.tokenInfo.getDeclinedPermissions();
        else
          return null;
      }
    }

    public final java.util.Date getExpirationDate()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.tokenInfo != null )
          return this.tokenInfo.getExpires();
        else
          return null;
      }
    }

    java.util.Date getLastAttemptedTokenExtendDate()
    {
      return this.lastAttemptedTokenExtendDate;
    }

    public final java.util.List<String> getPermissions()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.tokenInfo != null )
          return this.tokenInfo.getPermissions();
        else
          return null;
      }
    }

    public final com.facebook.SessionState getState()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        return this.state;
      }
    }

    com.facebook.AccessToken getTokenInfo()
    {
      return this.tokenInfo;
    }

    public int hashCode()
    {
      return 0;
    }

    public final boolean isClosed()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        return this.state.isClosed();
      }
    }

    public final boolean isOpened()
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        return this.state.isOpened();
      }
    }

    public boolean isPermissionGranted(String p0)
    {
      java.util.List Permissions; // RETVAL
    
      Permissions = this.getPermissions();
      return Permissions != null && Permissions.contains(p0);
    }

    public final boolean onActivityResult(android.app.Activity p0, int p1, int p2, android.content.Intent p3)
    {
      Object lock;
      com.facebook.AuthorizationClient$Result$Code v8;
      com.facebook.AuthorizationClient$Result v9;
      com.facebook.FacebookException v11;
      Validate.notNull(p0, "currentActivity");
      initializeStaticContext(p0);
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.pendingAuthorizationRequest == null || p1 != this.pendingAuthorizationRequest.getRequestCode() )
          return false;
        v8 = AuthorizationClient$Result$Code.ERROR;
        if ( p3 != null )
        {
          v9 = (com.facebook.AuthorizationClient$Result)p3.getSerializableExtra("com.facebook.LoginActivity:Result");
          if ( v9 != null )
          {
            this.handleAuthorizationResult(p2, v9);
            return true;
          }
          if ( this.authorizationClient != null )
          {
            this.authorizationClient.onActivityResult(p1, p2, p3);
            return true;
          }
          v11 = null;
        }
        else if ( p2 != 0 )
        {
          v11 = null;
        }
        else
        {
          v11 = new com.facebook.FacebookOperationCanceledException("User canceled operation.");
          v8 = AuthorizationClient$Result$Code.CANCEL;
        }
        if ( v11 == null )
          v11 = new com.facebook.FacebookException("Unexpected call to Session.onActivityResult");
        this.logAuthorizationComplete(v8, null, v11);
        this.finishAuthOrReauth(null, v11);
        return true;
      }
    }

    public final void open(com.facebook.AccessToken p0, com.facebook.Session$StatusCallback p1)
    {
      Object lock;
      lock = this.lock;
      synchronized ( lock )
      {
        if ( this.pendingAuthorizationRequest != null )
          throw new UnsupportedOperationException("Session: an attempt was made to open a session that has a pending request.");
        if ( this.state.isClosed() )
          throw new UnsupportedOperationException("Session: an attempt was made to open a previously-closed session.");
        if ( this.state != SessionState.CREATED && this.state != SessionState.CREATED_TOKEN_LOADED )
          throw new UnsupportedOperationException("Session: an attempt was made to open an already opened session.");
        if ( p1 != null )
          this.addCallback(p1);
        this.tokenInfo = p0;
        if ( this.tokenCachingStrategy != null )
          this.tokenCachingStrategy.save(p0.toCacheBundle());
        this.state = SessionState.OPENED;
        this.postStateChange(this.state, this.state, null);
      }
    }

    public final void openForPublish(com.facebook.Session$OpenRequest p0)
    {
      this.open(p0, SessionAuthorizationType.PUBLISH);
    }

    public final void openForRead(com.facebook.Session$OpenRequest p0)
    {
      this.open(p0, SessionAuthorizationType.READ);
    }

    void postStateChange(com.facebook.SessionState p0, com.facebook.SessionState p1, Exception p2)
    {
      if ( p0 != p1 || p0 == SessionState.OPENED_TOKEN_UPDATED || p2 != null )
      {
        if ( p1.isClosed() )
          this.tokenInfo = AccessToken.createEmptyToken();
        runWithHandlerOrExecutor(this.handler, (Runnable)new com.facebook.Session$4(this, p1, p2));
        if ( this == activeSession && p0.isOpened() != p1.isOpened() )
        {
          if ( p1.isOpened() )
            postActiveSessionAction("com.facebook.sdk.ACTIVE_SESSION_OPENED");
          else
            postActiveSessionAction("com.facebook.sdk.ACTIVE_SESSION_CLOSED");
        }
      }
    }

    public final void refreshPermissions()
    {
      com.facebook.Request v1;
      v1 = new com.facebook.Request(this, "me/permissions");
      v1.setCallback((com.facebook.Request$Callback)new com.facebook.Session$2(this));
      v1.executeAsync();
    }

    public final void removeCallback(com.facebook.Session$StatusCallback p0)
    {
      java.util.List callbacks;
      callbacks = this.callbacks;
      synchronized ( callbacks )
      {
        this.callbacks.remove(p0);
      }
    }

    public final void requestNewPublishPermissions(com.facebook.Session$NewPermissionsRequest p0)
    {
      this.requestNewPermissions(p0, SessionAuthorizationType.PUBLISH);
    }

    public final void requestNewReadPermissions(com.facebook.Session$NewPermissionsRequest p0)
    {
      this.requestNewPermissions(p0, SessionAuthorizationType.READ);
    }

    void setCurrentTokenRefreshRequest(com.facebook.Session$TokenRefreshRequest p0)
    {
      this.currentTokenRefreshRequest = p0;
    }

    void setLastAttemptedTokenExtendDate(java.util.Date p0)
    {
      this.lastAttemptedTokenExtendDate = p0;
    }

    void setTokenInfo(com.facebook.AccessToken p0)
    {
      this.tokenInfo = p0;
    }

    boolean shouldExtendAccessToken()
    {
      boolean v1;
      com.facebook.Session$TokenRefreshRequest currentTokenRefreshRequest;
      java.util.Date v4;
      v1 = false;
      currentTokenRefreshRequest = this.currentTokenRefreshRequest;
      if ( currentTokenRefreshRequest == null )
      {
        v4 = new java.util.Date();
        if ( this.state.isOpened()
          && this.tokenInfo.getSource().canExtendToken()
          && v4.getTime() - this.lastAttemptedTokenExtendDate.getTime() > 3600000 )
        {
          return v4.getTime() - this.tokenInfo.getLastRefresh().getTime() > 86400000;
        }
      }
      return v1;
    }

    public String toString()
    {
      StringBuilder v1; // RETVAL
      String tokenInfo;
      StringBuilder v3; // RETVAL
      String applicationId;
      v1 = new StringBuilder("{Session").append(" state:").append(this.state).append(", token:");
      if ( this.tokenInfo != null )
        tokenInfo = String.valueOf(this.tokenInfo);
      else
        tokenInfo = "null";
      v3 = v1.append(tokenInfo).append(", appId:");
      if ( this.applicationId != null )
        applicationId = this.applicationId;
      else
        applicationId = "null";
      return v3.append(applicationId).append("}").toString();
    }

}
