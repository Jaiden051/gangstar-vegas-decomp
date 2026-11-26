// Decompiled from classes.dex (SourceFile: g.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

final class g implements android.view.View.OnTouchListener {
    // Methods
    g()
    {
      super();
    }

    public final boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      return p1.getAction() == 2;
    }

}
