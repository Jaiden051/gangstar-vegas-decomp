// Decompiled from classes.dex (SourceFile: w.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class w implements android.view.View.OnKeyListener {
    // Fields
    final com.gameloft.glads.s a;

    // Methods
    w(com.gameloft.glads.s p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean onKey(android.view.View p0, int p1, android.view.KeyEvent p2)
    {
      if ( p1 != 4 )
        return false;
      GLAdFullScreen$JSInterface.handleBackKey();
      return true;
    }

}
