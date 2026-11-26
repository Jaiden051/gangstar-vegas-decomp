// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$4.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$4 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$4()
    {
      super();
    }

    public final void run()
    {
      com.facebook.Session ActiveSession; // RETVAL
      com.facebook.Session v2;
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Logout()");
      FacebookAndroidGLSocialLib.access$702(true);
      ActiveSession = Session.getActiveSession();
      v2 = ActiveSession;
      if ( ActiveSession != null )
      {
        if ( !ActiveSession.isClosed() )
          v2.closeAndClearTokenInformation();
        FacebookAndroidGLSocialLib.nativeOnFBDataLoad("Logged out successfully");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Logged out successfully");
      }
      else
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on logged out: Active session null");
      }
    }

}
