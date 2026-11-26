// Decompiled from classes.dex (SourceFile: AuthorizationClient$KatanaProxyAuthHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import com.facebook.internal.NativeProtocol;
import com.facebook.internal.ServerProtocol;
import com.facebook.internal.Utility;
class AuthorizationClient$KatanaProxyAuthHandler extends com.facebook.AuthorizationClient$KatanaAuthHandler {
    // Fields
    private static long serialVersionUID;
    private java.lang.String applicationId;
    final com.facebook.AuthorizationClient this$0;

    // Methods
    AuthorizationClient$KatanaProxyAuthHandler(com.facebook.AuthorizationClient p0)
    {
      super(p0);
      this.this$0 = p0;
    
    }

    private com.facebook.AuthorizationClient$Result handleResultOk(
            android.content.Intent p0)
    {
      android.os.Bundle Extras;
      String String;
      String v4;
      String v5;
      String v6;
      Extras = p0.getExtras();
      String = Extras.getString("error");
      if ( String == null )
        String = Extras.getString("error_type");
      v4 = Extras.getString("error_code");
      v5 = Extras.getString("error_message");
      if ( v5 == null )
        v5 = Extras.getString("error_description");
      v6 = Extras.getString("e2e");
      if ( !Utility.isNullOrEmpty(v6) )
        AuthorizationClient.access$200(this.this$0, this.applicationId, v6);
      if ( String == null && v4 == null && v5 == null )
        return AuthorizationClient$Result.createTokenResult(
                 this.this$0.pendingRequest,
                 AccessToken.createFromWebBundle(
                   this.this$0.pendingRequest.getPermissions(),
                   Extras,
                   AccessTokenSource.FACEBOOK_APPLICATION_WEB));
      if ( ServerProtocol.errorsProxyAuthDisabled.contains(String) )
        return null;
      if ( ServerProtocol.errorsUserCanceled.contains(String) )
        return AuthorizationClient$Result.createCancelResult(this.this$0.pendingRequest, null);
      return AuthorizationClient$Result.createErrorResult(this.this$0.pendingRequest, String, v5, v4);
    }

    String getNameForLogging()
    {
      return "katana_proxy_auth";
    }

    boolean onActivityResult(int p0, int p1, android.content.Intent p2)
    {
      com.facebook.AuthorizationClient$Result ErrorResult;
      if ( p2 != null )
      {
        if ( p1 != 0 )
        {
          if ( p1 == -1 )
            ErrorResult = this.handleResultOk(p2);
          else
            ErrorResult = AuthorizationClient$Result.createErrorResult(
                            this.this$0.pendingRequest,
                            "Unexpected resultCode from authorization.",
                            null);
        }
        else
        {
          ErrorResult = AuthorizationClient$Result.createCancelResult(
                          this.this$0.pendingRequest,
                          p2.getStringExtra("error"));
        }
      }
      else
      {
        ErrorResult = AuthorizationClient$Result.createCancelResult(this.this$0.pendingRequest, "Operation canceled");
      }
      if ( ErrorResult != null )
        this.this$0.completeAndValidate(ErrorResult);
      else
        this.this$0.tryNextHandler();
      return true;
    }

    boolean tryAuthorize(
            com.facebook.AuthorizationClient$AuthorizationRequest p0)
    {
      String v2;
      android.content.Intent ProxyAuthIntent;
      this.applicationId = p0.getApplicationId();
      v2 = AuthorizationClient.access$100();
      ProxyAuthIntent = NativeProtocol.createProxyAuthIntent(
                          this.this$0.context,
                          p0.getApplicationId(),
                          p0.getPermissions(),
                          v2,
                          p0.isRerequest(),
                          p0.getDefaultAudience());
      this.addLoggingExtra("e2e", v2);
      return this.tryIntent(ProxyAuthIntent, p0.getRequestCode());
    }

}
