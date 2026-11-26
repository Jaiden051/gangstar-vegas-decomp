// Decompiled from classes.dex (SourceFile: Facebook.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.android;

import android.net.Uri;
import com.facebook.Session;
import com.facebook.SessionLoginBehavior;
import com.facebook.SessionState;
import com.facebook.Settings;
import java.util.Arrays;
import java.util.Collections;
public class Facebook {
    // Fields
    public static java.lang.String ATTRIBUTION_ID_COLUMN_NAME;
    public static final android.net.Uri ATTRIBUTION_ID_CONTENT_URI;
    public static java.lang.String CANCEL_URI;
    private static int DEFAULT_AUTH_ACTIVITY_CODE;
    protected static java.lang.String DIALOG_BASE_URL;
    public static java.lang.String EXPIRES;
    public static java.lang.String FB_APP_SIGNATURE;
    public static int FORCE_DIALOG_AUTH;
    protected static java.lang.String GRAPH_BASE_URL;
    private static java.lang.String LOGIN;
    public static java.lang.String REDIRECT_URI;
    private static long REFRESH_TOKEN_BARRIER;
    protected static java.lang.String RESTSERVER_URL;
    public static java.lang.String SINGLE_SIGN_ON_DISABLED;
    public static java.lang.String TOKEN;
    private long accessExpiresMillisecondsAfterEpoch;
    private java.lang.String accessToken;
    private long lastAccessUpdateMillisecondsAfterEpoch;
    private final java.lang.Object lock;
    private java.lang.String mAppId;
    private android.app.Activity pendingAuthorizationActivity;
    private java.lang.String[] pendingAuthorizationPermissions;
    private com.facebook.Session pendingOpeningSession;
    private volatile com.facebook.Session session;
    private boolean sessionInvalidated;
    private com.facebook.android.Facebook$SetterTokenCachingStrategy tokenCache;
    private volatile com.facebook.Session userSetSession;

    // Methods
    static
    {
      ATTRIBUTION_ID_CONTENT_URI = Uri.parse("content://com.facebook.katana.provider.AttributionIdProvider");
      DIALOG_BASE_URL = "https://m.facebook.com/dialog/";
      GRAPH_BASE_URL = "https://graph.facebook.com/";
      RESTSERVER_URL = "https://api.facebook.com/restserver.php";
    }

    public Facebook(String p0)
    {
      super();
      this.lock = new Object();
      this.accessToken = null;
      this.accessExpiresMillisecondsAfterEpoch = 0;
      this.lastAccessUpdateMillisecondsAfterEpoch = 0;
      if ( p0 == null )
        throw new IllegalArgumentException("You must specify your application ID when instantiating a Facebook object. See RE" +
                                           "ADME for details.");
      this.mAppId = p0;
    }

    /* synthetic */ static void access$000(
            com.facebook.android.Facebook p0,
            com.facebook.Session p1,
            com.facebook.SessionState p2,
            Exception p3,
            com.facebook.android.Facebook$DialogListener p4)
    {
      p0.onSessionCallback(p1, p2, p3, p4);
    }

    /* synthetic */ static String access$100(com.facebook.android.Facebook p0)
    {
      return p0.accessToken;
    }

    /* synthetic */ static String access$102(com.facebook.android.Facebook p0, String p1)
    {
      p0.accessToken = p1;
      return p1;
    }

    /* synthetic */ static com.facebook.Session access$200(com.facebook.android.Facebook p0)
    {
      return p0.session;
    }

    /* synthetic */ static long access$400(com.facebook.android.Facebook p0)
    {
      return p0.accessExpiresMillisecondsAfterEpoch;
    }

    /* synthetic */ static long access$402(com.facebook.android.Facebook p0, long p1)
    {
      p0.accessExpiresMillisecondsAfterEpoch = p1;
      return p1;
    }

    /* synthetic */ static String[] access$500(com.facebook.android.Facebook p0)
    {
      return p0.pendingAuthorizationPermissions;
    }

    /* synthetic */ static String[] access$502(com.facebook.android.Facebook p0, String[] p1)
    {
      p0.pendingAuthorizationPermissions = p1;
      return p1;
    }

    /* synthetic */ static java.util.List access$600(String[] p0)
    {
      return stringList(p0);
    }

    /* synthetic */ static long access$700(com.facebook.android.Facebook p0)
    {
      return p0.lastAccessUpdateMillisecondsAfterEpoch;
    }

    /* synthetic */ static long access$702(com.facebook.android.Facebook p0, long p1)
    {
      p0.lastAccessUpdateMillisecondsAfterEpoch = p1;
      return p1;
    }

