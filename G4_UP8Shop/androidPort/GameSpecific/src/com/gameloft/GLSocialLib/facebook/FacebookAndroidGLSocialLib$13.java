// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$13.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.AccessToken;
import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$13 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$13()
    {
      super();
    }

    public final void run()
    {
      String AccessToken; // RETVAL
      android.os.Bundle v2;
      AccessToken = FacebookAndroidGLSocialLib.getAccessToken();
      v2 = new android.os.Bundle();
      v2.putString("access_token", AccessToken);
      v2.putString("fields", "picture");
      if ( AccessToken != null )
        ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: GetPicture, access_token: " + AccessToken);
      new com.facebook.Request(Session.getActiveSession(), "me", v2, HttpMethod.GET, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$13$1(this)).executeAsync();
    }

}
