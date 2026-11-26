// Decompiled from classes.dex (SourceFile: bd.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.widget.Toast;
final class bd implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity b;

    // Methods
    bd(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0, String p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      Toast.makeText(this.b, this.a, 0).show();
    }

}
