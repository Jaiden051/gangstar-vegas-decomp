// Decompiled from classes.dex (SourceFile: LoginButton$LoginClickListener$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.widget;

class LoginButton$LoginClickListener$1 implements android.content.DialogInterface.OnClickListener {
    // Fields
    final com.facebook.widget.LoginButton$LoginClickListener this$1;
    final com.facebook.Session val$openSession;

    // Methods
    LoginButton$LoginClickListener$1(com.facebook.widget.LoginButton$LoginClickListener p0, com.facebook.Session p1)
    {
      super();
      this.this$1 = p0;
      this.val$openSession = p1;
    
    }

    public void onClick(android.content.DialogInterface p0, int p1)
    {
      this.val$openSession.closeAndClearTokenInformation();
    }

}
