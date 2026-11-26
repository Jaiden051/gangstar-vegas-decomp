// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$8.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

final class FacebookAndroidGLSocialLib$8 implements com.facebook.widget.WebDialog$OnCompleteListener {
    // Methods
    FacebookAndroidGLSocialLib$8()
    {
      super();
    }

    public final void onComplete(android.os.Bundle p0, com.facebook.FacebookException p1)
    {
      FacebookAndroidGLSocialLib.ParseServerDialogResponse(p0, p1, "PostToWall");
    }

}
