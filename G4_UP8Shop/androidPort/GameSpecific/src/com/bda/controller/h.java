// Decompiled from classes.dex (SourceFile: h.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

final class h implements java.lang.Runnable {
    // Fields
    final com.bda.controller.StateEvent a;
    final com.bda.controller.Controller b;

    // Methods
    public h(com.bda.controller.Controller p0, com.bda.controller.StateEvent p1)
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
