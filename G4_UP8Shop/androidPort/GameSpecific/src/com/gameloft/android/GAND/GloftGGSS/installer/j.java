// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class j implements java.lang.Runnable {
    // Fields
    final int a;
    final boolean b;
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller c;

    // Methods
    j(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0, int p1, boolean p2)
    {
      super();
      this.c = p0;
      this.a = p1;
      this.b = p2;
    
    }

    public final void run()
    {
      android.widget.FrameLayout v1;
      int v2;
      try
      {
        v1 = (android.widget.FrameLayout)((android.widget.Button)this.c.findViewById(this.a)).getParent();
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
