// Decompiled from classes.dex (SourceFile: AuthorizationClient$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$5 implements com.facebook.RequestBatch$Callback {
    // Fields
    final com.facebook.AuthorizationClient this$0;
    final java.util.ArrayList val$declinedPermissions;
    final java.util.ArrayList val$fbids;
    final java.util.ArrayList val$grantedPermissions;
    final com.facebook.AuthorizationClient$Result val$pendingResult;

    // Methods
    AuthorizationClient$5(
            com.facebook.AuthorizationClient p0,
            java.util.ArrayList p1,
            com.facebook.AuthorizationClient$Result p2,
            java.util.ArrayList p3,
            java.util.ArrayList p4)
    {
      super();
      this.this$0 = p0;
      this.val$fbids = p1;
      this.val$pendingResult = p2;
      this.val$grantedPermissions = p3;
      this.val$declinedPermissions = p4;
    
    }

    public void onBatchCompleted(com.facebook.RequestBatch p0)
    {
      com.facebook.AuthorizationClient$Result TokenResult;
      try
      {
        try
        {
          if ( this.val$fbids.size() == 2
            && this.val$fbids.get(0) != null
            && this.val$fbids.get(1) != null
            && ((String)this.val$fbids.get(0)).equals(this.val$fbids.get(1)) )
          {
            TokenResult = AuthorizationClient$Result.createTokenResult(
                            this.this$0.pendingRequest,
                            AccessToken.createFromTokenWithRefreshedPermissions(
                              this.val$pendingResult.token,
                              this.val$grantedPermissions,
                              this.val$declinedPermissions));
          }
          else
          {
            TokenResult = AuthorizationClient$Result.createErrorResult(
                            this.this$0.pendingRequest,
                            "User logged in as different Facebook user.",
                            null);
          }
          this.this$0.complete(TokenResult);
          return;
        }
        catch ( Exception v3 )
        {
          this.this$0.complete(AuthorizationClient$Result.createErrorResult(
                                 this.this$0.pendingRequest,
                                 "Caught exception",
                                 v3.getMessage()));
        }
      }
      finally
      {
        AuthorizationClient.access$000(this.this$0);
      }
      return;
    }

}
