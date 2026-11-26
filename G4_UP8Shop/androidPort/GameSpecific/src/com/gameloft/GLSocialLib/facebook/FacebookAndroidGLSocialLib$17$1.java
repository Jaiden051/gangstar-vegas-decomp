// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$17$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
class FacebookAndroidGLSocialLib$17$1 implements com.facebook.Request$Callback {
    // Fields
    final com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$17 this$0;
    final java.lang.String val$requestId;

    // Methods
    FacebookAndroidGLSocialLib$17$1(com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$17 p0, String p1)
    {
      super();
      this.this$0 = p0;
      this.val$requestId = p1;
    
    }

    public void onCompleted(com.facebook.Response p0)
    {
      com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$17 v2;
      if ( p0.getError() != null )
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: GetUserData() error on id: " + this.val$requestId);
      }
      else
      {
        v2 = this.this$0;
        v2.batchResponse = v2.batchResponse + p0.getGraphObject().getInnerJSONObject().toString() + "*";
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: GetUserData() batchResponse: " + v2.batchResponse);
      }
    }

}
