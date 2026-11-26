// Decompiled from classes.dex (SourceFile: TrafficStatsCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

import android.os.Build;
public class TrafficStatsCompat {
    // Fields
    private static final android.support.v4.net.j a;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 14 )
        a = (android.support.v4.net.j)new android.support.v4.net.g();
      else
        a = (android.support.v4.net.j)new android.support.v4.net.i();
    }

    public TrafficStatsCompat()
    {
      super();
    }

    public static void clearThreadStatsTag()
 throws java.net.SocketException {
      a.a();
    }

    public static int getThreadStatsTag()
    {
      return a.b();
    }

    public static void incrementOperationCount(int p0)
 throws java.net.SocketException {
      a.a(p0);
    }

    public static void incrementOperationCount(int p0, int p1)
 throws java.net.SocketException {
      a.a(p0, p1);
    }

    public static void setThreadStatsTag(int p0)
    {
      a.b(p0);
    }

    public static void tagSocket(java.net.Socket p0) throws java.net.SocketException
    {
      a.a(p0);
    }

    public static void untagSocket(java.net.Socket p0) throws java.net.SocketException
    {
      a.b(p0);
    }

}
