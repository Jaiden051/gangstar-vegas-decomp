// Decompiled from classes.dex (SourceFile: z.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class z implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity a;

    // Methods
    z(com.gameloft.android.GAND.GloftGGSS.iab.SamsungIAB2Activity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      this.a.a(0, true);
      this.a.finish();
    }

}
