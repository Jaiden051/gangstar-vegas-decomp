// Decompiled from classes.dex (SourceFile: v.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class v implements android.media.MediaPlayer.OnCompletionListener {
    // Fields
    final com.gameloft.glads.s a;

    // Methods
    v(com.gameloft.glads.s p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onCompletion(android.media.MediaPlayer p0)
    {
      GLAdFullScreen.access$502(false);
      GLAdFullScreen.access$602(null);
      GLAdFullScreen.access$700().removeAllViews();
      GLAdFullScreen.access$800().removeView(GLAdFullScreen.access$700());
      GLAdFullScreen.access$702(null);
      GLAdFullScreen.access$400().loadUrl("javascript:" + this.a.c + "()");
    }

}
