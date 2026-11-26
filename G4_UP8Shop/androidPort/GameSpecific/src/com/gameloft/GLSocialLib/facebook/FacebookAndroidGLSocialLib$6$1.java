// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$6$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

class FacebookAndroidGLSocialLib$6$1 implements com.facebook.widget.WebDialog$OnCompleteListener {
    // Fields
    final com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$6 this$0;

    // Methods
    FacebookAndroidGLSocialLib$6$1(com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$6 p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onComplete(android.os.Bundle p0, com.facebook.FacebookException p1)
    {
      FacebookAndroidGLSocialLib.ParseServerDialogResponse(p0, p1, "sendGameRequestToFriends");
    }

}
