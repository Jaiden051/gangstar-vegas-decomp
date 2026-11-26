// Decompiled from classes.dex (SourceFile: VASTLog.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

public class VASTLog {
    // Fields
    private static com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL LEVEL;
    private static java.lang.String TAG;

    // Methods
    static
    {
      TAG = "SourceKitLogger";
      LEVEL = VASTLog$LOG_LEVEL.verbose;
    }

    public VASTLog()
    {
      super();
    }

    public static void d(String p0, String p1)
    {
      LEVEL.getValue();
      VASTLog$LOG_LEVEL.debug.getValue();
    }

    public static void e(String p0, String p1)
    {
      ;
    }

    public static void e(String p0, String p1, Throwable p2)
    {
      ;
    }

    public static void i(String p0, String p1)
    {
      LEVEL.getValue();
      VASTLog$LOG_LEVEL.info.getValue();
    }

    public static void setLoggingLevel(com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL p0)
    {
      LEVEL = p0;
    }

    public static void v(String p0, String p1)
    {
      LEVEL.getValue();
      VASTLog$LOG_LEVEL.verbose.getValue();
    }

    public static void w(String p0, String p1)
    {
      LEVEL.getValue();
      VASTLog$LOG_LEVEL.warning.getValue();
    }

}
