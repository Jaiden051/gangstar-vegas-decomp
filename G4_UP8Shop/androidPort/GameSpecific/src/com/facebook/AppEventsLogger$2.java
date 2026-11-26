// Decompiled from classes.dex (SourceFile: AppEventsLogger$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$2 implements java.lang.Runnable {
    // Fields
    final long val$eventTime;
    final com.facebook.AppEventsLogger val$logger;

    // Methods
    AppEventsLogger$2(com.facebook.AppEventsLogger p0, long p1)
    {
      super();
      this.val$logger = p0;
      this.val$eventTime = p1;
    
    }

    public final void run()
    {
      AppEventsLogger.access$200(this.val$logger, this.val$eventTime);
    }

}
