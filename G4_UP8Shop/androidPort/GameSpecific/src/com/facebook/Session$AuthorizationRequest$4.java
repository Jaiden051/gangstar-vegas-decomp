// Decompiled from classes.dex (SourceFile: Session$AuthorizationRequest$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$AuthorizationRequest$4 implements com.facebook.AuthorizationClient$StartActivityDelegate {
    // Fields
    final com.facebook.Session$AuthorizationRequest this$0;

    // Methods
    Session$AuthorizationRequest$4(com.facebook.Session$AuthorizationRequest p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public android.app.Activity getActivityContext()
    {
      return Session$AuthorizationRequest.access$1800(this.this$0).getActivityContext();
    }

    public void startActivityForResult(android.content.Intent p0, int p1)
    {
      Session$AuthorizationRequest.access$1800(this.this$0).startActivityForResult(p0, p1);
    }

}
