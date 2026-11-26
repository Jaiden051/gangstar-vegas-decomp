// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$10.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import android.graphics.Bitmap;
import android.graphics.BitmapFactory;
import com.facebook.HttpMethod;
import com.facebook.Session;
import com.gameloft.GLSocialLib.ConsoleAndroidGLSocialLib;
final class FacebookAndroidGLSocialLib$10 implements java.lang.Runnable {
    // Fields
    final byte[] val$dataPic;
    final java.lang.String val$msg;

    // Methods
    FacebookAndroidGLSocialLib$10(String p0, byte[] p1)
    {
      super();
      this.val$msg = p0;
      this.val$dataPic = (byte[])p1;
    
    }

    public final void run()
    {
      com.facebook.Session ActiveSession; // RETVAL
      com.facebook.Session v2;
      android.graphics.Bitmap v3; // RETVAL
      android.os.Bundle v4;
      ActiveSession = Session.getActiveSession();
      v2 = ActiveSession;
      if ( ActiveSession != null )
      {
        if ( ActiveSession.getPermissions().contains("publish_actions") )
        {
          if ( this.val$msg != null )
            ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLi: PostToWallWithoutDialog() msg: " + this.val$msg);
          v3 = BitmapFactory.decodeByteArray(this.val$dataPic, 0, this.val$dataPic.length);
          if ( v3 == null )
            ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Bitmap is nil");
          v4 = new android.os.Bundle();
          v4.putParcelable("picture", v3);
          v4.putString("message", this.val$msg);
          new com.facebook.Request(v2, "me/photos", v4, HttpMethod.POST, (com.facebook.Request$Callback)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$10$1(this)).executeAsync();
        }
        else
        {
          FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Facebook Android SNS ERROR: no publish permissions");
          ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: No publish permissions");
        }
      }
      else
      {
        FacebookAndroidGLSocialLib.nativeOnFBFailWithError("Active session null");
        ConsoleAndroidGLSocialLib.Log_Debug("FacebookAndroidGLSocialLib: Error on logged out: Active session null");
      }
    }

}
