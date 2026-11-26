// Decompiled from classes.dex (SourceFile: t.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class t implements android.media.MediaPlayer.OnPreparedListener {
    // Fields
    final com.gameloft.glads.s a;

    // Methods
    t(com.gameloft.glads.s p0)
    {
      super();
      this.a = p0;
    
    }

    public final void onPrepared(android.media.MediaPlayer p0)
    {
      GLAdFullScreen.access$600().start();
    }

}
