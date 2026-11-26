// Decompiled from classes.dex (SourceFile: TrafficStatsCompatIcs.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

import android.net.TrafficStats;
class TrafficStatsCompatIcs {
    // Methods
    TrafficStatsCompatIcs()
    {
      super();
    }

    public static void clearThreadStatsTag()
    {
      TrafficStats.clearThreadStatsTag();
    }

    public static int getThreadStatsTag()
    {
      return TrafficStats.getThreadStatsTag();
    }

    public static void incrementOperationCount(int p0)
    {
      TrafficStats.incrementOperationCount(p0);
    }

    public static void incrementOperationCount(int p0, int p1)
    {
      TrafficStats.incrementOperationCount(p0, p1);
    }

    public static void setThreadStatsTag(int p0)
    {
      TrafficStats.setThreadStatsTag(p0);
    }

    public static void tagSocket(java.net.Socket p0) throws java.net.SocketException
    {
      TrafficStats.tagSocket(p0);
    }

    public static void untagSocket(java.net.Socket p0) throws java.net.SocketException
    {
      TrafficStats.untagSocket(p0);
    }

}
