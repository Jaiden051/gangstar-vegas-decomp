// Decompiled from classes.dex (SourceFile: ConnectivityManagerCompat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.net;

import android.os.Build;
public class ConnectivityManagerCompat {
    // Fields
    private static final android.support.v4.net.b a;

    // Methods
    static
    {
      if ( Build.VERSION.SDK_INT < 16 )
      {
        if ( Build.VERSION.SDK_INT < 13 )
        {
          if ( Build.VERSION.SDK_INT < 8 )
            a = (android.support.v4.net.b)new android.support.v4.net.a();
          else
            a = (android.support.v4.net.b)new android.support.v4.net.c();
        }
        else
        {
          a = (android.support.v4.net.b)new android.support.v4.net.d();
        }
      }
      else
      {
        a = (android.support.v4.net.b)new android.support.v4.net.e();
      }
    }

    public ConnectivityManagerCompat()
    {
      super();
    }

    public static android.net.NetworkInfo getNetworkInfoFromBroadcast(
            android.net.ConnectivityManager p0,
            android.content.Intent p1)
    {
      return p0.getNetworkInfo(((android.net.NetworkInfo)p1.getParcelableExtra("networkInfo")).getType());
    }

    public static boolean isActiveNetworkMetered(android.net.ConnectivityManager p0)
    {
      return a.a(p0);
    }

}
