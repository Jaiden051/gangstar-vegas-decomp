// Decompiled from classes.dex (SourceFile: AppEventsLogger$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$1 implements java.lang.Runnable {
    // Fields
    final long val$eventTime;
    final com.facebook.AppEventsLogger val$logger;
    final java.lang.String val$sourceApplicationInfo;

    // Methods
    AppEventsLogger$1(com.facebook.AppEventsLogger p0, long p1, String p3)
    {
      super();
      this.val$logger = p0;
      this.val$eventTime = p1;
      this.val$sourceApplicationInfo = p3;
    
    }

    public final void run()
    {
      AppEventsLogger.access$100(this.val$logger, this.val$eventTime, this.val$sourceApplicationInfo);
    }

}
