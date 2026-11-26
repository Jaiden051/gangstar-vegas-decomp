// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.installer;

final class c implements android.view.View.OnClickListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller a;

    // Methods
    c(com.gameloft.android.GAND.GloftGGSS.installer.GameInstaller p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onClick(android.view.View p0)
    {
      int Id;
      try
      {
        Id = ((android.widget.Button)p0).getId();
      }
      catch ( Exception e )
      {
        Id = ((android.widget.ImageButton)p0).getId();
      }
      this.a.b(Id);
    }

}
