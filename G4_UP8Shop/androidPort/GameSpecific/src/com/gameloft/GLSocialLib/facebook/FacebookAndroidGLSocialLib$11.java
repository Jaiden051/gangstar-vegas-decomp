// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$11.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.AccessToken;
import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$11 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$action;
    final java.lang.String val$appNamespace;
    final java.lang.String val$objectType;
    final java.lang.String val$objectUrl;

    // Methods
    FacebookAndroidGLSocialLib$11(String p0, String p1, String p2, String p3)
    {
      super();
      this.val$objectType = p0;
      this.val$objectUrl = p1;
      this.val$appNamespace = p2;
      this.val$action = p3;
    
    }

    public final void run()
    {
      com.facebook.Session ActiveSession; // RETVAL
      String AccessToken; // RETVAL
      android.os.Bundle v3;
      String v4;
      String v5;
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
      {
        if ( ActiveSession.getPermissions().contains("publish_actions") )
        {
          AccessToken = FacebookAndroidGLSocialLib.getAccessToken();
          v3 = new android.os.Bundle();
          v3.putString("access_token", AccessToken);
          v3.putString(this.val$objectType, this.val$objectUrl);
          if ( AccessToken != null )
            ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: postOpenGraphAction, access_token: " + AccessToken);
          v4 = "/me/";
          if ( this.val$appNamespace != null )
            v4 = "/me/" + this.val$appNamespace + ":";
          if ( this.val$action != null )
            v5 = v4 + this.val$action;
          else
            v5 = v4;
          new com.facebook.Request(Session.getActiveSession(), v5, v3, HttpMethod.POST, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$11$1(this)).executeAsync();
        }
        else
        {
          FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Facebook Android SNS ERROR: no publish permissions");
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: No publish permissions");
        }
      }
      else
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on logged out: Active session null");
      }
    }

}