    /* synthetic */ static String[] access$800(java.util.List p0)
    {
      return stringArray(p0);
    }

    private void authorize(
            android.app.Activity p0,
            String[] p1,
            int p2,
            com.facebook.SessionLoginBehavior p3,
            com.facebook.android.Facebook$DialogListener p4)
    {
      boolean v6;
      com.facebook.Session$OpenRequest v7; // RETVAL
      com.facebook.Session pendingOpeningSession;
      v6 = false;
      this.checkUserSession("authorize");
      this.pendingOpeningSession = new com.facebook.Session$Builder(p0).setApplicationId(this.mAppId).setTokenCachingStrategy(this.getTokenCache()).build();
      this.pendingAuthorizationActivity = p0;
      if ( p1 == null )
        p1 = new String[0];
      this.pendingAuthorizationPermissions = p1;
      v7 = new com.facebook.Session$OpenRequest(p0).setCallback((com.facebook.Session$StatusCallback)new com.facebook.android.Facebook$1(this, p4)).setLoginBehavior(p3).setRequestCode(p2).setPermissions(Arrays.asList(this.pendingAuthorizationPermissions));
      pendingOpeningSession = this.pendingOpeningSession;
      if ( this.pendingAuthorizationPermissions.length > 0 )
        v6 = true;
      this.openSession(pendingOpeningSession, v7, v6);
    }

    private void checkUserSession(String p0)
    {
      com.facebook.Session userSetSession;
      Object[] v3;
      userSetSession = this.userSetSession;
      if ( userSetSession != null )
      {
        v3 = new Object[1];
        v3[0] = p0;
        throw new UnsupportedOperationException(String.format("Cannot call %s after setSession has been called.", v3));
      }
    }

    public static String getAttributionId(android.content.ContentResolver p0)
    {
      return Settings.getAttributionId(p0);
    }

    private com.facebook.TokenCachingStrategy getTokenCache()
    {
      if ( this.tokenCache == null )
        this.tokenCache = new com.facebook.android.Facebook$SetterTokenCachingStrategy(this, null);
      return this.tokenCache;
    }

    private void onSessionCallback(
            com.facebook.Session p0,
            com.facebook.SessionState p1,
            Exception p2,
            com.facebook.android.Facebook$DialogListener p3)
    {
      android.os.Bundle AuthorizationBundle; // RETVAL
      android.os.Bundle v6;
      com.facebook.Session v7;
      Object lock;
      com.facebook.Session session;
      AuthorizationBundle = p0.getAuthorizationBundle();
      v6 = AuthorizationBundle;
      if ( p1 == SessionState.OPENED )
      {
        v7 = null;
        lock = this.lock;
        synchronized ( lock )
        {
          session = this.session;
          if ( p0 != session )
          {
            v7 = this.session;
            this.session = p0;
            this.sessionInvalidated = false;
          }
        }
        if ( v7 != null )
          v7.close();
        p3.onComplete(AuthorizationBundle);
        return;
      }
      if ( p2 != null )
      {
        if ( p2 instanceof com.facebook.FacebookOperationCanceledException )
        {
          p3.onCancel();
        }
        else if ( p2 instanceof com.facebook.FacebookAuthorizationException
               && AuthorizationBundle != null
               && AuthorizationBundle.containsKey("com.facebook.sdk.WebViewErrorCode")
               && v6.containsKey("com.facebook.sdk.FailingUrl") )
        {
          p3.onError(new com.facebook.android.DialogError(p2.getMessage(), v6.getInt("com.facebook.sdk.WebViewErrorCode"), v6.getString("com.facebook.sdk.FailingUrl")));
        }
        else
        {
          p3.onFacebookError(new com.facebook.android.FacebookError(p2.getMessage()));
        }
      }
    }

    private void openSession(com.facebook.Session p0, com.facebook.Session$OpenRequest p1, boolean p2)
    {
      p1.setIsLegacy(true);
      if ( p2 )
        p0.openForPublish(p1);
      else
        p0.openForRead(p1);
    }

    private static String[] stringArray(java.util.List<String> p0)
    {
      int v1;
      int v2;
      String[] v3;
      v1 = 0;
      if ( p0 != null )
        v2 = p0.size();
      else
        v2 = 0;
      v3 = new String[v2];
      if ( p0 != null )
      {
        while ( v1 < v3.length )
        {
          v3[v1] = (String)p0.get(v1);
          ++v1;
        }
      }
      return v3;
    }

    private static java.util.List<String> stringList(String[] p0)
    {
      if ( p0 != null )
        return Arrays.asList(p0);
      else
        return Collections.emptyList();
    }

