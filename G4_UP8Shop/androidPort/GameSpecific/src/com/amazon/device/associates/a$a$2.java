// Decompiled from classes.dex (SourceFile: a$a$2.java) via IDA Pro 9.5 Dalvik Decompiler
package com.amazon.device.associates;

class a$a$2 implements android.view.animation.Animation.AnimationListener {
    // Fields
    final com.amazon.device.associates.a$a a;

    // Methods
    a$a$2(com.amazon.device.associates.a$a p0)
    {
      super();
      this.a = p0;
    
    }

    public void onAnimationEnd(android.view.animation.Animation p0)
    {
      a$a.a(this.a, false);
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
