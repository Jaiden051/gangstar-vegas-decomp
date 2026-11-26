// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$27.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$27 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$achievement;

    // Methods
    FacebookAndroidGLSocialLib$27(String p0)
    {
      super();
      this.val$achievement = p0;
    
    }

    public final void run()
    {
      com.facebook.Session ActiveSession; // RETVAL
      com.facebook.Session v2;
      android.os.Bundle v3;
      ActiveSession = Session.getActiveSession();
      v2 = ActiveSession;
      if ( ActiveSession != null )
      {
        if ( ActiveSession.getPermissions().contains("publish_actions") )
        {
          v3 = new android.os.Bundle();
          v3.putString("access_token", FacebookAndroidGLSocialLib.getAccessToken());
          v3.putString("achievement", this.val$achievement);
          new com.facebook.Request(v2, "me/achievements", v3, HttpMethod.DELETE, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$27$1(this)).executeAsync();
        }
        else
        {
          FacebookAndroidGLSocialLib.nativeOnFBFailWithError("No Publish Permission");
        }
      }
      else
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on logged out: Active session null");
      }
    }

}
