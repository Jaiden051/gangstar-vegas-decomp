// Decompiled from classes.dex (SourceFile: AuthorizationClient$WebViewAuthHandler$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$WebViewAuthHandler$1 implements com.facebook.widget.WebDialog$OnCompleteListener {
    // Fields
    final com.facebook.AuthorizationClient$WebViewAuthHandler this$1;
    final com.facebook.AuthorizationClient$AuthorizationRequest val$request;

    // Methods
    AuthorizationClient$WebViewAuthHandler$1(com.facebook.AuthorizationClient$WebViewAuthHandler p0, com.facebook.AuthorizationClient$AuthorizationRequest p1)
    {
      super();
      this.this$1 = p0;
      this.val$request = p1;
    
    }

    public void onComplete(
            android.os.Bundle p0,
            com.facebook.FacebookException p1)
    {
      this.this$1.onWebDialogComplete(this.val$request, p0, p1);
    }

}
