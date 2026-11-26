// Decompiled from classes.dex (SourceFile: c$a$5.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class c$a$5 implements android.view.animation.Animation.AnimationListener {
    // Fields
    final com.amazon.device.associates.c$a a;

    // Methods
    c$a$5(com.amazon.device.associates.c$a p0)
    {
      super();
      this.a = p0;
    
    }

    public void onAnimationEnd(android.view.animation.Animation p0)
    {
      c$a.a(this.a, false);
    }

    public void onAnimationRepeat(android.view.animation.Animation p0)
    {
      ;
    }

    public void onAnimationStart(android.view.animation.Animation p0)
    {
      ;
    }

}
