// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$26.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$26 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$achievement;

    // Methods
    FacebookAndroidGLSocialLib$26(String p0)
    {
      super();
      this.val$achievement = p0;
    
    }

    public final void run()
    {
      com.facebook.Session ActiveSession; // RETVAL
      android.os.Bundle v2;
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib gotAchievement: Session not null");
        if ( ActiveSession.getPermissions().contains("publish_actions") )
        {
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib gotAchievement: Everything ok");
          v2 = new android.os.Bundle();
          v2.putString("access_token", FacebookAndroidGLSocialLib.getAccessToken());
          v2.putString("achievement", this.val$achievement);
          new com.facebook.Request(Session.getActiveSession(), "me/achievements", v2, HttpMethod.POST, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$26$1(this)).executeAsync();
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
