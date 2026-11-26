// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class h implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller a;

    // Methods
    h(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      android.widget.ProgressBar v1;
      try
      {
        v1 = (android.widget.ProgressBar)this.a.findViewById(2131427407);
        if ( v1 != null )
        {
          if ( this.a.aq == 20 || this.a.aq == 41 )
            v1.setProgress(this.a.ba);
          else
            v1.setProgress((int)(this.a.k / 1024 + this.a.ba));
        }
      }
      catch ( Exception e )
      {
      }
    }

}
