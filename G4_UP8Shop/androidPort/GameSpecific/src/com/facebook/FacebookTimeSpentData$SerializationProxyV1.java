// Decompiled from classes.dex (SourceFile: FacebookTimeSpentData$SerializationProxyV1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

class FacebookTimeSpentData$SerializationProxyV1 implements java.io.Serializable {
    // Fields
    private static long serialVersionUID;
    private final int interruptionCount;
    private final long lastResumeTime;
    private final long lastSuspendTime;
    private final long millisecondsSpentInSession;

    // Methods
    FacebookTimeSpentData$SerializationProxyV1(long p0, long p2, long p4, int p6)
    {
      super();
      this.lastResumeTime = p0;
      this.lastSuspendTime = p2;
      this.millisecondsSpentInSession = p4;
      this.interruptionCount = p6;
    }

    private Object readResolve()
    {
      return new com.facebook.FacebookTimeSpentData(this.lastResumeTime, this.lastSuspendTime, this.millisecondsSpentInSession, this.interruptionCount, null);
    }

}
