// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class g implements java.lang.Runnable {
    // Fields
    final android.widget.Button a;
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller b;

    // Methods
    g(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0, android.widget.Button p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      try
      {
        this.a.performClick();
      }
      catch ( Exception e )
      {
      }
    }

}
