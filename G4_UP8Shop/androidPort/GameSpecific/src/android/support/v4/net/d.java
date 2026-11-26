// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

final class d implements android.support.v4.net.b {
    // Methods
    d()
    {
      super();
    }

    public final boolean a(android.net.ConnectivityManager p0)
    {
      return ConnectivityManagerCompatHoneycombMR2.isActiveNetworkMetered(p0);
    }

}
