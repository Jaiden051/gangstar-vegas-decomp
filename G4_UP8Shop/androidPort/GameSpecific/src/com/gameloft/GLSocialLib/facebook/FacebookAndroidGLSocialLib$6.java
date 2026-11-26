// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

import com.facebook.Session;
final class FacebookAndroidGLSocialLib$6 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$message;
    final java.lang.String val$uids;

    // Methods
    FacebookAndroidGLSocialLib$6(String p0, String p1)
    {
      super();
      this.val$message = p0;
      this.val$uids = p1;
    
    }

    public final void run()
    {
      android.os.Bundle v1;
      v1 = new android.os.Bundle();
      v1.putString("app_id", FacebookAndroidGLSocialLib.access$300());
      v1.putString("message", this.val$message);
      v1.putString("to", this.val$uids);
      v1.putString("filters", "app_non_users");
      ((com.facebook.widget.WebDialog$RequestsDialogBuilder)new com.facebook.widget.WebDialog$RequestsDialogBuilder(FacebookAndroidGLSocialLib.access$100(FacebookAndroidGLSocialLib.s_instance), Session.getActiveSession(), v1).setOnCompleteListener((com.facebook.widget.WebDialog$OnCompleteListener)new com.gameloft.GLSocialLib.facebook.FacebookAndroidGLSocialLib$6$1(this))).build().show();
    }

}
