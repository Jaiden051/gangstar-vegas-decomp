// Decompiled from classes.dex (SourceFile: az.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class az implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity a;

    // Methods
    az(com.gameloft.android.GAND.GloftGGSS.IGPFreemiumActivity p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      try
      {
        IGPFreemiumActivity.access$200(this.a).removeView(IGPFreemiumActivity.access$100(this.a));
        IGPFreemiumActivity.access$100(this.a).destroy();
        IGPFreemiumActivity.access$100(this.a).destroyDrawingCache();
        IGPFreemiumActivity.access$102(this.a, null);
      }
      catch ( Exception e )
      {
      }
    }

}
