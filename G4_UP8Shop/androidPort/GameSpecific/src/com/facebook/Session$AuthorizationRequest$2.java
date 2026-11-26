// Decompiled from classes.dex (SourceFile: Session$AuthorizationRequest$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$AuthorizationRequest$2 implements com.facebook.Session$StartActivityDelegate {
    // Fields
    final com.facebook.Session$AuthorizationRequest this$0;
    final android.support.v4.app.Fragment val$fragment;

    // Methods
    Session$AuthorizationRequest$2(com.facebook.Session$AuthorizationRequest p0, android.support.v4.app.Fragment p1)
    {
      super();
      this.this$0 = p0;
      this.val$fragment = p1;
    
    }

    public android.app.Activity getActivityContext()
    {
      return this.val$fragment.getActivity();
    }

    public void startActivityForResult(android.content.Intent p0, int p1)
    {
      this.val$fragment.startActivityForResult(p0, p1);
    }

}
