// Decompiled from classes.dex (SourceFile: k.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class k implements java.lang.Runnable {
    // Fields
    final int a;
    final boolean b;
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller c;

    // Methods
    k(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0, int p1, boolean p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void run()
    {
      android.widget.ProgressBar v1;
      int v2;
      try
      {
        v1 = (android.widget.ProgressBar)this.c.findViewById(this.a);
        if ( this.b )
          v2 = 0;
        else
          v2 = 8;
        v1.setVisibility(v2);
      }
      catch ( Exception e )
      {
      }
    }

}
