// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class c implements java.lang.Runnable {
    // Fields
    final android.os.Bundle a;
    final com.gameloft.android.GAND.GloftGGSS.iab.IABAsyncTask b;

    // Methods
    c(com.gameloft.android.GAND.GloftGGSS.iab.IABAsyncTask p0, android.os.Bundle p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      IABAsyncTask.access$100(this.b, Integer.valueOf(this.b.a(this.a).intValue()));
    }

}
