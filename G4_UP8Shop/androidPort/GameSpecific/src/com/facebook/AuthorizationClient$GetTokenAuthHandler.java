// Decompiled from classes.dex (SourceFile: AuthorizationClient$GetTokenAuthHandler.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.text.TextUtils;
class AuthorizationClient$GetTokenAuthHandler extends com.facebook.AuthorizationClient$AuthHandler {
    // Fields
    private static long serialVersionUID;
    private transient com.facebook.GetTokenClient getTokenClient;
    final com.facebook.AuthorizationClient this$0;

    // Methods
    AuthorizationClient$GetTokenAuthHandler(com.facebook.AuthorizationClient p0)
    {
      super(p0);
      this.this$0 = p0;
    
    }

    void cancel()
    {
      if ( this.getTokenClient != null )
      {
        this.getTokenClient.cancel();
        this.getTokenClient = null;
      }
    }

    String getNameForLogging()
    {
      return "get_token";
    }

    void getTokenCompleted(
            com.facebook.AuthorizationClient$AuthorizationRequest p0,
            android.os.Bundle p1)
    {
      java.util.ArrayList StringArrayList;
      java.util.List Permissions; // RETVAL
      java.util.List v5;
      java.util.List v6;
      java.util.Iterator v7;
      String v8;
      this.getTokenClient = null;
      AuthorizationClient.access$000(this.this$0);
      if ( p1 != null )
      {
        StringArrayList = p1.getStringArrayList("com.facebook.platform.extra.PERMISSIONS");
        Permissions = p0.getPermissions();
        v5 = Permissions;
        if ( StringArrayList != null && (Permissions == null || StringArrayList.containsAll(Permissions)) )
        {
          this.this$0.completeAndValidate(AuthorizationClient$Result.createTokenResult(
                                            this.this$0.pendingRequest,
                                            AccessToken.createFromNativeLogin(
                                              p1,
                                              AccessTokenSource.FACEBOOK_APPLICATION_SERVICE)));
          return;
        }
        v6 = new java.util.ArrayList();
        v7 = v5.iterator();
        while ( v7.hasNext() )
        {
          v8 = (String)v7.next();
          if ( !StringArrayList.contains(v8) )
            v6.add(v8);
        }
        if ( !v6.isEmpty() )
          this.addLoggingExtra("new_permissions", TextUtils.join(",", v6));
        p0.setPermissions(v6);
      }
      this.this$0.tryNextHandler();
    }

    boolean needsRestart()
    {
      return this.getTokenClient == null;
    }

    boolean tryAuthorize(com.facebook.AuthorizationClient$AuthorizationRequest p0)
    {
      this.getTokenClient = new com.facebook.GetTokenClient(this.this$0.context, p0.getApplicationId());
      if ( !this.getTokenClient.start() )
        return false;
      AuthorizationClient.access$300(this.this$0);
      this.getTokenClient.setCompletedListener((com.facebook.internal.PlatformServiceClient$CompletedListener)new com.facebook.AuthorizationClient$GetTokenAuthHandler$1(this, p0));
      return true;
    }

}
