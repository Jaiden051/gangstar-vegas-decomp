// Decompiled from classes.dex (SourceFile: bi.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

final class bi implements android.media.MediaPlayer.OnPreparedListener {
    // Fields
    final android.app.ProgressDialog a;
    final com.gameloft.android.GAND.GloftGGSS.bh b;

    // Methods
    bi(com.gameloft.android.GAND.GloftGGSS.bh p0, android.app.ProgressDialog p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void onPrepared(android.media.MediaPlayer p0)
    {
      if ( this.a.isShowing() )
        this.a.dismiss();
      IGPFreemiumActivity.access$400(this.b.e.c).start();
    }

}
