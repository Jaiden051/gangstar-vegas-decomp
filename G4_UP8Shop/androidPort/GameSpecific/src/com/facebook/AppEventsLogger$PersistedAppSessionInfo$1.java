// Decompiled from classes.dex (SourceFile: AppEventsLogger$PersistedAppSessionInfo$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$PersistedAppSessionInfo$1 implements java.lang.Runnable {
    // Methods
    AppEventsLogger$PersistedAppSessionInfo$1()
    {
      super();
    }

    public final void run()
    {
      AppEventsLogger$PersistedAppSessionInfo.saveAppSessionInformation(AppEventsLogger.access$1000());
    }

}
