// Decompiled from classes.dex (SourceFile: AuthorizationClient$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AuthorizationClient$1 implements com.facebook.AuthorizationClient$StartActivityDelegate {
    // Fields
    final com.facebook.AuthorizationClient this$0;
    final android.app.Activity val$activity;

    // Methods
    AuthorizationClient$1(com.facebook.AuthorizationClient p0, android.app.Activity p1)
    {
      super();
      this.this$0 = p0;
      this.val$activity = p1;
    
    }

    public android.app.Activity getActivityContext()
    {
      return this.val$activity;
    }

    public void startActivityForResult(android.content.Intent p0, int p1)
    {
      this.val$activity.startActivityForResult(p0, p1);
    }

}
