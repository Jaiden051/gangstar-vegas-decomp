// Decompiled from classes.dex (SourceFile: u.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class u implements android.media.MediaPlayer.OnErrorListener {
    // Fields
    final com.gameloft.glads.s a;

    // Methods
    u(com.gameloft.glads.s p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean onError(android.media.MediaPlayer p0, int p1, int p2)
    {
      GLAdFullScreen.access$502(false);
      GLAdFullScreen.access$602(null);
      GLAdFullScreen.access$700().removeAllViews();
      GLAdFullScreen.access$800().removeView(GLAdFullScreen.access$700());
      GLAdFullScreen.access$702(null);
      GLAdFullScreen.access$400().loadUrl("javascript:" + this.a.b + "()");
      return true;
    }

}
