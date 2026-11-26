// Decompiled from classes.dex (SourceFile: c.java) via IDA Pro 9.5 Dalvik Decompiler
package com.bda.controller;

final class c extends com.bda.controller.IControllerListener$Stub {
    // Fields
    final com.bda.controller.Controller a;

    // Methods
    c(com.bda.controller.Controller p0)
    {
      super();
      this.a = p0;
    
    }

    public final void a(com.bda.controller.KeyEvent p0)
    {
      Runnable v2;
      if ( p0.a() == 1 && this.a.ab != null )
      {
        v2 = (Runnable)new com.bda.controller.e(this.a, p0);
        if ( this.a.aa != null )
          this.a.aa.post(v2);
        else
          ((com.bda.controller.e)v2).run();
      }
    }

    public final void a(com.bda.controller.MotionEvent p0)
    {
      Runnable v2;
      if ( p0.a() == 1 && this.a.ab != null )
      {
        v2 = (Runnable)new com.bda.controller.f(this.a, p0);
        if ( this.a.aa != null )
          this.a.aa.post(v2);
        else
          ((com.bda.controller.f)v2).run();
      }
    }

    public final void a(com.bda.controller.StateEvent p0)
    {
      Runnable v2;
      if ( p0.a() == 1 && this.a.ab != null )
      {
        v2 = (Runnable)new com.bda.controller.h(this.a, p0);
        if ( this.a.aa != null )
          this.a.aa.post(v2);
        else
          ((com.bda.controller.h)v2).run();
      }
    }

}
