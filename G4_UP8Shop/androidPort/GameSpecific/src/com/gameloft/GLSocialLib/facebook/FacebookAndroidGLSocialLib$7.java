// Decompiled from classes.dex (SourceFile: FacebookAndroidGLSocialLib$7.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.GLSocialLib.facebook;

final class FacebookAndroidGLSocialLib$7 implements java.lang.Runnable {
    // Fields
    final java.lang.String val$description;
    final java.lang.String val$gameName;
    final java.lang.String val$link;
    final java.lang.String val$locale;
    final java.lang.String val$msg;
    final java.lang.String val$pictureUrl;
    final java.lang.String val$title;

    // Methods
    FacebookAndroidGLSocialLib$7(String p0, String p1, String p2, String p3, String p4, String p5, String p6)
    {
      super();
      this.val$msg = p0;
      this.val$link = p1;
      this.val$title = p2;
      this.val$pictureUrl = p3;
      this.val$description = p4;
      this.val$gameName = p5;
      this.val$locale = p6;
    
    }

    public final void run()
    {
      FacebookAndroidGLSocialLib.PostToWall(
        this.val$msg,
        this.val$link,
        this.val$title,
        this.val$pictureUrl,
        this.val$description,
        this.val$gameName,
        this.val$locale);
    }

}
