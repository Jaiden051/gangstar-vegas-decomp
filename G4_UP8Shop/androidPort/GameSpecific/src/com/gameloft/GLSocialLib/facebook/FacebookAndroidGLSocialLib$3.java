// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Session;
import com.facebook.SessionLoginBehavior;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$3 implements java.lang.Runnable {
    // Methods
    FacebookAndroidGLSocialLib$3()
    {
      super();
    }

    public final void run()
    {
      com.facebook.Session ActiveSession;
      com.facebook.Session$OpenRequest v2;
      ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Login()");
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession == null )
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: m_session is null");
        ActiveSession = new com.facebook.Session$Builder(FacebookAndroidGLSocialLib.access$200(FacebookAndroidGLSocialLib.s_instance)).build();
        FacebookAndroidGLSocialLib.access$302(ActiveSession.getApplicationId());
        Session.setActiveSession(ActiveSession);
      }
      if ( ActiveSession != null )
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: s_instance.m_session.state = " + ActiveSession.getState());
        FacebookAndroidGLSocialLib.access$402(true);
        if ( ActiveSession.isOpened() || ActiveSession.isClosed() )
        {
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: re-create a Session");
          ActiveSession = new com.facebook.Session$Builder(FacebookAndroidGLSocialLib.access$200(FacebookAndroidGLSocialLib.s_instance)).build();
          ActiveSession.addCallback(FacebookAndroidGLSocialLib.access$500());
          Session.setActiveSession(ActiveSession);
        }
        if ( ActiveSession.isOpened() || ActiveSession.isClosed() )
        {
          Session.openActiveSession(
            FacebookAndroidGLSocialLib.access$100(FacebookAndroidGLSocialLib.s_instance),
            true,
            FacebookAndroidGLSocialLib.access$500());
        }
        else
        {
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: permissions");
          v2 = new com.facebook.Session$OpenRequest(FacebookAndroidGLSocialLib.access$100(FacebookAndroidGLSocialLib.s_instance));
          v2.setLoginBehavior(SessionLoginBehavior.SSO_WITH_FALLBACK);
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: statusCallback");
          v2.setCallback(FacebookAndroidGLSocialLib.access$500());
          v2.setPermissions(FacebookAndroidGLSocialLib.access$600());
          ActiveSession.openForRead(v2);
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: openForRead");
        }
      }
    }

}
