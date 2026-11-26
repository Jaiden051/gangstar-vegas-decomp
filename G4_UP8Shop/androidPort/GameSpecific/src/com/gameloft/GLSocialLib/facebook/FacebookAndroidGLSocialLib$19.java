// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$19.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Request;
import com.facebook.Session;
final class FacebookAndroidGLSocialLib$19 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$19()
    {
      super();
    }

    public final void run()
    {
      Request.newGraphPathRequest(
        Session.getActiveSession(),
        FacebookAndroidGLSocialLib.access$300(),
        (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$19$1(this)).executeAsync();
    }

}
