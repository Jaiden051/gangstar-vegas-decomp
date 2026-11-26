// Decompiled from classes.dex (SourceFile: Logger.java) via IDA Pro 9.5 Dalvik Decompiler
package com.facebook.internal;

import android.util.Log;
import com.facebook.LoggingBehavior;
import com.facebook.Settings;
public class Logger {
    // Fields
    public static java.lang.String LOG_TAG_BASE;
    private static final java.util.HashMap stringsToReplace;
    private final com.facebook.LoggingBehavior behavior;
    private java.lang.StringBuilder contents;
    private int priority;
    private final java.lang.String tag;

    // Methods
    static
    {
      stringsToReplace = new java.util.HashMap();
    }

    public Logger(com.facebook.LoggingBehavior p0, String p1)
    {
      super();
      this.priority = 3;
      Validate.notNullOrEmpty(p1, "tag");
      this.behavior = p0;
      this.tag = "FacebookSDK." + p1;
      this.contents = new StringBuilder();
    }

    public static void log(com.facebook.LoggingBehavior p0, int p1, String p2, String p3)
    {
      String v4;
      if ( Settings.isLoggingBehaviorEnabled(p0) )
      {
        v4 = replaceStrings(p3);
        if ( !p2.startsWith("FacebookSDK.") )
          p2 = "FacebookSDK." + p2;
        Log.println(p1, p2, v4);
        if ( p0 == LoggingBehavior.DEVELOPER_ERRORS )
          new Exception().printStackTrace();
      }
    }

    public static void log(com.facebook.LoggingBehavior p0, String p1, String p2)
    {
      log(p0, 3, p1, p2);
    }

    public static void log(com.facebook.LoggingBehavior p0, String p1, String p2, Object[] p3)
    {
      if ( Settings.isLoggingBehaviorEnabled(p0) )
        log(p0, 3, p1, String.format(p2, p3));
    }

    public static synchronized void registerAccessToken(String p0)
    {
      if ( !Settings.isLoggingBehaviorEnabled(LoggingBehavior.INCLUDE_ACCESS_TOKENS) )
        registerStringToReplace(p0, "ACCESS_TOKEN_REMOVED");
    }

    public static synchronized void registerStringToReplace(String p0, String p1)
    {
      stringsToReplace.put(p0, p1);
    }

    private static synchronized String replaceStrings(String p0)
    {
      java.util.Iterator v1;
      java.util.Map.Entry v2;
      v1 = stringsToReplace.entrySet().iterator();
      while ( v1.hasNext() )
      {
        v2 = (java.util.Map.Entry)v1.next();
        p0 = p0.replace((CharSequence)v2.getKey(), (CharSequence)v2.getValue());
      }
      return p0;
    }

    private boolean shouldLog()
    {
      return Settings.isLoggingBehaviorEnabled(this.behavior);
    }

    public void append(String p0)
    {
      if ( this.shouldLog() )
        this.contents.append(p0);
    }

    public void append(String p0, Object[] p1)
    {
      if ( this.shouldLog() )
        this.contents.append(String.format(p0, p1));
    }

    public void append(StringBuilder p0)
    {
      if ( this.shouldLog() )
        this.contents.append(p0);
    }

    public void appendKeyValue(String p0, Object p1)
    {
      Object[] v3;
      v3 = new Object[2];
      v3[0] = p0;
      v3[1] = p1;
      this.append("  %s:\t%s\n", v3);
    }

    public String getContents()
    {
      return replaceStrings(this.contents.toString());
    }

    public int getPriority()
    {
      return this.priority;
    }

    public void log()
    {
      this.logString(this.contents.toString());
      this.contents = new StringBuilder();
    }

    public void logString(String p0)
    {
      log(this.behavior, this.priority, this.tag, p0);
    }

    public void setPriority(int p0)
    {
      Integer v2;
      Object[] v3;
      v2 = Integer.valueOf(p0);
      v3 = new Object[6];
      v3[0] = Integer.valueOf(7);
      v3[1] = Integer.valueOf(3);
      v3[2] = Integer.valueOf(6);
      v3[3] = Integer.valueOf(4);
      v3[4] = Integer.valueOf(2);
      v3[5] = Integer.valueOf(5);
      Validate.oneOf(v2, "value", v3);
      this.priority = p0;
    }

}
