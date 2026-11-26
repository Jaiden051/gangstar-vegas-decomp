// Decompiled from classes.dex (SourceFile: VASTLog$LOG_LEVEL.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

public final class VASTLog$LOG_LEVEL extends com.gameloft.android.DecompRT.EnumBase<VASTLog$LOG_LEVEL> {
    // Fields
    private static final com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL[] $VALUES;
    public static final com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL debug;
    public static final com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL error;
    public static final com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL info;
    public static final com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL verbose;
    public static final com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL warning;
    private int value;

    // Methods
    static
    {
      com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL[] v0;
      verbose = new com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL("verbose", 0, 1);
      debug = new com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL("debug", 1, 2);
      info = new com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL("info", 2, 3);
      warning = new com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL("warning", 3, 4);
      error = new com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL("error", 4, 5);
      v0 = new com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL[5];
      v0[0] = verbose;
      v0[1] = debug;
      v0[2] = info;
      v0[3] = warning;
      v0[4] = error;
      $VALUES = (com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL[])v0;
    }

    private VASTLog$LOG_LEVEL(String p0, int p1, int p2)
    {
      super(p0, p1);
      this.value = p2;
    }

    public static com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL valueOf(String p0)
    {
      return (com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL)com.gameloft.android.DecompRT.EnumBase.valueOf(
                                                               com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL.class,
                                                               p0);
    }

    public static com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL[] values()
    {
      return (com.gameloft.glads.vast.util.VASTLog$LOG_LEVEL[])$VALUES.clone();
    }

    public final int getValue()
    {
      return this.value;
    }

}
