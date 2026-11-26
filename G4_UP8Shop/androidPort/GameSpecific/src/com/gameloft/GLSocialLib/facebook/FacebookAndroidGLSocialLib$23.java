// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$23.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$23 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$23()
    {
      super();
    }

    public final void run()
    {
      com.facebook.Session ActiveSession; // RETVAL
      android.os.Bundle v2;
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
      {
        if ( ActiveSession.getPermissions().contains("publish_actions") )
        {
          v2 = new android.os.Bundle();
          v2.putString("access_token", FacebookAndroidGLSocialLib.getAccessToken());
          new com.facebook.Request(Session.getActiveSession(), "me/scores", v2, HttpMethod.DELETE, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$23$1(this)).executeAsync();
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
