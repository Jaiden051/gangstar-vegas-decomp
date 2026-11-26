// Decompiled from classes.dex (SourceFile: q.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class q implements android.view.View.OnTouchListener {
    // Methods
    q()
    {
      super();
    }

    public final boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      if ( System.currentTimeMillis() - GLAdFullScreen.access$1300() < 1000 )
        return true;
      GLAdFullScreen.access$1302(0);
      return false;
    }

}
