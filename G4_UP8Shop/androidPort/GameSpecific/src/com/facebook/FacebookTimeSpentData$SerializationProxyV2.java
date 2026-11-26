// Decompiled from classes.dex (SourceFile: FacebookTimeSpentData$SerializationProxyV2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class FacebookTimeSpentData$SerializationProxyV2 implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final java.lang.String firstOpenSourceApplication;
    private final int interruptionCount;
    private final long lastResumeTime;
    private final long lastSuspendTime;
    private final long millisecondsSpentInSession;

    // Methods
    FacebookTimeSpentData$SerializationProxyV2(long p0, long p2, long p4, int p6, String p7)
    {
      super();
      this.lastResumeTime = p0;
      this.lastSuspendTime = p2;
      this.millisecondsSpentInSession = p4;
      this.interruptionCount = p6;
      this.firstOpenSourceApplication = p7;
    }

    private Object readResolve()
    {
      return new com.facebook.FacebookTimeSpentData(this.lastResumeTime, this.lastSuspendTime, this.millisecondsSpentInSession, this.interruptionCount, this.firstOpenSourceApplication, null);
    }

}
