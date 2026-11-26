// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLibThread.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import android.os.Looper;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
public class FacebookAndroidGLSocialLibThread extends java.lang.Thread {
    // Fields
    public static android.os.Handler m_handler;

    // Methods
    public FacebookAndroidGLSocialLibThread()
    {
      super();
    }

    public void run()
    {
      try
      {
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: FacebookAndroidGLSocialLibThread Looper.prepare()");
        Looper.prepare();
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: FacebookAndroidGLSocialLibThread m_handler = new Handler()");
        m_handler = new android.os.Handler();
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: FacebookAndroidGLSocialLibThread Looper.loop();");
        Looper.loop();
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: FacebookAndroidGLSocialLibThread end loop");
      }
      catch ( Throwable v1 )
      {
        ConsoleAndroidGLSocialLib.Log_Major_Error("FacebookAndroidGLSocialLib: FacebookAndroidGLSocialLibThread halted due to an error" + v1.toString());
      }
    }

}
