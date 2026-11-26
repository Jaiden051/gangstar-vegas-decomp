// Decompiled from classes.dex (SourceFile: ConnectivityManagerCompatGingerbread.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

class ConnectivityManagerCompatGingerbread {
    // Methods
    ConnectivityManagerCompatGingerbread()
    {
      super();
    }

    public static boolean isActiveNetworkMetered(android.net.ConnectivityManager p0)
    {
      boolean v1;
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      v1 = true;
      ActiveNetworkInfo = p0.getActiveNetworkInfo();
      if ( ActiveNetworkInfo != null )
        return ActiveNetworkInfo.getType() != 1;
      return v1;
    }

}
