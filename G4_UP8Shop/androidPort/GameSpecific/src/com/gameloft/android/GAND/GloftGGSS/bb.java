// Decompiled from classes.dex (SourceFile: bb.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bb implements java.lang.Runnable {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.ba a;

    // Methods
    bb(com.gameloft.android.GAND.GloftGGSS.ba p0)
    {
      super();
      this.a = p0;
    
    }

    public final void run()
    {
      if ( IGPFreemiumActivity.access$300(this.a.a) && IGPFreemiumActivity.access$400(this.a.a) != null )
      {
        try
        {
          IGPFreemiumActivity.access$400(this.a.a).resume();
        }
        catch ( Exception e )
        {
        }
      }
      if ( IGPFreemiumActivity.access$100(this.a.a) != null )
      {
        IGPFreemiumActivity.access$100(this.a.a).onResume();
        IGPFreemiumActivity.access$100(this.a.a).resumeTimers();
        IGPFreemiumActivity.access$100(this.a.a).loadUrl("javascript:onResume()");
      }
    }

}
