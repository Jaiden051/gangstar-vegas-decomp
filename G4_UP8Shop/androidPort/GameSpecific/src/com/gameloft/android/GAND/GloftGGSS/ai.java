// Decompiled from classes.dex (SourceFile: ai.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class ai implements java.lang.Runnable {
    // Fields
    final android.widget.Toast a;
    final com.gameloft.android.GAND.GloftGGSS.ah b;

    // Methods
    ai(com.gameloft.android.GAND.GloftGGSS.ah p0, android.widget.Toast p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      Game.ac = false;
      this.a.cancel();
    }

}