    private boolean validateAppSignatureForPackage(android.content.Context p0, String p1)
    {
      boolean v3;
      android.content.pm.Signature[] v4;
      int v5;
      int i;
      v3 = false;
      try
      {
        v4 = (p0.getPackageManager().getPackageInfo(p1, 64)).signatures;
        v5 = v4.length;
        for ( i = 0; i < v5; ++i )
        {
          if ( v4[i].toCharsString().equals("30820268308201d102044a9c4610300d06092a864886f70d0101040500307a310b30090603550406" +
                                            "13025553310b3009060355040813024341311230100603550407130950616c6f20416c746f311830" +
                                            "16060355040a130f46616365626f6f6b204d6f62696c653111300f060355040b130846616365626f" +
                                            "6f6b311d301b0603550403131446616365626f6f6b20436f72706f726174696f6e3020170d303930" +
                                            "3833313231353231365a180f32303530303932353231353231365a307a310b300906035504061302" +
                                            "5553310b3009060355040813024341311230100603550407130950616c6f20416c746f3118301606" +
                                            "0355040a130f46616365626f6f6b204d6f62696c653111300f060355040b130846616365626f6f6b" +
                                            "311d301b0603550403131446616365626f6f6b20436f72706f726174696f6e30819f300d06092a86" +
                                            "4886f70d010101050003818d0030818902818100c207d51df8eb8c97d93ba0c8c1002c928fab00dc" +
                                            "1b42fca5e66e99cc3023ed2d214d822bc59e8e35ddcf5f44c7ae8ade50d7e0c434f500e6c131f4a2" +
                                            "834f987fc46406115de2018ebbb0d5a3c261bd97581ccfef76afc7135a6d59e8855ecd7eacc8f873" +
                                            "7e794c60a761c536b72b11fac8e603f5da1a2d54aa103b8a13c0dbc10203010001300d06092a8648" +
                                            "86f70d0101040500038181005ee9be8bcbb250648d3b741290a82a1c9dc2e76a0af2f2228f1d9f9c" +
                                            "4007529c446a70175c5a900d5141812866db46be6559e2141616483998211f4a673149fb2232a10d" +
                                            "247663b26a9031e15f84bc1c74d141ff98a02d76f85b2c8ab2571b6469b232d8e768a7f7ca04f7ab" +
                                            "e4a775615916c07940656b58717457b42bd928a2") )
          {
            return true;
          }
        }
        return v3;
      }
      catch ( android.content.pm.PackageManager.NameNotFoundException e )
      {
      }
      return v3;
    }

    private boolean validateServiceIntent(android.content.Context p0, android.content.Intent p1)
    {
      boolean v3;
      android.content.pm.ResolveInfo v4; // RETVAL
    
      v3 = false;
      v4 = p0.getPackageManager().resolveService(p1, 0);
      if ( v4 != null )
        return this.validateAppSignatureForPackage(p0, v4.serviceInfo.packageName);
      return v3;
    }

    public void authorize(android.app.Activity p0, com.facebook.android.Facebook$DialogListener p1)
    {
      this.authorize(p0, new String[0], 32665, SessionLoginBehavior.SSO_WITH_FALLBACK, p1);
    }

    public void authorize(
            android.app.Activity p0,
            String[] p1,
            int p2,
            com.facebook.android.Facebook$DialogListener p3)
    {
      com.facebook.SessionLoginBehavior v5;
      if ( p2 < 0 )
        v5 = SessionLoginBehavior.SUPPRESS_SSO;
      else
        v5 = SessionLoginBehavior.SSO_WITH_FALLBACK;
      this.authorize(p0, p1, p2, v5, p3);
    }

    public void authorize(android.app.Activity p0, String[] p1, com.facebook.android.Facebook$DialogListener p2)
    {
      this.authorize(p0, p1, 32665, SessionLoginBehavior.SSO_WITH_FALLBACK, p2);
    }

    public void authorizeCallback(int p0, int p1, android.content.Intent p2)
    {
      com.facebook.Session pendingOpeningSession;
      this.checkUserSession("authorizeCallback");
      pendingOpeningSession = this.pendingOpeningSession;
      if ( pendingOpeningSession != null
        && pendingOpeningSession.onActivityResult(this.pendingAuthorizationActivity, p0, p1, p2) )
      {
        this.pendingOpeningSession = null;
        this.pendingAuthorizationActivity = null;
        this.pendingAuthorizationPermissions = null;
      }
    }

