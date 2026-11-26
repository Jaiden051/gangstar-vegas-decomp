// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$12.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Request;
import com.facebook.Session;
final class FacebookAndroidGLSocialLib$12 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$12()
    {
      super();
    }

    public final void run()
    {
      Request.newMeRequest(
        Session.getActiveSession(),
        (com.facebook.Request$GraphUserCallback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$12$1(this)).executeAsync();
    }

}
