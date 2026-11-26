// Decompiled from classes.dex (SourceFile: AppEventsLogger$6.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$6 implements java.lang.Runnable {
    // Fields
    final com.facebook.AppEventsLogger$FlushReason val$reason;

    // Methods
    AppEventsLogger$6(com.facebook.AppEventsLogger$FlushReason p0)
    {
      super();
      this.val$reason = p0;
    
    }

    public final void run()
    {
      AppEventsLogger.access$300(this.val$reason);
    }

}
