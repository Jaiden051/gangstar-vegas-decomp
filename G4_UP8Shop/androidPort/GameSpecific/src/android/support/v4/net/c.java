// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

final class c implements android.support.v4.net.b {
    // Methods
    c()
    {
      super();
    }

    public final boolean a(android.net.ConnectivityManager p0)
    {
      return ConnectivityManagerCompatGingerbread.isActiveNetworkMetered(p0);
    }

}
