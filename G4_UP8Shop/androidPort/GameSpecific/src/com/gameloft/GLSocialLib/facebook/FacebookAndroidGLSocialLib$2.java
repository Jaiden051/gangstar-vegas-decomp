// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.AppLinkData;
final class FacebookAndroidGLSocialLib$2 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$2()
    {
      super();
    }

    public final void run()
    {
      AppLinkData.fetchDeferredAppLinkData(
        FacebookAndroidGLSocialLib.access$100(FacebookAndroidGLSocialLib.s_instance),
        (com.facebook.AppLinkData$CompletionHandler)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$2$1(this));
    }

}
