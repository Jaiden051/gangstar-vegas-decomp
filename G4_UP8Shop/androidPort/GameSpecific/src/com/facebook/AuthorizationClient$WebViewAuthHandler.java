// Decompiled from classes.dex (SourceFile: AuthorizationClient$WebViewAuthHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.os.Message;
import android.text.TextUtils;
import android.webkit.CookieSyncManager;
import com.facebook.internal.Utility;
import com.google.android.gms.internal.in;
class AuthorizationClient$WebViewAuthHandler extends com.facebook.AuthorizationClient$AuthHandler {
    // Fields
    private static long serialVersionUID;
    private java.lang.String applicationId;
    private java.lang.String e2e;
    private transient com.facebook.widget.WebDialog loginDialog;
    final com.facebook.AuthorizationClient this$0;

    // Methods
    AuthorizationClient$WebViewAuthHandler(com.facebook.AuthorizationClient p0)
    {
      super(p0);
      this.this$0 = p0;
    
    }

    private String loadCookieToken()
    {
      return this.this$0.getStartActivityDelegate().getActivityContext().getSharedPreferences("com.facebook.AuthorizationClie" +
                                                                                              "nt.WebViewAuthHandler.TOKEN_STORE_KEY", 0).getString("TOKEN", "");
    }

    private void saveCookieToken(String p0)
    {
      this.this$0.getStartActivityDelegate().getActivityContext().getSharedPreferences("com.facebook.AuthorizationClient.WebV" +
                                                                                       "iewAuthHandler.TOKEN_STORE_KEY", 0).edit().putString("TOKEN", p0).apply();
    }

    void cancel()
    {
      if ( this.loginDialog != null )
      {
        this.loginDialog.setOnCompleteListener(null);
        this.loginDialog.dismiss();
        this.loginDialog = null;
      }
    }

    String getNameForLogging()
    {
      return "web_view";
    }

    boolean needsInternetPermission()
    {
      return true;
    }

    boolean needsRestart()
    {
      return true;
    }

    void onWebDialogComplete(
            com.facebook.AuthorizationClient$AuthorizationRequest p0,
            android.os.Bundle p1,
            com.facebook.FacebookException p2)
    {
      com.facebook.AccessToken v4;
      com.facebook.AuthorizationClient$Result TokenResult;
      String Message;
      com.facebook.FacebookRequestError RequestError;
      Object[] v8;
      String v9;
      if ( p1 != null )
      {
        if ( p1.containsKey("e2e") )
          this.e2e = p1.getString("e2e");
        v4 = AccessToken.createFromWebBundle(p0.getPermissions(), p1, AccessTokenSource.WEB_VIEW);
        TokenResult = AuthorizationClient$Result.createTokenResult(this.this$0.pendingRequest, v4);
        CookieSyncManager.createInstance(this.this$0.context).sync();
        this.saveCookieToken(v4.getToken());
      }
      else if ( p2 instanceof com.facebook.FacebookOperationCanceledException )
      {
        TokenResult = AuthorizationClient$Result.createCancelResult(this.this$0.pendingRequest, "User canceled log in.");
      }
      else
      {
        this.e2e = null;
        Message = p2.getMessage();
        if ( p2 instanceof com.facebook.FacebookServiceException )
        {
          RequestError = ((com.facebook.FacebookServiceException)p2).getRequestError();
          v8 = new Object[1];
          v8[0] = Integer.valueOf(RequestError.getErrorCode());
          v9 = String.format("%d", v8);
          Message = RequestError.toString();
        }
        else
        {
          v9 = null;
        }
        TokenResult = AuthorizationClient$Result.createErrorResult(this.this$0.pendingRequest, null, Message, v9);
      }
      if ( !Utility.isNullOrEmpty(this.e2e) )
        AuthorizationClient.access$200(this.this$0, this.applicationId, this.e2e);
      this.this$0.completeAndValidate(TokenResult);
    }

    boolean tryAuthorize(com.facebook.AuthorizationClient$AuthorizationRequest p0)
    {
      android.os.Bundle v2;
      String v3; // RETVAL
      String PreviousAccessToken;
      this.applicationId = p0.getApplicationId();
      v2 = new android.os.Bundle();
      if ( !Utility.isNullOrEmpty(p0.getPermissions()) )
      {
        v3 = TextUtils.join(",", p0.getPermissions());
        v2.putString("scope", v3);
        this.addLoggingExtra("scope", v3);
      }
      v2.putString("default_audience", p0.getDefaultAudience().getNativeProtocolAudience());
      PreviousAccessToken = p0.getPreviousAccessToken();
      if ( Utility.isNullOrEmpty(PreviousAccessToken) || !PreviousAccessToken.equals(this.loadCookieToken()) )
      {
        Utility.clearFacebookCookies(this.this$0.context);
        this.addLoggingExtra("access_token", "0");
      }
      else
      {
        v2.putString("access_token", PreviousAccessToken);
        this.addLoggingExtra("access_token", "1");
      }
      this.e2e = AuthorizationClient.access$100();
      this.addLoggingExtra("e2e", this.e2e);
      this.loginDialog = ((com.facebook.widget.WebDialog$Builder)new com.facebook.AuthorizationClient$AuthDialogBuilder(this.this$0.getStartActivityDelegate().getActivityContext(), this.applicationId, v2).setE2E(this.e2e).setIsRerequest(p0.isRerequest()).setOnCompleteListener((com.facebook.widget.WebDialog$OnCompleteListener)new com.facebook.AuthorizationClient$WebViewAuthHandler$1(this, p0))).build();
      this.loginDialog.show();
      return true;
    }

}
