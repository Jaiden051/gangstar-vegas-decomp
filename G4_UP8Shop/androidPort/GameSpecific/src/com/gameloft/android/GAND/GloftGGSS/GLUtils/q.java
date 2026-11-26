// Decompiled from classes.dex (SourceFile: q.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class q implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard a;

    // Methods
    q(com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      if ( VirtualKeyboard.b.b() != null )
        VirtualKeyboard.b.b().requestFocus();
      if ( this.a.d != null )
        this.a.d.requestFocus();
    }

}
