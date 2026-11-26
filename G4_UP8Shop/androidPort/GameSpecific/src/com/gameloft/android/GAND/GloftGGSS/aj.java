// Decompiled from classes.dex (SourceFile: aj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.os.Looper;
final class aj implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final java.lang.String b;

    // Methods
    aj(String p0, String p1)
    {
      super();
      this.a = p0;
      this.b = p1;
    
    }

    public final void run()
    {
      Looper.prepare();
      new android.app.AlertDialog.Builder(Game.az).setMessage(this.a).setPositiveButton(this.b, null).show();
      Looper.loop();
    }

}
