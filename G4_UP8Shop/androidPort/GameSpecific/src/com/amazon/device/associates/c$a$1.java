// Decompiled from classes.dex (SourceFile: c$a$1.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class c$a$1 implements android.view.View.OnTouchListener {
    // Fields
    final com.amazon.device.associates.c$a a;

    // Methods
    c$a$1(com.amazon.device.associates.c$a p0)
    {
      super();
      this.a = p0;
    
    }

    public boolean onTouch(android.view.View p0, android.view.MotionEvent p1)
    {
      if ( p1.getAction() == 0 )
      {
        c$a.b(this.a).loadUrl("javascript:(function() {hideMessageBox();})();");
        if ( c$a.e(this.a) )
        {
          bq.d(bq.a());
          this.a.a();
        }
      }
      return false;
    }

}
