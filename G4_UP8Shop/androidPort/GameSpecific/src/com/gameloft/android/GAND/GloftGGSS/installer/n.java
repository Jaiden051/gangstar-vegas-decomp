// Decompiled from classes.dex (SourceFile: n.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class n extends android.content.BroadcastReceiver {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller a;

    // Methods
    n(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      String Action;
      android.net.wifi.WifiManager v4;
      Action = p1.getAction();
      if ( this.a.bj )
      {
        this.a.bj = false;
      }
      else
      {
        v4 = (android.net.wifi.WifiManager)p0.getSystemService("wifi");
        if ( "android.net.wifi.STATE_CHANGE".equals(Action) && v4.getWifiState() == 3 && this.a.aq != 6 )
          GameInstaller.access$200(this.a, 6);
      }
    }

}
