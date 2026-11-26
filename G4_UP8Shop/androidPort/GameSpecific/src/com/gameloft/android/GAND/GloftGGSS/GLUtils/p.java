// Decompiled from classes.dex (SourceFile: p.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class p implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard a;

    // Methods
    p(com.gameloft.android.GAND.GloftGGSS.GLUtils.VirtualKeyboard p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      if ( this.a.d != null )
        this.a.d.requestFocus();
    }

}
