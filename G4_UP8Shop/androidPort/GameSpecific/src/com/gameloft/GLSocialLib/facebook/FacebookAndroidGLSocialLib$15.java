// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$15.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Request;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$15 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$15()
    {
      super();
    }

    public final void run()
    {
      try
      {
        Request.newMyFriendsRequest(
          Session.getActiveSession(),
          (com.facebook.Request$GraphUserListCallback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$15$1(this)).executeAsync();
      }
      catch ( com.facebook.FacebookGraphObjectException v1 )
      {
        ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: FacebookGraphObjectException in GetFriends" + v1.toString());
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Facebook Android SNS ERROR: " + v1.toString());
      }
      catch ( Exception v2 )
      {
        ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Exception in GetFriends" + v2.toString());
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Facebook Android SNS ERROR: " + v2.toString());
      }
    }

}
