// Decompiled from classes.dex (SourceFile: LoginActivity$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class LoginActivity$2 implements com.facebook.AuthorizationClient$BackgroundProcessingListener {
    // Fields
    final com.facebook.LoginActivity this$0;

    // Methods
    LoginActivity$2(com.facebook.LoginActivity p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onBackgroundProcessingStarted()
    {
      this.this$0.findViewById(2131427367).setVisibility(0);
    }

    public void onBackgroundProcessingStopped()
    {
      this.this$0.findViewById(2131427367).setVisibility(8);
    }

}
