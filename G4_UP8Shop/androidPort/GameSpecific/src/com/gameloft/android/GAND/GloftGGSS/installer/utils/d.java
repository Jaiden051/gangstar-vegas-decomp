// Decompiled from classes.dex (SourceFile: d.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer.utils;

final class d implements java.lang.Runnable {
    // Fields
    final java.net.HttpURLConnection a;
    final com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent b;

    // Methods
    d(com.gameloft.android.GAND.GloftGGSS.installer.utils.DownloadComponent p0, java.net.HttpURLConnection p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      this.a.disconnect();
    }

}
