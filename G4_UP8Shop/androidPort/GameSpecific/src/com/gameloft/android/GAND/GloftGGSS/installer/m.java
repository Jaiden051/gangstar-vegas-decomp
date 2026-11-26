// Decompiled from classes.dex (SourceFile: m.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class m extends android.content.BroadcastReceiver {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller a;

    // Methods
    m(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onReceive(android.content.Context p0, android.content.Intent p1)
    {
      if ( !GameInstaller.access$000(this.a) || GameInstaller.isAirplaneModeOn(p0) )
      {
        if ( !GameInstaller.access$000(this.a) )
          GameInstaller.access$002(this.a, true);
        GameInstaller.access$100(this.a);
      }
    }

}
