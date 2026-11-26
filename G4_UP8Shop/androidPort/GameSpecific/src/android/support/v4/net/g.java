// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

final class g implements android.support.v4.net.j {
    // Fields
    private java.lang.ThreadLocal a;

    // Methods
    g()
    {
      super();
      this.a = new android.support.v4.net.TrafficStatsCompat$BaseTrafficStatsCompatImpl$1(this);
    }

    public final void a()
    {
      ((android.support.v4.net.h)this.a.get()).a = -1;
    }

    public final void a(int p0)
    {
      ;
    }

    public final void a(int p0, int p1)
    {
      ;
    }

    public final void a(java.net.Socket p0)
    {
      ;
    }

    public final int b()
    {
      return ((android.support.v4.net.h)this.a.get()).a;
    }

    public final void b(int p0)
    {
      ((android.support.v4.net.h)this.a.get()).a = p0;
    }

    public final void b(java.net.Socket p0)
    {
      ;
    }

}
