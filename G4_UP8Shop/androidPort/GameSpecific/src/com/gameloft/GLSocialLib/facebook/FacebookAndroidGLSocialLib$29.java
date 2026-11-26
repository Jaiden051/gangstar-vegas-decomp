// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$29.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$29 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$29()
    {
      super();
    }

    public final void run()
    {
      com.facebook.Session ActiveSession;
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
      {
        FacebookAndroidGLSocialLib.access$802(true);
        ActiveSession.refreshPermissions();
      }
      else
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on getUserLikes: Active session null");
      }
    }

}
