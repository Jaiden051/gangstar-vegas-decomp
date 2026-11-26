// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$25.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
final class FacebookAndroidGLSocialLib$25 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$userId;

    // Methods
    FacebookAndroidGLSocialLib$25(String p0)
    {
      super();
      this.val$userId = p0;
    
    }

    public final void run()
    {
      com.facebook.Session ActiveSession;
      com.facebook.Request$Callback v2;
      String v3;
      android.os.Bundle v4;
      ActiveSession = Session.getActiveSession();
      v2 = (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$25$1(this);
      if ( this.val$userId != null && !this.val$userId.isEmpty() )
        v3 = this.val$userId + "/achievements";
      else
        v3 = "me/achievements";
      v4 = new android.os.Bundle();
      v4.putString("access_token", FacebookAndroidGLSocialLib.getAccessToken());
      new com.facebook.Request(ActiveSession, v3, v4, HttpMethod.GET, v2).executeAsync();
    }

}
