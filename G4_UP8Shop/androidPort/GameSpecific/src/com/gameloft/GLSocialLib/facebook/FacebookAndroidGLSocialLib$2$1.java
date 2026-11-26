// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$2$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import android.util.Log;
class FacebookAndroidGLSocialLib$2$1 implements com.facebook.AppLinkData$CompletionHandler {
    // Fields
    final com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$2 this$0;

    // Methods
    FacebookAndroidGLSocialLib$2$1(com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$2 p0)
    {
      super();
      this.this$0 = p0;
    
    }

    public void onDeferredAppLinkDataFetched(com.facebook.AppLinkData p0)
    {
      if ( p0 != null )
      {
        Log.d("GLLegacy", "FacebookAndroidGLSocialLib: onDeferredAppLinkDataFetched got appLinkData");
        FacebookAndroidGLSocialLib.nativeTrackDeferredAppLink(p0.getTargetUri().toString());
      }
      else
      {
        Log.d("GLLegacy", "FacebookAndroidGLSocialLib: onDeferredAppLinkDataFetched got no appLinkData");
      }
    }

}
