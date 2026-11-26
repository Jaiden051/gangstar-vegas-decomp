// Decompiled from classes.dex (SourceFile: FacebookFragment$DefaultSessionStatusCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class FacebookFragment$DefaultSessionStatusCallback implements com.facebook.Session$StatusCallback {
    // Fields
    final com.facebook.widget.FacebookFragment this$0;

    // Methods
    private FacebookFragment$DefaultSessionStatusCallback(com.facebook.widget.FacebookFragment p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ FacebookFragment$DefaultSessionStatusCallback(
            com.facebook.widget.FacebookFragment p0,
            com.facebook.widget.FacebookFragment$1 p1)
    {
      this(p0);
    }

    public void call(
            com.facebook.Session p0,
            com.facebook.SessionState p1,
            Exception p2)
    {
      this.this$0.onSessionStateChange(p1, p2);
    }

}
