// Decompiled from classes.dex (SourceFile: a.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

final class a implements android.support.v4.net.b {
    // Methods
    a()
    {
      super();
    }

    public final boolean a(android.net.ConnectivityManager p0)
    {
      boolean v2;
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      v2 = true;
      ActiveNetworkInfo = p0.getActiveNetworkInfo();
      if ( ActiveNetworkInfo != null )
        return ActiveNetworkInfo.getType() != 1;
      return v2;
    }

}
