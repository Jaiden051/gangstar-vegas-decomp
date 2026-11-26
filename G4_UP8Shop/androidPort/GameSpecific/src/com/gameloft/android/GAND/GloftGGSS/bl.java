// Decompiled from classes.dex (SourceFile: bl.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bl implements android.view.View.OnKeyListener {
    // Fields
    final com.gameloft.android.GAND.GloftGGSS.bh a;

    // Methods
    bl(com.gameloft.android.GAND.GloftGGSS.bh p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean onKey(android.view.View p0, int p1, android.view.KeyEvent p2)
    {
      boolean v4;
      v4 = false;
      if ( p1 == 4 )
      {
        IGPFreemiumActivity.access$302(this.a.e.c, false);
        this.a.e.c.setContentView(IGPFreemiumActivity.access$200(this.a.e.c));
        IGPFreemiumActivity.access$400(this.a.e.c).stopPlayback();
        IGPFreemiumActivity.access$402(this.a.e.c, null);
        IGPFreemiumActivity.access$100(this.a.e.c).loadUrl("javascript:" + this.a.b + "()");
        return true;
      }
      return v4;
    }

}
