// Decompiled from classes.dex (SourceFile: LoginButton$LoginButtonCallback.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class LoginButton$LoginButtonCallback implements com.facebook.Session$StatusCallback {
    // Fields
    final com.facebook.widget.LoginButton this$0;

    // Methods
    private LoginButton$LoginButtonCallback(com.facebook.widget.LoginButton p0)
    {
      super();
      this.this$0 = p0;
    
    }

    /* synthetic */ LoginButton$LoginButtonCallback(com.facebook.widget.LoginButton p0, com.facebook.widget.LoginButton$1 p1)
    {
      this(p0);
    }

    public void call(com.facebook.Session p0, com.facebook.SessionState p1, Exception p2)
    {
      LoginButton.access$1700(this.this$0);
      LoginButton.access$1800(this.this$0);
      if ( LoginButton$LoginButtonProperties.access$1900(LoginButton.access$1000(this.this$0)) != null )
      {
        LoginButton$LoginButtonProperties.access$1900(LoginButton.access$1000(this.this$0)).call(p0, p1, p2);
      }
      else if ( p2 != null )
      {
        this.this$0.handleError(p2);
      }
    }

}
