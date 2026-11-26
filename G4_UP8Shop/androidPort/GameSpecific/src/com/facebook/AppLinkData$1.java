// Decompiled from classes.dex (SourceFile: AppLinkData$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppLinkData$1 implements java.lang.Runnable {
    // Fields
    final android.content.Context val$applicationContext;
    final java.lang.String val$applicationIdCopy;
    final com.facebook.AppLinkData$CompletionHandler val$completionHandler;

    // Methods
    AppLinkData$1(android.content.Context p0, String p1, com.facebook.AppLinkData$CompletionHandler p2)
    {
      super();
      this.val$applicationContext = p0;
      this.val$applicationIdCopy = p1;
      this.val$completionHandler = p2;
    
    }

    public final void run()
    {
      AppLinkData.access$000(this.val$applicationContext, this.val$applicationIdCopy, this.val$completionHandler);
    }

}
