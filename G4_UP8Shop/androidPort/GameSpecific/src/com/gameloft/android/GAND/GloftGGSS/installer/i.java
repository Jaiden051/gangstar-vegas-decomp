// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class i implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller b;

    // Methods
    i(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      android.widget.TextView v1;
      try
      {
        v1 = (android.widget.TextView)this.b.findViewById(2131427408);
        if ( v1 != null )
        {
          v1.setVisibility(0);
          v1.setText(this.a);
        }
      }
      catch ( Exception e )
      {
      }
    }

}
