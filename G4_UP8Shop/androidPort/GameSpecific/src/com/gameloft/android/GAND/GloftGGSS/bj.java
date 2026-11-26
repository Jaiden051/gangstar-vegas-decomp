// Decompiled from classes.dex (SourceFile: bj.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bj implements android.media.MediaPlayer.OnErrorListener {
    // Fields
    final android.app.ProgressDialog a;
    final com.gameloft.android.GAND.GloftGGSS.bh b;

    // Methods
    bj(com.gameloft.android.GAND.GloftGGSS.bh p0, android.app.ProgressDialog p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final boolean onError(android.media.MediaPlayer p0, int p1, int p2)
    {
      if ( this.a.isShowing() )
        this.a.dismiss();
      IGPFreemiumActivity.access$302(this.b.e.c, false);
      this.b.e.c.setContentView(IGPFreemiumActivity.access$200(this.b.e.c));
      IGPFreemiumActivity.access$402(this.b.e.c, null);
      IGPFreemiumActivity.access$100(this.b.e.c).loadUrl("javascript:" + this.b.b + "()");
      return true;
    }

}
