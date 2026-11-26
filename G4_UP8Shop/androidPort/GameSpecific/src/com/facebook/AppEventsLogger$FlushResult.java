// Decompiled from classes.dex (SourceFile: AppEventsLogger$FlushResult.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook;

final class AppEventsLogger$FlushResult extends com.gameloft.android.DecompRT.EnumBase<AppEventsLogger$FlushResult> {
    // Fields
    private static final com.facebook.AppEventsLogger$FlushResult[] $VALUES;
    public static final com.facebook.AppEventsLogger$FlushResult NO_CONNECTIVITY;
    public static final com.facebook.AppEventsLogger$FlushResult SERVER_ERROR;
    public static final com.facebook.AppEventsLogger$FlushResult SUCCESS;
    public static final com.facebook.AppEventsLogger$FlushResult UNKNOWN_ERROR;

    // Methods
    static
    {
      com.facebook.AppEventsLogger$FlushResult[] v0;
      SUCCESS = new com.facebook.AppEventsLogger$FlushResult("SUCCESS", 0);
      SERVER_ERROR = new com.facebook.AppEventsLogger$FlushResult("SERVER_ERROR", 1);
      NO_CONNECTIVITY = new com.facebook.AppEventsLogger$FlushResult("NO_CONNECTIVITY", 2);
      UNKNOWN_ERROR = new com.facebook.AppEventsLogger$FlushResult("UNKNOWN_ERROR", 3);
      v0 = new com.facebook.AppEventsLogger$FlushResult[4];
      v0[0] = SUCCESS;
      v0[1] = SERVER_ERROR;
      v0[2] = NO_CONNECTIVITY;
      v0[3] = UNKNOWN_ERROR;
      $VALUES = (com.facebook.AppEventsLogger$FlushResult[])v0;
    }

    private AppEventsLogger$FlushResult(String p0, int p1)
    {
      super(p0, p1);
    }

    public static com.facebook.AppEventsLogger$FlushResult valueOf(String p0)
    {
      return (com.facebook.AppEventsLogger$FlushResult)com.gameloft.android.DecompRT.EnumBase.valueOf(com.facebook.AppEventsLogger$FlushResult.class, p0);
    }

    public static com.facebook.AppEventsLogger$FlushResult[] values()
    {
      return (com.facebook.AppEventsLogger$FlushResult[])$VALUES.clone();
    }

}
