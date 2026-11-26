// Decompiled from classes.dex (SourceFile: MRAIDView$3.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads.mraid;

class MRAIDView$3 implements android.view.View.OnTouchListener {
    // Fields
    final com.gameloft.glads.mraid.MRAIDView a;

    // Methods
    MRAIDView$3(com.gameloft.glads.mraid.MRAIDView p0)
    {
      super();
      this.a = p0;
    
    }

    public boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      switch ( p1.getAction() )
      {
        case 0:
        case 1:
          if ( !p0.hasFocus() )
            p0.requestFocus();
          break;
        default:
          return false;
      }
      return false;
    }

}
