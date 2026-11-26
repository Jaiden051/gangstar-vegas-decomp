// Decompiled from classes.dex (SourceFile: be.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.app.ProgressDialog;
final class be implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity b;

    // Methods
    be(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      try
      {
        IGPFreemiumActivity.access$1200(this.b);
        IGPFreemiumActivity.access$2002(this.b, ProgressDialog.show(this.b, null, this.a));
        IGPFreemiumActivity.access$2000(this.b).setCancelable(true);
      }
      catch ( Exception e )
      {
      }
    }

}
