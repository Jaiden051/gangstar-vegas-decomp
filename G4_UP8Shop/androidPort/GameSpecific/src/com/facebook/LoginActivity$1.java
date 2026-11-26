// Decompiled from classes.dex (SourceFile: LoginActivity$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class LoginActivity$1 implements com.facebook.AuthorizationClient$OnCompletedListener {
    // Fields
    final com.facebook.LoginActivity this$0;

    // Methods
    LoginActivity$1(com.facebook.LoginActivity p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(com.facebook.AuthorizationClient$Result p0)
    {
      LoginActivity.access$000(this.this$0, p0);
    }

}
