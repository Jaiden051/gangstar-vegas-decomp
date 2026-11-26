// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$15$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Response;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
class FacebookAndroidGLSocialLib$15$1 implements com.facebook.Request$GraphUserListCallback {
    // Fields
    final com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$15 this$0;

    // Methods
    FacebookAndroidGLSocialLib$15$1(com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$15 p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(
            java.util.List<com.facebook.model.GraphUser> p0,
            com.facebook.Response p1)
    {
      ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: onCompleted");
      if ( p1 != null )
        ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Received Response = " + p1);
      FacebookAndroidGLSocialLib.ParseServerResponse(p1, "GetFriends");
    }

}