    public void dialog(
            android.content.Context p0,
            String p1,
            android.os.Bundle p2,
            com.facebook.android.Facebook$DialogListener p3)
    {
      p2.putString("display", "touch");
      p2.putString("redirect_uri", "fbconnect://success");
      if ( p1.equals("oauth") )
      {
        p2.putString("type", "user_agent");
        p2.putString("client_id", this.mAppId);
      }
      else
      {
        p2.putString("app_id", this.mAppId);
        if ( this.isSessionValid() )
          p2.putString("access_token", this.getAccessToken());
      }
      if ( p0.checkCallingOrSelfPermission("android.permission.INTERNET") != 0 )
        Util.showAlert(p0, "Error", "Application requires permission to access the Internet");
      else
        new com.facebook.android.FbDialog(p0, p1, p2, p3).show();
    }

    public void dialog(android.content.Context p0, String p1, com.facebook.android.Facebook$DialogListener p2)
    {
      this.dialog(p0, p1, new android.os.Bundle(), p2);
    }

    public boolean extendAccessToken(android.content.Context p0, com.facebook.android.Facebook$ServiceListener p1)
    {
      android.content.Intent v3;
      this.checkUserSession("extendAccessToken");
      v3 = new android.content.Intent();
      v3.setClassName("com.facebook.katana", "com.facebook.katana.platform.TokenRefreshService");
      return this.validateServiceIntent(p0, v3)
          && p0.bindService(v3, (android.content.ServiceConnection)new com.facebook.android.Facebook$TokenRefreshServiceConnection(this, p0, p1), 1);
    }

    public boolean extendAccessTokenIfNeeded(
            android.content.Context p0,
            com.facebook.android.Facebook$ServiceListener p1)
    {
      this.checkUserSession("extendAccessTokenIfNeeded");
      return !this.shouldExtendAccessToken() || this.extendAccessToken(p0, p1);
    }

    public long getAccessExpires()
    {
      com.facebook.Session Session; // RETVAL
    
      Session = this.getSession();
      if ( Session != null )
        return Session.getExpirationDate().getTime();
      else
        return this.accessExpiresMillisecondsAfterEpoch;
    }

    public String getAccessToken()
    {
      com.facebook.Session Session; // RETVAL
    
      Session = this.getSession();
      if ( Session != null )
        return Session.getAccessToken();
      else
        return null;
    }

    public String getAppId()
    {
      return this.mAppId;
    }

    public long getLastAccessUpdate()
    {
      return this.lastAccessUpdateMillisecondsAfterEpoch;
    }

    public final com.facebook.Session getSession()
    {
      Object lock;
      com.facebook.Session userSetSession;
      com.facebook.Session v3;
      com.facebook.Session session;
      String accessToken;
      com.facebook.Session v8;
      java.util.List Permissions;
      com.facebook.Session v10;
      com.facebook.Session$OpenRequest v11;
      boolean v12;
      Object v13;
      com.facebook.Session v14;
      com.facebook.Session v15;
      com.facebook.Session v16;
      com.facebook.Session v17;
      while ( true )
      {
        lock = this.lock;
        synchronized ( lock )
        {
          userSetSession = this.userSetSession;
          if ( userSetSession != null )
            return this.userSetSession;
          session = this.session;
          if ( session != null || !this.sessionInvalidated )
            return this.session;
          accessToken = this.accessToken;
          v8 = this.session;
        }
        if ( accessToken == null )
          return null;
        if ( v8 != null )
          Permissions = v8.getPermissions();
        else
          Permissions = this.pendingAuthorizationPermissions != null
                      ? Arrays.asList(this.pendingAuthorizationPermissions)
                      : Collections.emptyList();
        v10 = new com.facebook.Session$Builder(this.pendingAuthorizationActivity).setApplicationId(this.mAppId).setTokenCachingStrategy(this.getTokenCache()).build();
        if ( v10.getState() != SessionState.CREATED_TOKEN_LOADED )
          return null;
        v11 = new com.facebook.Session$OpenRequest(this.pendingAuthorizationActivity).setPermissions(Permissions);
        v12 = !Permissions.isEmpty();
        this.openSession(v10, v11, v12);
        v13 = this.lock;
        synchronized ( v13 )
        {
          if ( !this.sessionInvalidated && (v14 = this.session) != null )
          {
            v3 = null;
            v17 = null;
          }
          else
          {
            v15 = this.session;
            this.session = v10;
            this.sessionInvalidated = false;
            v16 = v10;
            v17 = v15;
            v3 = v16;
          }
        }
        if ( v17 != null )
          v17.close();
        if ( v3 != null )
          return v3;
      }
    }

