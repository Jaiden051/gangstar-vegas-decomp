// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$21.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
final class FacebookAndroidGLSocialLib$21 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$appId;

    // Methods
    FacebookAndroidGLSocialLib$21(String p0)
    {
      super();
      this.val$appId = p0;
    
    }

    public final void run()
    {
      com.facebook.Request$Callback v1;
      String v2;
      android.os.Bundle v3;
      v1 = (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$21$1(this);
      if ( this.val$appId != null && !this.val$appId.isEmpty() )
        v2 = this.val$appId + "/scores";
      else
        v2 = FacebookAndroidGLSocialLib.access$300() + "/scores";
      v3 = new android.os.Bundle();
      v3.putString("access_token", FacebookAndroidGLSocialLib.getAccessToken());
      new com.facebook.Request(Session.getActiveSession(), v2, v3, HttpMethod.GET, v1).executeAsync();
    }

}
