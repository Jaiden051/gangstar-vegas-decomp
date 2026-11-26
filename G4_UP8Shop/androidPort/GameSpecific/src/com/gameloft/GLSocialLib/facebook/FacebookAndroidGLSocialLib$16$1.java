// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$16$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

class FacebookAndroidGLSocialLib$16$1 implements com.facebook.Request$GraphUserListCallback {
    // Fields
    final com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$16 this$0;

    // Methods
    FacebookAndroidGLSocialLib$16$1(com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$16 p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onCompleted(
            java.util.List<com.facebook.model.GraphUser> p0,
            com.facebook.Response p1)
    {
      if ( p1.getError() == null )
        FacebookAndroidGLSocialLib.ParseServerResponse(p1, "GetFriendsData");
    }

}