    public boolean isSessionValid()
    {
      return this.getAccessToken() != null
          && (this.getAccessExpires() == 0 || System.currentTimeMillis() < this.getAccessExpires());
    }

    public String logout(android.content.Context p0)
 throws java.io.IOException {
      return this.logoutImpl(p0);
    }

    String logoutImpl(android.content.Context p0)
 throws java.io.IOException {
      android.os.Bundle v2;
      String v3;
      long v4; // RETVAL
      Object lock;
      com.facebook.Session session;
      this.checkUserSession("logout");
      v2 = new android.os.Bundle();
      v2.putString("method", "auth.expireSession");
      v3 = this.request(v2);
      v4 = System.currentTimeMillis();
      lock = this.lock;
      synchronized ( lock )
      {
        session = this.session;
        this.session = null;
        this.accessToken = null;
        this.accessExpiresMillisecondsAfterEpoch = 0;
        this.lastAccessUpdateMillisecondsAfterEpoch = v4;
        this.sessionInvalidated = false;
      }
      if ( session != null )
        session.closeAndClearTokenInformation();
      return v3;
    }

    public String request(android.os.Bundle p0)
 throws java.io.IOException {
      if ( !p0.containsKey("method") )
        throw new IllegalArgumentException("API method must be specified. (parameters must contain key \"method\" and value)." +
                                           " See http://developers.facebook.com/docs/reference/rest/");
      return this.requestImpl(null, p0, "GET");
    }

    public String request(String p0)
 throws java.io.IOException {
      return this.requestImpl(p0, new android.os.Bundle(), "GET");
    }

    public String request(String p0, android.os.Bundle p1)
 throws java.io.IOException {
      return this.requestImpl(p0, p1, "GET");
    }

    public String request(String p0, android.os.Bundle p1, String p2)
 throws java.io.IOException {
      return this.requestImpl(p0, p1, p2);
    }

    String requestImpl(String p0, android.os.Bundle p1, String p2)
 throws java.io.IOException {
      String v4;
      p1.putString("format", "json");
      if ( this.isSessionValid() )
        p1.putString("access_token", this.getAccessToken());
      if ( p0 != null )
        v4 = GRAPH_BASE_URL + p0;
      else
        v4 = RESTSERVER_URL;
      return Util.openUrl(v4, p2, p1);
    }

    public void setAccessExpires(long p0)
    {
      Object lock;
      this.checkUserSession("setAccessExpires");
      lock = this.lock;
      synchronized ( lock )
      {
        this.accessExpiresMillisecondsAfterEpoch = p0;
        this.lastAccessUpdateMillisecondsAfterEpoch = System.currentTimeMillis();
        this.sessionInvalidated = true;
      }
    }

    public void setAccessExpiresIn(String p0)
    {
      long v2;
      this.checkUserSession("setAccessExpiresIn");
      if ( p0 != null )
      {
        if ( p0.equals("0") )
          v2 = 0;
        else
          v2 = System.currentTimeMillis() + 1000 * Long.parseLong(p0);
        this.setAccessExpires(v2);
      }
    }

    public void setAccessToken(String p0)
    {
      Object lock;
      this.checkUserSession("setAccessToken");
      lock = this.lock;
      synchronized ( lock )
      {
        this.accessToken = p0;
        this.lastAccessUpdateMillisecondsAfterEpoch = System.currentTimeMillis();
        this.sessionInvalidated = true;
      }
    }

    public void setAppId(String p0)
    {
      Object lock;
      this.checkUserSession("setAppId");
      lock = this.lock;
      synchronized ( lock )
      {
        this.mAppId = p0;
        this.sessionInvalidated = true;
      }
    }

    public void setSession(com.facebook.Session p0)
    {
      Object lock;
      if ( p0 == null )
        throw new IllegalArgumentException("session cannot be null");
      lock = this.lock;
      synchronized ( lock )
      {
        this.userSetSession = p0;
      }
    }

    public void setTokenFromCache(String p0, long p1, long p3)
    {
      Object lock;
      this.checkUserSession("setTokenFromCache");
      lock = this.lock;
      synchronized ( lock )
      {
        this.accessToken = p0;
        this.accessExpiresMillisecondsAfterEpoch = p1;
        this.lastAccessUpdateMillisecondsAfterEpoch = p3;
      }
    }

    public boolean shouldExtendAccessToken()
    {
      this.checkUserSession("shouldExtendAccessToken");
      return this.isSessionValid() && System.currentTimeMillis() - this.lastAccessUpdateMillisecondsAfterEpoch >= 86400000;
    }

}
