// Decompiled from classes.dex (SourceFile: Settings$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

import android.os.Looper;
final class Settings$2 implements java.lang.Runnable {
    // Fields
    final android.content.Context val$applicationContext;
    final java.lang.String val$applicationId;
    final com.facebook.Request$Callback val$callback;

    // Methods
    Settings$2(android.content.Context p0, String p1, com.facebook.Request$Callback p2)
    {
      super();
      this.val$applicationContext = p0;
      this.val$applicationId = p1;
      this.val$callback = p2;
    
    }

    public final void run()
    {
      com.facebook.Response v1;
      v1 = Settings.publishInstallAndWaitForResponse(this.val$applicationContext, this.val$applicationId);
      if ( this.val$callback != null )
        new android.os.Handler(Looper.getMainLooper()).post((Runnable)new com.facebook.Settings$2$1(this, v1));
    }

}
