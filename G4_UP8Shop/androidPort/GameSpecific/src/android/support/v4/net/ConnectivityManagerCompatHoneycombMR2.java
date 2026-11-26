// Decompiled from classes.dex (SourceFile: ConnectivityManagerCompatHoneycombMR2.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

class ConnectivityManagerCompatHoneycombMR2 {
    // Methods
    ConnectivityManagerCompatHoneycombMR2()
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
      {
        switch ( ActiveNetworkInfo.getType() )
        {
          case 1:
          case 7:
          case 9:
            v1 = false;
            break;
          default:
            return v1;
        }
      }
      return v1;
    }

}
