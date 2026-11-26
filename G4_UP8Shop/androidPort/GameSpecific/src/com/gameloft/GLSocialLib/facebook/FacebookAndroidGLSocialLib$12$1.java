// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$12$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

class FacebookAndroidGLSocialLib$12$1 implements com.facebook.Request$GraphUserCallback {
    // Fields
    final com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$12 this$0;

    // Methods
    FacebookAndroidGLSocialLib$12$1(com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$12 p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(com.facebook.model.GraphUser p0, com.facebook.Response p1)
    {
      FacebookAndroidGLSocialLib.ParseServerResponse(p1, "GetMyInfo");
    }

}
