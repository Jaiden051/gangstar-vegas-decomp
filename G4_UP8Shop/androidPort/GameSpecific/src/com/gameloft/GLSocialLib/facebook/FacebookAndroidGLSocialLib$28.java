// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$28.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$28 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$userId;

    // Methods
    FacebookAndroidGLSocialLib$28(String p0)
    {
      super();
      this.val$userId = p0;
    
    }

    public final void run()
    {
      com.facebook.Session ActiveSession;
      String v2;
      android.os.Bundle v3;
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
      {
        v2 = this.val$userId + "/likes";
        v3 = new android.os.Bundle();
        v3.putString("access_token", FacebookAndroidGLSocialLib.getAccessToken());
        v3.putString("fields", "can_post,created_time,cover,description,id,link,name,talking_about_count,website,category");
        new com.facebook.Request(ActiveSession, v2, v3, HttpMethod.GET, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$28$1(this)).executeAsync();
      }
      else
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on getUserLikes: Active session null");
      }
    }

}
