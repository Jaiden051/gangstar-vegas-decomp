// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$28$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Response;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
class FacebookAndroidGLSocialLib$28$1 implements com.facebook.Request$Callback {
    // Fields
    final com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$28 this$0;

    // Methods
    FacebookAndroidGLSocialLib$28$1(com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$28 p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(com.facebook.Response p0)
    {
      ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: onCompleted");
      if ( p0 != null )
        ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: Received Response = " + p0);
      FacebookAndroidGLSocialLib.ParseServerResponse(p0, "getUserLikes");
    }

}
