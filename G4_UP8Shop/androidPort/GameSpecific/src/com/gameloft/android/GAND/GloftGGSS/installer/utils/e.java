// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

final class e implements java.lang.Runnable {
    // Fields
    final java.io.DataInputStream a;
    final java.net.HttpURLConnection b;
    final com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent c;

    // Methods
    e(
            com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent p0,
            java.io.DataInputStream p1,
            java.net.HttpURLConnection p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void run()
    {
      try
      {
        this.a.close();
        this.b.disconnect();
      }
      catch ( Exception e )
      {
      }
    }

}
