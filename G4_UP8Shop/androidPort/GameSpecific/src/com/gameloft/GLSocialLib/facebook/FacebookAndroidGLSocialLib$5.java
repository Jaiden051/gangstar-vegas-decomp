// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Request;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
import java.io.File;
final class FacebookAndroidGLSocialLib$5 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$ContentType;
    final java.lang.String val$Description;
    final java.lang.String val$FilePath;
    final java.lang.String val$Privacy;
    final java.lang.String val$Title;

    // Methods
    FacebookAndroidGLSocialLib$5(String p0, String p1, String p2, String p3, String p4)
    {
      super();
      this.val$FilePath = p0;
      this.val$Title = p1;
      this.val$Description = p2;
      this.val$ContentType = p3;
      this.val$Privacy = p4;
    
    }

    public final void run()
    {
      com.facebook.Session ActiveSession;
      java.io.File v2;
      com.facebook.Request$Callback v3;
      com.facebook.Request v4;
      android.os.Bundle Parameters;
      ActiveSession = Session.getActiveSession();
      if ( ActiveSession != null )
      {
        v2 = new java.io.File(this.val$FilePath);
        if ( v2.exists() )
        {
          if ( this.val$Title.isEmpty() )
          {
            FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Title must be defined!");
            ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib:Error: Title must be defined!");
          }
          else if ( ActiveSession.getPermissions().contains("publish_actions") )
          {
            v3 = (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$5$1(this);
            try
            {
              v4 = Request.newUploadVideoRequest(ActiveSession, v2, v3);
              Parameters = v4.getParameters();
              Parameters.putString("title", this.val$Title);
              Parameters.putString("description", this.val$Description);
              Parameters.putString("contentType", this.val$ContentType);
              if ( !this.val$Privacy.isEmpty() )
                Parameters.putString("privacy", this.val$Privacy);
              v4.setParameters(Parameters);
              v4.executeAsync();
            }
            catch ( Exception v6 )
            {
              ConsoleAndroidGLSocialLib.Log_Minor_Error("FacebookAndroidGLSocialLib: Exception in UploadVideo" + v6.toString());
              FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Facebook Android SNS ERROR: " + v6.toString());
            }
          }
          else
          {
            FacebookAndroidGLSocialLib.nativeOnFBFailWithError("No Publish Permission");
          }
        }
        else
        {
          FacebookAndroidGLSocialLib.nativeOnFBFailWithError("File does not exist!");
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib:Error: File does not exist! Invalid FilePath!");
        }
      }
      else
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on logged out: Active session null");
      }
    }

}
