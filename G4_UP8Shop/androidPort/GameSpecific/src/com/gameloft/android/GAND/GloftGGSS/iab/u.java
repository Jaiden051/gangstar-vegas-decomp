// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS.iab;

final class u implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.iab.t a;

    // Methods
    u(com.gameloft.android.GAND.GloftGGSS.iab.t p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try
      {
        Thread.sleep(5000);
      }
      catch ( Exception e )
      {
      }
      SamsungHelper.access$500(this.a.b, this.a.a);
    }

}
