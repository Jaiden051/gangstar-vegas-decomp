// Decompiled from classes.dex (SourceFile: i.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class i implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.GLUtils.h a;

    // Methods
    i(com.gameloft.android.GAND.GloftGGSS.GLUtils.h p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      this.a.a.getWindow().getDecorView().setSystemUiVisibility(0);
      this.a.a.getWindow().getDecorView().setSystemUiVisibility(1);
    }

}
