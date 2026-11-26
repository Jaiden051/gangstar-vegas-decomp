// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

final class e implements android.support.v4.net.b {
    // Methods
    e()
    {
      super();
    }

    public final boolean a(android.net.ConnectivityManager p0)
    {
      return ConnectivityManagerCompatJellyBean.isActiveNetworkMetered(p0);
    }

}
