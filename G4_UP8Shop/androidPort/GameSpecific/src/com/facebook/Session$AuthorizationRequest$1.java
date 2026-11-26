// Decompiled from classes.dex (SourceFile: Session$AuthorizationRequest$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$AuthorizationRequest$1 implements com.facebook.Session$StartActivityDelegate {
    // Fields
    final com.facebook.Session$AuthorizationRequest this$0;
    final android.app.Activity val$activity;

    // Methods
    Session$AuthorizationRequest$1(com.facebook.Session$AuthorizationRequest p0, android.app.Activity p1)
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
