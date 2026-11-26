// Decompiled from classes.dex (SourceFile: ConnectionTimer.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

public class ConnectionTimer extends java.util.TimerTask {
    // Fields
    private static java.util.Timer a;

    // Methods
    public ConnectionTimer()
    {
      super();
    }

    public static void start(long p0)
    {
      java.util.Timer v1;
      v1 = new java.util.Timer();
      a = v1;
      v1.schedule(new com.gameloft.android.GAND.GloftGGSS.GLUtils.ConnectionTimer(), p0);
    }

    public static void stop()
    {
      a.cancel();
    }

    public void run()
    {
      com.gameloft.android.GAND.GloftGGSS.GLUtils.HTTP WHTTP; // RETVAL
    
      WHTTP = XPlayer.getWHTTP();
      WHTTP.b();
      WHTTP.v = true;
      WHTTP.u = false;
    }

}
