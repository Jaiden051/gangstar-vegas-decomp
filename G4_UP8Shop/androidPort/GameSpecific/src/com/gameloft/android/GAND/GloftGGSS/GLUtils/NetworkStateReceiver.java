// Decompiled from classes.dex (SourceFile: NetworkStateReceiver.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

public class NetworkStateReceiver extends android.content.BroadcastReceiver {
    // Fields
    public static boolean a;

    // Methods
    static
    {
      a = false;
    }

    public NetworkStateReceiver()
    {
      super();
    }

    public static native void setConnectionType(int p0);

    public void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      if ( a )
        setConnectionType(SUtils.CheckConnectionType());
    }

}
