// Decompiled from classes.dex (SourceFile: LoggingBehavior.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

public final class LoggingBehavior extends com.gameloft.android.DecompRT.EnumBase<LoggingBehavior> {
    // Fields
    private static final com.facebook.LoggingBehavior[] $VALUES;
    public static final com.facebook.LoggingBehavior APP_EVENTS;
    public static final com.facebook.LoggingBehavior CACHE;
    public static final com.facebook.LoggingBehavior DEVELOPER_ERRORS;
    public static final com.facebook.LoggingBehavior INCLUDE_ACCESS_TOKENS;
    public static final com.facebook.LoggingBehavior INCLUDE_RAW_RESPONSES;
    public static final com.facebook.LoggingBehavior INSIGHTS;
    public static final com.facebook.LoggingBehavior REQUESTS;

    // Methods
    static
    {
      com.facebook.LoggingBehavior[] v0;
      REQUESTS = new com.facebook.LoggingBehavior("REQUESTS", 0);
      INCLUDE_ACCESS_TOKENS = new com.facebook.LoggingBehavior("INCLUDE_ACCESS_TOKENS", 1);
      INCLUDE_RAW_RESPONSES = new com.facebook.LoggingBehavior("INCLUDE_RAW_RESPONSES", 2);
      CACHE = new com.facebook.LoggingBehavior("CACHE", 3);
      APP_EVENTS = new com.facebook.LoggingBehavior("APP_EVENTS", 4);
      DEVELOPER_ERRORS = new com.facebook.LoggingBehavior("DEVELOPER_ERRORS", 5);
      v0 = new com.facebook.LoggingBehavior[6];
      v0[0] = REQUESTS;
      v0[1] = INCLUDE_ACCESS_TOKENS;
      v0[2] = INCLUDE_RAW_RESPONSES;
      v0[3] = CACHE;
      v0[4] = APP_EVENTS;
      v0[5] = DEVELOPER_ERRORS;
      $VALUES = (com.facebook.LoggingBehavior[])v0;
      INSIGHTS = APP_EVENTS;
    }

    private LoggingBehavior(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.LoggingBehavior valueOf(String p0)
    {
      return (com.facebook.LoggingBehavior)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.LoggingBehavior.class, p0);
    }

    public static com.facebook.LoggingBehavior[] values()
    {
      return (com.facebook.LoggingBehavior[])$VALUES.clone();
    }

}
