// Decompiled from classes.dex (SourceFile: j.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.GLUtils;

final class j implements java.lang.Runnable {
    // Fields
    final int a;

    // Methods
    j(int p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      SUtils.runOnUiThread((Runnable)new com.gameloft.android.GAND.GloftGGSS.GLUtils.k(this));
    }

}
