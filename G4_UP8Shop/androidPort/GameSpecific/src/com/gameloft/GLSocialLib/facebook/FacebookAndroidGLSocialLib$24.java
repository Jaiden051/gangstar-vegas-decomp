// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$24.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$24 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$permission;

    // Methods
    FacebookAndroidGLSocialLib$24(String p0)
    {
      super();
      this.val$permission = p0;
    
    }

    public final void run()
    {
      com.facebook.Session ActiveSession;
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession == null )
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on logged out: Active session null");
      }
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: hasPermission:" + this.val$permission);
      if ( ActiveSession.isPermissionGranted(this.val$permission) )
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: hasPermission: User approved permission");
        FacebookAndroidGLSocialLib.nativeOnFBDataLoad("User approved permission");
      }
      else if ( ActiveSession.getDeclinedPermissions().contains(this.val$permission) )
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: hasPermission: User declined permission");
        FacebookAndroidGLSocialLib.nativeOnFBDataLoad("User declined permission");
      }
      else
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: hasPermission: User hasn't been asked for permission");
        FacebookAndroidGLSocialLib.nativeOnFBDataLoad("User hasn't been asked for permission");
      }
    }

}
