// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$18.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.AccessToken;
import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$18 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$ids;

    // Methods
    FacebookAndroidGLSocialLib$18(String p0)
    {
      super();
      this.val$ids = p0;
    
    }

    public final void run()
    {
      String AccessToken; // RETVAL
      android.os.Bundle v2;
      AccessToken = FacebookAndroidGLSocialLib.getAccessToken();
      v2 = new android.os.Bundle();
      v2.putString("access_token", AccessToken);
      v2.putString("ids", this.val$ids);
      v2.putString("fields", "id,name");
      if ( AccessToken != null )
        ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: GetUserNames, access_token: " + AccessToken);
      new com.facebook.Request(Session.getActiveSession(), "", v2, HttpMethod.GET, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$18$1(this)).executeAsync();
    }

}
