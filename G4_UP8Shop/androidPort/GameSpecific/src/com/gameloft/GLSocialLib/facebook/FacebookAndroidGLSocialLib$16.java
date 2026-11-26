// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$16.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Request;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$16 implements java.lang.Runnable {
    // Fields
    final int val$limit;
    final int val$start;

    // Methods
    FacebookAndroidGLSocialLib$16(int p0, int p1)
    {
      super();
      this.val$limit = p0;
      this.val$start = p1;
    
    }

    public final void run()
    {
      com.facebook.Request v1;
      android.os.Bundle Parameters;
      v1 = Request.newMyFriendsRequest(
             Session.getActiveSession(),
             (com.facebook.Request$GraphUserListCallback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$16$1(this));
      Parameters = v1.getParameters();
      Parameters.putString("fields", "name,gender,id,picture,updated_time");
      Parameters.putString("limit", "" + this.val$limit);
      Parameters.putString("offset", "" + this.val$start);
      v1.setParameters(Parameters);
      ConsoleAndroidGLSocialLib.Log_Info("FacebookAndroidGLSocialLib: GetFriendsData newGraphPathRequest");
      v1.executeAsync();
    }

}
