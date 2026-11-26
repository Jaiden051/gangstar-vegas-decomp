// Decompiled from classes.dex (SourceFile: ae.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class ae implements java.lang.Runnable {
    // Fields
    final android.app.Activity a;
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils b;

    // Methods
    ae(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Utils p0, android.app.Activity p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      this.a.finish();
    }

}
