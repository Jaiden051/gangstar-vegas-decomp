// Decompiled from classes.dex (SourceFile: l.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class l extends java.lang.Thread {
    // Fields
    final java.lang.String a;
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller b;

    // Methods
    l(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      java.net.HttpURLConnection v1;
      try
      {
        v1 = (java.net.HttpURLConnection)new java.net.URL(this.a).openConnection();
        v1.connect();
        GameInstaller.isReached = Boolean.TRUE;
        if ( v1 != null )
          v1.disconnect();
      }
      catch ( Exception e )
      {
        GameInstaller.isReached = Boolean.FALSE;
      }
    }

}
