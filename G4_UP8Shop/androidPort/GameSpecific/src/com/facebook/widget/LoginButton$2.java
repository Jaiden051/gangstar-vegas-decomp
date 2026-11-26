// Decompiled from classes.dex (SourceFile: LoginButton$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class LoginButton$2 implements com.facebook.Request$GraphUserCallback {
    // Fields
    final com.facebook.widget.LoginButton this$0;
    final com.facebook.Session val$currentSession;

    // Methods
    LoginButton$2(com.facebook.widget.LoginButton p0, com.facebook.Session p1)
    {
      super();
      this.this$0 = p0;
      this.val$currentSession = p1;
    
    }

    public void onCompleted(com.facebook.model.GraphUser p0, com.facebook.Response p1)
    {
      if ( this.val$currentSession == LoginButton.access$400(this.this$0).getOpenSession() )
      {
        LoginButton.access$502(this.this$0, p0);
        if ( LoginButton.access$600(this.this$0) != null )
          LoginButton.access$600(this.this$0).onUserInfoFetched(LoginButton.access$500(this.this$0));
      }
      if ( p1.getError() != null )
        this.this$0.handleError(p1.getError().getException());
    }

}
