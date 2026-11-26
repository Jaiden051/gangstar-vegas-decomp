// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$20.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
final class FacebookAndroidGLSocialLib$20 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$userId;

    // Methods
    FacebookAndroidGLSocialLib$20(String p0)
    {
      super();
      this.val$userId = p0;
    
    }

    public final void run()
    {
      com.facebook.Request$Callback v1;
      String v2;
      android.os.Bundle v3;
      v1 = (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$20$1(this);
      if ( this.val$userId != null && !this.val$userId.isEmpty() )
        v2 = this.val$userId + "/scores";
      else
        v2 = "me/scores";
      v3 = new android.os.Bundle();
      v3.putString("access_token", FacebookAndroidGLSocialLib.getAccessToken());
      new com.facebook.Request(Session.getActiveSession(), v2, v3, HttpMethod.GET, v1).executeAsync();
    }

}
