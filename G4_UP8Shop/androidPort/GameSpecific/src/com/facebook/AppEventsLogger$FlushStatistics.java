// Decompiled from classes.dex (SourceFile: AppEventsLogger$FlushStatistics.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class AppEventsLogger$FlushStatistics {
    // Fields
    public int numEvents;
    public com.facebook.AppEventsLogger$FlushResult result;

    // Methods
    private AppEventsLogger$FlushStatistics()
    {
      super();
      this.numEvents = 0;
      this.result = AppEventsLogger$FlushResult.SUCCESS;
    }

    /* synthetic */ AppEventsLogger$FlushStatistics(com.facebook.AppEventsLogger$1 p0)
    {
      this();
    }

}
