// Decompiled from classes.dex (SourceFile: Session$AuthorizationRequest$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class Session$AuthorizationRequest$3 implements com.facebook.Session$StartActivityDelegate {
    // Fields
    final com.facebook.Session$AuthorizationRequest this$0;

    // Methods
    Session$AuthorizationRequest$3(com.facebook.Session$AuthorizationRequest p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public android.app.Activity getActivityContext()
    {
      throw new UnsupportedOperationException("Cannot create an AuthorizationRequest without a valid Activity or Fragment");
    }

    public void startActivityForResult(android.content.Intent p0, int p1)
    {
      throw new UnsupportedOperationException("Cannot create an AuthorizationRequest without a valid Activity or Fragment");
    }

}
