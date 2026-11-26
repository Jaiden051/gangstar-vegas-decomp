// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

final class i implements android.support.v4.net.j {
    // Methods
    i()
    {
      super();
    }

    public final void a()
    {
      TrafficStatsCompatIcs.clearThreadStatsTag();
    }

    public final void a(int p0)
    {
      TrafficStatsCompatIcs.incrementOperationCount(p0);
    }

    public final void a(int p0, int p1)
    {
      TrafficStatsCompatIcs.incrementOperationCount(p0, p1);
    }

    public final void a(java.net.Socket p0) throws java.net.SocketException
    {
      TrafficStatsCompatIcs.tagSocket(p0);
    }

    public final int b()
    {
      return TrafficStatsCompatIcs.getThreadStatsTag();
    }

    public final void b(int p0)
    {
      TrafficStatsCompatIcs.setThreadStatsTag(p0);
    }

    public final void b(java.net.Socket p0) throws java.net.SocketException
    {
      TrafficStatsCompatIcs.untagSocket(p0);
    }

}
