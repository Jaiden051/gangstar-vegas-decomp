// Decompiled from classes.dex (SourceFile: AuthorizationClient$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$2 implements com.facebook.AuthorizationClient$StartActivityDelegate {
    // Fields
    final com.facebook.AuthorizationClient this$0;

    // Methods
    AuthorizationClient$2(com.facebook.AuthorizationClient p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public android.app.Activity getActivityContext()
    {
      return this.this$0.pendingRequest.getStartActivityDelegate().getActivityContext();
    }

    public void startActivityForResult(android.content.Intent p0, int p1)
    {
      this.this$0.pendingRequest.getStartActivityDelegate().startActivityForResult(p0, p1);
    }

}
