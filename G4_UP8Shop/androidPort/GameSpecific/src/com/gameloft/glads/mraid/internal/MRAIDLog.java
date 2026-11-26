// Decompiled from classes.dex (SourceFile: MRAIDLog.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid.internal;

import android.util.Log;
public class MRAIDLog {
    // Fields
    private static java.lang.String TAG;

    // Methods
    public MRAIDLog()
    {
      super();
    }

    public static void d(String p0)
    {
      ;
    }

    public static void d(String p0, String p1)
    {
      com.gameloft.android.DecompRT.discard("[" + p0 + "] " + p1);
    }

    public static void e(String p0)
    {
      ;
    }

    public static void e(String p0, String p1)
    {
      com.gameloft.android.DecompRT.discard("[" + p0 + "] " + p1);
    }

    public static void i(String p0)
    {
      ;
    }

    public static void i(String p0, String p1)
    {
      com.gameloft.android.DecompRT.discard("[" + p0 + "] " + p1);
    }

    public static void v(String p0)
    {
      Log.v("MRAID", p0);
    }

    public static void v(String p0, String p1)
    {
      Log.v("MRAID", "[" + p0 + "] " + p1);
    }

    public static void w(String p0)
    {
      ;
    }

    public static void w(String p0, String p1)
    {
      com.gameloft.android.DecompRT.discard("[" + p0 + "] " + p1);
    }

}
