// Decompiled from classes.dex (SourceFile: at.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.util.Log;
final class at implements java.lang.Runnable {
    // Fields
    final java.lang.String a;
    final int b;
    final int c;
    final int d;
    final boolean e;
    final java.lang.String f;

    // Methods
    at(String p0, int p1, int p2, int p3, boolean p4, String p5)
    {
      super();
      this.a = p0;
      this.b = p1;
      this.c = p2;
      this.d = p3;
      this.e = p4;
      this.f = p5;
    
    }

    public final void run()
    {
      try
      {
        VASTFullScreen.access$302(new com.gameloft.glads.VASTFullScreen(this.a, this.b, this.c, this.d, this.e, this.f));
      }
      catch ( Exception v1 )
      {
        Log.e("GLAds", "Could not create vast player!" + v1.getMessage());
        VASTFullScreen.access$400();
        GLAds.setFullScreenAdState(1, false);
      }
    }

}
