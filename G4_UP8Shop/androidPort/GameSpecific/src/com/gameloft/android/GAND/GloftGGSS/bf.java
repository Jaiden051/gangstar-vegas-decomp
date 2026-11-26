// Decompiled from classes.dex (SourceFile: bf.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bf implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity a;

    // Methods
    bf(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try
      {
        if ( IGPFreemiumActivity.access$2000(this.a) != null )
          IGPFreemiumActivity.access$2000(this.a).dismiss();
        IGPFreemiumActivity.access$2002(this.a, null);
        System.gc();
      }
      catch ( Exception e )
      {
      }
    }

}
