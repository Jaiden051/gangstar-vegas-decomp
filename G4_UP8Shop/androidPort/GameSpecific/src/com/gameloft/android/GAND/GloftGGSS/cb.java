// Decompiled from classes.dex (SourceFile: cb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.app.ProgressDialog;
final class cb implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.android.GAND.GloftGGSS.InGameBrowser b;

    // Methods
    cb(com.gameloft.android.GAND.GloftGGSS.InGameBrowser p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      try
      {
        InGameBrowser.access$1800(this.b);
        InGameBrowser.access$1902(this.b, ProgressDialog.show(this.b, null, this.a));
        InGameBrowser.access$1900(this.b).setCancelable(true);
      }
      catch ( Exception e )
      {
      }
    }

}
