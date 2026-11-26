// Decompiled from classes.dex (SourceFile: AuthorizationClient$GetTokenAuthHandler$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$GetTokenAuthHandler$1 implements com.facebook.internal.PlatformServiceClient$CompletedListener {
    // Fields
    final com.facebook.AuthorizationClient$GetTokenAuthHandler this$1;
    final com.facebook.AuthorizationClient$AuthorizationRequest val$request;

    // Methods
    AuthorizationClient$GetTokenAuthHandler$1(com.facebook.AuthorizationClient$GetTokenAuthHandler p0, com.facebook.AuthorizationClient$AuthorizationRequest p1)
    {
      super();
      this.this$1 = p0;
      this.val$request = p1;
    
    }

    public void completed(android.os.Bundle p0)
    {
      this.this$1.getTokenCompleted(this.val$request, p0);
    }

}
