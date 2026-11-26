// Decompiled from classes.dex (SourceFile: ae.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ae extends java.util.TimerTask {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.Game a;

    // Methods
    ae(com.gameloft.android.GAND.GloftGGSS.Game p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      Game.TryToConnectController();
      Game.checkAndUpdateConnectionState();
    }

}
