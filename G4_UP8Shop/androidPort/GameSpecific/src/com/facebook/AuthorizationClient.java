// Decompiled from classes.dex (SourceFile: AuthorizationClient.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient implements java.io.Serializable {
    // Fields
    static java.lang.String EVENT_EXTRAS_DEFAULT_AUDIENCE;
    static java.lang.String EVENT_EXTRAS_IS_LEGACY;
    static java.lang.String EVENT_EXTRAS_LOGIN_BEHAVIOR;
    static java.lang.String EVENT_EXTRAS_MISSING_INTERNET_PERMISSION;
    static java.lang.String EVENT_EXTRAS_NEW_PERMISSIONS;
    static java.lang.String EVENT_EXTRAS_NOT_TRIED;
    static java.lang.String EVENT_EXTRAS_PERMISSIONS;
    static java.lang.String EVENT_EXTRAS_REQUEST_CODE;
    static java.lang.String EVENT_EXTRAS_TRY_LEGACY;
    static java.lang.String EVENT_EXTRAS_TRY_LOGIN_ACTIVITY;
    static java.lang.String EVENT_NAME_LOGIN_COMPLETE;
    private static java.lang.String EVENT_NAME_LOGIN_METHOD_COMPLETE;
    private static java.lang.String EVENT_NAME_LOGIN_METHOD_START;
    static java.lang.String EVENT_NAME_LOGIN_START;
    static java.lang.String EVENT_PARAM_AUTH_LOGGER_ID;
    static java.lang.String EVENT_PARAM_ERROR_CODE;
    static java.lang.String EVENT_PARAM_ERROR_MESSAGE;
    static java.lang.String EVENT_PARAM_EXTRAS;
    static java.lang.String EVENT_PARAM_LOGIN_RESULT;
    static java.lang.String EVENT_PARAM_METHOD;
    private static java.lang.String EVENT_PARAM_METHOD_RESULT_SKIPPED;
    static java.lang.String EVENT_PARAM_TIMESTAMP;
    private static java.lang.String TAG;
    private static java.lang.String WEB_VIEW_AUTH_HANDLER_STORE;
    private static java.lang.String WEB_VIEW_AUTH_HANDLER_TOKEN_KEY;
    private static long serialVersionUID;
    private transient com.facebook.AppEventsLogger appEventsLogger;
    transient com.facebook.AuthorizationClient$BackgroundProcessingListener backgroundProcessingListener;
    transient boolean checkedInternetPermission;
    transient android.content.Context context;
    com.facebook.AuthorizationClient$AuthHandler currentHandler;
    java.util.List handlersToTry;
    java.util.Map loggingExtras;
    transient com.facebook.AuthorizationClient$OnCompletedListener onCompletedListener;
    com.facebook.AuthorizationClient$AuthorizationRequest pendingRequest;
    transient com.facebook.AuthorizationClient$StartActivityDelegate startActivityDelegate;

    // Methods
    AuthorizationClient()
    {
      super();
    }

    /* synthetic */ static void access$000(com.facebook.AuthorizationClient p0)
    {
      p0.notifyBackgroundProcessingStop();
    }

    /* synthetic */ static String access$100()
    {
      return getE2E();
    }

    /* synthetic */ static void access$200(com.facebook.AuthorizationClient p0, String p1, String p2)
    {
      p0.logWebLoginCompleted(p1, p2);
    }

    /* synthetic */ static void access$300(com.facebook.AuthorizationClient p0)
    {
      p0.notifyBackgroundProcessingStart();
    }

    private void addLoggingExtra(String p0, String p1, boolean p2)
    {
      if ( this.loggingExtras == null )
        this.loggingExtras = new java.util.HashMap();
      if ( this.loggingExtras.containsKey(p0) && p2 )
        p1 = (String)this.loggingExtras.get(p0) + "," + p1;
      this.loggingExtras.put(p0, p1);
    }

    private void completeWithFailure()
    {
      this.complete(AuthorizationClient$Result.createErrorResult(this.pendingRequest, "Login attempt failed.", null));
    }

    private com.facebook.AppEventsLogger getAppEventsLogger()
    {
      if ( this.appEventsLogger == null
        || !this.appEventsLogger.getApplicationId().equals(this.pendingRequest.getApplicationId()) )
      {
        this.appEventsLogger = AppEventsLogger.newLogger(this.context, this.pendingRequest.getApplicationId());
      }
      return this.appEventsLogger;
    }

    private static String getE2E()
    {
      org.json.JSONObject v0;
      v0 = new org.json.JSONObject();
      try
      {
        v0.put("init", System.currentTimeMillis());
        return v0.toString();
      }
      catch ( org.json.JSONException e )
      {
      }
      return v0.toString();
    }

    private java.util.List<com.facebook.AuthorizationClient$AuthHandler> getHandlerTypes(
            com.facebook.AuthorizationClient$AuthorizationRequest p0)
    {
      java.util.ArrayList v2;
      com.facebook.SessionLoginBehavior LoginBehavior;
      v2 = new java.util.ArrayList();
      LoginBehavior = p0.getLoginBehavior();
      if ( LoginBehavior.allowsKatanaAuth() )
      {
        if ( !p0.isLegacy() )
          v2.add(new com.facebook.AuthorizationClient$GetTokenAuthHandler(this));
        v2.add(new com.facebook.AuthorizationClient$KatanaProxyAuthHandler(this));
      }
      if ( LoginBehavior.allowsWebViewAuth() )
        v2.add(new com.facebook.AuthorizationClient$WebViewAuthHandler(this));
      return v2;
    }

    private void logAuthorizationMethodComplete(
            String p0,
            com.facebook.AuthorizationClient$Result p1,
            java.util.Map<String, String> p2)
    {
      this.logAuthorizationMethodComplete(p0, p1.code.getLoggingValue(), p1.errorMessage, p1.errorCode, p2);
    }

    private void logAuthorizationMethodComplete(
            String p0,
            String p1,
            String p2,
            String p3,
            java.util.Map<String, String> p4)
    {
      android.os.Bundle v6;
      android.os.Bundle v7; // RETVAL
    
      if ( this.pendingRequest != null )
      {
        v7 = newAuthorizationLoggingBundle(this.pendingRequest.getAuthId());
        v6 = v7;
        if ( p1 != null )
          v7.putString("2_result", p1);
        if ( p2 != null )
          v7.putString("5_error_message", p2);
        if ( p3 != null )
          v7.putString("4_error_code", p3);
        if ( p4 != null && !p4.isEmpty() )
          v6.putString("6_extras", new org.json.JSONObject(p4).toString());
      }
      else
      {
        v6 = newAuthorizationLoggingBundle("");
        v6.putString("2_result", AuthorizationClient$Result$Code.ERROR.getLoggingValue());
        v6.putString("5_error_message", "Unexpected call to logAuthorizationMethodComplete with null pendingRequest.");
      }
      v6.putString("3_method", p0);
      v6.putLong("1_timestamp_ms", System.currentTimeMillis());
      this.getAppEventsLogger().logSdkEvent("fb_mobile_login_method_complete", null, v6);
    }

    private void logAuthorizationMethodStart(String p0)
    {
      android.os.Bundle v2;
      v2 = newAuthorizationLoggingBundle(this.pendingRequest.getAuthId());
      v2.putLong("1_timestamp_ms", System.currentTimeMillis());
      v2.putString("3_method", p0);
      this.getAppEventsLogger().logSdkEvent("fb_mobile_login_method_start", null, v2);
    }

    private void logWebLoginCompleted(String p0, String p1)
    {
      com.facebook.AppEventsLogger v3;
      android.os.Bundle v4;
      v3 = AppEventsLogger.newLogger(this.context, p0);
      v4 = new android.os.Bundle();
      v4.putString("fb_web_login_e2e", p1);
      v4.putLong("fb_web_login_switchback_time", System.currentTimeMillis());
      v4.putString("app_id", p0);
      v3.logSdkEvent("fb_dialogs_web_login_dialog_complete", null, v4);
    }

    static android.os.Bundle newAuthorizationLoggingBundle(String p0)
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putLong("1_timestamp_ms", System.currentTimeMillis());
      v1.putString("0_auth_logger_id", p0);
      v1.putString("3_method", "");
      v1.putString("2_result", "");
      v1.putString("5_error_message", "");
      v1.putString("4_error_code", "");
      v1.putString("6_extras", "");
      return v1;
    }

    private void notifyBackgroundProcessingStart()
    {
      if ( this.backgroundProcessingListener != null )
        this.backgroundProcessingListener.onBackgroundProcessingStarted();
    }

    private void notifyBackgroundProcessingStop()
    {
      if ( this.backgroundProcessingListener != null )
        this.backgroundProcessingListener.onBackgroundProcessingStopped();
    }

    private void notifyOnCompleteListener(com.facebook.AuthorizationClient$Result p0)
    {
      if ( this.onCompletedListener != null )
        this.onCompletedListener.onCompleted(p0);
    }

    void authorize(com.facebook.AuthorizationClient$AuthorizationRequest p0)
    {
      if ( p0 != null )
      {
        if ( this.pendingRequest != null )
          throw new com.facebook.FacebookException("Attempted to authorize while a request is pending.");
        if ( !p0.needsNewTokenValidation() || this.checkInternetPermission() )
        {
          this.pendingRequest = p0;
          this.handlersToTry = this.getHandlerTypes(p0);
          this.tryNextHandler();
        }
      }
    }

    void cancelCurrentHandler()
    {
      if ( this.currentHandler != null )
        this.currentHandler.cancel();
    }

    boolean checkInternetPermission()
    {
      boolean v1;
      v1 = true;
      if ( !this.checkedInternetPermission )
      {
        if ( this.checkPermission("android.permission.INTERNET") != 0 )
        {
          this.complete(AuthorizationClient$Result.createErrorResult(
                          this.pendingRequest,
                          this.context.getString(2131165515),
                          this.context.getString(2131165516)));
          return false;
        }
        else
        {
          this.checkedInternetPermission = true;
        }
      }
      return v1;
    }

    int checkPermission(String p0)
    {
      return this.context.checkCallingOrSelfPermission(p0);
    }

    void complete(com.facebook.AuthorizationClient$Result p0)
    {
      if ( this.currentHandler != null )
        this.logAuthorizationMethodComplete(this.currentHandler.getNameForLogging(), p0, this.currentHandler.methodLoggingExtras);
      if ( this.loggingExtras != null )
        p0.loggingExtras = this.loggingExtras;
      this.handlersToTry = null;
      this.currentHandler = null;
      this.pendingRequest = null;
      this.loggingExtras = null;
      this.notifyOnCompleteListener(p0);
    }

    void completeAndValidate(com.facebook.AuthorizationClient$Result p0)
    {
      if ( p0.token != null && this.pendingRequest.needsNewTokenValidation() )
        this.validateSameFbidAndFinish(p0);
      else
        this.complete(p0);
    }

    void continueAuth()
    {
      if ( this.pendingRequest == null || this.currentHandler == null )
        throw new com.facebook.FacebookException("Attempted to continue authorization without a pending request.");
      if ( this.currentHandler.needsRestart() )
      {
        this.currentHandler.cancel();
        this.tryCurrentHandler();
      }
    }

    com.facebook.Request createGetPermissionsRequest(String p0)
    {
      android.os.Bundle v2;
      v2 = new android.os.Bundle();
      v2.putString("access_token", p0);
      return new com.facebook.Request(null, "me/permissions", v2, HttpMethod.GET, null);
    }

    com.facebook.Request createGetProfileIdRequest(String p0)
    {
      android.os.Bundle v2;
      v2 = new android.os.Bundle();
      v2.putString("fields", "id");
      v2.putString("access_token", p0);
      return new com.facebook.Request(null, "me", v2, HttpMethod.GET, null);
    }

    com.facebook.RequestBatch createReauthValidationBatch(com.facebook.AuthorizationClient$Result p0)
    {
      java.util.ArrayList v2;
      java.util.ArrayList v3;
      java.util.ArrayList v4;
      String Token;
      com.facebook.Request$Callback v6;
      String PreviousAccessToken;
      com.facebook.Request ProfileIdRequest;
      com.facebook.Request v9;
      com.facebook.Request PermissionsRequest; // RETVAL
      com.facebook.Request[] v11;
      com.facebook.RequestBatch v12;
      v2 = new java.util.ArrayList();
      v3 = new java.util.ArrayList();
      v4 = new java.util.ArrayList();
      Token = p0.token.getToken();
      v6 = (com.facebook.Request$Callback)new com.facebook.AuthorizationClient$3(this, v2);
      PreviousAccessToken = this.pendingRequest.getPreviousAccessToken();
      ProfileIdRequest = this.createGetProfileIdRequest(PreviousAccessToken);
      ProfileIdRequest.setCallback(v6);
      v9 = this.createGetProfileIdRequest(Token);
      v9.setCallback(v6);
      PermissionsRequest = this.createGetPermissionsRequest(PreviousAccessToken);
      PermissionsRequest.setCallback((com.facebook.Request$Callback)new com.facebook.AuthorizationClient$4(this, v3, v4));
      v11 = new com.facebook.Request[3];
      v11[0] = ProfileIdRequest;
      v11[1] = v9;
      v11[2] = PermissionsRequest;
      v12 = new com.facebook.RequestBatch(v11);
      v12.setBatchApplicationId(this.pendingRequest.getApplicationId());
      v12.addCallback((com.facebook.RequestBatch$Callback)new com.facebook.AuthorizationClient$5(this, v2, p0, v3, v4));
      return v12;
    }

    com.facebook.AuthorizationClient$BackgroundProcessingListener getBackgroundProcessingListener()
    {
      return this.backgroundProcessingListener;
    }

    boolean getInProgress()
    {
      return this.pendingRequest != null && this.currentHandler != null;
    }

    com.facebook.AuthorizationClient$OnCompletedListener getOnCompletedListener()
    {
      return this.onCompletedListener;
    }

    com.facebook.AuthorizationClient$StartActivityDelegate getStartActivityDelegate()
    {
      if ( this.startActivityDelegate != null )
        return this.startActivityDelegate;
      if ( this.pendingRequest != null )
        return (com.facebook.AuthorizationClient$StartActivityDelegate)new com.facebook.AuthorizationClient$2(this);
      return null;
    }

    boolean onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      return this.pendingRequest != null
          && p0 == this.pendingRequest.getRequestCode()
          && this.currentHandler.onActivityResult(p0, p1, p2);
    }

    void setBackgroundProcessingListener(
            com.facebook.AuthorizationClient$BackgroundProcessingListener p0)
    {
      this.backgroundProcessingListener = p0;
    }

    void setContext(android.app.Activity p0)
    {
      this.context = p0;
      this.startActivityDelegate = (com.facebook.AuthorizationClient$StartActivityDelegate)new com.facebook.AuthorizationClient$1(this, p0);
    }

    void setContext(android.content.Context p0)
    {
      this.context = p0;
      this.startActivityDelegate = null;
    }

    void setOnCompletedListener(com.facebook.AuthorizationClient$OnCompletedListener p0)
    {
      this.onCompletedListener = p0;
    }

    void startOrContinueAuth(com.facebook.AuthorizationClient$AuthorizationRequest p0)
    {
      if ( this.getInProgress() )
        this.continueAuth();
      else
        this.authorize(p0);
    }

    boolean tryCurrentHandler()
    {
      boolean v1;
      v1 = false;
      if ( !this.currentHandler.needsInternetPermission() || this.checkInternetPermission() )
      {
        v1 = this.currentHandler.tryAuthorize(this.pendingRequest);
        if ( v1 )
          this.logAuthorizationMethodStart(this.currentHandler.getNameForLogging());
        else
          this.addLoggingExtra("not_tried", this.currentHandler.getNameForLogging(), true);
      }
      else
      {
        this.addLoggingExtra("no_internet_permission", "1", false);
      }
      return v1;
    }

    void tryNextHandler()
    {
      if ( this.currentHandler != null )
        this.logAuthorizationMethodComplete(this.currentHandler.getNameForLogging(), "skipped", null, null, this.currentHandler.methodLoggingExtras);
      while ( this.handlersToTry != null && !this.handlersToTry.isEmpty() )
      {
        this.currentHandler = (com.facebook.AuthorizationClient$AuthHandler)this.handlersToTry.remove(0);
        if ( this.tryCurrentHandler() )
          return;
      }
      if ( this.pendingRequest != null )
        this.completeWithFailure();
    }

    void validateSameFbidAndFinish(com.facebook.AuthorizationClient$Result p0)
    {
      com.facebook.RequestBatch ReauthValidationBatch; // RETVAL
    
      if ( p0.token == null )
        throw new com.facebook.FacebookException("Can't validate without a token");
      ReauthValidationBatch = this.createReauthValidationBatch(p0);
      this.notifyBackgroundProcessingStart();
      ReauthValidationBatch.executeAsync();
    }

}
