// Decompiled from classes.dex (SourceFile: e.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

final class e implements java.lang.Runnable {
    // Fields
    final com.bda.controller.KeyEvent a;
    final com.bda.controller.Controller b;

    // Methods
    public e(com.bda.controller.Controller p0, com.bda.controller.KeyEvent p1)
    {
      super();
      this.b = p0;
      this.a = p1;
    
    }

    public final void run()
    {
      if ( this.b.ab != null )
        this.b.ab.a(this.a);
    }

}
