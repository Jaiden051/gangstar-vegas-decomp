// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$17$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
class FacebookAndroidGLSocialLib$17$2 implements com.facebook.RequestBatch$Callback {
    // Fields
    final com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$17 this$0;

    // Methods
    FacebookAndroidGLSocialLib$17$2(com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$17 p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onBatchCompleted(com.facebook.RequestBatch p0)
    {
      FacebookAndroidGLSocialLib.ParseServerBatchedResponse(this.this$0.batchResponse, "GetUserData");
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: GetUserData() batchResponse: " + this.this$0.batchResponse);
    }

}
