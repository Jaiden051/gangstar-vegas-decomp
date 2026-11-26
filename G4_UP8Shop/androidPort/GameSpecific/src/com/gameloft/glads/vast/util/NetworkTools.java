// Decompiled from classes.dex (SourceFile: NetworkTools.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.vast.util;

import android.net.NetworkInfo;
public class NetworkTools {
    // Fields
    private static final java.lang.String TAG;

    // Methods
    static
    {
      TAG = com.gameloft.glads.vast.util.HttpTools.class.getName();
    }

    public NetworkTools()
    {
      super();
    }

    public static boolean connectedToInternet(android.content.Context p0)
    {
      android.net.ConnectivityManager v1;
      android.net.NetworkInfo NetworkInfo; // RETVAL
      android.net.NetworkInfo v5; // RETVAL
      android.net.NetworkInfo ActiveNetworkInfo; // RETVAL
    
      VASTLog.d(TAG, "Testing connectivity:");
      v1 = (android.net.ConnectivityManager)p0.getSystemService("connectivity");
      NetworkInfo = v1.getNetworkInfo(1);
      if ( NetworkInfo != null && NetworkInfo.isConnected()
        || (v5 = v1.getNetworkInfo(0)) != null && v5.isConnected()
        || (ActiveNetworkInfo = v1.getActiveNetworkInfo()) != null && ActiveNetworkInfo.isConnected() )
      {
        VASTLog.d(TAG, "Connected to Internet");
        return true;
      }
      else
      {
        VASTLog.d(TAG, "No Internet connection");
        return false;
      }
    }

}
