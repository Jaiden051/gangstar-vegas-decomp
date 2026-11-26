// Decompiled from classes.dex (SourceFile: x.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.glads;

import android.graphics.Color;
import android.graphics.PorterDuff;
final class x implements android.view.View.OnTouchListener {
    // Fields
    final com.gameloft.glads.s a;

    // Methods
    x(com.gameloft.glads.s p0)
    {
      super();
      this.a = p0;
    
    }

    public final boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      boolean v3 = false;
      float v4 = 0.0f;
      float v5 = 0.0f;
      int _sw_1 = 0;
      int _pc = 0;
      _sm:
      while ( true )
      {
        switch ( _pc )
        {
          case 0:
            v3 = true;
            v4 = p1.getX();
            v5 = p1.getY();
            _sw_1 = (p1.getAction());
            if ( (_sw_1 == (0)) ) { _pc = 1; continue _sm; }
            if ( (_sw_1 == (1)) ) { _pc = 2; continue _sm; }
            if ( (_sw_1 == (2)) ) { _pc = 3; continue _sm; }
            _pc = 7;
            continue _sm;
          case 1:
            _pc = 4;
            continue _sm;
          case 2:
            if ( v4 < 0.0f || v4 > (float)p0.getWidth() || v5 < 0.0f || v5 > (float)p0.getHeight() )
            { _pc = 5; continue _sm; }
            GLAdFullScreen.access$502(false);
            GLAdFullScreen.access$602(null);
            GLAdFullScreen.access$700().removeAllViews();
            GLAdFullScreen.access$800().removeView(GLAdFullScreen.access$700());
            GLAdFullScreen.access$702(null);
            GLAdFullScreen.access$400().loadUrl("javascript:" + this.a.b + "()");
            _pc = 8;
            continue _sm;
          case 3:
            if ( v4 >= 0.0f && v4 <= (float)p0.getWidth() && v5 >= 0.0f && v5 <= (float)p0.getHeight() ) { _pc = 4; continue _sm; } else { _pc = 5; continue _sm; }
          case 4:
            ((android.widget.ImageButton)p0).setColorFilter(Color.argb(100, 0, 0, 0), PorterDuff.Mode.SRC_ATOP);
            _pc = 6;
            continue _sm;
          case 5:
            ((android.widget.ImageButton)p0).setColorFilter(Color.argb(0, 0, 0, 0), PorterDuff.Mode.SRC_ATOP);
            _pc = 6;
            continue _sm;
          case 6:
            _pc = 8;
            continue _sm;
          case 7:
            v3 = false;
            _pc = 8;
            continue _sm;
          case 8:
            return v3;
        }
      }
}

}
