// Decompiled from classes.dex (SourceFile: AppEventsLogger$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$3 implements java.lang.Runnable {
    // Methods
    AppEventsLogger$3()
    {
      super();
    }

    public final void run()
    {
      if ( AppEventsLogger.getFlushBehavior() != AppEventsLogger$FlushBehavior.EXPLICIT_ONLY )
        AppEventsLogger.access$300(AppEventsLogger$FlushReason.TIMER);
    }

}
