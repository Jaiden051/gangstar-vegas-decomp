// Decompiled from classes.dex (SourceFile: a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class a$1 implements android.view.View.OnTouchListener {
    // Fields
    final com.amazon.device.associates.a a;

    // Methods
    a$1(com.amazon.device.associates.a p0)
    {
      super();
      this.a = p0;
    
    }

    public boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      if ( a.a(this.a) == null || a.a(this.a).trim().equals("") )
        return false;
      if ( p1.getAction() == 0 )
        bq.d(a.a(this.a));
      return true;
    }

}
