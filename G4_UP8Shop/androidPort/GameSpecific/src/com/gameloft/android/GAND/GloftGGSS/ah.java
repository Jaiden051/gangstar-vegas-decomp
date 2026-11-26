// Decompiled from classes.dex (SourceFile: ah.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

import android.os.Looper;
import android.widget.Toast;
final class ah implements java.lang.Runnable {
    // Fields
    final java.lang.String a;

    // Methods
    ah(String p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      android.widget.Toast Text; // RETVAL
    
      Looper.prepare();
      Text = Toast.makeText(Game.az.getApplicationContext(), this.a, 1);
      Text.setGravity(17, 0, 0);
      Text.show();
      new android.os.Handler().postDelayed((Runnable)new com.gameloft.android.GAND.GloftGGSS.ai(this, Text), 2000);
      Looper.loop();
    }

}
