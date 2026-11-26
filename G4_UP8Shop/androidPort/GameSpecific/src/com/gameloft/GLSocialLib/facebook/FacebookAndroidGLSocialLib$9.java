// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$9.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$9 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$description;
    final java.lang.String val$gameName;
    final java.lang.String val$link;
    final java.lang.String val$msg;
    final java.lang.String val$pictureUrl;
    final java.lang.String val$title;

    // Methods
    FacebookAndroidGLSocialLib$9(String p0, String p1, String p2, String p3, String p4, String p5)
    {
      super();
      this.val$msg = p0;
      this.val$link = p1;
      this.val$title = p2;
      this.val$pictureUrl = p3;
      this.val$description = p4;
      this.val$gameName = p5;
    
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
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostToWallWithoutDialog() msg: " + this.val$msg);
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostToWallWithoutDialog() link: " + this.val$link);
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostToWallWithoutDialog() title: " + this.val$title);
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostToWallWithoutDialog() pictureUrl: " + this.val$pictureUrl);
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostToWallWithoutDialog() description: " + this.val$description);
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: PostToWallWithoutDialog() gameName: " + this.val$gameName);
          v3 = new android.os.Bundle();
          v3.putString("app_id", FacebookAndroidGLSocialLib.access$300());
          v3.putString("link", this.val$link);
          v3.putString("name", this.val$title);
          v3.putString("picture", this.val$pictureUrl);
          if ( this.val$gameName.isEmpty() )
            v3.putString("caption", "by Gameloft");
          else
            v3.putString("caption", this.val$gameName);
          v3.putString("description", this.val$description);
          v3.putString("message", this.val$msg);
          new com.facebook.Request(v2, "me/feed", v3, HttpMethod.POST, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$9$1(this)).executeAsync();
        }
        else
        {
          FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Facebook Android SNS ERROR: no publish permissions");
        }
      }
      else
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on logged out: Active session null");
      }
    }

}
